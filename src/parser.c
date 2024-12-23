#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 60
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 37
#define ALIAS_COUNT 3
#define TOKEN_COUNT 22
#define EXTERNAL_TOKEN_COUNT 2
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 6

enum ts_symbol_identifiers {
  anon_sym_0 = 1,
  anon_sym_like = 2,
  anon_sym_but = 3,
  anon_sym_LPAREN = 4,
  anon_sym_RPAREN = 5,
  anon_sym_COLON = 6,
  anon_sym_POUND = 7,
  sym_cell_parameters = 8,
  anon_sym_surface = 9,
  anon_sym_data = 10,
  anon_sym_otherdata = 11,
  sym_delimiter = 12,
  sym_inline_comment = 13,
  sym_line_continuation = 14,
  sym_comment = 15,
  aux_sym_endline_token1 = 16,
  sym_signed_integer = 17,
  sym_positive_integer = 18,
  sym_signed_float = 19,
  sym_header = 20,
  sym_error = 21,
  sym_source_file = 22,
  sym_cell_card_block = 23,
  sym_cell_card = 24,
  sym_cell_card_void = 25,
  sym_cell_card_mat = 26,
  sym_cell_card_like = 27,
  sym_cell_geometry = 28,
  sym_union = 29,
  sym_intersect = 30,
  sym_complement = 31,
  sym_surface_card_block = 32,
  sym_data_card_block = 33,
  sym_other_card_block = 34,
  sym_endline = 35,
  aux_sym_cell_card_block_repeat1 = 36,
  alias_sym_half_space = 37,
  alias_sym_mat_id = 38,
  alias_sym_other_cell_id = 39,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_0] = "0",
  [anon_sym_like] = "like",
  [anon_sym_but] = "but",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_COLON] = ":",
  [anon_sym_POUND] = "#",
  [sym_cell_parameters] = "cell_parameters",
  [anon_sym_surface] = "surface",
  [anon_sym_data] = "data",
  [anon_sym_otherdata] = "other data",
  [sym_delimiter] = "delimiter",
  [sym_inline_comment] = "inline_comment",
  [sym_line_continuation] = "line_continuation",
  [sym_comment] = "comment",
  [aux_sym_endline_token1] = "endline_token1",
  [sym_signed_integer] = "mat_dens",
  [sym_positive_integer] = "cell_id",
  [sym_signed_float] = "mat_dens",
  [sym_header] = "header",
  [sym_error] = "error",
  [sym_source_file] = "source_file",
  [sym_cell_card_block] = "cell_card_block",
  [sym_cell_card] = "cell_card",
  [sym_cell_card_void] = "cell_card_void",
  [sym_cell_card_mat] = "cell_card_mat",
  [sym_cell_card_like] = "cell_card_like",
  [sym_cell_geometry] = "cell_geometry",
  [sym_union] = "union",
  [sym_intersect] = "intersect",
  [sym_complement] = "complement",
  [sym_surface_card_block] = "surface_card_block",
  [sym_data_card_block] = "data_card_block",
  [sym_other_card_block] = "other_card_block",
  [sym_endline] = "endline",
  [aux_sym_cell_card_block_repeat1] = "cell_card_block_repeat1",
  [alias_sym_half_space] = "half_space",
  [alias_sym_mat_id] = "mat_id",
  [alias_sym_other_cell_id] = "other_cell_id",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_0] = anon_sym_0,
  [anon_sym_like] = anon_sym_like,
  [anon_sym_but] = anon_sym_but,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_POUND] = anon_sym_POUND,
  [sym_cell_parameters] = sym_cell_parameters,
  [anon_sym_surface] = anon_sym_surface,
  [anon_sym_data] = anon_sym_data,
  [anon_sym_otherdata] = anon_sym_otherdata,
  [sym_delimiter] = sym_delimiter,
  [sym_inline_comment] = sym_inline_comment,
  [sym_line_continuation] = sym_line_continuation,
  [sym_comment] = sym_comment,
  [aux_sym_endline_token1] = aux_sym_endline_token1,
  [sym_signed_integer] = sym_signed_integer,
  [sym_positive_integer] = sym_positive_integer,
  [sym_signed_float] = sym_signed_integer,
  [sym_header] = sym_header,
  [sym_error] = sym_error,
  [sym_source_file] = sym_source_file,
  [sym_cell_card_block] = sym_cell_card_block,
  [sym_cell_card] = sym_cell_card,
  [sym_cell_card_void] = sym_cell_card_void,
  [sym_cell_card_mat] = sym_cell_card_mat,
  [sym_cell_card_like] = sym_cell_card_like,
  [sym_cell_geometry] = sym_cell_geometry,
  [sym_union] = sym_union,
  [sym_intersect] = sym_intersect,
  [sym_complement] = sym_complement,
  [sym_surface_card_block] = sym_surface_card_block,
  [sym_data_card_block] = sym_data_card_block,
  [sym_other_card_block] = sym_other_card_block,
  [sym_endline] = sym_endline,
  [aux_sym_cell_card_block_repeat1] = aux_sym_cell_card_block_repeat1,
  [alias_sym_half_space] = alias_sym_half_space,
  [alias_sym_mat_id] = alias_sym_mat_id,
  [alias_sym_other_cell_id] = alias_sym_other_cell_id,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_0] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_like] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_but] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [sym_cell_parameters] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_surface] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_data] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_otherdata] = {
    .visible = true,
    .named = false,
  },
  [sym_delimiter] = {
    .visible = true,
    .named = true,
  },
  [sym_inline_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_line_continuation] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_endline_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_signed_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_positive_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_signed_float] = {
    .visible = true,
    .named = true,
  },
  [sym_header] = {
    .visible = true,
    .named = true,
  },
  [sym_error] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_cell_card_block] = {
    .visible = true,
    .named = true,
  },
  [sym_cell_card] = {
    .visible = true,
    .named = true,
  },
  [sym_cell_card_void] = {
    .visible = true,
    .named = true,
  },
  [sym_cell_card_mat] = {
    .visible = true,
    .named = true,
  },
  [sym_cell_card_like] = {
    .visible = true,
    .named = true,
  },
  [sym_cell_geometry] = {
    .visible = true,
    .named = true,
  },
  [sym_union] = {
    .visible = true,
    .named = true,
  },
  [sym_intersect] = {
    .visible = true,
    .named = true,
  },
  [sym_complement] = {
    .visible = true,
    .named = true,
  },
  [sym_surface_card_block] = {
    .visible = true,
    .named = true,
  },
  [sym_data_card_block] = {
    .visible = true,
    .named = true,
  },
  [sym_other_card_block] = {
    .visible = true,
    .named = true,
  },
  [sym_endline] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_cell_card_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_half_space] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_mat_id] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_other_cell_id] = {
    .visible = true,
    .named = true,
  },
};

enum ts_field_identifiers {
  field_left = 1,
  field_right = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_left] = "left",
  [field_right] = "right",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [2] = {.index = 0, .length = 2},
  [5] = {.index = 2, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_left, 0},
    {field_right, 1},
  [2] =
    {field_left, 0},
    {field_right, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = alias_sym_half_space,
  },
  [3] = {
    [2] = alias_sym_other_cell_id,
  },
  [4] = {
    [1] = alias_sym_mat_id,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 4,
  [8] = 8,
  [9] = 8,
  [10] = 3,
  [11] = 6,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 19,
  [21] = 14,
  [22] = 15,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 25,
  [29] = 23,
  [30] = 27,
  [31] = 24,
  [32] = 26,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 36,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(56);
      ADVANCE_MAP(
        '\n', 68,
        '\r', 1,
        '#', 63,
        '$', 3,
        '(', 60,
        ')', 61,
        '0', 57,
        ':', 62,
        'b', 46,
        'c', 21,
        'd', 16,
        'l', 29,
        'o', 40,
        's', 45,
        '\t', 1,
        0x0b, 1,
        '\f', 1,
        ' ', 1,
      );
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(74);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '\n', 68,
        '\r', 1,
        '#', 63,
        '$', 3,
        '&', 4,
        '(', 60,
        ')', 61,
        '0', 57,
        ':', 62,
        'b', 46,
        'c', 21,
        'd', 16,
        'l', 29,
        'o', 40,
        's', 45,
        '\t', 1,
        0x0b, 1,
        '\f', 1,
        ' ', 1,
      );
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(74);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(68);
      if (lookahead == '$') ADVANCE(3);
      if (lookahead == '&') ADVANCE(4);
      if (lookahead == 'c') ADVANCE(52);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(2);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(74);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(69);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(70);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(71);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(5);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(71);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 7:
      ADVANCE_MAP(
        '\n', 72,
        '\r', 7,
        '#', 63,
        '$', 3,
        '&', 4,
        '(', 60,
        ')', 61,
        '.', 53,
        ':', 62,
        'c', 21,
        '+', 10,
        '-', 10,
        '\t', 7,
        0x0b, 7,
        '\f', 7,
        ' ', 7,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(73);
      END_STATE();
    case 8:
      ADVANCE_MAP(
        '\n', 72,
        '\r', 7,
        '#', 63,
        '$', 3,
        '(', 60,
        ')', 61,
        '.', 53,
        ':', 62,
        'c', 21,
        '+', 10,
        '-', 10,
        '\t', 7,
        0x0b, 7,
        '\f', 7,
        ' ', 7,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(73);
      END_STATE();
    case 9:
      if (lookahead == ' ') ADVANCE(20);
      END_STATE();
    case 10:
      if (lookahead == '.') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(73);
      END_STATE();
    case 11:
      if (lookahead == '_') ADVANCE(34);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(66);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(19);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(33);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(67);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(42);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(38);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(44);
      END_STATE();
    case 19:
      if (lookahead == 'c') ADVANCE(23);
      END_STATE();
    case 20:
      if (lookahead == 'd') ADVANCE(18);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(32);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(5);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(65);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(36);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 27:
      if (lookahead == 'f') ADVANCE(13);
      END_STATE();
    case 28:
      if (lookahead == 'h') ADVANCE(24);
      END_STATE();
    case 29:
      if (lookahead == 'i') ADVANCE(30);
      END_STATE();
    case 30:
      if (lookahead == 'k') ADVANCE(22);
      END_STATE();
    case 31:
      if (lookahead == 'l') ADVANCE(11);
      END_STATE();
    case 32:
      if (lookahead == 'l') ADVANCE(31);
      END_STATE();
    case 33:
      if (lookahead == 'm') ADVANCE(26);
      END_STATE();
    case 34:
      if (lookahead == 'p') ADVANCE(17);
      END_STATE();
    case 35:
      if (lookahead == 'r') ADVANCE(27);
      END_STATE();
    case 36:
      if (lookahead == 'r') ADVANCE(9);
      END_STATE();
    case 37:
      if (lookahead == 'r') ADVANCE(39);
      END_STATE();
    case 38:
      if (lookahead == 'r') ADVANCE(14);
      END_STATE();
    case 39:
      if (lookahead == 's') ADVANCE(64);
      END_STATE();
    case 40:
      if (lookahead == 't') ADVANCE(28);
      END_STATE();
    case 41:
      if (lookahead == 't') ADVANCE(59);
      END_STATE();
    case 42:
      if (lookahead == 't') ADVANCE(12);
      END_STATE();
    case 43:
      if (lookahead == 't') ADVANCE(25);
      END_STATE();
    case 44:
      if (lookahead == 't') ADVANCE(15);
      END_STATE();
    case 45:
      if (lookahead == 'u') ADVANCE(35);
      END_STATE();
    case 46:
      if (lookahead == 'u') ADVANCE(41);
      END_STATE();
    case 47:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(70);
      END_STATE();
    case 48:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(47);
      END_STATE();
    case 49:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(48);
      END_STATE();
    case 50:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(49);
      END_STATE();
    case 51:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(76);
      END_STATE();
    case 52:
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(5);
      END_STATE();
    case 53:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(75);
      END_STATE();
    case 54:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(76);
      END_STATE();
    case 55:
      if (eof) ADVANCE(56);
      if (lookahead == '\n') ADVANCE(68);
      if (lookahead == '$') ADVANCE(3);
      if (lookahead == 'c') ADVANCE(52);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(2);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(74);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_0);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_like);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_but);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_cell_parameters);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_surface);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_data);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_otherdata);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_delimiter);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(50);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_inline_comment);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_line_continuation);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_endline_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(50);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_signed_integer);
      if (lookahead == '.') ADVANCE(75);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(73);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_positive_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(74);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_signed_float);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(75);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_signed_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(76);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 0, .external_lex_state = 2},
  [2] = {.lex_state = 8},
  [3] = {.lex_state = 8},
  [4] = {.lex_state = 8},
  [5] = {.lex_state = 8},
  [6] = {.lex_state = 8},
  [7] = {.lex_state = 8},
  [8] = {.lex_state = 8},
  [9] = {.lex_state = 8},
  [10] = {.lex_state = 8},
  [11] = {.lex_state = 8},
  [12] = {.lex_state = 55},
  [13] = {.lex_state = 55},
  [14] = {.lex_state = 8},
  [15] = {.lex_state = 8},
  [16] = {.lex_state = 8},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 8},
  [19] = {.lex_state = 8},
  [20] = {.lex_state = 8},
  [21] = {.lex_state = 8},
  [22] = {.lex_state = 8},
  [23] = {.lex_state = 8},
  [24] = {.lex_state = 8},
  [25] = {.lex_state = 8},
  [26] = {.lex_state = 8},
  [27] = {.lex_state = 8},
  [28] = {.lex_state = 8},
  [29] = {.lex_state = 8},
  [30] = {.lex_state = 8},
  [31] = {.lex_state = 8},
  [32] = {.lex_state = 8},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 55},
  [35] = {.lex_state = 8},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 8},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 55},
  [40] = {.lex_state = 8},
  [41] = {.lex_state = 55},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 8},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 8},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 8},
  [48] = {.lex_state = 55},
  [49] = {.lex_state = 55},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 8},
  [52] = {.lex_state = 8},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 55},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 55},
  [59] = {.lex_state = 8},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_0] = ACTIONS(1),
    [anon_sym_like] = ACTIONS(1),
    [anon_sym_but] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [sym_cell_parameters] = ACTIONS(1),
    [anon_sym_surface] = ACTIONS(1),
    [anon_sym_data] = ACTIONS(1),
    [anon_sym_otherdata] = ACTIONS(1),
    [sym_delimiter] = ACTIONS(1),
    [sym_inline_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [aux_sym_endline_token1] = ACTIONS(1),
    [sym_positive_integer] = ACTIONS(1),
    [sym_header] = ACTIONS(1),
    [sym_error] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(53),
    [sym_inline_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_header] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_COLON,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(13), 1,
      sym_cell_parameters,
    ACTIONS(15), 1,
      sym_inline_comment,
    ACTIONS(17), 1,
      aux_sym_endline_token1,
    ACTIONS(19), 1,
      sym_signed_integer,
    STATE(3), 1,
      sym_cell_geometry,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    STATE(23), 3,
      sym_union,
      sym_intersect,
      sym_complement,
  [34] = 5,
    ACTIONS(23), 1,
      aux_sym_endline_token1,
    STATE(3), 1,
      sym_cell_geometry,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    STATE(23), 3,
      sym_union,
      sym_intersect,
      sym_complement,
    ACTIONS(21), 6,
      anon_sym_LPAREN,
      anon_sym_COLON,
      anon_sym_POUND,
      sym_cell_parameters,
      sym_inline_comment,
      sym_signed_integer,
  [58] = 8,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_signed_integer,
    ACTIONS(27), 1,
      aux_sym_endline_token1,
    STATE(3), 1,
      sym_cell_geometry,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_COLON,
      sym_cell_parameters,
      sym_inline_comment,
    STATE(23), 3,
      sym_union,
      sym_intersect,
      sym_complement,
  [88] = 10,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_COLON,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_signed_integer,
    ACTIONS(29), 1,
      sym_cell_parameters,
    ACTIONS(31), 1,
      sym_inline_comment,
    ACTIONS(33), 1,
      aux_sym_endline_token1,
    STATE(3), 1,
      sym_cell_geometry,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    STATE(23), 3,
      sym_union,
      sym_intersect,
      sym_complement,
  [122] = 8,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_RPAREN,
    ACTIONS(39), 1,
      anon_sym_COLON,
    ACTIONS(41), 1,
      anon_sym_POUND,
    ACTIONS(43), 1,
      sym_signed_integer,
    STATE(10), 1,
      sym_cell_geometry,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    STATE(29), 3,
      sym_union,
      sym_intersect,
      sym_complement,
  [151] = 7,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(41), 1,
      anon_sym_POUND,
    ACTIONS(43), 1,
      sym_signed_integer,
    STATE(10), 1,
      sym_cell_geometry,
    ACTIONS(25), 2,
      anon_sym_RPAREN,
      anon_sym_COLON,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    STATE(29), 3,
      sym_union,
      sym_intersect,
      sym_complement,
  [178] = 8,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      anon_sym_COLON,
    ACTIONS(41), 1,
      anon_sym_POUND,
    ACTIONS(43), 1,
      sym_signed_integer,
    ACTIONS(45), 1,
      anon_sym_RPAREN,
    STATE(10), 1,
      sym_cell_geometry,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    STATE(29), 3,
      sym_union,
      sym_intersect,
      sym_complement,
  [207] = 8,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      anon_sym_COLON,
    ACTIONS(41), 1,
      anon_sym_POUND,
    ACTIONS(43), 1,
      sym_signed_integer,
    ACTIONS(47), 1,
      anon_sym_RPAREN,
    STATE(10), 1,
      sym_cell_geometry,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    STATE(29), 3,
      sym_union,
      sym_intersect,
      sym_complement,
  [236] = 4,
    STATE(10), 1,
      sym_cell_geometry,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    STATE(29), 3,
      sym_union,
      sym_intersect,
      sym_complement,
    ACTIONS(21), 5,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_POUND,
      sym_signed_integer,
  [257] = 8,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      anon_sym_COLON,
    ACTIONS(41), 1,
      anon_sym_POUND,
    ACTIONS(43), 1,
      sym_signed_integer,
    ACTIONS(49), 1,
      anon_sym_RPAREN,
    STATE(10), 1,
      sym_cell_geometry,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    STATE(29), 3,
      sym_union,
      sym_intersect,
      sym_complement,
  [286] = 5,
    ACTIONS(51), 1,
      sym_delimiter,
    ACTIONS(53), 1,
      sym_positive_integer,
    STATE(13), 2,
      sym_cell_card,
      aux_sym_cell_card_block_repeat1,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    STATE(35), 3,
      sym_cell_card_void,
      sym_cell_card_mat,
      sym_cell_card_like,
  [307] = 5,
    ACTIONS(55), 1,
      sym_delimiter,
    ACTIONS(57), 1,
      sym_positive_integer,
    STATE(13), 2,
      sym_cell_card,
      aux_sym_cell_card_block_repeat1,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    STATE(35), 3,
      sym_cell_card_void,
      sym_cell_card_mat,
      sym_cell_card_like,
  [328] = 6,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(41), 1,
      anon_sym_POUND,
    ACTIONS(43), 1,
      sym_signed_integer,
    STATE(6), 1,
      sym_cell_geometry,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    STATE(29), 3,
      sym_union,
      sym_intersect,
      sym_complement,
  [351] = 6,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(41), 1,
      anon_sym_POUND,
    ACTIONS(43), 1,
      sym_signed_integer,
    STATE(9), 1,
      sym_cell_geometry,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    STATE(29), 3,
      sym_union,
      sym_intersect,
      sym_complement,
  [374] = 6,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_signed_integer,
    STATE(2), 1,
      sym_cell_geometry,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    STATE(23), 3,
      sym_union,
      sym_intersect,
      sym_complement,
  [397] = 5,
    ACTIONS(53), 1,
      sym_positive_integer,
    STATE(58), 1,
      sym_cell_card_block,
    STATE(12), 2,
      sym_cell_card,
      aux_sym_cell_card_block_repeat1,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    STATE(35), 3,
      sym_cell_card_void,
      sym_cell_card_mat,
      sym_cell_card_like,
  [418] = 6,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_signed_integer,
    STATE(5), 1,
      sym_cell_geometry,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    STATE(23), 3,
      sym_union,
      sym_intersect,
      sym_complement,
  [441] = 6,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_signed_integer,
    STATE(4), 1,
      sym_cell_geometry,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    STATE(23), 3,
      sym_union,
      sym_intersect,
      sym_complement,
  [464] = 6,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(41), 1,
      anon_sym_POUND,
    ACTIONS(43), 1,
      sym_signed_integer,
    STATE(7), 1,
      sym_cell_geometry,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    STATE(29), 3,
      sym_union,
      sym_intersect,
      sym_complement,
  [487] = 6,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(41), 1,
      anon_sym_POUND,
    ACTIONS(43), 1,
      sym_signed_integer,
    STATE(11), 1,
      sym_cell_geometry,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    STATE(29), 3,
      sym_union,
      sym_intersect,
      sym_complement,
  [510] = 6,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(41), 1,
      anon_sym_POUND,
    ACTIONS(43), 1,
      sym_signed_integer,
    STATE(8), 1,
      sym_cell_geometry,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    STATE(29), 3,
      sym_union,
      sym_intersect,
      sym_complement,
  [533] = 3,
    ACTIONS(62), 1,
      aux_sym_endline_token1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(60), 6,
      anon_sym_LPAREN,
      anon_sym_COLON,
      anon_sym_POUND,
      sym_cell_parameters,
      sym_inline_comment,
      sym_signed_integer,
  [549] = 3,
    ACTIONS(66), 1,
      aux_sym_endline_token1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(64), 6,
      anon_sym_LPAREN,
      anon_sym_COLON,
      anon_sym_POUND,
      sym_cell_parameters,
      sym_inline_comment,
      sym_signed_integer,
  [565] = 3,
    ACTIONS(70), 1,
      aux_sym_endline_token1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(68), 6,
      anon_sym_LPAREN,
      anon_sym_COLON,
      anon_sym_POUND,
      sym_cell_parameters,
      sym_inline_comment,
      sym_signed_integer,
  [581] = 3,
    ACTIONS(74), 1,
      aux_sym_endline_token1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(72), 6,
      anon_sym_LPAREN,
      anon_sym_COLON,
      anon_sym_POUND,
      sym_cell_parameters,
      sym_inline_comment,
      sym_signed_integer,
  [597] = 3,
    ACTIONS(78), 1,
      aux_sym_endline_token1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(76), 6,
      anon_sym_LPAREN,
      anon_sym_COLON,
      anon_sym_POUND,
      sym_cell_parameters,
      sym_inline_comment,
      sym_signed_integer,
  [613] = 2,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    ACTIONS(68), 5,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_POUND,
      sym_signed_integer,
  [626] = 2,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    ACTIONS(60), 5,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_POUND,
      sym_signed_integer,
  [639] = 2,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    ACTIONS(76), 5,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_POUND,
      sym_signed_integer,
  [652] = 2,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    ACTIONS(64), 5,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_POUND,
      sym_signed_integer,
  [665] = 2,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    ACTIONS(72), 5,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_POUND,
      sym_signed_integer,
  [678] = 4,
    ACTIONS(80), 1,
      anon_sym_0,
    ACTIONS(82), 1,
      anon_sym_like,
    ACTIONS(84), 1,
      sym_positive_integer,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [693] = 3,
    ACTIONS(88), 1,
      sym_delimiter,
    ACTIONS(86), 2,
      ts_builtin_sym_end,
      sym_positive_integer,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [706] = 4,
    ACTIONS(90), 1,
      sym_inline_comment,
    ACTIONS(92), 1,
      aux_sym_endline_token1,
    STATE(48), 1,
      sym_endline,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [720] = 3,
    ACTIONS(94), 1,
      anon_sym_LPAREN,
    ACTIONS(96), 1,
      sym_positive_integer,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [732] = 4,
    ACTIONS(98), 1,
      sym_cell_parameters,
    ACTIONS(100), 1,
      sym_inline_comment,
    ACTIONS(102), 1,
      aux_sym_endline_token1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [746] = 3,
    ACTIONS(104), 1,
      anon_sym_data,
    STATE(39), 1,
      sym_data_card_block,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [758] = 3,
    ACTIONS(106), 1,
      ts_builtin_sym_end,
    ACTIONS(108), 1,
      sym_delimiter,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [770] = 4,
    ACTIONS(90), 1,
      sym_inline_comment,
    ACTIONS(92), 1,
      aux_sym_endline_token1,
    STATE(41), 1,
      sym_endline,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [784] = 3,
    ACTIONS(110), 1,
      ts_builtin_sym_end,
    ACTIONS(112), 1,
      sym_delimiter,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [796] = 3,
    ACTIONS(114), 1,
      anon_sym_otherdata,
    STATE(57), 1,
      sym_other_card_block,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [808] = 3,
    ACTIONS(116), 1,
      sym_signed_integer,
    ACTIONS(118), 1,
      sym_signed_float,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [820] = 3,
    ACTIONS(120), 1,
      anon_sym_surface,
    STATE(56), 1,
      sym_surface_card_block,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [832] = 4,
    ACTIONS(90), 1,
      sym_inline_comment,
    ACTIONS(92), 1,
      aux_sym_endline_token1,
    STATE(49), 1,
      sym_endline,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [846] = 3,
    ACTIONS(122), 1,
      anon_sym_LPAREN,
    ACTIONS(124), 1,
      sym_positive_integer,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [858] = 4,
    ACTIONS(90), 1,
      sym_inline_comment,
    ACTIONS(92), 1,
      aux_sym_endline_token1,
    STATE(55), 1,
      sym_endline,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [872] = 3,
    ACTIONS(126), 1,
      sym_delimiter,
    ACTIONS(128), 1,
      sym_positive_integer,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [884] = 2,
    ACTIONS(130), 1,
      sym_delimiter,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [893] = 2,
    ACTIONS(132), 1,
      sym_positive_integer,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [902] = 3,
    ACTIONS(134), 1,
      sym_inline_comment,
    ACTIONS(136), 1,
      aux_sym_endline_token1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [913] = 3,
    ACTIONS(138), 1,
      sym_inline_comment,
    ACTIONS(140), 1,
      aux_sym_endline_token1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [924] = 2,
    ACTIONS(142), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [933] = 2,
    ACTIONS(144), 1,
      anon_sym_but,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [942] = 2,
    ACTIONS(146), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [951] = 2,
    ACTIONS(148), 1,
      sym_delimiter,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [960] = 2,
    ACTIONS(150), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [969] = 2,
    ACTIONS(152), 1,
      sym_delimiter,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [978] = 3,
    ACTIONS(154), 1,
      sym_inline_comment,
    ACTIONS(156), 1,
      aux_sym_endline_token1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 34,
  [SMALL_STATE(4)] = 58,
  [SMALL_STATE(5)] = 88,
  [SMALL_STATE(6)] = 122,
  [SMALL_STATE(7)] = 151,
  [SMALL_STATE(8)] = 178,
  [SMALL_STATE(9)] = 207,
  [SMALL_STATE(10)] = 236,
  [SMALL_STATE(11)] = 257,
  [SMALL_STATE(12)] = 286,
  [SMALL_STATE(13)] = 307,
  [SMALL_STATE(14)] = 328,
  [SMALL_STATE(15)] = 351,
  [SMALL_STATE(16)] = 374,
  [SMALL_STATE(17)] = 397,
  [SMALL_STATE(18)] = 418,
  [SMALL_STATE(19)] = 441,
  [SMALL_STATE(20)] = 464,
  [SMALL_STATE(21)] = 487,
  [SMALL_STATE(22)] = 510,
  [SMALL_STATE(23)] = 533,
  [SMALL_STATE(24)] = 549,
  [SMALL_STATE(25)] = 565,
  [SMALL_STATE(26)] = 581,
  [SMALL_STATE(27)] = 597,
  [SMALL_STATE(28)] = 613,
  [SMALL_STATE(29)] = 626,
  [SMALL_STATE(30)] = 639,
  [SMALL_STATE(31)] = 652,
  [SMALL_STATE(32)] = 665,
  [SMALL_STATE(33)] = 678,
  [SMALL_STATE(34)] = 693,
  [SMALL_STATE(35)] = 706,
  [SMALL_STATE(36)] = 720,
  [SMALL_STATE(37)] = 732,
  [SMALL_STATE(38)] = 746,
  [SMALL_STATE(39)] = 758,
  [SMALL_STATE(40)] = 770,
  [SMALL_STATE(41)] = 784,
  [SMALL_STATE(42)] = 796,
  [SMALL_STATE(43)] = 808,
  [SMALL_STATE(44)] = 820,
  [SMALL_STATE(45)] = 832,
  [SMALL_STATE(46)] = 846,
  [SMALL_STATE(47)] = 858,
  [SMALL_STATE(48)] = 872,
  [SMALL_STATE(49)] = 884,
  [SMALL_STATE(50)] = 893,
  [SMALL_STATE(51)] = 902,
  [SMALL_STATE(52)] = 913,
  [SMALL_STATE(53)] = 924,
  [SMALL_STATE(54)] = 933,
  [SMALL_STATE(55)] = 942,
  [SMALL_STATE(56)] = 951,
  [SMALL_STATE(57)] = 960,
  [SMALL_STATE(58)] = 969,
  [SMALL_STATE(59)] = 978,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cell_card_void, 3, 0, 0),
  [17] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cell_card_void, 3, 0, 0),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_intersect, 2, 0, 2),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_intersect, 2, 0, 2),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union, 3, 0, 5),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_union, 3, 0, 5),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cell_card_mat, 4, 0, 4),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cell_card_mat, 4, 0, 4),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cell_card_block, 1, 0, 0),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_cell_card_block_repeat1, 2, 0, 0),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cell_card_block_repeat1, 2, 0, 0), SHIFT_REPEAT(33),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cell_geometry, 1, 0, 0),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cell_geometry, 1, 0, 0),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cell_geometry, 1, 0, 1),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cell_geometry, 1, 0, 1),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_complement, 2, 0, 0),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_complement, 2, 0, 0),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cell_geometry, 3, 0, 0),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cell_geometry, 3, 0, 0),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_complement, 4, 0, 0),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_complement, 4, 0, 0),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_endline, 1, 0, 0),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_endline, 1, 0, 0),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cell_card_like, 4, 0, 3),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cell_card_like, 4, 0, 3),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 6, 0, 0),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_card_block, 2, 0, 0),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_data_card_block, 2, 0, 0),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cell_card, 2, 0, 0),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cell_card, 2, 0, 0),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_surface_card_block, 2, 0, 0),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cell_card_mat, 5, 0, 4),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cell_card_mat, 5, 0, 4),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cell_card_like, 5, 0, 3),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cell_card_like, 5, 0, 3),
  [142] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_other_card_block, 2, 0, 0),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 8, 0, 0),
  [152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cell_card_void, 4, 0, 0),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cell_card_void, 4, 0, 0),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token_header = 0,
  ts_external_token_error = 1,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_header] = sym_header,
  [ts_external_token_error] = sym_error,
};

static const bool ts_external_scanner_states[3][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_header] = true,
    [ts_external_token_error] = true,
  },
  [2] = {
    [ts_external_token_header] = true,
  },
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_example_external_scanner_create(void);
void tree_sitter_example_external_scanner_destroy(void *);
bool tree_sitter_example_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_example_external_scanner_serialize(void *, char *);
void tree_sitter_example_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_example(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_example_external_scanner_create,
      tree_sitter_example_external_scanner_destroy,
      tree_sitter_example_external_scanner_scan,
      tree_sitter_example_external_scanner_serialize,
      tree_sitter_example_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
