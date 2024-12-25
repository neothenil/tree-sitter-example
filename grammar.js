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
      alias($.number, $.mat_dens),
      $.cell_geometry, optional($.cell_parameters)),

    cell_card_like: $ => seq(
      alias($.positive_integer, $.cell_id), "like",
      alias($.positive_integer, $.other_cell_id), "but", $.cell_like_parameters),

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

    cell_parameters: $ => repeat1($.cell_parameter),

    cell_like_parameters: $ => repeat1($.cell_like_parameter),

    cell_like_parameter: $ => choice(
      $.cell_parameter,
      $.cell_para_mat,
      $.cell_para_dens
    ),

    cell_parameter: $ => choice(
      $.cell_para_imp,
      $.cell_para_vol,
      $.cell_para_pwt,
      $.cell_para_ext,
      $.cell_para_fcl,
      $.cell_para_wwn,
      $.cell_para_dxc,
      $.cell_para_nonu,
      $.cell_para_pd,
      $.cell_para_tmp,
      $.cell_para_univ,
      $.cell_para_trcl,
      $.cell_para_lat,
      $.cell_para_fill,
      $.cell_para_elpt,
      $.cell_para_cosy,
      $.cell_para_bflcl,
      $.cell_para_unc
    ),

    cell_para_imp: $ => seq("imp:", $.particles, optional("="), $.number),

    cell_para_vol: $ => seq("vol", optional("="), $.number),

    cell_para_pwt: $ => seq("pwt", optional("="), $.number),

    cell_para_ext: $ => seq("ext:", $.particles, optional("="), $.stretch_para),

    stretch_para: $ => choice(
      "0",
      seq(choice($.signed_float, "s"), optional(choice(seq("v", $.positive_integer), "x", "y", "z")))
    ),

    cell_para_fcl: $ => seq("fcl:", $.neutron_photon, optional("="), $.number),

    cell_para_wwn: $ => seq("wwn", $.positive_integer, ":", $.particles, optional("="), $.number),

    cell_para_dxc: $ => seq("dxc", optional($.signed_integer), ":", $.particles, optional("="), $.number),

    cell_para_nonu: $ => seq("nonu", optional("="), alias(/[012]?/, $.value)),

    cell_para_pd: $ => seq("pd", $.signed_integer, optional("="), $.number),

    cell_para_tmp: $ => seq("tmp", $.positive_integer, optional("="), $.number),

    cell_para_univ: $ => seq("u", optional("="), $.signed_integer),

    cell_para_trcl: $ => choice($.trcl_number, $.trcl_matrix),
    
    trcl_number: $ => seq("trcl", optional("="), $.signed_integer),

    trcl_matrix: $ => seq(optional("*"), "trcl", optional("="), "(", repeat1($.number), ")"),

    cell_para_lat: $ => seq("lat", optional("="), alias(/[12]/, $.type)),

    cell_para_fill: $ => choice($.fill_form1, $.fill_form2, $.fill_form3),

    fill_form1: $ => seq("fill", optional("="), alias($.signed_integer, $.universe_id),
      optional(seq("(", alias($.positive_integer, $.transform_id), ")"))),

    fill_form2: $ => seq(optional("*"), "fill", optional("="), alias($.signed_integer, $.universe_id),
      seq("(", $.number, $.number, $.number, repeat($.number), ")")),

    fill_form3: $ => seq("fill", optional("="), 
      alias($.signed_integer, $.i1), ":", alias($.signed_integer, $.i2),
      alias($.signed_integer, $.j1), ":", alias($.signed_integer, $.j2),
      alias($.signed_integer, $.k1), ":", alias($.signed_integer, $.k2),
      repeat1($.signed_integer)),

    cell_para_elpt: $ => seq("elpt:", $.particles, optional("="), $.number),

    cell_para_cosy: $ => seq("cosy", optional("="), $.positive_integer),

    cell_para_bflcl: $ => seq("bflcl", optional("="), $.positive_integer),

    cell_para_unc: $ => seq("unc:", $.particles, optional("="), alias(/[01]/, $.uncollided)),

    cell_para_mat: $ => seq("mat", optional("="), alias($.positive_integer, $.mat_id)),

    cell_para_dens: $ => seq("rho", optional("="), alias($.number, $.mat_dens)),

    particles: $ => /[npe\|quvfhl\+\-xyo!<>g/zk%^b_~cw@dtsa\*\?#](,[npe\|quvfhl\+\-xyo!<>g/zk%^b_~cw@dtsa\*\?#])*/,

    neutron_photon: $ => /[np](,[np])*/,

    surface_card_block: $ => repeat1($.surface_card),

    surface_card: $ => seq(optional(alias(/[\*\+]/, $.boundary_condition)),
      alias($.positive_integer, $.surface_id),
      optional(alias($.signed_integer, $.transform)),
      alias(choice("p", "px", "py", "pz", "so", "s", "sx", "sy", "sz",
          "c/x", "c/y", "c/z", "cx", "cy", "cz", "k/x", "k/y", "k/z", "kx", "ky", "kz",
          "sq", "gq", "tx", "ty", "tz", "x", "y", "z", "box", "rpp", "sph", "rcc", "rhp",
          "hex", "rec", "trc", "ell", "wed", "arb"),  $.type),
      alias($._coeffs, $.coeffs),
      $.endline),

    _coeffs: $ => repeat1($.number),

    data_card_block: $ => seq("data", $.endline),

    other_card_block: $ => seq("other data", $.endline),

    delimiter: $ => /[ \t\r\f\v]*\n/,

    inline_comment: $ => /\$[^\n]*?/,

    line_continuation: $ => token(choice(/\n[ \t]{5}/, /[ \t\r\f\v]+&[ \t\r\f\v]*\n/)),

    comment: $ => /[ \t\r\f\v]*c[ \t\r\f\v]+.*\n/,

    endline: $ => /(\n|\r\n)/,

    positive_integer: $ => /[1-9][0-9]*/,

    signed_integer: $ => /[\+-]?[0-9]+/,

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

    number: $ => choice($.signed_integer, $.signed_float)
  }
});
