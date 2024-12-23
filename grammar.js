/**
 * @file An example language parser.
 * @author Yu Liu <1234567@qq.com>
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "example",

  extras: $ => [
    $.comment,
    $.inline_comment,
    $.line_continuation,
    /[ \t\r\f\v]/
  ],

  externals: $ => [
    // header has an optional message block and required title card
    $.header,
    $.error
  ],

  rules: {
    // TODO: add the actual grammar rules
    source_file: $ => seq(
      $.header,
      $.cell_card_block,
      $.delimiter,
      $.surface_card_block,
      $.delimiter,
      $.data_card_block,
      optional(seq($.delimiter, $.other_card_block))
    ),

    cell_card_block: $ => repeat1($.cell_card),

    cell_card: $ => seq(choice($.cell_card_void, $.cell_card_mat, $.cell_card_like), $.endline),

    cell_card_void: $ => seq(
      alias($.positive_integer, $.cell_id), "0", $.cell_geometry, optional($.cell_parameters)),

    cell_card_mat: $ => seq(
      alias($.positive_integer, $.cell_id),
      alias($.positive_integer, $.mat_id),
      alias(choice($.signed_integer, $.signed_float), $.mat_dens),
      $.cell_geometry, optional($.cell_parameters)),

    cell_card_like: $ => seq(
      alias($.positive_integer, $.cell_id), "like",
      alias($.positive_integer, $.other_cell_id), "but", optional($.cell_parameters)),

    cell_geometry: $ => choice(
      $.union,
      $.intersect,
      $.complement,
      prec(4, alias($.signed_integer, $.half_space)),
      prec(4, seq("(", $.cell_geometry, ")"))
    ),

    union: $ => prec.left(1, seq(
      field("left", $.cell_geometry), ":", field("right", $.cell_geometry))),

    intersect: $ => prec.left(2, seq(
      field("left", $.cell_geometry), field("right", $.cell_geometry))),

    complement: $ => prec(3, choice(
      seq("#", alias($.positive_integer, $.cell_id)),
      seq("#", "(", $.cell_geometry, ")")
    )),

    cell_parameters: $ => "cell_parameters",

    surface_card_block: $ => seq("surface", $.endline),

    data_card_block: $ => seq("data", $.endline),

    other_card_block: $ => seq("other data", $.endline),

    delimiter: $ => /[ \t\r\f\v]*\n/,

    inline_comment: $ => /\$.*?\n/,

    line_continuation: $ => token(choice(/\n[ \t]{5}/, /[ \t\r\f\v]+&[ \t\r\f\v]*\n/)),

    comment: $ => /[ \t\r\f\v]*c[ \t\r\f\v]+.*\n/,

    endline: $ => choice(/(\n|\r\n)/, $.inline_comment),

    signed_integer: $ => /[\+-]?[0-9]+/,

    positive_integer: $ => /[1-9][0-9]*/,

    signed_float: _ => {
      const digits = /[0-9]+/;
      const exponent = seq(/[eE][\+-]?/, digits);
      const sign = /[\+-]/;

      return token(
        choice(
          seq(optional(sign), digits, '.', optional(digits), optional(exponent)),
          seq(optional(sign), optional(digits), '.', digits, optional(exponent)),
          seq(optional(sign), digits, exponent),
        )
      );
    },
  }
});
