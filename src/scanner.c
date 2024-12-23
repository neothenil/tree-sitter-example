#include "tree_sitter/parser.h"
#include "tree_sitter/alloc.h"
#include "tree_sitter/array.h"

#include <ctype.h>


enum TokenType {
  HEADER,
  ERROR
};

void *tree_sitter_example_external_scanner_create(void) {
  return NULL;
}

void tree_sitter_example_external_scanner_destroy(void *payload) {
  return;
}

unsigned tree_sitter_example_external_scanner_serialize(
  void *payload,
  char *buffer
) {
  return 0;
}

void tree_sitter_example_external_scanner_deserialize(
  void *payload,
  const char *buffer,
  unsigned length
) {
  return;
}

// The state machine implementation for regex "message.*" and "\s*"

#define END ((uint32_t)-1)
#define FAIL ((uint32_t)-2)

static uint32_t message_line_state;
static uint32_t empty_line_state;

void message_line_reset() {
  message_line_state = 0;
}

void message_line_feed(int32_t feed) {
  switch (message_line_state) {
    case 0: {
      if (feed == 'm')
        message_line_state = 1;
      else
        message_line_state = FAIL;
      break;
    }
    case 1: {
      if (feed == 'e')
        message_line_state = 2;
      else
        message_line_state = FAIL;
      break;
    }
    case 2: {
      if (feed == 's')
        message_line_state = 3;
      else
        message_line_state = FAIL;
      break;
    }
    case 3: {
      if (feed == 's')
        message_line_state = 4;
      else
        message_line_state = FAIL;
      break;
    }
    case 4: {
      if (feed == 'a')
        message_line_state = 5;
      else
        message_line_state = FAIL;
      break;
    }
    case 5: {
      if (feed == 'g')
        message_line_state = 6;
      else
        message_line_state = FAIL;
      break;
    }
    case 6: {
      if (feed == 'e')
        message_line_state = 7;
      else
        message_line_state = FAIL;
      break;
    }
    case 7: {
      if (feed == ':')
        message_line_state = END;
      else
        message_line_state = FAIL;
      break;
    }
    case END: {
      message_line_state = END;
      break;
    }
    case FAIL: {
      message_line_state = FAIL;
      break;
    }
    default: {
      message_line_state = FAIL;
      break;
    }
  }
}

void empty_line_reset() {
  empty_line_state = END;
}

void empty_line_feed(int32_t feed) {
  switch (empty_line_state) {
    case END: {
      if (isspace(feed))
        empty_line_state = END;
      else
        empty_line_state = FAIL;
      break;
    }
    case FAIL: {
      empty_line_state = FAIL;
      break;
    }
    default: {
      empty_line_state = FAIL;
      break;
    }
  }
}

bool tree_sitter_example_external_scanner_scan(
  void *payload,
  TSLexer *lexer,
  const bool *valid_symbols
) {
  if (valid_symbols[ERROR]) {
    return false;
  }
  if (valid_symbols[HEADER]) {
    message_line_reset();
    empty_line_reset();
    bool message_block_end = false;
    uint32_t line_count = 0;
    while (lexer->lookahead) {
      if (lexer->lookahead == '\n') {
        ++line_count;
        if (line_count == 1) {
          // check whether the first line is message block
          if (message_line_state == END) {
            lexer->advance(lexer, false);
          } else {
            // the first line is title
            lexer->advance(lexer, false);
            lexer->mark_end(lexer);
            lexer->result_symbol = HEADER;
            return true;
          }
        } else {
          if (message_block_end) {
            lexer->advance(lexer, false);
            lexer->mark_end(lexer);
            lexer->result_symbol = HEADER;
            return true;
          }
          // check whether this line is empty
          if (empty_line_state == END) {
            message_block_end = true;
          }
          lexer->advance(lexer, false);
        }
        message_line_reset();
        empty_line_reset();
      } else {
        message_line_feed(lexer->lookahead);
        empty_line_feed(lexer->lookahead);
        lexer->advance(lexer, false);
      }
    }
  }
  return false;
}
