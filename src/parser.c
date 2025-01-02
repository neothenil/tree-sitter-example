#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 274
#define LARGE_STATE_COUNT 11
#define SYMBOL_COUNT 281
#define ALIAS_COUNT 17
#define TOKEN_COUNT 213
#define EXTERNAL_TOKEN_COUNT 2
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 12
#define PRODUCTION_ID_COUNT 24

enum ts_symbol_identifiers {
  anon_sym_0 = 1,
  anon_sym_like = 2,
  anon_sym_but = 3,
  anon_sym_LPAREN = 4,
  anon_sym_RPAREN = 5,
  anon_sym_COLON = 6,
  anon_sym_POUND = 7,
  anon_sym_imp_COLON = 8,
  anon_sym_EQ = 9,
  anon_sym_vol = 10,
  anon_sym_pwt = 11,
  anon_sym_ext_COLON = 12,
  anon_sym_s = 13,
  anon_sym_v = 14,
  anon_sym_x = 15,
  anon_sym_y = 16,
  anon_sym_z = 17,
  anon_sym_fcl_COLON = 18,
  anon_sym_wwn = 19,
  anon_sym_dxc = 20,
  anon_sym_nonu = 21,
  aux_sym_cell_para_nonu_token1 = 22,
  anon_sym_pd = 23,
  anon_sym_tmp = 24,
  anon_sym_u = 25,
  anon_sym_trcl = 26,
  anon_sym_STAR = 27,
  anon_sym_lat = 28,
  aux_sym_cell_para_lat_token1 = 29,
  anon_sym_fill = 30,
  anon_sym_elpt_COLON = 31,
  anon_sym_cosy = 32,
  anon_sym_bflcl = 33,
  anon_sym_unc_COLON = 34,
  aux_sym_cell_para_unc_token1 = 35,
  anon_sym_mat = 36,
  anon_sym_rho = 37,
  sym_particles = 38,
  sym_neutron_photon = 39,
  aux_sym_surface_card_token1 = 40,
  anon_sym_p = 41,
  anon_sym_px = 42,
  anon_sym_py = 43,
  anon_sym_pz = 44,
  anon_sym_so = 45,
  anon_sym_sx = 46,
  anon_sym_sy = 47,
  anon_sym_sz = 48,
  anon_sym_c_SLASHx = 49,
  anon_sym_c_SLASHy = 50,
  anon_sym_c_SLASHz = 51,
  anon_sym_cx = 52,
  anon_sym_cy = 53,
  anon_sym_cz = 54,
  anon_sym_k_SLASHx = 55,
  anon_sym_k_SLASHy = 56,
  anon_sym_k_SLASHz = 57,
  anon_sym_kx = 58,
  anon_sym_ky = 59,
  anon_sym_kz = 60,
  anon_sym_sq = 61,
  anon_sym_gq = 62,
  anon_sym_tx = 63,
  anon_sym_ty = 64,
  anon_sym_tz = 65,
  anon_sym_box = 66,
  anon_sym_rpp = 67,
  anon_sym_sph = 68,
  anon_sym_rcc = 69,
  anon_sym_rhp = 70,
  anon_sym_hex = 71,
  anon_sym_rec = 72,
  anon_sym_trc = 73,
  anon_sym_ell = 74,
  anon_sym_wed = 75,
  anon_sym_arb = 76,
  anon_sym_tr = 77,
  anon_sym_area = 78,
  anon_sym_uran = 79,
  anon_sym_mesh = 80,
  anon_sym_dawwg = 81,
  anon_sym_dm = 82,
  anon_sym_embed = 83,
  anon_sym_embee = 84,
  anon_sym_embeb = 85,
  anon_sym_embem = 86,
  anon_sym_embtb = 87,
  anon_sym_embtm = 88,
  anon_sym_embde = 89,
  anon_sym_embdf = 90,
  anon_sym_m = 91,
  anon_sym_mt = 92,
  anon_sym_mx = 93,
  anon_sym_mpn = 94,
  anon_sym_otfdb = 95,
  anon_sym_totnu = 96,
  anon_sym_awtab = 97,
  anon_sym_xs = 98,
  anon_sym_void = 99,
  anon_sym_mgopt = 100,
  anon_sym_drxs = 101,
  anon_sym_mode = 102,
  anon_sym_phys = 103,
  anon_sym_act = 104,
  anon_sym_cut = 105,
  anon_sym_elpt = 106,
  anon_sym_thtme = 107,
  anon_sym_dbrc = 108,
  anon_sym_mphys = 109,
  anon_sym_lca = 110,
  anon_sym_lcb = 111,
  anon_sym_lcc = 112,
  anon_sym_lea = 113,
  anon_sym_leb = 114,
  anon_sym_fmult = 115,
  anon_sym_tropt = 116,
  anon_sym_unc = 117,
  anon_sym_cosyp = 118,
  anon_sym_bfld = 119,
  anon_sym_field = 120,
  aux_sym_ignored_data_card_token1 = 121,
  aux_sym_ignored_data_card_token2 = 122,
  anon_sym_e = 123,
  anon_sym_t = 124,
  aux_sym_ignored_data_card_token3 = 125,
  anon_sym_de = 126,
  anon_sym_df = 127,
  anon_sym_em = 128,
  anon_sym_tm = 129,
  anon_sym_sf = 130,
  anon_sym_sd = 131,
  anon_sym_tf = 132,
  anon_sym_notrn = 133,
  anon_sym_pert = 134,
  anon_sym_kpert = 135,
  anon_sym_ksen = 136,
  anon_sym_kopts = 137,
  anon_sym_tmesh = 138,
  anon_sym_endmd = 139,
  anon_sym_rmesh = 140,
  anon_sym_cmesh = 141,
  anon_sym_smesh = 142,
  anon_sym_cora = 143,
  anon_sym_corb = 144,
  anon_sym_corc = 145,
  anon_sym_ergsh = 146,
  anon_sym_mshmf = 147,
  aux_sym_ignored_data_card_token4 = 148,
  anon_sym_spdtl = 149,
  anon_sym_var = 150,
  anon_sym_wwe = 151,
  anon_sym_wwt = 152,
  anon_sym_wwp = 153,
  anon_sym_wwg = 154,
  anon_sym_wwge = 155,
  anon_sym_wwgt = 156,
  anon_sym_esplt = 157,
  anon_sym_tsplt = 158,
  anon_sym_ext = 159,
  anon_sym_vect = 160,
  anon_sym_fcl = 161,
  anon_sym_dxt = 162,
  anon_sym_dd = 163,
  anon_sym_bbrem = 164,
  anon_sym_pikmt = 165,
  anon_sym_spabi = 166,
  anon_sym_nps = 167,
  anon_sym_ctme = 168,
  anon_sym_stop = 169,
  anon_sym_rand = 170,
  anon_sym_print = 171,
  anon_sym_talnp = 172,
  anon_sym_prdmp = 173,
  anon_sym_ptrac = 174,
  anon_sym_mplot = 175,
  anon_sym_histp = 176,
  anon_sym_pio = 177,
  anon_sym_read = 178,
  anon_sym_dbcn = 179,
  anon_sym_lost = 180,
  anon_sym_idum = 181,
  anon_sym_rdum = 182,
  aux_sym_ignored_data_card_token5 = 183,
  anon_sym_files = 184,
  anon_sym_disable = 185,
  anon_sym_sdef = 186,
  anon_sym_si = 187,
  anon_sym_sp = 188,
  anon_sym_sb = 189,
  anon_sym_ds = 190,
  anon_sym_sc = 191,
  anon_sym_ssw = 192,
  anon_sym_ssr = 193,
  anon_sym_kcode = 194,
  anon_sym_ksrc = 195,
  anon_sym_hsrc = 196,
  anon_sym_burn = 197,
  sym_other_card_block = 198,
  sym_delimiter = 199,
  sym_inline_comment = 200,
  sym_line_continuation = 201,
  sym_comment = 202,
  sym_endline = 203,
  sym_positive_integer = 204,
  sym_signed_integer = 205,
  sym_signed_float = 206,
  sym_number = 207,
  sym_facet_half_space = 208,
  sym_shortcut = 209,
  sym_ignored_data = 210,
  sym_header = 211,
  sym_error = 212,
  sym_source_file = 213,
  sym_cell_card_block = 214,
  sym_cell_card = 215,
  sym_cell_card_void = 216,
  sym_cell_card_mat = 217,
  sym_cell_card_like = 218,
  sym_cell_geometry = 219,
  sym_union = 220,
  sym_intersect = 221,
  sym_complement = 222,
  sym_cell_parameters = 223,
  sym_cell_like_parameters = 224,
  sym_cell_like_parameter = 225,
  sym_cell_parameter = 226,
  sym_cell_para_imp = 227,
  sym_cell_para_vol = 228,
  sym_cell_para_pwt = 229,
  sym_cell_para_ext = 230,
  sym_stretch_para = 231,
  sym_cell_para_fcl = 232,
  sym_cell_para_wwn = 233,
  sym_cell_para_dxc = 234,
  sym_cell_para_nonu = 235,
  sym_cell_para_pd = 236,
  sym_cell_para_tmp = 237,
  sym_cell_para_univ = 238,
  sym_cell_para_trcl = 239,
  sym_trcl_number = 240,
  sym_trcl_matrix = 241,
  sym_cell_para_lat = 242,
  sym_cell_para_fill = 243,
  sym_fill_form1 = 244,
  sym_fill_form2 = 245,
  sym_fill_form3 = 246,
  sym_cell_para_elpt = 247,
  sym_cell_para_cosy = 248,
  sym_cell_para_bflcl = 249,
  sym_cell_para_unc = 250,
  sym_cell_para_mat = 251,
  sym_cell_para_dens = 252,
  sym_surface_card_block = 253,
  sym_surface_card = 254,
  aux_sym__coeffs = 255,
  sym_data_card_block = 256,
  sym_data_card = 257,
  sym_transform_card = 258,
  sym_universe_card = 259,
  sym_lattice_card = 260,
  sym_fill_card = 261,
  sym_importance_card = 262,
  sym_ignored_data_card = 263,
  sym_vertical_data_block = 264,
  sym_vertical_data_block_single_line = 265,
  sym_vertical_data_block_multiple_line = 266,
  sym_vertical_header = 267,
  sym_vertical_data = 268,
  aux_sym_cell_card_block_repeat1 = 269,
  aux_sym_cell_parameters_repeat1 = 270,
  aux_sym_cell_like_parameters_repeat1 = 271,
  aux_sym_trcl_matrix_repeat1 = 272,
  aux_sym_fill_form3_repeat1 = 273,
  aux_sym_surface_card_block_repeat1 = 274,
  aux_sym_data_card_block_repeat1 = 275,
  aux_sym_transform_card_repeat1 = 276,
  aux_sym_lattice_card_repeat1 = 277,
  aux_sym_ignored_data_card_repeat1 = 278,
  aux_sym_vertical_data_block_single_line_repeat1 = 279,
  aux_sym_vertical_data_block_multiple_line_repeat1 = 280,
  alias_sym_card_name = 281,
  alias_sym_cell_id = 282,
  alias_sym_coeffs = 283,
  alias_sym_half_space = 284,
  alias_sym_i1 = 285,
  alias_sym_i2 = 286,
  alias_sym_j1 = 287,
  alias_sym_j2 = 288,
  alias_sym_k1 = 289,
  alias_sym_k2 = 290,
  alias_sym_mat_dens = 291,
  alias_sym_mat_id = 292,
  alias_sym_other_cell_id = 293,
  alias_sym_surface_id = 294,
  alias_sym_transform = 295,
  alias_sym_transform_id = 296,
  alias_sym_universe_id = 297,
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
  [anon_sym_imp_COLON] = "imp:",
  [anon_sym_EQ] = "=",
  [anon_sym_vol] = "vol",
  [anon_sym_pwt] = "pwt",
  [anon_sym_ext_COLON] = "ext:",
  [anon_sym_s] = "s",
  [anon_sym_v] = "v",
  [anon_sym_x] = "x",
  [anon_sym_y] = "y",
  [anon_sym_z] = "z",
  [anon_sym_fcl_COLON] = "fcl:",
  [anon_sym_wwn] = "wwn",
  [anon_sym_dxc] = "dxc",
  [anon_sym_nonu] = "nonu",
  [aux_sym_cell_para_nonu_token1] = "value",
  [anon_sym_pd] = "pd",
  [anon_sym_tmp] = "tmp",
  [anon_sym_u] = "u",
  [anon_sym_trcl] = "trcl",
  [anon_sym_STAR] = "*",
  [anon_sym_lat] = "lat",
  [aux_sym_cell_para_lat_token1] = "type",
  [anon_sym_fill] = "fill",
  [anon_sym_elpt_COLON] = "elpt:",
  [anon_sym_cosy] = "cosy",
  [anon_sym_bflcl] = "bflcl",
  [anon_sym_unc_COLON] = "unc:",
  [aux_sym_cell_para_unc_token1] = "uncollided",
  [anon_sym_mat] = "mat",
  [anon_sym_rho] = "rho",
  [sym_particles] = "particles",
  [sym_neutron_photon] = "neutron_photon",
  [aux_sym_surface_card_token1] = "boundary_condition",
  [anon_sym_p] = "type",
  [anon_sym_px] = "type",
  [anon_sym_py] = "type",
  [anon_sym_pz] = "type",
  [anon_sym_so] = "type",
  [anon_sym_sx] = "type",
  [anon_sym_sy] = "type",
  [anon_sym_sz] = "type",
  [anon_sym_c_SLASHx] = "type",
  [anon_sym_c_SLASHy] = "type",
  [anon_sym_c_SLASHz] = "type",
  [anon_sym_cx] = "type",
  [anon_sym_cy] = "type",
  [anon_sym_cz] = "type",
  [anon_sym_k_SLASHx] = "type",
  [anon_sym_k_SLASHy] = "type",
  [anon_sym_k_SLASHz] = "type",
  [anon_sym_kx] = "type",
  [anon_sym_ky] = "type",
  [anon_sym_kz] = "type",
  [anon_sym_sq] = "type",
  [anon_sym_gq] = "type",
  [anon_sym_tx] = "type",
  [anon_sym_ty] = "type",
  [anon_sym_tz] = "type",
  [anon_sym_box] = "type",
  [anon_sym_rpp] = "type",
  [anon_sym_sph] = "type",
  [anon_sym_rcc] = "type",
  [anon_sym_rhp] = "type",
  [anon_sym_hex] = "type",
  [anon_sym_rec] = "type",
  [anon_sym_trc] = "type",
  [anon_sym_ell] = "type",
  [anon_sym_wed] = "type",
  [anon_sym_arb] = "type",
  [anon_sym_tr] = "tr",
  [anon_sym_area] = "area",
  [anon_sym_uran] = "uran",
  [anon_sym_mesh] = "mesh",
  [anon_sym_dawwg] = "dawwg",
  [anon_sym_dm] = "dm",
  [anon_sym_embed] = "embed",
  [anon_sym_embee] = "embee",
  [anon_sym_embeb] = "embeb",
  [anon_sym_embem] = "embem",
  [anon_sym_embtb] = "embtb",
  [anon_sym_embtm] = "embtm",
  [anon_sym_embde] = "embde",
  [anon_sym_embdf] = "embdf",
  [anon_sym_m] = "m",
  [anon_sym_mt] = "mt",
  [anon_sym_mx] = "mx",
  [anon_sym_mpn] = "mpn",
  [anon_sym_otfdb] = "otfdb",
  [anon_sym_totnu] = "totnu",
  [anon_sym_awtab] = "awtab",
  [anon_sym_xs] = "xs",
  [anon_sym_void] = "void",
  [anon_sym_mgopt] = "mgopt",
  [anon_sym_drxs] = "drxs",
  [anon_sym_mode] = "mode",
  [anon_sym_phys] = "phys",
  [anon_sym_act] = "act",
  [anon_sym_cut] = "cut",
  [anon_sym_elpt] = "elpt",
  [anon_sym_thtme] = "thtme",
  [anon_sym_dbrc] = "dbrc",
  [anon_sym_mphys] = "mphys",
  [anon_sym_lca] = "lca",
  [anon_sym_lcb] = "lcb",
  [anon_sym_lcc] = "lcc",
  [anon_sym_lea] = "lea",
  [anon_sym_leb] = "leb",
  [anon_sym_fmult] = "fmult",
  [anon_sym_tropt] = "tropt",
  [anon_sym_unc] = "unc",
  [anon_sym_cosyp] = "cosyp",
  [anon_sym_bfld] = "bfld",
  [anon_sym_field] = "field",
  [aux_sym_ignored_data_card_token1] = "ignored_data_card_token1",
  [aux_sym_ignored_data_card_token2] = "ignored_data_card_token2",
  [anon_sym_e] = "e",
  [anon_sym_t] = "t",
  [aux_sym_ignored_data_card_token3] = "ignored_data_card_token3",
  [anon_sym_de] = "de",
  [anon_sym_df] = "df",
  [anon_sym_em] = "em",
  [anon_sym_tm] = "tm",
  [anon_sym_sf] = "sf",
  [anon_sym_sd] = "sd",
  [anon_sym_tf] = "tf",
  [anon_sym_notrn] = "notrn",
  [anon_sym_pert] = "pert",
  [anon_sym_kpert] = "kpert",
  [anon_sym_ksen] = "ksen",
  [anon_sym_kopts] = "kopts",
  [anon_sym_tmesh] = "tmesh",
  [anon_sym_endmd] = "endmd",
  [anon_sym_rmesh] = "rmesh",
  [anon_sym_cmesh] = "cmesh",
  [anon_sym_smesh] = "smesh",
  [anon_sym_cora] = "cora",
  [anon_sym_corb] = "corb",
  [anon_sym_corc] = "corc",
  [anon_sym_ergsh] = "ergsh",
  [anon_sym_mshmf] = "mshmf",
  [aux_sym_ignored_data_card_token4] = "ignored_data_card_token4",
  [anon_sym_spdtl] = "spdtl",
  [anon_sym_var] = "var",
  [anon_sym_wwe] = "wwe",
  [anon_sym_wwt] = "wwt",
  [anon_sym_wwp] = "wwp",
  [anon_sym_wwg] = "wwg",
  [anon_sym_wwge] = "wwge",
  [anon_sym_wwgt] = "wwgt",
  [anon_sym_esplt] = "esplt",
  [anon_sym_tsplt] = "tsplt",
  [anon_sym_ext] = "ext",
  [anon_sym_vect] = "vect",
  [anon_sym_fcl] = "fcl",
  [anon_sym_dxt] = "dxt",
  [anon_sym_dd] = "dd",
  [anon_sym_bbrem] = "bbrem",
  [anon_sym_pikmt] = "pikmt",
  [anon_sym_spabi] = "spabi",
  [anon_sym_nps] = "nps",
  [anon_sym_ctme] = "ctme",
  [anon_sym_stop] = "stop",
  [anon_sym_rand] = "rand",
  [anon_sym_print] = "print",
  [anon_sym_talnp] = "talnp",
  [anon_sym_prdmp] = "prdmp",
  [anon_sym_ptrac] = "ptrac",
  [anon_sym_mplot] = "mplot",
  [anon_sym_histp] = "histp",
  [anon_sym_pio] = "pio",
  [anon_sym_read] = "read",
  [anon_sym_dbcn] = "dbcn",
  [anon_sym_lost] = "lost",
  [anon_sym_idum] = "idum",
  [anon_sym_rdum] = "rdum",
  [aux_sym_ignored_data_card_token5] = "ignored_data_card_token5",
  [anon_sym_files] = "files",
  [anon_sym_disable] = "disable",
  [anon_sym_sdef] = "sdef",
  [anon_sym_si] = "si",
  [anon_sym_sp] = "sp",
  [anon_sym_sb] = "sb",
  [anon_sym_ds] = "ds",
  [anon_sym_sc] = "sc",
  [anon_sym_ssw] = "ssw",
  [anon_sym_ssr] = "ssr",
  [anon_sym_kcode] = "kcode",
  [anon_sym_ksrc] = "ksrc",
  [anon_sym_hsrc] = "hsrc",
  [anon_sym_burn] = "burn",
  [sym_other_card_block] = "other_card_block",
  [sym_delimiter] = "delimiter",
  [sym_inline_comment] = "inline_comment",
  [sym_line_continuation] = "line_continuation",
  [sym_comment] = "comment",
  [sym_endline] = "endline",
  [sym_positive_integer] = "positive_integer",
  [sym_signed_integer] = "signed_integer",
  [sym_signed_float] = "signed_float",
  [sym_number] = "number",
  [sym_facet_half_space] = "facet_half_space",
  [sym_shortcut] = "shortcut",
  [sym_ignored_data] = "ignored_data",
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
  [sym_cell_parameters] = "cell_parameters",
  [sym_cell_like_parameters] = "cell_like_parameters",
  [sym_cell_like_parameter] = "cell_like_parameter",
  [sym_cell_parameter] = "cell_parameter",
  [sym_cell_para_imp] = "cell_para_imp",
  [sym_cell_para_vol] = "cell_para_vol",
  [sym_cell_para_pwt] = "cell_para_pwt",
  [sym_cell_para_ext] = "cell_para_ext",
  [sym_stretch_para] = "stretch_para",
  [sym_cell_para_fcl] = "cell_para_fcl",
  [sym_cell_para_wwn] = "cell_para_wwn",
  [sym_cell_para_dxc] = "cell_para_dxc",
  [sym_cell_para_nonu] = "cell_para_nonu",
  [sym_cell_para_pd] = "cell_para_pd",
  [sym_cell_para_tmp] = "cell_para_tmp",
  [sym_cell_para_univ] = "cell_para_univ",
  [sym_cell_para_trcl] = "cell_para_trcl",
  [sym_trcl_number] = "trcl_number",
  [sym_trcl_matrix] = "trcl_matrix",
  [sym_cell_para_lat] = "cell_para_lat",
  [sym_cell_para_fill] = "cell_para_fill",
  [sym_fill_form1] = "fill_form1",
  [sym_fill_form2] = "fill_form2",
  [sym_fill_form3] = "fill_form3",
  [sym_cell_para_elpt] = "cell_para_elpt",
  [sym_cell_para_cosy] = "cell_para_cosy",
  [sym_cell_para_bflcl] = "cell_para_bflcl",
  [sym_cell_para_unc] = "cell_para_unc",
  [sym_cell_para_mat] = "cell_para_mat",
  [sym_cell_para_dens] = "cell_para_dens",
  [sym_surface_card_block] = "surface_card_block",
  [sym_surface_card] = "surface_card",
  [aux_sym__coeffs] = "_coeffs",
  [sym_data_card_block] = "data_card_block",
  [sym_data_card] = "data_card",
  [sym_transform_card] = "transform_card",
  [sym_universe_card] = "universe_card",
  [sym_lattice_card] = "lattice_card",
  [sym_fill_card] = "fill_card",
  [sym_importance_card] = "importance_card",
  [sym_ignored_data_card] = "ignored_data_card",
  [sym_vertical_data_block] = "vertical_data_block",
  [sym_vertical_data_block_single_line] = "vertical_data_block_single_line",
  [sym_vertical_data_block_multiple_line] = "vertical_data_block_multiple_line",
  [sym_vertical_header] = "vertical_header",
  [sym_vertical_data] = "vertical_data",
  [aux_sym_cell_card_block_repeat1] = "cell_card_block_repeat1",
  [aux_sym_cell_parameters_repeat1] = "cell_parameters_repeat1",
  [aux_sym_cell_like_parameters_repeat1] = "cell_like_parameters_repeat1",
  [aux_sym_trcl_matrix_repeat1] = "trcl_matrix_repeat1",
  [aux_sym_fill_form3_repeat1] = "fill_form3_repeat1",
  [aux_sym_surface_card_block_repeat1] = "surface_card_block_repeat1",
  [aux_sym_data_card_block_repeat1] = "data_card_block_repeat1",
  [aux_sym_transform_card_repeat1] = "transform_card_repeat1",
  [aux_sym_lattice_card_repeat1] = "lattice_card_repeat1",
  [aux_sym_ignored_data_card_repeat1] = "ignored_data_card_repeat1",
  [aux_sym_vertical_data_block_single_line_repeat1] = "vertical_data_block_single_line_repeat1",
  [aux_sym_vertical_data_block_multiple_line_repeat1] = "vertical_data_block_multiple_line_repeat1",
  [alias_sym_card_name] = "card_name",
  [alias_sym_cell_id] = "cell_id",
  [alias_sym_coeffs] = "coeffs",
  [alias_sym_half_space] = "half_space",
  [alias_sym_i1] = "i1",
  [alias_sym_i2] = "i2",
  [alias_sym_j1] = "j1",
  [alias_sym_j2] = "j2",
  [alias_sym_k1] = "k1",
  [alias_sym_k2] = "k2",
  [alias_sym_mat_dens] = "mat_dens",
  [alias_sym_mat_id] = "mat_id",
  [alias_sym_other_cell_id] = "other_cell_id",
  [alias_sym_surface_id] = "surface_id",
  [alias_sym_transform] = "transform",
  [alias_sym_transform_id] = "transform_id",
  [alias_sym_universe_id] = "universe_id",
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
  [anon_sym_imp_COLON] = anon_sym_imp_COLON,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_vol] = anon_sym_vol,
  [anon_sym_pwt] = anon_sym_pwt,
  [anon_sym_ext_COLON] = anon_sym_ext_COLON,
  [anon_sym_s] = anon_sym_s,
  [anon_sym_v] = anon_sym_v,
  [anon_sym_x] = anon_sym_x,
  [anon_sym_y] = anon_sym_y,
  [anon_sym_z] = anon_sym_z,
  [anon_sym_fcl_COLON] = anon_sym_fcl_COLON,
  [anon_sym_wwn] = anon_sym_wwn,
  [anon_sym_dxc] = anon_sym_dxc,
  [anon_sym_nonu] = anon_sym_nonu,
  [aux_sym_cell_para_nonu_token1] = aux_sym_cell_para_nonu_token1,
  [anon_sym_pd] = anon_sym_pd,
  [anon_sym_tmp] = anon_sym_tmp,
  [anon_sym_u] = anon_sym_u,
  [anon_sym_trcl] = anon_sym_trcl,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_lat] = anon_sym_lat,
  [aux_sym_cell_para_lat_token1] = aux_sym_cell_para_lat_token1,
  [anon_sym_fill] = anon_sym_fill,
  [anon_sym_elpt_COLON] = anon_sym_elpt_COLON,
  [anon_sym_cosy] = anon_sym_cosy,
  [anon_sym_bflcl] = anon_sym_bflcl,
  [anon_sym_unc_COLON] = anon_sym_unc_COLON,
  [aux_sym_cell_para_unc_token1] = aux_sym_cell_para_unc_token1,
  [anon_sym_mat] = anon_sym_mat,
  [anon_sym_rho] = anon_sym_rho,
  [sym_particles] = sym_particles,
  [sym_neutron_photon] = sym_neutron_photon,
  [aux_sym_surface_card_token1] = aux_sym_surface_card_token1,
  [anon_sym_p] = aux_sym_cell_para_lat_token1,
  [anon_sym_px] = aux_sym_cell_para_lat_token1,
  [anon_sym_py] = aux_sym_cell_para_lat_token1,
  [anon_sym_pz] = aux_sym_cell_para_lat_token1,
  [anon_sym_so] = aux_sym_cell_para_lat_token1,
  [anon_sym_sx] = aux_sym_cell_para_lat_token1,
  [anon_sym_sy] = aux_sym_cell_para_lat_token1,
  [anon_sym_sz] = aux_sym_cell_para_lat_token1,
  [anon_sym_c_SLASHx] = aux_sym_cell_para_lat_token1,
  [anon_sym_c_SLASHy] = aux_sym_cell_para_lat_token1,
  [anon_sym_c_SLASHz] = aux_sym_cell_para_lat_token1,
  [anon_sym_cx] = aux_sym_cell_para_lat_token1,
  [anon_sym_cy] = aux_sym_cell_para_lat_token1,
  [anon_sym_cz] = aux_sym_cell_para_lat_token1,
  [anon_sym_k_SLASHx] = aux_sym_cell_para_lat_token1,
  [anon_sym_k_SLASHy] = aux_sym_cell_para_lat_token1,
  [anon_sym_k_SLASHz] = aux_sym_cell_para_lat_token1,
  [anon_sym_kx] = aux_sym_cell_para_lat_token1,
  [anon_sym_ky] = aux_sym_cell_para_lat_token1,
  [anon_sym_kz] = aux_sym_cell_para_lat_token1,
  [anon_sym_sq] = aux_sym_cell_para_lat_token1,
  [anon_sym_gq] = aux_sym_cell_para_lat_token1,
  [anon_sym_tx] = aux_sym_cell_para_lat_token1,
  [anon_sym_ty] = aux_sym_cell_para_lat_token1,
  [anon_sym_tz] = aux_sym_cell_para_lat_token1,
  [anon_sym_box] = aux_sym_cell_para_lat_token1,
  [anon_sym_rpp] = aux_sym_cell_para_lat_token1,
  [anon_sym_sph] = aux_sym_cell_para_lat_token1,
  [anon_sym_rcc] = aux_sym_cell_para_lat_token1,
  [anon_sym_rhp] = aux_sym_cell_para_lat_token1,
  [anon_sym_hex] = aux_sym_cell_para_lat_token1,
  [anon_sym_rec] = aux_sym_cell_para_lat_token1,
  [anon_sym_trc] = aux_sym_cell_para_lat_token1,
  [anon_sym_ell] = aux_sym_cell_para_lat_token1,
  [anon_sym_wed] = aux_sym_cell_para_lat_token1,
  [anon_sym_arb] = aux_sym_cell_para_lat_token1,
  [anon_sym_tr] = anon_sym_tr,
  [anon_sym_area] = anon_sym_area,
  [anon_sym_uran] = anon_sym_uran,
  [anon_sym_mesh] = anon_sym_mesh,
  [anon_sym_dawwg] = anon_sym_dawwg,
  [anon_sym_dm] = anon_sym_dm,
  [anon_sym_embed] = anon_sym_embed,
  [anon_sym_embee] = anon_sym_embee,
  [anon_sym_embeb] = anon_sym_embeb,
  [anon_sym_embem] = anon_sym_embem,
  [anon_sym_embtb] = anon_sym_embtb,
  [anon_sym_embtm] = anon_sym_embtm,
  [anon_sym_embde] = anon_sym_embde,
  [anon_sym_embdf] = anon_sym_embdf,
  [anon_sym_m] = anon_sym_m,
  [anon_sym_mt] = anon_sym_mt,
  [anon_sym_mx] = anon_sym_mx,
  [anon_sym_mpn] = anon_sym_mpn,
  [anon_sym_otfdb] = anon_sym_otfdb,
  [anon_sym_totnu] = anon_sym_totnu,
  [anon_sym_awtab] = anon_sym_awtab,
  [anon_sym_xs] = anon_sym_xs,
  [anon_sym_void] = anon_sym_void,
  [anon_sym_mgopt] = anon_sym_mgopt,
  [anon_sym_drxs] = anon_sym_drxs,
  [anon_sym_mode] = anon_sym_mode,
  [anon_sym_phys] = anon_sym_phys,
  [anon_sym_act] = anon_sym_act,
  [anon_sym_cut] = anon_sym_cut,
  [anon_sym_elpt] = anon_sym_elpt,
  [anon_sym_thtme] = anon_sym_thtme,
  [anon_sym_dbrc] = anon_sym_dbrc,
  [anon_sym_mphys] = anon_sym_mphys,
  [anon_sym_lca] = anon_sym_lca,
  [anon_sym_lcb] = anon_sym_lcb,
  [anon_sym_lcc] = anon_sym_lcc,
  [anon_sym_lea] = anon_sym_lea,
  [anon_sym_leb] = anon_sym_leb,
  [anon_sym_fmult] = anon_sym_fmult,
  [anon_sym_tropt] = anon_sym_tropt,
  [anon_sym_unc] = anon_sym_unc,
  [anon_sym_cosyp] = anon_sym_cosyp,
  [anon_sym_bfld] = anon_sym_bfld,
  [anon_sym_field] = anon_sym_field,
  [aux_sym_ignored_data_card_token1] = aux_sym_ignored_data_card_token1,
  [aux_sym_ignored_data_card_token2] = aux_sym_ignored_data_card_token2,
  [anon_sym_e] = anon_sym_e,
  [anon_sym_t] = anon_sym_t,
  [aux_sym_ignored_data_card_token3] = aux_sym_ignored_data_card_token3,
  [anon_sym_de] = anon_sym_de,
  [anon_sym_df] = anon_sym_df,
  [anon_sym_em] = anon_sym_em,
  [anon_sym_tm] = anon_sym_tm,
  [anon_sym_sf] = anon_sym_sf,
  [anon_sym_sd] = anon_sym_sd,
  [anon_sym_tf] = anon_sym_tf,
  [anon_sym_notrn] = anon_sym_notrn,
  [anon_sym_pert] = anon_sym_pert,
  [anon_sym_kpert] = anon_sym_kpert,
  [anon_sym_ksen] = anon_sym_ksen,
  [anon_sym_kopts] = anon_sym_kopts,
  [anon_sym_tmesh] = anon_sym_tmesh,
  [anon_sym_endmd] = anon_sym_endmd,
  [anon_sym_rmesh] = anon_sym_rmesh,
  [anon_sym_cmesh] = anon_sym_cmesh,
  [anon_sym_smesh] = anon_sym_smesh,
  [anon_sym_cora] = anon_sym_cora,
  [anon_sym_corb] = anon_sym_corb,
  [anon_sym_corc] = anon_sym_corc,
  [anon_sym_ergsh] = anon_sym_ergsh,
  [anon_sym_mshmf] = anon_sym_mshmf,
  [aux_sym_ignored_data_card_token4] = aux_sym_ignored_data_card_token4,
  [anon_sym_spdtl] = anon_sym_spdtl,
  [anon_sym_var] = anon_sym_var,
  [anon_sym_wwe] = anon_sym_wwe,
  [anon_sym_wwt] = anon_sym_wwt,
  [anon_sym_wwp] = anon_sym_wwp,
  [anon_sym_wwg] = anon_sym_wwg,
  [anon_sym_wwge] = anon_sym_wwge,
  [anon_sym_wwgt] = anon_sym_wwgt,
  [anon_sym_esplt] = anon_sym_esplt,
  [anon_sym_tsplt] = anon_sym_tsplt,
  [anon_sym_ext] = anon_sym_ext,
  [anon_sym_vect] = anon_sym_vect,
  [anon_sym_fcl] = anon_sym_fcl,
  [anon_sym_dxt] = anon_sym_dxt,
  [anon_sym_dd] = anon_sym_dd,
  [anon_sym_bbrem] = anon_sym_bbrem,
  [anon_sym_pikmt] = anon_sym_pikmt,
  [anon_sym_spabi] = anon_sym_spabi,
  [anon_sym_nps] = anon_sym_nps,
  [anon_sym_ctme] = anon_sym_ctme,
  [anon_sym_stop] = anon_sym_stop,
  [anon_sym_rand] = anon_sym_rand,
  [anon_sym_print] = anon_sym_print,
  [anon_sym_talnp] = anon_sym_talnp,
  [anon_sym_prdmp] = anon_sym_prdmp,
  [anon_sym_ptrac] = anon_sym_ptrac,
  [anon_sym_mplot] = anon_sym_mplot,
  [anon_sym_histp] = anon_sym_histp,
  [anon_sym_pio] = anon_sym_pio,
  [anon_sym_read] = anon_sym_read,
  [anon_sym_dbcn] = anon_sym_dbcn,
  [anon_sym_lost] = anon_sym_lost,
  [anon_sym_idum] = anon_sym_idum,
  [anon_sym_rdum] = anon_sym_rdum,
  [aux_sym_ignored_data_card_token5] = aux_sym_ignored_data_card_token5,
  [anon_sym_files] = anon_sym_files,
  [anon_sym_disable] = anon_sym_disable,
  [anon_sym_sdef] = anon_sym_sdef,
  [anon_sym_si] = anon_sym_si,
  [anon_sym_sp] = anon_sym_sp,
  [anon_sym_sb] = anon_sym_sb,
  [anon_sym_ds] = anon_sym_ds,
  [anon_sym_sc] = anon_sym_sc,
  [anon_sym_ssw] = anon_sym_ssw,
  [anon_sym_ssr] = anon_sym_ssr,
  [anon_sym_kcode] = anon_sym_kcode,
  [anon_sym_ksrc] = anon_sym_ksrc,
  [anon_sym_hsrc] = anon_sym_hsrc,
  [anon_sym_burn] = anon_sym_burn,
  [sym_other_card_block] = sym_other_card_block,
  [sym_delimiter] = sym_delimiter,
  [sym_inline_comment] = sym_inline_comment,
  [sym_line_continuation] = sym_line_continuation,
  [sym_comment] = sym_comment,
  [sym_endline] = sym_endline,
  [sym_positive_integer] = sym_positive_integer,
  [sym_signed_integer] = sym_signed_integer,
  [sym_signed_float] = sym_signed_float,
  [sym_number] = sym_number,
  [sym_facet_half_space] = sym_facet_half_space,
  [sym_shortcut] = sym_shortcut,
  [sym_ignored_data] = sym_ignored_data,
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
  [sym_cell_parameters] = sym_cell_parameters,
  [sym_cell_like_parameters] = sym_cell_like_parameters,
  [sym_cell_like_parameter] = sym_cell_like_parameter,
  [sym_cell_parameter] = sym_cell_parameter,
  [sym_cell_para_imp] = sym_cell_para_imp,
  [sym_cell_para_vol] = sym_cell_para_vol,
  [sym_cell_para_pwt] = sym_cell_para_pwt,
  [sym_cell_para_ext] = sym_cell_para_ext,
  [sym_stretch_para] = sym_stretch_para,
  [sym_cell_para_fcl] = sym_cell_para_fcl,
  [sym_cell_para_wwn] = sym_cell_para_wwn,
  [sym_cell_para_dxc] = sym_cell_para_dxc,
  [sym_cell_para_nonu] = sym_cell_para_nonu,
  [sym_cell_para_pd] = sym_cell_para_pd,
  [sym_cell_para_tmp] = sym_cell_para_tmp,
  [sym_cell_para_univ] = sym_cell_para_univ,
  [sym_cell_para_trcl] = sym_cell_para_trcl,
  [sym_trcl_number] = sym_trcl_number,
  [sym_trcl_matrix] = sym_trcl_matrix,
  [sym_cell_para_lat] = sym_cell_para_lat,
  [sym_cell_para_fill] = sym_cell_para_fill,
  [sym_fill_form1] = sym_fill_form1,
  [sym_fill_form2] = sym_fill_form2,
  [sym_fill_form3] = sym_fill_form3,
  [sym_cell_para_elpt] = sym_cell_para_elpt,
  [sym_cell_para_cosy] = sym_cell_para_cosy,
  [sym_cell_para_bflcl] = sym_cell_para_bflcl,
  [sym_cell_para_unc] = sym_cell_para_unc,
  [sym_cell_para_mat] = sym_cell_para_mat,
  [sym_cell_para_dens] = sym_cell_para_dens,
  [sym_surface_card_block] = sym_surface_card_block,
  [sym_surface_card] = sym_surface_card,
  [aux_sym__coeffs] = aux_sym__coeffs,
  [sym_data_card_block] = sym_data_card_block,
  [sym_data_card] = sym_data_card,
  [sym_transform_card] = sym_transform_card,
  [sym_universe_card] = sym_universe_card,
  [sym_lattice_card] = sym_lattice_card,
  [sym_fill_card] = sym_fill_card,
  [sym_importance_card] = sym_importance_card,
  [sym_ignored_data_card] = sym_ignored_data_card,
  [sym_vertical_data_block] = sym_vertical_data_block,
  [sym_vertical_data_block_single_line] = sym_vertical_data_block_single_line,
  [sym_vertical_data_block_multiple_line] = sym_vertical_data_block_multiple_line,
  [sym_vertical_header] = sym_vertical_header,
  [sym_vertical_data] = sym_vertical_data,
  [aux_sym_cell_card_block_repeat1] = aux_sym_cell_card_block_repeat1,
  [aux_sym_cell_parameters_repeat1] = aux_sym_cell_parameters_repeat1,
  [aux_sym_cell_like_parameters_repeat1] = aux_sym_cell_like_parameters_repeat1,
  [aux_sym_trcl_matrix_repeat1] = aux_sym_trcl_matrix_repeat1,
  [aux_sym_fill_form3_repeat1] = aux_sym_fill_form3_repeat1,
  [aux_sym_surface_card_block_repeat1] = aux_sym_surface_card_block_repeat1,
  [aux_sym_data_card_block_repeat1] = aux_sym_data_card_block_repeat1,
  [aux_sym_transform_card_repeat1] = aux_sym_transform_card_repeat1,
  [aux_sym_lattice_card_repeat1] = aux_sym_lattice_card_repeat1,
  [aux_sym_ignored_data_card_repeat1] = aux_sym_ignored_data_card_repeat1,
  [aux_sym_vertical_data_block_single_line_repeat1] = aux_sym_vertical_data_block_single_line_repeat1,
  [aux_sym_vertical_data_block_multiple_line_repeat1] = aux_sym_vertical_data_block_multiple_line_repeat1,
  [alias_sym_card_name] = alias_sym_card_name,
  [alias_sym_cell_id] = alias_sym_cell_id,
  [alias_sym_coeffs] = alias_sym_coeffs,
  [alias_sym_half_space] = alias_sym_half_space,
  [alias_sym_i1] = alias_sym_i1,
  [alias_sym_i2] = alias_sym_i2,
  [alias_sym_j1] = alias_sym_j1,
  [alias_sym_j2] = alias_sym_j2,
  [alias_sym_k1] = alias_sym_k1,
  [alias_sym_k2] = alias_sym_k2,
  [alias_sym_mat_dens] = alias_sym_mat_dens,
  [alias_sym_mat_id] = alias_sym_mat_id,
  [alias_sym_other_cell_id] = alias_sym_other_cell_id,
  [alias_sym_surface_id] = alias_sym_surface_id,
  [alias_sym_transform] = alias_sym_transform,
  [alias_sym_transform_id] = alias_sym_transform_id,
  [alias_sym_universe_id] = alias_sym_universe_id,
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
  [anon_sym_imp_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vol] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pwt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ext_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_s] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_v] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_x] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_y] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_z] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fcl_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_wwn] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dxc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nonu] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_cell_para_nonu_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_pd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tmp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_trcl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lat] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_cell_para_lat_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_fill] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_elpt_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cosy] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bflcl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unc_COLON] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_cell_para_unc_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_mat] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rho] = {
    .visible = true,
    .named = false,
  },
  [sym_particles] = {
    .visible = true,
    .named = true,
  },
  [sym_neutron_photon] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_surface_card_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_p] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_px] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_py] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_pz] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_so] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_sx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_sy] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_sz] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_c_SLASHx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_c_SLASHy] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_c_SLASHz] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_cx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_cy] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_cz] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_k_SLASHx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_k_SLASHy] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_k_SLASHz] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_kx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ky] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_kz] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_sq] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_gq] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_tx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ty] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_tz] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_box] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_rpp] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_sph] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_rcc] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_rhp] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_hex] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_rec] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_trc] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ell] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_wed] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_arb] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_tr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_area] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uran] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mesh] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dawwg] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dm] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_embed] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_embee] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_embeb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_embem] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_embtb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_embtm] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_embde] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_embdf] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_m] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mx] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mpn] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_otfdb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_totnu] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_awtab] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_xs] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_void] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mgopt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_drxs] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mode] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_phys] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_act] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cut] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_elpt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_thtme] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dbrc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mphys] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lca] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lcb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lcc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lea] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_leb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fmult] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tropt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cosyp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bfld] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_field] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_ignored_data_card_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_ignored_data_card_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_e] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_t] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_ignored_data_card_token3] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_de] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_df] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_em] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tm] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sf] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tf] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_notrn] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pert] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_kpert] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ksen] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_kopts] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tmesh] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endmd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rmesh] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cmesh] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_smesh] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cora] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_corb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_corc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ergsh] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mshmf] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_ignored_data_card_token4] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_spdtl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_var] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_wwe] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_wwt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_wwp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_wwg] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_wwge] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_wwgt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_esplt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tsplt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ext] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vect] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fcl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dxt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bbrem] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pikmt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_spabi] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nps] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ctme] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_stop] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rand] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_print] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_talnp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_prdmp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ptrac] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mplot] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_histp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pio] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_read] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dbcn] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lost] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_idum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rdum] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_ignored_data_card_token5] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_files] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_disable] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sdef] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_si] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ds] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ssw] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ssr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_kcode] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ksrc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_hsrc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_burn] = {
    .visible = true,
    .named = false,
  },
  [sym_other_card_block] = {
    .visible = true,
    .named = true,
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
  [sym_endline] = {
    .visible = true,
    .named = true,
  },
  [sym_positive_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_signed_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_signed_float] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_facet_half_space] = {
    .visible = true,
    .named = true,
  },
  [sym_shortcut] = {
    .visible = true,
    .named = true,
  },
  [sym_ignored_data] = {
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
  [sym_cell_parameters] = {
    .visible = true,
    .named = true,
  },
  [sym_cell_like_parameters] = {
    .visible = true,
    .named = true,
  },
  [sym_cell_like_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_cell_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_cell_para_imp] = {
    .visible = true,
    .named = true,
  },
  [sym_cell_para_vol] = {
    .visible = true,
    .named = true,
  },
  [sym_cell_para_pwt] = {
    .visible = true,
    .named = true,
  },
  [sym_cell_para_ext] = {
    .visible = true,
    .named = true,
  },
  [sym_stretch_para] = {
    .visible = true,
    .named = true,
  },
  [sym_cell_para_fcl] = {
    .visible = true,
    .named = true,
  },
  [sym_cell_para_wwn] = {
    .visible = true,
    .named = true,
  },
  [sym_cell_para_dxc] = {
    .visible = true,
    .named = true,
  },
  [sym_cell_para_nonu] = {
    .visible = true,
    .named = true,
  },
  [sym_cell_para_pd] = {
    .visible = true,
    .named = true,
  },
  [sym_cell_para_tmp] = {
    .visible = true,
    .named = true,
  },
  [sym_cell_para_univ] = {
    .visible = true,
    .named = true,
  },
  [sym_cell_para_trcl] = {
    .visible = true,
    .named = true,
  },
  [sym_trcl_number] = {
    .visible = true,
    .named = true,
  },
  [sym_trcl_matrix] = {
    .visible = true,
    .named = true,
  },
  [sym_cell_para_lat] = {
    .visible = true,
    .named = true,
  },
  [sym_cell_para_fill] = {
    .visible = true,
    .named = true,
  },
  [sym_fill_form1] = {
    .visible = true,
    .named = true,
  },
  [sym_fill_form2] = {
    .visible = true,
    .named = true,
  },
  [sym_fill_form3] = {
    .visible = true,
    .named = true,
  },
  [sym_cell_para_elpt] = {
    .visible = true,
    .named = true,
  },
  [sym_cell_para_cosy] = {
    .visible = true,
    .named = true,
  },
  [sym_cell_para_bflcl] = {
    .visible = true,
    .named = true,
  },
  [sym_cell_para_unc] = {
    .visible = true,
    .named = true,
  },
  [sym_cell_para_mat] = {
    .visible = true,
    .named = true,
  },
  [sym_cell_para_dens] = {
    .visible = true,
    .named = true,
  },
  [sym_surface_card_block] = {
    .visible = true,
    .named = true,
  },
  [sym_surface_card] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__coeffs] = {
    .visible = false,
    .named = false,
  },
  [sym_data_card_block] = {
    .visible = true,
    .named = true,
  },
  [sym_data_card] = {
    .visible = true,
    .named = true,
  },
  [sym_transform_card] = {
    .visible = true,
    .named = true,
  },
  [sym_universe_card] = {
    .visible = true,
    .named = true,
  },
  [sym_lattice_card] = {
    .visible = true,
    .named = true,
  },
  [sym_fill_card] = {
    .visible = true,
    .named = true,
  },
  [sym_importance_card] = {
    .visible = true,
    .named = true,
  },
  [sym_ignored_data_card] = {
    .visible = true,
    .named = true,
  },
  [sym_vertical_data_block] = {
    .visible = true,
    .named = true,
  },
  [sym_vertical_data_block_single_line] = {
    .visible = true,
    .named = true,
  },
  [sym_vertical_data_block_multiple_line] = {
    .visible = true,
    .named = true,
  },
  [sym_vertical_header] = {
    .visible = true,
    .named = true,
  },
  [sym_vertical_data] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_cell_card_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_cell_parameters_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_cell_like_parameters_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_trcl_matrix_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_fill_form3_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_surface_card_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_data_card_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_transform_card_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_lattice_card_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_ignored_data_card_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_vertical_data_block_single_line_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_vertical_data_block_multiple_line_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_card_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_cell_id] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_coeffs] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_half_space] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_i1] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_i2] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_j1] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_j2] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_k1] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_k2] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_mat_dens] = {
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
  [alias_sym_surface_id] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_transform] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_transform_id] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_universe_id] = {
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
  [4] = {.index = 0, .length = 2},
  [6] = {.index = 2, .length = 2},
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
  [2] = {
    [0] = alias_sym_cell_id,
  },
  [3] = {
    [1] = alias_sym_cell_id,
  },
  [5] = {
    [0] = alias_sym_cell_id,
    [1] = alias_sym_mat_id,
    [2] = alias_sym_mat_dens,
  },
  [7] = {
    [1] = alias_sym_universe_id,
  },
  [8] = {
    [0] = alias_sym_cell_id,
    [2] = alias_sym_other_cell_id,
  },
  [9] = {
    [2] = alias_sym_universe_id,
  },
  [10] = {
    [1] = alias_sym_mat_id,
  },
  [11] = {
    [1] = alias_sym_mat_dens,
  },
  [12] = {
    [0] = alias_sym_surface_id,
    [1] = aux_sym_cell_para_lat_token1,
    [2] = alias_sym_coeffs,
  },
  [13] = {
    [0] = alias_sym_card_name,
  },
  [14] = {
    [2] = alias_sym_mat_id,
  },
  [15] = {
    [2] = alias_sym_mat_dens,
  },
  [16] = {
    [1] = alias_sym_surface_id,
    [2] = aux_sym_cell_para_lat_token1,
    [3] = alias_sym_coeffs,
  },
  [17] = {
    [0] = alias_sym_surface_id,
    [1] = alias_sym_transform,
    [2] = aux_sym_cell_para_lat_token1,
    [3] = alias_sym_coeffs,
  },
  [18] = {
    [1] = alias_sym_universe_id,
    [3] = alias_sym_transform_id,
  },
  [19] = {
    [1] = alias_sym_surface_id,
    [2] = alias_sym_transform,
    [3] = aux_sym_cell_para_lat_token1,
    [4] = alias_sym_coeffs,
  },
  [20] = {
    [2] = alias_sym_universe_id,
    [4] = alias_sym_transform_id,
  },
  [21] = {
    [3] = alias_sym_universe_id,
  },
  [22] = {
    [1] = alias_sym_i1,
    [3] = alias_sym_i2,
    [4] = alias_sym_j1,
    [6] = alias_sym_j2,
    [7] = alias_sym_k1,
    [9] = alias_sym_k2,
  },
  [23] = {
    [2] = alias_sym_i1,
    [4] = alias_sym_i2,
    [5] = alias_sym_j1,
    [7] = alias_sym_j2,
    [8] = alias_sym_k1,
    [10] = alias_sym_k2,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  aux_sym__coeffs, 2,
    aux_sym__coeffs,
    alias_sym_coeffs,
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
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
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
  [46] = 46,
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
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 31,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 273,
};

static TSCharacterRange sym_particles_character_set_1[] = {
  {'!', '!'}, {'#', '#'}, {'%', '%'}, {'*', '+'}, {'-', '-'}, {'/', '/'}, {'<', '<'}, {'>', '@'},
  {'^', '_'}, {'a', 'h'}, {'k', 'l'}, {'n', 'q'}, {'s', 'z'}, {'|', '|'}, {'~', '~'},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(337);
      ADVANCE_MAP(
        '\n', 562,
        '\r', 1,
        '#', 345,
        '$', 564,
        '(', 342,
        ')', 343,
        '*', 373,
        '+', 390,
        '0', 338,
        '1', 375,
        '2', 375,
        ':', 344,
        '=', 347,
        'a', 89,
        'b', 66,
        'c', 37,
        'd', 48,
        'e', 476,
        'f', 473,
        'g', 233,
        'h', 123,
        'i', 98,
        'k', 39,
        'l', 58,
        'm', 442,
        'n', 388,
        'o', 265,
        'p', 391,
        'r', 49,
        's', 352,
        't', 477,
        'u', 368,
        'v', 354,
        'w', 125,
        'x', 357,
        'y', 358,
        'z', 359,
        '\t', 1,
        0x0b, 1,
        '\f', 1,
        ' ', 1,
      );
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '\n', 562,
        '\r', 1,
        '#', 345,
        '$', 564,
        '&', 5,
        '(', 342,
        ')', 343,
        '*', 373,
        '+', 390,
        '0', 338,
        '1', 375,
        '2', 375,
        ':', 344,
        '=', 347,
        'a', 89,
        'b', 66,
        'c', 37,
        'd', 48,
        'e', 476,
        'f', 473,
        'g', 233,
        'h', 123,
        'i', 98,
        'k', 39,
        'l', 58,
        'm', 442,
        'n', 388,
        'o', 265,
        'p', 391,
        'r', 49,
        's', 352,
        't', 477,
        'u', 368,
        'v', 354,
        'w', 125,
        'x', 357,
        'y', 358,
        'z', 359,
        '\t', 1,
        0x0b, 1,
        '\f', 1,
        ' ', 1,
      );
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '\n', 562,
        '#', 345,
        '$', 564,
        '&', 5,
        '*', 372,
        '+', 31,
        '-', 32,
        '.', 325,
        'a', 90,
        'b', 67,
        'c', 180,
        'd', 48,
        'e', 476,
        'f', 473,
        'h', 157,
        'i', 584,
        'j', 582,
        'k', 77,
        'l', 59,
        'm', 442,
        'n', 207,
        'o', 265,
        'p', 99,
        'r', 583,
        's', 74,
        't', 477,
        'u', 368,
        'v', 56,
        'w', 297,
        'x', 247,
        'z', 322,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        '\n', 562,
        '$', 564,
        '&', 5,
        '(', 342,
        '0', 338,
        '=', 347,
        'c', 323,
        'l', 155,
        'n', 387,
        'p', 387,
        '*', 389,
        '+', 389,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(3);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(569);
      END_STATE();
    case 4:
      ADVANCE_MAP(
        '\n', 562,
        '$', 564,
        '(', 342,
        '0', 338,
        '=', 347,
        'c', 323,
        'l', 155,
        'n', 387,
        'p', 387,
        '*', 389,
        '+', 389,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(3);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(569);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(565);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(566);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(6);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(566);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 8:
      ADVANCE_MAP(
        '\n', 567,
        '\r', 8,
        '#', 345,
        '$', 564,
        '&', 5,
        '(', 342,
        ')', 343,
        '*', 371,
        '0', 572,
        ':', 344,
        'b', 139,
        'c', 213,
        'd', 306,
        'e', 179,
        'f', 95,
        'i', 187,
        'l', 57,
        'm', 65,
        'n', 212,
        'p', 100,
        'r', 153,
        't', 192,
        'u', 369,
        'v', 355,
        'w', 300,
        'x', 356,
        'y', 358,
        'z', 359,
        '+', 41,
        '-', 41,
        '\t', 8,
        0x0b, 8,
        '\f', 8,
        ' ', 8,
      );
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(570);
      END_STATE();
    case 9:
      ADVANCE_MAP(
        '\n', 567,
        '\r', 8,
        '#', 345,
        '$', 564,
        '(', 342,
        ')', 343,
        '*', 371,
        '0', 572,
        ':', 344,
        'b', 139,
        'c', 213,
        'd', 306,
        'e', 179,
        'f', 95,
        'i', 187,
        'l', 57,
        'm', 65,
        'n', 212,
        'p', 100,
        'r', 153,
        't', 192,
        'u', 369,
        'v', 355,
        'w', 300,
        'x', 356,
        'y', 358,
        'z', 359,
        '+', 41,
        '-', 41,
        '\t', 8,
        0x0b, 8,
        '\f', 8,
        ' ', 8,
      );
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(570);
      END_STATE();
    case 10:
      ADVANCE_MAP(
        '\n', 567,
        '\r', 10,
        '$', 564,
        '&', 5,
        '*', 371,
        '.', 329,
        'b', 139,
        'c', 213,
        'd', 306,
        'e', 179,
        'f', 95,
        'i', 587,
        'j', 582,
        'l', 60,
        'm', 65,
        'n', 212,
        'p', 100,
        'r', 585,
        't', 192,
        'u', 369,
        'v', 214,
        'w', 300,
        '+', 34,
        '-', 34,
        '\t', 10,
        0x0b, 10,
        '\f', 10,
        ' ', 10,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(571);
      END_STATE();
    case 11:
      ADVANCE_MAP(
        '\n', 567,
        '\r', 10,
        '$', 564,
        '*', 371,
        '.', 329,
        'b', 139,
        'c', 213,
        'd', 306,
        'e', 179,
        'f', 95,
        'i', 587,
        'j', 582,
        'l', 60,
        'm', 65,
        'n', 212,
        'p', 100,
        'r', 585,
        't', 192,
        'u', 369,
        'v', 214,
        'w', 300,
        '+', 34,
        '-', 34,
        '\t', 10,
        0x0b, 10,
        '\f', 10,
        ' ', 10,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(571);
      END_STATE();
    case 12:
      ADVANCE_MAP(
        '\n', 567,
        '\r', 12,
        '$', 564,
        '&', 5,
        '.', 325,
        'c', 323,
        'i', 586,
        'l', 210,
        '+', 32,
        '-', 32,
        'j', 582,
        'r', 582,
        '\t', 12,
        0x0b, 12,
        '\f', 12,
        ' ', 12,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      END_STATE();
    case 13:
      ADVANCE_MAP(
        '\n', 567,
        '\r', 12,
        '$', 564,
        '.', 325,
        'c', 323,
        'i', 586,
        'l', 210,
        '+', 32,
        '-', 32,
        'j', 582,
        'r', 582,
        '\t', 12,
        0x0b, 12,
        '\f', 12,
        ' ', 12,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      END_STATE();
    case 14:
      ADVANCE_MAP(
        '\n', 567,
        '\r', 14,
        '$', 564,
        '&', 5,
        ')', 343,
        '.', 333,
        '=', 347,
        'c', 323,
        '+', 36,
        '-', 36,
        '\t', 14,
        0x0b, 14,
        '\f', 14,
        ' ', 14,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(576);
      END_STATE();
    case 15:
      ADVANCE_MAP(
        '\n', 567,
        '\r', 14,
        '$', 564,
        ')', 343,
        '.', 333,
        '=', 347,
        'c', 323,
        '+', 36,
        '-', 36,
        '\t', 14,
        0x0b, 14,
        '\f', 14,
        ' ', 14,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(576);
      END_STATE();
    case 16:
      ADVANCE_MAP(
        '\n', 567,
        '\r', 16,
        '$', 563,
        '&', 588,
        'c', 589,
        '\t', 16,
        0x0b, 16,
        '\f', 16,
        ' ', 16,
      );
      if (lookahead != 0) ADVANCE(590);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(567);
      if (lookahead == '\r') ADVANCE(16);
      if (lookahead == '$') ADVANCE(563);
      if (lookahead == 'c') ADVANCE(589);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(16);
      if (lookahead != 0) ADVANCE(590);
      END_STATE();
    case 18:
      ADVANCE_MAP(
        '\n', 567,
        '\r', 18,
        '$', 564,
        '&', 5,
        '=', 347,
        'c', 386,
        '1', 375,
        '2', 375,
        '\t', 18,
        0x0b, 18,
        '\f', 18,
        ' ', 18,
      );
      if (set_contains(sym_particles_character_set_1, 15, lookahead)) ADVANCE(385);
      END_STATE();
    case 19:
      ADVANCE_MAP(
        '\n', 567,
        '\r', 18,
        '$', 564,
        '=', 347,
        'c', 386,
        '1', 375,
        '2', 375,
        '\t', 18,
        0x0b, 18,
        '\f', 18,
        ' ', 18,
      );
      if (set_contains(sym_particles_character_set_1, 15, lookahead)) ADVANCE(385);
      END_STATE();
    case 20:
      ADVANCE_MAP(
        '\n', 567,
        '\r', 20,
        '$', 564,
        '&', 5,
        '.', 329,
        'c', 323,
        'i', 586,
        'l', 210,
        '+', 34,
        '-', 34,
        'j', 582,
        'r', 582,
        '\t', 20,
        0x0b, 20,
        '\f', 20,
        ' ', 20,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(571);
      END_STATE();
    case 21:
      ADVANCE_MAP(
        '\n', 567,
        '\r', 20,
        '$', 564,
        '.', 329,
        'c', 323,
        'i', 586,
        'l', 210,
        '+', 34,
        '-', 34,
        'j', 582,
        'r', 582,
        '\t', 20,
        0x0b, 20,
        '\f', 20,
        ' ', 20,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(571);
      END_STATE();
    case 22:
      if (lookahead == '\n') ADVANCE(559);
      if (lookahead == '$') ADVANCE(554);
      if (lookahead == 'c') ADVANCE(560);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(551);
      if (lookahead != 0) ADVANCE(561);
      END_STATE();
    case 23:
      ADVANCE_MAP(
        '\n', 311,
        '$', 564,
        '&', 5,
        '(', 342,
        ':', 344,
        '=', 347,
        'a', 242,
        'b', 206,
        'c', 38,
        'e', 175,
        'g', 233,
        'h', 122,
        'k', 40,
        'p', 392,
        'r', 78,
        's', 353,
        't', 244,
        'w', 124,
        'x', 356,
        'y', 358,
        'z', 359,
        '+', 328,
        '-', 328,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(572);
      END_STATE();
    case 24:
      ADVANCE_MAP(
        '\n', 311,
        '$', 564,
        '&', 5,
        '.', 331,
        '0', 339,
        '=', 347,
        'c', 323,
        's', 351,
        '+', 35,
        '-', 35,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(24);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(33);
      END_STATE();
    case 25:
      ADVANCE_MAP(
        '\n', 311,
        '$', 564,
        '&', 5,
        '.', 333,
        '0', 576,
        'c', 323,
        '+', 36,
        '-', 36,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(25);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(568);
      END_STATE();
    case 26:
      if (lookahead == '\n') ADVANCE(311);
      if (lookahead == '$') ADVANCE(564);
      if (lookahead == '&') ADVANCE(5);
      if (lookahead == '=') ADVANCE(347);
      if (lookahead == 'c') ADVANCE(323);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(382);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(26);
      END_STATE();
    case 27:
      ADVANCE_MAP(
        '\n', 311,
        '$', 564,
        '(', 342,
        ':', 344,
        '=', 347,
        'a', 242,
        'b', 206,
        'c', 38,
        'e', 175,
        'g', 233,
        'h', 122,
        'k', 40,
        'p', 392,
        'r', 78,
        's', 353,
        't', 244,
        'w', 124,
        'x', 356,
        'y', 358,
        'z', 359,
        '+', 328,
        '-', 328,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(572);
      END_STATE();
    case 28:
      ADVANCE_MAP(
        '\n', 311,
        '$', 564,
        '.', 331,
        '0', 339,
        '=', 347,
        'c', 323,
        's', 351,
        '+', 35,
        '-', 35,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(24);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(33);
      END_STATE();
    case 29:
      if (lookahead == '\n') ADVANCE(311);
      if (lookahead == '$') ADVANCE(564);
      if (lookahead == '.') ADVANCE(333);
      if (lookahead == '0') ADVANCE(576);
      if (lookahead == 'c') ADVANCE(323);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(36);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(25);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(568);
      END_STATE();
    case 30:
      if (lookahead == '\n') ADVANCE(311);
      if (lookahead == '$') ADVANCE(564);
      if (lookahead == '=') ADVANCE(347);
      if (lookahead == 'c') ADVANCE(323);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(382);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(26);
      END_STATE();
    case 31:
      if (lookahead == '.') ADVANCE(325);
      if (lookahead == 'f') ADVANCE(472);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      END_STATE();
    case 32:
      if (lookahead == '.') ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      END_STATE();
    case 33:
      if (lookahead == '.') ADVANCE(573);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(33);
      END_STATE();
    case 34:
      if (lookahead == '.') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(571);
      END_STATE();
    case 35:
      if (lookahead == '.') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(33);
      END_STATE();
    case 36:
      if (lookahead == '.') ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(576);
      END_STATE();
    case 37:
      ADVANCE_MAP(
        '/', 302,
        'm', 131,
        'o', 236,
        't', 188,
        'u', 267,
        'x', 403,
        'y', 404,
        'z', 405,
      );
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(6);
      END_STATE();
    case 38:
      if (lookahead == '/') ADVANCE(302);
      if (lookahead == 'x') ADVANCE(403);
      if (lookahead == 'y') ADVANCE(404);
      if (lookahead == 'z') ADVANCE(405);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(6);
      END_STATE();
    case 39:
      ADVANCE_MAP(
        '/', 304,
        'c', 216,
        'o', 228,
        'p', 130,
        's', 126,
        'x', 409,
        'y', 410,
        'z', 411,
      );
      END_STATE();
    case 40:
      if (lookahead == '/') ADVANCE(304);
      if (lookahead == 'x') ADVANCE(409);
      if (lookahead == 'y') ADVANCE(410);
      if (lookahead == 'z') ADVANCE(411);
      END_STATE();
    case 41:
      if (lookahead == '0') ADVANCE(572);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(570);
      END_STATE();
    case 42:
      if (lookahead == '5') ADVANCE(475);
      END_STATE();
    case 43:
      if (lookahead == ':') ADVANCE(346);
      END_STATE();
    case 44:
      if (lookahead == ':') ADVANCE(350);
      END_STATE();
    case 45:
      if (lookahead == ':') ADVANCE(360);
      END_STATE();
    case 46:
      if (lookahead == ':') ADVANCE(381);
      END_STATE();
    case 47:
      if (lookahead == ':') ADVANCE(377);
      END_STATE();
    case 48:
      ADVANCE_MAP(
        'a', 298,
        'b', 91,
        'd', 516,
        'e', 479,
        'f', 480,
        'i', 257,
        'm', 433,
        'r', 305,
        's', 543,
        'x', 80,
      );
      END_STATE();
    case 49:
      if (lookahead == 'a') ADVANCE(203);
      if (lookahead == 'c') ADVANCE(81);
      if (lookahead == 'd') ADVANCE(296);
      if (lookahead == 'e') ADVANCE(62);
      if (lookahead == 'h') ADVANCE(209);
      if (lookahead == 'm') ADVANCE(134);
      if (lookahead == 'p') ADVANCE(220);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(461);
      if (lookahead == 'b') ADVANCE(462);
      if (lookahead == 'c') ADVANCE(463);
      END_STATE();
    case 51:
      if (lookahead == 'a') ADVANCE(464);
      if (lookahead == 'b') ADVANCE(465);
      END_STATE();
    case 52:
      if (lookahead == 'a') ADVANCE(429);
      END_STATE();
    case 53:
      if (lookahead == 'a') ADVANCE(70);
      END_STATE();
    case 54:
      if (lookahead == 'a') ADVANCE(496);
      if (lookahead == 'b') ADVANCE(497);
      if (lookahead == 'c') ADVANCE(498);
      END_STATE();
    case 55:
      if (lookahead == 'a') ADVANCE(76);
      END_STATE();
    case 56:
      if (lookahead == 'a') ADVANCE(235);
      if (lookahead == 'e') ADVANCE(97);
      if (lookahead == 'o') ADVANCE(158);
      END_STATE();
    case 57:
      if (lookahead == 'a') ADVANCE(269);
      END_STATE();
    case 58:
      if (lookahead == 'a') ADVANCE(269);
      if (lookahead == 'c') ADVANCE(50);
      if (lookahead == 'e') ADVANCE(51);
      if (lookahead == 'i') ADVANCE(159);
      if (lookahead == 'o') ADVANCE(264);
      END_STATE();
    case 59:
      if (lookahead == 'a') ADVANCE(269);
      if (lookahead == 'c') ADVANCE(50);
      if (lookahead == 'e') ADVANCE(51);
      if (lookahead == 'o') ADVANCE(142);
      END_STATE();
    case 60:
      if (lookahead == 'a') ADVANCE(269);
      if (lookahead == 'o') ADVANCE(141);
      END_STATE();
    case 61:
      if (lookahead == 'a') ADVANCE(104);
      END_STATE();
    case 62:
      if (lookahead == 'a') ADVANCE(104);
      if (lookahead == 'c') ADVANCE(423);
      END_STATE();
    case 63:
      if (lookahead == 'a') ADVANCE(87);
      END_STATE();
    case 64:
      if (lookahead == 'a') ADVANCE(198);
      END_STATE();
    case 65:
      if (lookahead == 'a') ADVANCE(284);
      END_STATE();
    case 66:
      if (lookahead == 'b') ADVANCE(239);
      if (lookahead == 'f') ADVANCE(161);
      if (lookahead == 'o') ADVANCE(301);
      if (lookahead == 'u') ADVANCE(238);
      END_STATE();
    case 67:
      if (lookahead == 'b') ADVANCE(239);
      if (lookahead == 'f') ADVANCE(161);
      if (lookahead == 'u') ADVANCE(237);
      END_STATE();
    case 68:
      if (lookahead == 'b') ADVANCE(427);
      END_STATE();
    case 69:
      if (lookahead == 'b') ADVANCE(427);
      if (lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 70:
      if (lookahead == 'b') ADVANCE(448);
      END_STATE();
    case 71:
      if (lookahead == 'b') ADVANCE(436);
      if (lookahead == 'd') ADVANCE(434);
      if (lookahead == 'e') ADVANCE(435);
      if (lookahead == 'm') ADVANCE(437);
      END_STATE();
    case 72:
      if (lookahead == 'b') ADVANCE(438);
      if (lookahead == 'm') ADVANCE(439);
      END_STATE();
    case 73:
      if (lookahead == 'b') ADVANCE(446);
      END_STATE();
    case 74:
      ADVANCE_MAP(
        'b', 542,
        'c', 544,
        'd', 484,
        'f', 483,
        'i', 540,
        'm', 135,
        'p', 541,
        's', 234,
        't', 211,
      );
      END_STATE();
    case 75:
      if (lookahead == 'b') ADVANCE(156);
      END_STATE();
    case 76:
      if (lookahead == 'b') ADVANCE(171);
      END_STATE();
    case 77:
      if (lookahead == 'c') ADVANCE(216);
      if (lookahead == 'o') ADVANCE(228);
      if (lookahead == 'p') ADVANCE(130);
      if (lookahead == 's') ADVANCE(126);
      END_STATE();
    case 78:
      if (lookahead == 'c') ADVANCE(81);
      if (lookahead == 'e') ADVANCE(82);
      if (lookahead == 'h') ADVANCE(219);
      if (lookahead == 'p') ADVANCE(220);
      END_STATE();
    case 79:
      if (lookahead == 'c') ADVANCE(362);
      END_STATE();
    case 80:
      if (lookahead == 'c') ADVANCE(362);
      if (lookahead == 't') ADVANCE(515);
      END_STATE();
    case 81:
      if (lookahead == 'c') ADVANCE(420);
      END_STATE();
    case 82:
      if (lookahead == 'c') ADVANCE(423);
      END_STATE();
    case 83:
      if (lookahead == 'c') ADVANCE(468);
      END_STATE();
    case 84:
      if (lookahead == 'c') ADVANCE(459);
      END_STATE();
    case 85:
      if (lookahead == 'c') ADVANCE(549);
      END_STATE();
    case 86:
      if (lookahead == 'c') ADVANCE(548);
      END_STATE();
    case 87:
      if (lookahead == 'c') ADVANCE(527);
      END_STATE();
    case 88:
      if (lookahead == 'c') ADVANCE(424);
      END_STATE();
    case 89:
      if (lookahead == 'c') ADVANCE(266);
      if (lookahead == 'r') ADVANCE(69);
      if (lookahead == 'w') ADVANCE(286);
      END_STATE();
    case 90:
      if (lookahead == 'c') ADVANCE(266);
      if (lookahead == 'r') ADVANCE(121);
      if (lookahead == 'w') ADVANCE(286);
      END_STATE();
    case 91:
      if (lookahead == 'c') ADVANCE(196);
      if (lookahead == 'r') ADVANCE(84);
      END_STATE();
    case 92:
      if (lookahead == 'c') ADVANCE(46);
      END_STATE();
    case 93:
      if (lookahead == 'c') ADVANCE(165);
      END_STATE();
    case 94:
      if (lookahead == 'c') ADVANCE(165);
      if (lookahead == 'd') ADVANCE(470);
      END_STATE();
    case 95:
      if (lookahead == 'c') ADVANCE(169);
      if (lookahead == 'i') ADVANCE(174);
      END_STATE();
    case 96:
      if (lookahead == 'c') ADVANCE(167);
      END_STATE();
    case 97:
      if (lookahead == 'c') ADVANCE(274);
      END_STATE();
    case 98:
      if (lookahead == 'd') ADVANCE(295);
      if (lookahead == 'm') ADVANCE(218);
      END_STATE();
    case 99:
      if (lookahead == 'd') ADVANCE(366);
      if (lookahead == 'e') ADVANCE(245);
      if (lookahead == 'h') ADVANCE(309);
      if (lookahead == 'i') ADVANCE(160);
      if (lookahead == 'r') ADVANCE(111);
      if (lookahead == 't') ADVANCE(241);
      if (lookahead == 'w') ADVANCE(270);
      END_STATE();
    case 100:
      if (lookahead == 'd') ADVANCE(366);
      if (lookahead == 'w') ADVANCE(270);
      END_STATE();
    case 101:
      if (lookahead == 'd') ADVANCE(426);
      END_STATE();
    case 102:
      if (lookahead == 'd') ADVANCE(117);
      if (lookahead == 'e') ADVANCE(71);
      if (lookahead == 't') ADVANCE(72);
      END_STATE();
    case 103:
      if (lookahead == 'd') ADVANCE(523);
      END_STATE();
    case 104:
      if (lookahead == 'd') ADVANCE(531);
      END_STATE();
    case 105:
      if (lookahead == 'd') ADVANCE(450);
      END_STATE();
    case 106:
      if (lookahead == 'd') ADVANCE(492);
      END_STATE();
    case 107:
      if (lookahead == 'd') ADVANCE(471);
      END_STATE();
    case 108:
      if (lookahead == 'd') ADVANCE(191);
      END_STATE();
    case 109:
      if (lookahead == 'd') ADVANCE(73);
      END_STATE();
    case 110:
      if (lookahead == 'd') ADVANCE(116);
      END_STATE();
    case 111:
      if (lookahead == 'd') ADVANCE(189);
      if (lookahead == 'i') ADVANCE(205);
      END_STATE();
    case 112:
      if (lookahead == 'd') ADVANCE(118);
      END_STATE();
    case 113:
      if (lookahead == 'e') ADVANCE(504);
      if (lookahead == 'g') ADVANCE(507);
      if (lookahead == 'n') ADVANCE(361);
      if (lookahead == 'p') ADVANCE(506);
      if (lookahead == 't') ADVANCE(505);
      END_STATE();
    case 114:
      if (lookahead == 'e') ADVANCE(521);
      END_STATE();
    case 115:
      if (lookahead == 'e') ADVANCE(340);
      END_STATE();
    case 116:
      if (lookahead == 'e') ADVANCE(453);
      END_STATE();
    case 117:
      if (lookahead == 'e') ADVANCE(440);
      if (lookahead == 'f') ADVANCE(441);
      END_STATE();
    case 118:
      if (lookahead == 'e') ADVANCE(547);
      END_STATE();
    case 119:
      if (lookahead == 'e') ADVANCE(458);
      END_STATE();
    case 120:
      if (lookahead == 'e') ADVANCE(538);
      END_STATE();
    case 121:
      if (lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 122:
      if (lookahead == 'e') ADVANCE(303);
      END_STATE();
    case 123:
      if (lookahead == 'e') ADVANCE(303);
      if (lookahead == 'i') ADVANCE(263);
      if (lookahead == 's') ADVANCE(240);
      END_STATE();
    case 124:
      if (lookahead == 'e') ADVANCE(101);
      END_STATE();
    case 125:
      if (lookahead == 'e') ADVANCE(101);
      if (lookahead == 'w') ADVANCE(113);
      END_STATE();
    case 126:
      if (lookahead == 'e') ADVANCE(197);
      if (lookahead == 'r') ADVANCE(86);
      END_STATE();
    case 127:
      if (lookahead == 'e') ADVANCE(172);
      if (lookahead == 'l') ADVANCE(128);
      if (lookahead == 'c' ||
          lookahead == 'p' ||
          lookahead == 'r') ADVANCE(42);
      END_STATE();
    case 128:
      if (lookahead == 'e') ADVANCE(251);
      if (lookahead == 'l') ADVANCE(376);
      END_STATE();
    case 129:
      if (lookahead == 'e') ADVANCE(183);
      END_STATE();
    case 130:
      if (lookahead == 'e') ADVANCE(246);
      END_STATE();
    case 131:
      if (lookahead == 'e') ADVANCE(256);
      END_STATE();
    case 132:
      if (lookahead == 'e') ADVANCE(259);
      END_STATE();
    case 133:
      if (lookahead == 'e') ADVANCE(259);
      if (lookahead == 'u') ADVANCE(177);
      END_STATE();
    case 134:
      if (lookahead == 'e') ADVANCE(260);
      END_STATE();
    case 135:
      if (lookahead == 'e') ADVANCE(262);
      END_STATE();
    case 136:
      if (lookahead == 'f') ADVANCE(500);
      END_STATE();
    case 137:
      if (lookahead == 'f') ADVANCE(539);
      END_STATE();
    case 138:
      if (lookahead == 'f') ADVANCE(109);
      END_STATE();
    case 139:
      if (lookahead == 'f') ADVANCE(173);
      END_STATE();
    case 140:
      if (lookahead == 'g') ADVANCE(432);
      END_STATE();
    case 141:
      if (lookahead == 'g') ADVANCE(582);
      END_STATE();
    case 142:
      if (lookahead == 'g') ADVANCE(582);
      if (lookahead == 's') ADVANCE(272);
      END_STATE();
    case 143:
      if (lookahead == 'g') ADVANCE(258);
      END_STATE();
    case 144:
      if (lookahead == 'h') ADVANCE(419);
      END_STATE();
    case 145:
      if (lookahead == 'h') ADVANCE(431);
      END_STATE();
    case 146:
      if (lookahead == 'h') ADVANCE(494);
      END_STATE();
    case 147:
      if (lookahead == 'h') ADVANCE(499);
      END_STATE();
    case 148:
      if (lookahead == 'h') ADVANCE(501);
      END_STATE();
    case 149:
      if (lookahead == 'h') ADVANCE(493);
      END_STATE();
    case 150:
      if (lookahead == 'h') ADVANCE(491);
      END_STATE();
    case 151:
      if (lookahead == 'h') ADVANCE(495);
      END_STATE();
    case 152:
      if (lookahead == 'h') ADVANCE(186);
      END_STATE();
    case 153:
      if (lookahead == 'h') ADVANCE(208);
      END_STATE();
    case 154:
      if (lookahead == 'h') ADVANCE(310);
      if (lookahead == 'l') ADVANCE(215);
      if (lookahead == 'n') ADVANCE(445);
      END_STATE();
    case 155:
      if (lookahead == 'i') ADVANCE(159);
      END_STATE();
    case 156:
      if (lookahead == 'i') ADVANCE(519);
      END_STATE();
    case 157:
      if (lookahead == 'i') ADVANCE(263);
      if (lookahead == 's') ADVANCE(240);
      END_STATE();
    case 158:
      if (lookahead == 'i') ADVANCE(105);
      if (lookahead == 'l') ADVANCE(348);
      END_STATE();
    case 159:
      if (lookahead == 'k') ADVANCE(115);
      END_STATE();
    case 160:
      if (lookahead == 'k') ADVANCE(193);
      if (lookahead == 'o') ADVANCE(530);
      END_STATE();
    case 161:
      if (lookahead == 'l') ADVANCE(94);
      END_STATE();
    case 162:
      if (lookahead == 'l') ADVANCE(514);
      END_STATE();
    case 163:
      if (lookahead == 'l') ADVANCE(348);
      END_STATE();
    case 164:
      if (lookahead == 'l') ADVANCE(376);
      END_STATE();
    case 165:
      if (lookahead == 'l') ADVANCE(380);
      END_STATE();
    case 166:
      if (lookahead == 'l') ADVANCE(502);
      END_STATE();
    case 167:
      if (lookahead == 'l') ADVANCE(370);
      END_STATE();
    case 168:
      if (lookahead == 'l') ADVANCE(425);
      END_STATE();
    case 169:
      if (lookahead == 'l') ADVANCE(45);
      END_STATE();
    case 170:
      if (lookahead == 'l') ADVANCE(204);
      END_STATE();
    case 171:
      if (lookahead == 'l') ADVANCE(120);
      END_STATE();
    case 172:
      if (lookahead == 'l') ADVANCE(107);
      END_STATE();
    case 173:
      if (lookahead == 'l') ADVANCE(93);
      END_STATE();
    case 174:
      if (lookahead == 'l') ADVANCE(164);
      END_STATE();
    case 175:
      if (lookahead == 'l') ADVANCE(168);
      END_STATE();
    case 176:
      if (lookahead == 'l') ADVANCE(275);
      END_STATE();
    case 177:
      if (lookahead == 'l') ADVANCE(276);
      END_STATE();
    case 178:
      if (lookahead == 'l') ADVANCE(283);
      END_STATE();
    case 179:
      if (lookahead == 'l') ADVANCE(231);
      if (lookahead == 'x') ADVANCE(285);
      END_STATE();
    case 180:
      if (lookahead == 'm') ADVANCE(131);
      if (lookahead == 'o') ADVANCE(236);
      if (lookahead == 't') ADVANCE(188);
      if (lookahead == 'u') ADVANCE(267);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      END_STATE();
    case 181:
      if (lookahead == 'm') ADVANCE(534);
      END_STATE();
    case 182:
      if (lookahead == 'm') ADVANCE(535);
      END_STATE();
    case 183:
      if (lookahead == 'm') ADVANCE(517);
      END_STATE();
    case 184:
      if (lookahead == 'm') ADVANCE(582);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(184);
      END_STATE();
    case 185:
      if (lookahead == 'm') ADVANCE(582);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(185);
      END_STATE();
    case 186:
      if (lookahead == 'm') ADVANCE(136);
      END_STATE();
    case 187:
      if (lookahead == 'm') ADVANCE(218);
      END_STATE();
    case 188:
      if (lookahead == 'm') ADVANCE(114);
      END_STATE();
    case 189:
      if (lookahead == 'm') ADVANCE(223);
      END_STATE();
    case 190:
      if (lookahead == 'm') ADVANCE(119);
      END_STATE();
    case 191:
      if (lookahead == 'm') ADVANCE(106);
      END_STATE();
    case 192:
      if (lookahead == 'm') ADVANCE(221);
      if (lookahead == 'r') ADVANCE(96);
      END_STATE();
    case 193:
      if (lookahead == 'm') ADVANCE(280);
      END_STATE();
    case 194:
      if (lookahead == 'n') ADVANCE(361);
      END_STATE();
    case 195:
      if (lookahead == 'n') ADVANCE(550);
      END_STATE();
    case 196:
      if (lookahead == 'n') ADVANCE(532);
      END_STATE();
    case 197:
      if (lookahead == 'n') ADVANCE(489);
      END_STATE();
    case 198:
      if (lookahead == 'n') ADVANCE(430);
      END_STATE();
    case 199:
      if (lookahead == 'n') ADVANCE(486);
      END_STATE();
    case 200:
      if (lookahead == 'n') ADVANCE(293);
      END_STATE();
    case 201:
      if (lookahead == 'n') ADVANCE(293);
      if (lookahead == 't') ADVANCE(243);
      END_STATE();
    case 202:
      if (lookahead == 'n') ADVANCE(294);
      END_STATE();
    case 203:
      if (lookahead == 'n') ADVANCE(103);
      END_STATE();
    case 204:
      if (lookahead == 'n') ADVANCE(224);
      END_STATE();
    case 205:
      if (lookahead == 'n') ADVANCE(281);
      END_STATE();
    case 206:
      if (lookahead == 'o') ADVANCE(301);
      END_STATE();
    case 207:
      if (lookahead == 'o') ADVANCE(201);
      if (lookahead == 'p') ADVANCE(248);
      END_STATE();
    case 208:
      if (lookahead == 'o') ADVANCE(384);
      END_STATE();
    case 209:
      if (lookahead == 'o') ADVANCE(384);
      if (lookahead == 'p') ADVANCE(421);
      END_STATE();
    case 210:
      if (lookahead == 'o') ADVANCE(141);
      END_STATE();
    case 211:
      if (lookahead == 'o') ADVANCE(225);
      END_STATE();
    case 212:
      if (lookahead == 'o') ADVANCE(200);
      END_STATE();
    case 213:
      if (lookahead == 'o') ADVANCE(255);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(6);
      END_STATE();
    case 214:
      if (lookahead == 'o') ADVANCE(163);
      END_STATE();
    case 215:
      if (lookahead == 'o') ADVANCE(279);
      END_STATE();
    case 216:
      if (lookahead == 'o') ADVANCE(112);
      END_STATE();
    case 217:
      if (lookahead == 'o') ADVANCE(229);
      END_STATE();
    case 218:
      if (lookahead == 'p') ADVANCE(43);
      END_STATE();
    case 219:
      if (lookahead == 'p') ADVANCE(421);
      END_STATE();
    case 220:
      if (lookahead == 'p') ADVANCE(418);
      END_STATE();
    case 221:
      if (lookahead == 'p') ADVANCE(367);
      END_STATE();
    case 222:
      if (lookahead == 'p') ADVANCE(529);
      END_STATE();
    case 223:
      if (lookahead == 'p') ADVANCE(526);
      END_STATE();
    case 224:
      if (lookahead == 'p') ADVANCE(525);
      END_STATE();
    case 225:
      if (lookahead == 'p') ADVANCE(522);
      END_STATE();
    case 226:
      if (lookahead == 'p') ADVANCE(176);
      END_STATE();
    case 227:
      if (lookahead == 'p') ADVANCE(271);
      END_STATE();
    case 228:
      if (lookahead == 'p') ADVANCE(291);
      END_STATE();
    case 229:
      if (lookahead == 'p') ADVANCE(278);
      END_STATE();
    case 230:
      if (lookahead == 'p') ADVANCE(282);
      END_STATE();
    case 231:
      if (lookahead == 'p') ADVANCE(288);
      END_STATE();
    case 232:
      if (lookahead == 'p') ADVANCE(178);
      END_STATE();
    case 233:
      if (lookahead == 'q') ADVANCE(413);
      END_STATE();
    case 234:
      if (lookahead == 'r') ADVANCE(546);
      if (lookahead == 'w') ADVANCE(545);
      END_STATE();
    case 235:
      if (lookahead == 'r') ADVANCE(503);
      END_STATE();
    case 236:
      if (lookahead == 'r') ADVANCE(54);
      if (lookahead == 's') ADVANCE(307);
      END_STATE();
    case 237:
      if (lookahead == 'r') ADVANCE(195);
      END_STATE();
    case 238:
      if (lookahead == 'r') ADVANCE(195);
      if (lookahead == 't') ADVANCE(341);
      END_STATE();
    case 239:
      if (lookahead == 'r') ADVANCE(129);
      END_STATE();
    case 240:
      if (lookahead == 'r') ADVANCE(85);
      END_STATE();
    case 241:
      if (lookahead == 'r') ADVANCE(63);
      END_STATE();
    case 242:
      if (lookahead == 'r') ADVANCE(68);
      END_STATE();
    case 243:
      if (lookahead == 'r') ADVANCE(199);
      END_STATE();
    case 244:
      if (lookahead == 'r') ADVANCE(88);
      if (lookahead == 'x') ADVANCE(414);
      if (lookahead == 'y') ADVANCE(415);
      if (lookahead == 'z') ADVANCE(416);
      END_STATE();
    case 245:
      if (lookahead == 'r') ADVANCE(273);
      END_STATE();
    case 246:
      if (lookahead == 'r') ADVANCE(277);
      END_STATE();
    case 247:
      if (lookahead == 's') ADVANCE(449);
      END_STATE();
    case 248:
      if (lookahead == 's') ADVANCE(520);
      END_STATE();
    case 249:
      if (lookahead == 's') ADVANCE(452);
      END_STATE();
    case 250:
      if (lookahead == 's') ADVANCE(454);
      END_STATE();
    case 251:
      if (lookahead == 's') ADVANCE(537);
      END_STATE();
    case 252:
      if (lookahead == 's') ADVANCE(490);
      END_STATE();
    case 253:
      if (lookahead == 's') ADVANCE(460);
      END_STATE();
    case 254:
      if (lookahead == 's') ADVANCE(145);
      END_STATE();
    case 255:
      if (lookahead == 's') ADVANCE(308);
      END_STATE();
    case 256:
      if (lookahead == 's') ADVANCE(146);
      END_STATE();
    case 257:
      if (lookahead == 's') ADVANCE(55);
      END_STATE();
    case 258:
      if (lookahead == 's') ADVANCE(147);
      END_STATE();
    case 259:
      if (lookahead == 's') ADVANCE(148);
      END_STATE();
    case 260:
      if (lookahead == 's') ADVANCE(149);
      END_STATE();
    case 261:
      if (lookahead == 's') ADVANCE(150);
      END_STATE();
    case 262:
      if (lookahead == 's') ADVANCE(151);
      END_STATE();
    case 263:
      if (lookahead == 's') ADVANCE(287);
      END_STATE();
    case 264:
      if (lookahead == 's') ADVANCE(272);
      END_STATE();
    case 265:
      if (lookahead == 't') ADVANCE(138);
      END_STATE();
    case 266:
      if (lookahead == 't') ADVANCE(455);
      END_STATE();
    case 267:
      if (lookahead == 't') ADVANCE(456);
      END_STATE();
    case 268:
      if (lookahead == 't') ADVANCE(512);
      END_STATE();
    case 269:
      if (lookahead == 't') ADVANCE(374);
      END_STATE();
    case 270:
      if (lookahead == 't') ADVANCE(349);
      END_STATE();
    case 271:
      if (lookahead == 't') ADVANCE(457);
      END_STATE();
    case 272:
      if (lookahead == 't') ADVANCE(533);
      END_STATE();
    case 273:
      if (lookahead == 't') ADVANCE(487);
      END_STATE();
    case 274:
      if (lookahead == 't') ADVANCE(513);
      END_STATE();
    case 275:
      if (lookahead == 't') ADVANCE(510);
      END_STATE();
    case 276:
      if (lookahead == 't') ADVANCE(466);
      END_STATE();
    case 277:
      if (lookahead == 't') ADVANCE(488);
      END_STATE();
    case 278:
      if (lookahead == 't') ADVANCE(451);
      END_STATE();
    case 279:
      if (lookahead == 't') ADVANCE(528);
      END_STATE();
    case 280:
      if (lookahead == 't') ADVANCE(518);
      END_STATE();
    case 281:
      if (lookahead == 't') ADVANCE(524);
      END_STATE();
    case 282:
      if (lookahead == 't') ADVANCE(467);
      END_STATE();
    case 283:
      if (lookahead == 't') ADVANCE(511);
      END_STATE();
    case 284:
      if (lookahead == 't') ADVANCE(383);
      END_STATE();
    case 285:
      if (lookahead == 't') ADVANCE(44);
      END_STATE();
    case 286:
      if (lookahead == 't') ADVANCE(53);
      END_STATE();
    case 287:
      if (lookahead == 't') ADVANCE(222);
      END_STATE();
    case 288:
      if (lookahead == 't') ADVANCE(47);
      END_STATE();
    case 289:
      if (lookahead == 't') ADVANCE(202);
      END_STATE();
    case 290:
      if (lookahead == 't') ADVANCE(166);
      END_STATE();
    case 291:
      if (lookahead == 't') ADVANCE(252);
      END_STATE();
    case 292:
      if (lookahead == 't') ADVANCE(190);
      END_STATE();
    case 293:
      if (lookahead == 'u') ADVANCE(363);
      END_STATE();
    case 294:
      if (lookahead == 'u') ADVANCE(447);
      END_STATE();
    case 295:
      if (lookahead == 'u') ADVANCE(181);
      END_STATE();
    case 296:
      if (lookahead == 'u') ADVANCE(182);
      END_STATE();
    case 297:
      if (lookahead == 'w') ADVANCE(113);
      END_STATE();
    case 298:
      if (lookahead == 'w') ADVANCE(299);
      END_STATE();
    case 299:
      if (lookahead == 'w') ADVANCE(140);
      END_STATE();
    case 300:
      if (lookahead == 'w') ADVANCE(194);
      END_STATE();
    case 301:
      if (lookahead == 'x') ADVANCE(417);
      END_STATE();
    case 302:
      if (lookahead == 'x') ADVANCE(400);
      if (lookahead == 'y') ADVANCE(401);
      if (lookahead == 'z') ADVANCE(402);
      END_STATE();
    case 303:
      if (lookahead == 'x') ADVANCE(422);
      END_STATE();
    case 304:
      if (lookahead == 'x') ADVANCE(406);
      if (lookahead == 'y') ADVANCE(407);
      if (lookahead == 'z') ADVANCE(408);
      END_STATE();
    case 305:
      if (lookahead == 'x') ADVANCE(249);
      END_STATE();
    case 306:
      if (lookahead == 'x') ADVANCE(79);
      END_STATE();
    case 307:
      if (lookahead == 'y') ADVANCE(379);
      END_STATE();
    case 308:
      if (lookahead == 'y') ADVANCE(378);
      END_STATE();
    case 309:
      if (lookahead == 'y') ADVANCE(250);
      END_STATE();
    case 310:
      if (lookahead == 'y') ADVANCE(253);
      END_STATE();
    case 311:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(315);
      END_STATE();
    case 312:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(565);
      END_STATE();
    case 313:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(312);
      END_STATE();
    case 314:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(313);
      END_STATE();
    case 315:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(314);
      END_STATE();
    case 316:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(578);
      END_STATE();
    case 317:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(185);
      END_STATE();
    case 318:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(574);
      END_STATE();
    case 319:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(580);
      END_STATE();
    case 320:
      if (lookahead == 'n' ||
          lookahead == 'p') ADVANCE(387);
      END_STATE();
    case 321:
      if (lookahead == 'c' ||
          lookahead == 'p' ||
          lookahead == 'r') ADVANCE(42);
      END_STATE();
    case 322:
      if (('a' <= lookahead && lookahead <= 'd')) ADVANCE(536);
      END_STATE();
    case 323:
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(6);
      END_STATE();
    case 324:
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(581);
      END_STATE();
    case 325:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(577);
      END_STATE();
    case 326:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      END_STATE();
    case 327:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(578);
      END_STATE();
    case 328:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(572);
      END_STATE();
    case 329:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(184);
      END_STATE();
    case 330:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(185);
      END_STATE();
    case 331:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(573);
      END_STATE();
    case 332:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(574);
      END_STATE();
    case 333:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(579);
      END_STATE();
    case 334:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(580);
      END_STATE();
    case 335:
      if (set_contains(sym_particles_character_set_1, 15, lookahead)) ADVANCE(385);
      END_STATE();
    case 336:
      if (eof) ADVANCE(337);
      ADVANCE_MAP(
        '\n', 562,
        '#', 345,
        '$', 564,
        '*', 372,
        '+', 31,
        '-', 32,
        '.', 325,
        'a', 90,
        'b', 67,
        'c', 180,
        'd', 48,
        'e', 476,
        'f', 473,
        'h', 157,
        'i', 584,
        'j', 582,
        'k', 77,
        'l', 59,
        'm', 442,
        'n', 207,
        'o', 265,
        'p', 99,
        'r', 583,
        's', 74,
        't', 477,
        'u', 368,
        'v', 56,
        'w', 297,
        'x', 247,
        'z', 322,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_0);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_0);
      if (lookahead == '.') ADVANCE(573);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(33);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_like);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_but);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_imp_COLON);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_vol);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_pwt);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_ext_COLON);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_s);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_s);
      if (lookahead == 'o') ADVANCE(396);
      if (lookahead == 'p') ADVANCE(144);
      if (lookahead == 'q') ADVANCE(412);
      if (lookahead == 's') ADVANCE(234);
      if (lookahead == 'x') ADVANCE(397);
      if (lookahead == 'y') ADVANCE(398);
      if (lookahead == 'z') ADVANCE(399);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_s);
      if (lookahead == 'o') ADVANCE(396);
      if (lookahead == 'p') ADVANCE(144);
      if (lookahead == 'q') ADVANCE(412);
      if (lookahead == 'x') ADVANCE(397);
      if (lookahead == 'y') ADVANCE(398);
      if (lookahead == 'z') ADVANCE(399);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_v);
      if (lookahead == 'a') ADVANCE(235);
      if (lookahead == 'e') ADVANCE(97);
      if (lookahead == 'o') ADVANCE(158);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_v);
      if (lookahead == 'o') ADVANCE(163);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_x);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_x);
      if (lookahead == 's') ADVANCE(449);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_y);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_z);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_fcl_COLON);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_wwn);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_dxc);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_nonu);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym_cell_para_nonu_token1);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym_cell_para_nonu_token1);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(364);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(365);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_pd);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_tmp);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_u);
      if (lookahead == 'n') ADVANCE(83);
      if (lookahead == 'r') ADVANCE(64);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_u);
      if (lookahead == 'n') ADVANCE(92);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_trcl);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == 'c') ADVANCE(326);
      if (lookahead == 'f') ADVANCE(474);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == 'f') ADVANCE(474);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(anon_sym_lat);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_cell_para_lat_token1);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(anon_sym_fill);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(anon_sym_elpt_COLON);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(anon_sym_cosy);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(anon_sym_cosy);
      if (lookahead == 'p') ADVANCE(469);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(anon_sym_bflcl);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(anon_sym_unc_COLON);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym_cell_para_unc_token1);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(anon_sym_mat);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(anon_sym_rho);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_particles);
      if (lookahead == ',') ADVANCE(335);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_particles);
      if (lookahead == ',') ADVANCE(335);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(6);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_neutron_photon);
      if (lookahead == ',') ADVANCE(320);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_neutron_photon);
      if (lookahead == ',') ADVANCE(320);
      if (lookahead == 'o') ADVANCE(201);
      if (lookahead == 'p') ADVANCE(248);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym_surface_card_token1);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym_surface_card_token1);
      if (lookahead == 'f') ADVANCE(472);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(anon_sym_p);
      ADVANCE_MAP(
        ',', 320,
        'd', 366,
        'e', 245,
        'h', 309,
        'i', 160,
        'r', 111,
        't', 241,
        'w', 270,
        'x', 393,
        'y', 394,
        'z', 395,
      );
      END_STATE();
    case 392:
      ACCEPT_TOKEN(anon_sym_p);
      if (lookahead == 'x') ADVANCE(393);
      if (lookahead == 'y') ADVANCE(394);
      if (lookahead == 'z') ADVANCE(395);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(anon_sym_px);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(anon_sym_py);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(anon_sym_pz);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(anon_sym_so);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(anon_sym_sx);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(anon_sym_sy);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(anon_sym_sz);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(anon_sym_c_SLASHx);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(anon_sym_c_SLASHy);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(anon_sym_c_SLASHz);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(anon_sym_cx);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(anon_sym_cy);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(anon_sym_cz);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(anon_sym_k_SLASHx);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(anon_sym_k_SLASHy);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(anon_sym_k_SLASHz);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(anon_sym_kx);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(anon_sym_ky);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(anon_sym_kz);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(anon_sym_sq);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(anon_sym_gq);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(anon_sym_tx);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(anon_sym_ty);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(anon_sym_tz);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(anon_sym_box);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(anon_sym_rpp);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(anon_sym_sph);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(anon_sym_rcc);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(anon_sym_rhp);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(anon_sym_hex);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(anon_sym_rec);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(anon_sym_trc);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(anon_sym_ell);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(anon_sym_wed);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(anon_sym_arb);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(anon_sym_tr);
      if (lookahead == 'o') ADVANCE(230);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(anon_sym_area);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(anon_sym_uran);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(anon_sym_mesh);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(anon_sym_dawwg);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(anon_sym_dm);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(anon_sym_embed);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(anon_sym_embee);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(anon_sym_embeb);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(anon_sym_embem);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(anon_sym_embtb);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(anon_sym_embtm);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(anon_sym_embde);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(anon_sym_embdf);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(anon_sym_m);
      if (lookahead == 'e') ADVANCE(254);
      if (lookahead == 'g') ADVANCE(217);
      if (lookahead == 'o') ADVANCE(110);
      if (lookahead == 'p') ADVANCE(154);
      if (lookahead == 's') ADVANCE(152);
      if (lookahead == 't') ADVANCE(443);
      if (lookahead == 'x') ADVANCE(444);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(anon_sym_mt);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(anon_sym_mx);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(anon_sym_mpn);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(anon_sym_otfdb);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(anon_sym_totnu);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(anon_sym_awtab);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(anon_sym_xs);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(anon_sym_void);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(anon_sym_mgopt);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(anon_sym_drxs);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(anon_sym_mode);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(anon_sym_phys);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(anon_sym_act);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(anon_sym_cut);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(anon_sym_elpt);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(anon_sym_thtme);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(anon_sym_dbrc);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(anon_sym_mphys);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(anon_sym_lca);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(anon_sym_lcb);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(anon_sym_lcc);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(anon_sym_lea);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(anon_sym_leb);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(anon_sym_fmult);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(anon_sym_tropt);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(anon_sym_unc);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(anon_sym_cosyp);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(anon_sym_bfld);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(anon_sym_field);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(aux_sym_ignored_data_card_token1);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(aux_sym_ignored_data_card_token1);
      if (lookahead == 'c') ADVANCE(162);
      if (lookahead == 'i') ADVANCE(127);
      if (lookahead == 'm') ADVANCE(133);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(aux_sym_ignored_data_card_token1);
      if (lookahead == 'i') ADVANCE(321);
      if (lookahead == 'm') ADVANCE(132);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(aux_sym_ignored_data_card_token2);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(anon_sym_e);
      if (lookahead == 'l') ADVANCE(227);
      if (lookahead == 'm') ADVANCE(481);
      if (lookahead == 'n') ADVANCE(108);
      if (lookahead == 'r') ADVANCE(143);
      if (lookahead == 's') ADVANCE(226);
      if (lookahead == 'x') ADVANCE(268);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(anon_sym_t);
      if (lookahead == 'a') ADVANCE(170);
      if (lookahead == 'f') ADVANCE(485);
      if (lookahead == 'h') ADVANCE(292);
      if (lookahead == 'm') ADVANCE(482);
      if (lookahead == 'o') ADVANCE(289);
      if (lookahead == 'r') ADVANCE(428);
      if (lookahead == 's') ADVANCE(232);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(aux_sym_ignored_data_card_token3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(anon_sym_de);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(anon_sym_df);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(anon_sym_em);
      if (lookahead == 'b') ADVANCE(102);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(anon_sym_tm);
      if (lookahead == 'e') ADVANCE(261);
      if (lookahead == 'p') ADVANCE(367);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(anon_sym_sf);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(anon_sym_sd);
      if (lookahead == 'e') ADVANCE(137);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(anon_sym_tf);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(anon_sym_notrn);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(anon_sym_pert);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(anon_sym_kpert);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(anon_sym_ksen);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(anon_sym_kopts);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(anon_sym_tmesh);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(anon_sym_endmd);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(anon_sym_rmesh);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(anon_sym_cmesh);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(anon_sym_smesh);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(anon_sym_cora);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(anon_sym_corb);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(anon_sym_corc);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(anon_sym_ergsh);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(anon_sym_mshmf);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(aux_sym_ignored_data_card_token4);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(anon_sym_spdtl);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(anon_sym_var);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(anon_sym_wwe);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(anon_sym_wwt);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(anon_sym_wwp);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(anon_sym_wwg);
      if (lookahead == 'e') ADVANCE(508);
      if (lookahead == 't') ADVANCE(509);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(anon_sym_wwge);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(anon_sym_wwgt);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(anon_sym_esplt);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(anon_sym_tsplt);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(anon_sym_ext);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(anon_sym_vect);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(anon_sym_fcl);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(anon_sym_dxt);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(anon_sym_dd);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(anon_sym_bbrem);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(anon_sym_pikmt);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(anon_sym_spabi);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(anon_sym_nps);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(anon_sym_ctme);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(anon_sym_stop);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(anon_sym_rand);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(anon_sym_print);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(anon_sym_talnp);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(anon_sym_prdmp);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(anon_sym_ptrac);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(anon_sym_mplot);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(anon_sym_histp);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(anon_sym_pio);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(anon_sym_read);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(anon_sym_dbcn);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(anon_sym_lost);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(anon_sym_idum);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(anon_sym_rdum);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(aux_sym_ignored_data_card_token5);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(anon_sym_files);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(anon_sym_disable);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(anon_sym_sdef);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(anon_sym_si);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(anon_sym_sp);
      if (lookahead == 'a') ADVANCE(75);
      if (lookahead == 'd') ADVANCE(290);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(anon_sym_sb);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(anon_sym_ds);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(anon_sym_sc);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(anon_sym_ssw);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(anon_sym_ssr);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(anon_sym_kcode);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(anon_sym_ksrc);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(anon_sym_hsrc);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(anon_sym_burn);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_other_card_block);
      if (lookahead == '\n') ADVANCE(559);
      if (lookahead == '$') ADVANCE(554);
      if (lookahead == '&') ADVANCE(553);
      if (lookahead == 'c') ADVANCE(560);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(551);
      if (lookahead != 0) ADVANCE(561);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_other_card_block);
      if (lookahead == '\n') ADVANCE(561);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(552);
      if (lookahead != 0) ADVANCE(554);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_other_card_block);
      if (lookahead == '\n') ADVANCE(561);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(553);
      if (lookahead != 0) ADVANCE(561);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_other_card_block);
      if (lookahead == '\n') ADVANCE(561);
      if (lookahead != 0) ADVANCE(554);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_other_card_block);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(561);
      if (lookahead != 0) ADVANCE(561);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_other_card_block);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(555);
      if (lookahead != 0) ADVANCE(561);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_other_card_block);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(556);
      if (lookahead != 0) ADVANCE(561);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_other_card_block);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(557);
      if (lookahead != 0) ADVANCE(561);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_other_card_block);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(558);
      if (lookahead != 0) ADVANCE(561);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_other_card_block);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(552);
      if (lookahead != 0) ADVANCE(561);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_other_card_block);
      if (lookahead != 0) ADVANCE(561);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_delimiter);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(315);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_inline_comment);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(564);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(563);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_inline_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(564);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_line_continuation);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_endline);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(315);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_positive_integer);
      if (lookahead == '.') ADVANCE(579);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(568);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_positive_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_signed_integer);
      if (lookahead == '.') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(570);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_signed_integer);
      ADVANCE_MAP(
        '.', 184,
        'i', 586,
        'l', 210,
        'E', 317,
        'e', 317,
        'j', 582,
        'm', 582,
        'r', 582,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(571);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_signed_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(572);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_signed_float);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(573);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_signed_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(574);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_number);
      ADVANCE_MAP(
        '.', 577,
        'i', 586,
        'l', 210,
        'E', 316,
        'e', 316,
        'j', 582,
        'm', 582,
        'r', 582,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(579);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(576);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'm') ADVANCE(582);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(577);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'm') ADVANCE(582);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(578);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(579);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(580);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym_facet_half_space);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym_shortcut);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym_shortcut);
      if (lookahead == 'a') ADVANCE(203);
      if (lookahead == 'd') ADVANCE(296);
      if (lookahead == 'e') ADVANCE(61);
      if (lookahead == 'm') ADVANCE(134);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym_shortcut);
      if (lookahead == 'd') ADVANCE(295);
      if (lookahead == 'l') ADVANCE(210);
      if (lookahead == 'm') ADVANCE(218);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym_shortcut);
      if (lookahead == 'h') ADVANCE(208);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym_shortcut);
      if (lookahead == 'l') ADVANCE(210);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym_shortcut);
      if (lookahead == 'l') ADVANCE(210);
      if (lookahead == 'm') ADVANCE(218);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_ignored_data);
      if (lookahead == '\n') ADVANCE(565);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(5);
      if (lookahead != 0) ADVANCE(590);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_ignored_data);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(6);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(590);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym_ignored_data);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(590);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 0, .external_lex_state = 2},
  [2] = {.lex_state = 336},
  [3] = {.lex_state = 336},
  [4] = {.lex_state = 336},
  [5] = {.lex_state = 336},
  [6] = {.lex_state = 336},
  [7] = {.lex_state = 336},
  [8] = {.lex_state = 336},
  [9] = {.lex_state = 336},
  [10] = {.lex_state = 336},
  [11] = {.lex_state = 9},
  [12] = {.lex_state = 9},
  [13] = {.lex_state = 9},
  [14] = {.lex_state = 9},
  [15] = {.lex_state = 9},
  [16] = {.lex_state = 9},
  [17] = {.lex_state = 9},
  [18] = {.lex_state = 27},
  [19] = {.lex_state = 27},
  [20] = {.lex_state = 27},
  [21] = {.lex_state = 27},
  [22] = {.lex_state = 9},
  [23] = {.lex_state = 9},
  [24] = {.lex_state = 9},
  [25] = {.lex_state = 9},
  [26] = {.lex_state = 9},
  [27] = {.lex_state = 9},
  [28] = {.lex_state = 9},
  [29] = {.lex_state = 9},
  [30] = {.lex_state = 9},
  [31] = {.lex_state = 11},
  [32] = {.lex_state = 11},
  [33] = {.lex_state = 11},
  [34] = {.lex_state = 9},
  [35] = {.lex_state = 9},
  [36] = {.lex_state = 9},
  [37] = {.lex_state = 9},
  [38] = {.lex_state = 9},
  [39] = {.lex_state = 9},
  [40] = {.lex_state = 9},
  [41] = {.lex_state = 9},
  [42] = {.lex_state = 9},
  [43] = {.lex_state = 9},
  [44] = {.lex_state = 9},
  [45] = {.lex_state = 9},
  [46] = {.lex_state = 9},
  [47] = {.lex_state = 9},
  [48] = {.lex_state = 9},
  [49] = {.lex_state = 9},
  [50] = {.lex_state = 9},
  [51] = {.lex_state = 9},
  [52] = {.lex_state = 9},
  [53] = {.lex_state = 9},
  [54] = {.lex_state = 9},
  [55] = {.lex_state = 9},
  [56] = {.lex_state = 9},
  [57] = {.lex_state = 9},
  [58] = {.lex_state = 9},
  [59] = {.lex_state = 9},
  [60] = {.lex_state = 9},
  [61] = {.lex_state = 9},
  [62] = {.lex_state = 9},
  [63] = {.lex_state = 9},
  [64] = {.lex_state = 9},
  [65] = {.lex_state = 9},
  [66] = {.lex_state = 9},
  [67] = {.lex_state = 9},
  [68] = {.lex_state = 9},
  [69] = {.lex_state = 9},
  [70] = {.lex_state = 9},
  [71] = {.lex_state = 9},
  [72] = {.lex_state = 9},
  [73] = {.lex_state = 9},
  [74] = {.lex_state = 9},
  [75] = {.lex_state = 9},
  [76] = {.lex_state = 9},
  [77] = {.lex_state = 9},
  [78] = {.lex_state = 9},
  [79] = {.lex_state = 9},
  [80] = {.lex_state = 9},
  [81] = {.lex_state = 9},
  [82] = {.lex_state = 9},
  [83] = {.lex_state = 9},
  [84] = {.lex_state = 9},
  [85] = {.lex_state = 9},
  [86] = {.lex_state = 9},
  [87] = {.lex_state = 9},
  [88] = {.lex_state = 9},
  [89] = {.lex_state = 9},
  [90] = {.lex_state = 9},
  [91] = {.lex_state = 9},
  [92] = {.lex_state = 9},
  [93] = {.lex_state = 9},
  [94] = {.lex_state = 9},
  [95] = {.lex_state = 9},
  [96] = {.lex_state = 9},
  [97] = {.lex_state = 9},
  [98] = {.lex_state = 9},
  [99] = {.lex_state = 9},
  [100] = {.lex_state = 4},
  [101] = {.lex_state = 4},
  [102] = {.lex_state = 4},
  [103] = {.lex_state = 4},
  [104] = {.lex_state = 4},
  [105] = {.lex_state = 28},
  [106] = {.lex_state = 13},
  [107] = {.lex_state = 4},
  [108] = {.lex_state = 21},
  [109] = {.lex_state = 13},
  [110] = {.lex_state = 13},
  [111] = {.lex_state = 13},
  [112] = {.lex_state = 21},
  [113] = {.lex_state = 21},
  [114] = {.lex_state = 13},
  [115] = {.lex_state = 13},
  [116] = {.lex_state = 13},
  [117] = {.lex_state = 13},
  [118] = {.lex_state = 21},
  [119] = {.lex_state = 28},
  [120] = {.lex_state = 21},
  [121] = {.lex_state = 15},
  [122] = {.lex_state = 4},
  [123] = {.lex_state = 15},
  [124] = {.lex_state = 15},
  [125] = {.lex_state = 4},
  [126] = {.lex_state = 15},
  [127] = {.lex_state = 15},
  [128] = {.lex_state = 17},
  [129] = {.lex_state = 17},
  [130] = {.lex_state = 19},
  [131] = {.lex_state = 13},
  [132] = {.lex_state = 15},
  [133] = {.lex_state = 15},
  [134] = {.lex_state = 27},
  [135] = {.lex_state = 4},
  [136] = {.lex_state = 15},
  [137] = {.lex_state = 21},
  [138] = {.lex_state = 13},
  [139] = {.lex_state = 17},
  [140] = {.lex_state = 17},
  [141] = {.lex_state = 13},
  [142] = {.lex_state = 19},
  [143] = {.lex_state = 15},
  [144] = {.lex_state = 4},
  [145] = {.lex_state = 15},
  [146] = {.lex_state = 17},
  [147] = {.lex_state = 15},
  [148] = {.lex_state = 15},
  [149] = {.lex_state = 19},
  [150] = {.lex_state = 15},
  [151] = {.lex_state = 15},
  [152] = {.lex_state = 15},
  [153] = {.lex_state = 21},
  [154] = {.lex_state = 4},
  [155] = {.lex_state = 29},
  [156] = {.lex_state = 15},
  [157] = {.lex_state = 4},
  [158] = {.lex_state = 15},
  [159] = {.lex_state = 17},
  [160] = {.lex_state = 27},
  [161] = {.lex_state = 15},
  [162] = {.lex_state = 15},
  [163] = {.lex_state = 15},
  [164] = {.lex_state = 365},
  [165] = {.lex_state = 15},
  [166] = {.lex_state = 27},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 27},
  [169] = {.lex_state = 15},
  [170] = {.lex_state = 15},
  [171] = {.lex_state = 4},
  [172] = {.lex_state = 15},
  [173] = {.lex_state = 15},
  [174] = {.lex_state = 15},
  [175] = {.lex_state = 15},
  [176] = {.lex_state = 13},
  [177] = {.lex_state = 9},
  [178] = {.lex_state = 15},
  [179] = {.lex_state = 30},
  [180] = {.lex_state = 15},
  [181] = {.lex_state = 19},
  [182] = {.lex_state = 4},
  [183] = {.lex_state = 15},
  [184] = {.lex_state = 27},
  [185] = {.lex_state = 15},
  [186] = {.lex_state = 4},
  [187] = {.lex_state = 15},
  [188] = {.lex_state = 15},
  [189] = {.lex_state = 17},
  [190] = {.lex_state = 29},
  [191] = {.lex_state = 4},
  [192] = {.lex_state = 336},
  [193] = {.lex_state = 15},
  [194] = {.lex_state = 27},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 15},
  [197] = {.lex_state = 15},
  [198] = {.lex_state = 27},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 15},
  [201] = {.lex_state = 27},
  [202] = {.lex_state = 15},
  [203] = {.lex_state = 4},
  [204] = {.lex_state = 15},
  [205] = {.lex_state = 4},
  [206] = {.lex_state = 19},
  [207] = {.lex_state = 15},
  [208] = {.lex_state = 22},
  [209] = {.lex_state = 19},
  [210] = {.lex_state = 27},
  [211] = {.lex_state = 336},
  [212] = {.lex_state = 9},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 15},
  [215] = {.lex_state = 27},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 4},
  [218] = {.lex_state = 4},
  [219] = {.lex_state = 365},
  [220] = {.lex_state = 4},
  [221] = {.lex_state = 9},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 15},
  [224] = {.lex_state = 19},
  [225] = {.lex_state = 9},
  [226] = {.lex_state = 15},
  [227] = {.lex_state = 15},
  [228] = {.lex_state = 27},
  [229] = {.lex_state = 15},
  [230] = {.lex_state = 15},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 27},
  [233] = {.lex_state = 19},
  [234] = {.lex_state = 15},
  [235] = {.lex_state = 4},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 4},
  [238] = {.lex_state = 15},
  [239] = {.lex_state = 4},
  [240] = {.lex_state = 27},
  [241] = {.lex_state = 19},
  [242] = {.lex_state = 15},
  [243] = {.lex_state = 15},
  [244] = {.lex_state = 19},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 19},
  [247] = {.lex_state = 27},
  [248] = {.lex_state = 19},
  [249] = {.lex_state = 15},
  [250] = {.lex_state = 27},
  [251] = {.lex_state = 27},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 15},
  [254] = {.lex_state = 27},
  [255] = {.lex_state = 15},
  [256] = {.lex_state = 19},
  [257] = {.lex_state = 4},
  [258] = {.lex_state = 27},
  [259] = {.lex_state = 4},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 15},
  [262] = {.lex_state = 4},
  [263] = {.lex_state = 9},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 27},
  [266] = {.lex_state = 336},
  [267] = {.lex_state = 27},
  [268] = {.lex_state = 30},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 9},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 0},
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
    [anon_sym_imp_COLON] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_vol] = ACTIONS(1),
    [anon_sym_pwt] = ACTIONS(1),
    [anon_sym_s] = ACTIONS(1),
    [anon_sym_v] = ACTIONS(1),
    [anon_sym_x] = ACTIONS(1),
    [anon_sym_y] = ACTIONS(1),
    [anon_sym_z] = ACTIONS(1),
    [anon_sym_wwn] = ACTIONS(1),
    [anon_sym_dxc] = ACTIONS(1),
    [anon_sym_nonu] = ACTIONS(1),
    [anon_sym_pd] = ACTIONS(1),
    [anon_sym_tmp] = ACTIONS(1),
    [anon_sym_u] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_lat] = ACTIONS(1),
    [aux_sym_cell_para_lat_token1] = ACTIONS(1),
    [anon_sym_fill] = ACTIONS(1),
    [anon_sym_cosy] = ACTIONS(1),
    [anon_sym_bflcl] = ACTIONS(1),
    [aux_sym_cell_para_unc_token1] = ACTIONS(1),
    [anon_sym_rho] = ACTIONS(1),
    [sym_neutron_photon] = ACTIONS(1),
    [aux_sym_surface_card_token1] = ACTIONS(1),
    [anon_sym_p] = ACTIONS(1),
    [anon_sym_px] = ACTIONS(1),
    [anon_sym_py] = ACTIONS(1),
    [anon_sym_pz] = ACTIONS(1),
    [anon_sym_so] = ACTIONS(1),
    [anon_sym_sx] = ACTIONS(1),
    [anon_sym_sy] = ACTIONS(1),
    [anon_sym_sz] = ACTIONS(1),
    [anon_sym_c_SLASHx] = ACTIONS(1),
    [anon_sym_c_SLASHy] = ACTIONS(1),
    [anon_sym_c_SLASHz] = ACTIONS(1),
    [anon_sym_cx] = ACTIONS(1),
    [anon_sym_cy] = ACTIONS(1),
    [anon_sym_cz] = ACTIONS(1),
    [anon_sym_k_SLASHx] = ACTIONS(1),
    [anon_sym_k_SLASHy] = ACTIONS(1),
    [anon_sym_k_SLASHz] = ACTIONS(1),
    [anon_sym_kx] = ACTIONS(1),
    [anon_sym_ky] = ACTIONS(1),
    [anon_sym_kz] = ACTIONS(1),
    [anon_sym_sq] = ACTIONS(1),
    [anon_sym_gq] = ACTIONS(1),
    [anon_sym_box] = ACTIONS(1),
    [anon_sym_rpp] = ACTIONS(1),
    [anon_sym_sph] = ACTIONS(1),
    [anon_sym_rcc] = ACTIONS(1),
    [anon_sym_rhp] = ACTIONS(1),
    [anon_sym_hex] = ACTIONS(1),
    [anon_sym_rec] = ACTIONS(1),
    [anon_sym_wed] = ACTIONS(1),
    [anon_sym_arb] = ACTIONS(1),
    [anon_sym_tr] = ACTIONS(1),
    [anon_sym_area] = ACTIONS(1),
    [anon_sym_uran] = ACTIONS(1),
    [anon_sym_mesh] = ACTIONS(1),
    [anon_sym_dawwg] = ACTIONS(1),
    [anon_sym_dm] = ACTIONS(1),
    [anon_sym_embed] = ACTIONS(1),
    [anon_sym_embee] = ACTIONS(1),
    [anon_sym_embeb] = ACTIONS(1),
    [anon_sym_embem] = ACTIONS(1),
    [anon_sym_embtb] = ACTIONS(1),
    [anon_sym_embtm] = ACTIONS(1),
    [anon_sym_embde] = ACTIONS(1),
    [anon_sym_embdf] = ACTIONS(1),
    [anon_sym_m] = ACTIONS(1),
    [anon_sym_mt] = ACTIONS(1),
    [anon_sym_mx] = ACTIONS(1),
    [anon_sym_mpn] = ACTIONS(1),
    [anon_sym_otfdb] = ACTIONS(1),
    [anon_sym_totnu] = ACTIONS(1),
    [anon_sym_awtab] = ACTIONS(1),
    [anon_sym_xs] = ACTIONS(1),
    [anon_sym_void] = ACTIONS(1),
    [anon_sym_mgopt] = ACTIONS(1),
    [anon_sym_drxs] = ACTIONS(1),
    [anon_sym_mode] = ACTIONS(1),
    [anon_sym_phys] = ACTIONS(1),
    [anon_sym_act] = ACTIONS(1),
    [anon_sym_cut] = ACTIONS(1),
    [anon_sym_elpt] = ACTIONS(1),
    [anon_sym_thtme] = ACTIONS(1),
    [anon_sym_dbrc] = ACTIONS(1),
    [anon_sym_mphys] = ACTIONS(1),
    [anon_sym_lca] = ACTIONS(1),
    [anon_sym_lcb] = ACTIONS(1),
    [anon_sym_lcc] = ACTIONS(1),
    [anon_sym_lea] = ACTIONS(1),
    [anon_sym_leb] = ACTIONS(1),
    [anon_sym_fmult] = ACTIONS(1),
    [anon_sym_tropt] = ACTIONS(1),
    [anon_sym_unc] = ACTIONS(1),
    [anon_sym_cosyp] = ACTIONS(1),
    [anon_sym_bfld] = ACTIONS(1),
    [anon_sym_field] = ACTIONS(1),
    [aux_sym_ignored_data_card_token1] = ACTIONS(1),
    [aux_sym_ignored_data_card_token2] = ACTIONS(1),
    [anon_sym_e] = ACTIONS(1),
    [anon_sym_t] = ACTIONS(1),
    [anon_sym_de] = ACTIONS(1),
    [anon_sym_df] = ACTIONS(1),
    [anon_sym_em] = ACTIONS(1),
    [anon_sym_tm] = ACTIONS(1),
    [anon_sym_tf] = ACTIONS(1),
    [anon_sym_notrn] = ACTIONS(1),
    [anon_sym_pert] = ACTIONS(1),
    [anon_sym_kpert] = ACTIONS(1),
    [anon_sym_ksen] = ACTIONS(1),
    [anon_sym_kopts] = ACTIONS(1),
    [anon_sym_tmesh] = ACTIONS(1),
    [anon_sym_endmd] = ACTIONS(1),
    [anon_sym_rmesh] = ACTIONS(1),
    [anon_sym_cmesh] = ACTIONS(1),
    [anon_sym_cora] = ACTIONS(1),
    [anon_sym_corb] = ACTIONS(1),
    [anon_sym_corc] = ACTIONS(1),
    [anon_sym_ergsh] = ACTIONS(1),
    [anon_sym_mshmf] = ACTIONS(1),
    [aux_sym_ignored_data_card_token4] = ACTIONS(1),
    [anon_sym_var] = ACTIONS(1),
    [anon_sym_wwe] = ACTIONS(1),
    [anon_sym_wwt] = ACTIONS(1),
    [anon_sym_wwp] = ACTIONS(1),
    [anon_sym_wwg] = ACTIONS(1),
    [anon_sym_wwge] = ACTIONS(1),
    [anon_sym_wwgt] = ACTIONS(1),
    [anon_sym_esplt] = ACTIONS(1),
    [anon_sym_tsplt] = ACTIONS(1),
    [anon_sym_ext] = ACTIONS(1),
    [anon_sym_vect] = ACTIONS(1),
    [anon_sym_fcl] = ACTIONS(1),
    [anon_sym_dxt] = ACTIONS(1),
    [anon_sym_dd] = ACTIONS(1),
    [anon_sym_bbrem] = ACTIONS(1),
    [anon_sym_pikmt] = ACTIONS(1),
    [anon_sym_nps] = ACTIONS(1),
    [anon_sym_ctme] = ACTIONS(1),
    [anon_sym_rand] = ACTIONS(1),
    [anon_sym_print] = ACTIONS(1),
    [anon_sym_talnp] = ACTIONS(1),
    [anon_sym_prdmp] = ACTIONS(1),
    [anon_sym_ptrac] = ACTIONS(1),
    [anon_sym_mplot] = ACTIONS(1),
    [anon_sym_histp] = ACTIONS(1),
    [anon_sym_pio] = ACTIONS(1),
    [anon_sym_read] = ACTIONS(1),
    [anon_sym_dbcn] = ACTIONS(1),
    [anon_sym_lost] = ACTIONS(1),
    [anon_sym_idum] = ACTIONS(1),
    [anon_sym_rdum] = ACTIONS(1),
    [anon_sym_files] = ACTIONS(1),
    [anon_sym_disable] = ACTIONS(1),
    [anon_sym_ds] = ACTIONS(1),
    [anon_sym_ssw] = ACTIONS(1),
    [anon_sym_ssr] = ACTIONS(1),
    [anon_sym_kcode] = ACTIONS(1),
    [anon_sym_ksrc] = ACTIONS(1),
    [anon_sym_hsrc] = ACTIONS(1),
    [anon_sym_burn] = ACTIONS(1),
    [sym_delimiter] = ACTIONS(1),
    [sym_inline_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_endline] = ACTIONS(1),
    [sym_header] = ACTIONS(1),
    [sym_error] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(222),
    [sym_inline_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_header] = ACTIONS(5),
  },
  [2] = {
    [sym_data_card] = STATE(3),
    [sym_transform_card] = STATE(263),
    [sym_universe_card] = STATE(263),
    [sym_lattice_card] = STATE(263),
    [sym_fill_card] = STATE(263),
    [sym_importance_card] = STATE(263),
    [sym_ignored_data_card] = STATE(263),
    [sym_vertical_data_block] = STATE(3),
    [sym_vertical_data_block_single_line] = STATE(8),
    [sym_vertical_data_block_multiple_line] = STATE(8),
    [sym_vertical_header] = STATE(106),
    [aux_sym_data_card_block_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(7),
    [anon_sym_POUND] = ACTIONS(9),
    [anon_sym_imp_COLON] = ACTIONS(11),
    [anon_sym_vol] = ACTIONS(13),
    [anon_sym_pwt] = ACTIONS(13),
    [anon_sym_wwn] = ACTIONS(13),
    [anon_sym_dxc] = ACTIONS(13),
    [anon_sym_nonu] = ACTIONS(13),
    [anon_sym_pd] = ACTIONS(13),
    [anon_sym_tmp] = ACTIONS(13),
    [anon_sym_u] = ACTIONS(15),
    [anon_sym_STAR] = ACTIONS(17),
    [anon_sym_lat] = ACTIONS(19),
    [anon_sym_fill] = ACTIONS(21),
    [anon_sym_cosy] = ACTIONS(23),
    [anon_sym_bflcl] = ACTIONS(13),
    [anon_sym_tr] = ACTIONS(25),
    [anon_sym_area] = ACTIONS(13),
    [anon_sym_uran] = ACTIONS(13),
    [anon_sym_mesh] = ACTIONS(13),
    [anon_sym_dawwg] = ACTIONS(13),
    [anon_sym_dm] = ACTIONS(13),
    [anon_sym_embed] = ACTIONS(13),
    [anon_sym_embee] = ACTIONS(13),
    [anon_sym_embeb] = ACTIONS(13),
    [anon_sym_embem] = ACTIONS(13),
    [anon_sym_embtb] = ACTIONS(13),
    [anon_sym_embtm] = ACTIONS(13),
    [anon_sym_embde] = ACTIONS(13),
    [anon_sym_embdf] = ACTIONS(13),
    [anon_sym_m] = ACTIONS(23),
    [anon_sym_mt] = ACTIONS(13),
    [anon_sym_mx] = ACTIONS(13),
    [anon_sym_mpn] = ACTIONS(13),
    [anon_sym_otfdb] = ACTIONS(13),
    [anon_sym_totnu] = ACTIONS(13),
    [anon_sym_awtab] = ACTIONS(13),
    [anon_sym_xs] = ACTIONS(13),
    [anon_sym_void] = ACTIONS(13),
    [anon_sym_mgopt] = ACTIONS(13),
    [anon_sym_drxs] = ACTIONS(13),
    [anon_sym_mode] = ACTIONS(13),
    [anon_sym_phys] = ACTIONS(13),
    [anon_sym_act] = ACTIONS(13),
    [anon_sym_cut] = ACTIONS(13),
    [anon_sym_elpt] = ACTIONS(13),
    [anon_sym_thtme] = ACTIONS(13),
    [anon_sym_dbrc] = ACTIONS(13),
    [anon_sym_mphys] = ACTIONS(13),
    [anon_sym_lca] = ACTIONS(13),
    [anon_sym_lcb] = ACTIONS(13),
    [anon_sym_lcc] = ACTIONS(13),
    [anon_sym_lea] = ACTIONS(13),
    [anon_sym_leb] = ACTIONS(13),
    [anon_sym_fmult] = ACTIONS(13),
    [anon_sym_tropt] = ACTIONS(13),
    [anon_sym_unc] = ACTIONS(13),
    [anon_sym_cosyp] = ACTIONS(13),
    [anon_sym_bfld] = ACTIONS(13),
    [anon_sym_field] = ACTIONS(13),
    [aux_sym_ignored_data_card_token1] = ACTIONS(23),
    [aux_sym_ignored_data_card_token2] = ACTIONS(13),
    [anon_sym_e] = ACTIONS(23),
    [anon_sym_t] = ACTIONS(23),
    [aux_sym_ignored_data_card_token3] = ACTIONS(13),
    [anon_sym_de] = ACTIONS(13),
    [anon_sym_df] = ACTIONS(13),
    [anon_sym_em] = ACTIONS(23),
    [anon_sym_tm] = ACTIONS(23),
    [anon_sym_sf] = ACTIONS(13),
    [anon_sym_sd] = ACTIONS(23),
    [anon_sym_tf] = ACTIONS(13),
    [anon_sym_notrn] = ACTIONS(13),
    [anon_sym_pert] = ACTIONS(13),
    [anon_sym_kpert] = ACTIONS(13),
    [anon_sym_ksen] = ACTIONS(13),
    [anon_sym_kopts] = ACTIONS(13),
    [anon_sym_tmesh] = ACTIONS(13),
    [anon_sym_endmd] = ACTIONS(13),
    [anon_sym_rmesh] = ACTIONS(13),
    [anon_sym_cmesh] = ACTIONS(13),
    [anon_sym_smesh] = ACTIONS(13),
    [anon_sym_cora] = ACTIONS(13),
    [anon_sym_corb] = ACTIONS(13),
    [anon_sym_corc] = ACTIONS(13),
    [anon_sym_ergsh] = ACTIONS(13),
    [anon_sym_mshmf] = ACTIONS(13),
    [aux_sym_ignored_data_card_token4] = ACTIONS(13),
    [anon_sym_spdtl] = ACTIONS(13),
    [anon_sym_var] = ACTIONS(13),
    [anon_sym_wwe] = ACTIONS(13),
    [anon_sym_wwt] = ACTIONS(13),
    [anon_sym_wwp] = ACTIONS(13),
    [anon_sym_wwg] = ACTIONS(23),
    [anon_sym_wwge] = ACTIONS(13),
    [anon_sym_wwgt] = ACTIONS(13),
    [anon_sym_esplt] = ACTIONS(13),
    [anon_sym_tsplt] = ACTIONS(13),
    [anon_sym_ext] = ACTIONS(13),
    [anon_sym_vect] = ACTIONS(13),
    [anon_sym_fcl] = ACTIONS(13),
    [anon_sym_dxt] = ACTIONS(13),
    [anon_sym_dd] = ACTIONS(13),
    [anon_sym_bbrem] = ACTIONS(13),
    [anon_sym_pikmt] = ACTIONS(13),
    [anon_sym_spabi] = ACTIONS(13),
    [anon_sym_nps] = ACTIONS(13),
    [anon_sym_ctme] = ACTIONS(13),
    [anon_sym_stop] = ACTIONS(13),
    [anon_sym_rand] = ACTIONS(13),
    [anon_sym_print] = ACTIONS(13),
    [anon_sym_talnp] = ACTIONS(13),
    [anon_sym_prdmp] = ACTIONS(13),
    [anon_sym_ptrac] = ACTIONS(13),
    [anon_sym_mplot] = ACTIONS(13),
    [anon_sym_histp] = ACTIONS(13),
    [anon_sym_pio] = ACTIONS(13),
    [anon_sym_read] = ACTIONS(13),
    [anon_sym_dbcn] = ACTIONS(13),
    [anon_sym_lost] = ACTIONS(13),
    [anon_sym_idum] = ACTIONS(13),
    [anon_sym_rdum] = ACTIONS(13),
    [aux_sym_ignored_data_card_token5] = ACTIONS(13),
    [anon_sym_files] = ACTIONS(13),
    [anon_sym_disable] = ACTIONS(13),
    [anon_sym_sdef] = ACTIONS(13),
    [anon_sym_si] = ACTIONS(13),
    [anon_sym_sp] = ACTIONS(23),
    [anon_sym_sb] = ACTIONS(13),
    [anon_sym_ds] = ACTIONS(13),
    [anon_sym_sc] = ACTIONS(13),
    [anon_sym_ssw] = ACTIONS(13),
    [anon_sym_ssr] = ACTIONS(13),
    [anon_sym_kcode] = ACTIONS(13),
    [anon_sym_ksrc] = ACTIONS(13),
    [anon_sym_hsrc] = ACTIONS(13),
    [anon_sym_burn] = ACTIONS(13),
    [sym_delimiter] = ACTIONS(27),
    [sym_inline_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
  },
  [3] = {
    [sym_data_card] = STATE(3),
    [sym_transform_card] = STATE(263),
    [sym_universe_card] = STATE(263),
    [sym_lattice_card] = STATE(263),
    [sym_fill_card] = STATE(263),
    [sym_importance_card] = STATE(263),
    [sym_ignored_data_card] = STATE(263),
    [sym_vertical_data_block] = STATE(3),
    [sym_vertical_data_block_single_line] = STATE(8),
    [sym_vertical_data_block_multiple_line] = STATE(8),
    [sym_vertical_header] = STATE(106),
    [aux_sym_data_card_block_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(29),
    [anon_sym_POUND] = ACTIONS(31),
    [anon_sym_imp_COLON] = ACTIONS(34),
    [anon_sym_vol] = ACTIONS(37),
    [anon_sym_pwt] = ACTIONS(37),
    [anon_sym_wwn] = ACTIONS(37),
    [anon_sym_dxc] = ACTIONS(37),
    [anon_sym_nonu] = ACTIONS(37),
    [anon_sym_pd] = ACTIONS(37),
    [anon_sym_tmp] = ACTIONS(37),
    [anon_sym_u] = ACTIONS(40),
    [anon_sym_STAR] = ACTIONS(43),
    [anon_sym_lat] = ACTIONS(46),
    [anon_sym_fill] = ACTIONS(49),
    [anon_sym_cosy] = ACTIONS(52),
    [anon_sym_bflcl] = ACTIONS(37),
    [anon_sym_tr] = ACTIONS(55),
    [anon_sym_area] = ACTIONS(37),
    [anon_sym_uran] = ACTIONS(37),
    [anon_sym_mesh] = ACTIONS(37),
    [anon_sym_dawwg] = ACTIONS(37),
    [anon_sym_dm] = ACTIONS(37),
    [anon_sym_embed] = ACTIONS(37),
    [anon_sym_embee] = ACTIONS(37),
    [anon_sym_embeb] = ACTIONS(37),
    [anon_sym_embem] = ACTIONS(37),
    [anon_sym_embtb] = ACTIONS(37),
    [anon_sym_embtm] = ACTIONS(37),
    [anon_sym_embde] = ACTIONS(37),
    [anon_sym_embdf] = ACTIONS(37),
    [anon_sym_m] = ACTIONS(52),
    [anon_sym_mt] = ACTIONS(37),
    [anon_sym_mx] = ACTIONS(37),
    [anon_sym_mpn] = ACTIONS(37),
    [anon_sym_otfdb] = ACTIONS(37),
    [anon_sym_totnu] = ACTIONS(37),
    [anon_sym_awtab] = ACTIONS(37),
    [anon_sym_xs] = ACTIONS(37),
    [anon_sym_void] = ACTIONS(37),
    [anon_sym_mgopt] = ACTIONS(37),
    [anon_sym_drxs] = ACTIONS(37),
    [anon_sym_mode] = ACTIONS(37),
    [anon_sym_phys] = ACTIONS(37),
    [anon_sym_act] = ACTIONS(37),
    [anon_sym_cut] = ACTIONS(37),
    [anon_sym_elpt] = ACTIONS(37),
    [anon_sym_thtme] = ACTIONS(37),
    [anon_sym_dbrc] = ACTIONS(37),
    [anon_sym_mphys] = ACTIONS(37),
    [anon_sym_lca] = ACTIONS(37),
    [anon_sym_lcb] = ACTIONS(37),
    [anon_sym_lcc] = ACTIONS(37),
    [anon_sym_lea] = ACTIONS(37),
    [anon_sym_leb] = ACTIONS(37),
    [anon_sym_fmult] = ACTIONS(37),
    [anon_sym_tropt] = ACTIONS(37),
    [anon_sym_unc] = ACTIONS(37),
    [anon_sym_cosyp] = ACTIONS(37),
    [anon_sym_bfld] = ACTIONS(37),
    [anon_sym_field] = ACTIONS(37),
    [aux_sym_ignored_data_card_token1] = ACTIONS(52),
    [aux_sym_ignored_data_card_token2] = ACTIONS(37),
    [anon_sym_e] = ACTIONS(52),
    [anon_sym_t] = ACTIONS(52),
    [aux_sym_ignored_data_card_token3] = ACTIONS(37),
    [anon_sym_de] = ACTIONS(37),
    [anon_sym_df] = ACTIONS(37),
    [anon_sym_em] = ACTIONS(52),
    [anon_sym_tm] = ACTIONS(52),
    [anon_sym_sf] = ACTIONS(37),
    [anon_sym_sd] = ACTIONS(52),
    [anon_sym_tf] = ACTIONS(37),
    [anon_sym_notrn] = ACTIONS(37),
    [anon_sym_pert] = ACTIONS(37),
    [anon_sym_kpert] = ACTIONS(37),
    [anon_sym_ksen] = ACTIONS(37),
    [anon_sym_kopts] = ACTIONS(37),
    [anon_sym_tmesh] = ACTIONS(37),
    [anon_sym_endmd] = ACTIONS(37),
    [anon_sym_rmesh] = ACTIONS(37),
    [anon_sym_cmesh] = ACTIONS(37),
    [anon_sym_smesh] = ACTIONS(37),
    [anon_sym_cora] = ACTIONS(37),
    [anon_sym_corb] = ACTIONS(37),
    [anon_sym_corc] = ACTIONS(37),
    [anon_sym_ergsh] = ACTIONS(37),
    [anon_sym_mshmf] = ACTIONS(37),
    [aux_sym_ignored_data_card_token4] = ACTIONS(37),
    [anon_sym_spdtl] = ACTIONS(37),
    [anon_sym_var] = ACTIONS(37),
    [anon_sym_wwe] = ACTIONS(37),
    [anon_sym_wwt] = ACTIONS(37),
    [anon_sym_wwp] = ACTIONS(37),
    [anon_sym_wwg] = ACTIONS(52),
    [anon_sym_wwge] = ACTIONS(37),
    [anon_sym_wwgt] = ACTIONS(37),
    [anon_sym_esplt] = ACTIONS(37),
    [anon_sym_tsplt] = ACTIONS(37),
    [anon_sym_ext] = ACTIONS(37),
    [anon_sym_vect] = ACTIONS(37),
    [anon_sym_fcl] = ACTIONS(37),
    [anon_sym_dxt] = ACTIONS(37),
    [anon_sym_dd] = ACTIONS(37),
    [anon_sym_bbrem] = ACTIONS(37),
    [anon_sym_pikmt] = ACTIONS(37),
    [anon_sym_spabi] = ACTIONS(37),
    [anon_sym_nps] = ACTIONS(37),
    [anon_sym_ctme] = ACTIONS(37),
    [anon_sym_stop] = ACTIONS(37),
    [anon_sym_rand] = ACTIONS(37),
    [anon_sym_print] = ACTIONS(37),
    [anon_sym_talnp] = ACTIONS(37),
    [anon_sym_prdmp] = ACTIONS(37),
    [anon_sym_ptrac] = ACTIONS(37),
    [anon_sym_mplot] = ACTIONS(37),
    [anon_sym_histp] = ACTIONS(37),
    [anon_sym_pio] = ACTIONS(37),
    [anon_sym_read] = ACTIONS(37),
    [anon_sym_dbcn] = ACTIONS(37),
    [anon_sym_lost] = ACTIONS(37),
    [anon_sym_idum] = ACTIONS(37),
    [anon_sym_rdum] = ACTIONS(37),
    [aux_sym_ignored_data_card_token5] = ACTIONS(37),
    [anon_sym_files] = ACTIONS(37),
    [anon_sym_disable] = ACTIONS(37),
    [anon_sym_sdef] = ACTIONS(37),
    [anon_sym_si] = ACTIONS(37),
    [anon_sym_sp] = ACTIONS(52),
    [anon_sym_sb] = ACTIONS(37),
    [anon_sym_ds] = ACTIONS(37),
    [anon_sym_sc] = ACTIONS(37),
    [anon_sym_ssw] = ACTIONS(37),
    [anon_sym_ssr] = ACTIONS(37),
    [anon_sym_kcode] = ACTIONS(37),
    [anon_sym_ksrc] = ACTIONS(37),
    [anon_sym_hsrc] = ACTIONS(37),
    [anon_sym_burn] = ACTIONS(37),
    [sym_delimiter] = ACTIONS(58),
    [sym_inline_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
  },
  [4] = {
    [sym_data_card_block] = STATE(192),
    [sym_data_card] = STATE(2),
    [sym_transform_card] = STATE(263),
    [sym_universe_card] = STATE(263),
    [sym_lattice_card] = STATE(263),
    [sym_fill_card] = STATE(263),
    [sym_importance_card] = STATE(263),
    [sym_ignored_data_card] = STATE(263),
    [sym_vertical_data_block] = STATE(2),
    [sym_vertical_data_block_single_line] = STATE(8),
    [sym_vertical_data_block_multiple_line] = STATE(8),
    [sym_vertical_header] = STATE(106),
    [aux_sym_data_card_block_repeat1] = STATE(2),
    [anon_sym_POUND] = ACTIONS(9),
    [anon_sym_imp_COLON] = ACTIONS(11),
    [anon_sym_vol] = ACTIONS(13),
    [anon_sym_pwt] = ACTIONS(13),
    [anon_sym_wwn] = ACTIONS(13),
    [anon_sym_dxc] = ACTIONS(13),
    [anon_sym_nonu] = ACTIONS(13),
    [anon_sym_pd] = ACTIONS(13),
    [anon_sym_tmp] = ACTIONS(13),
    [anon_sym_u] = ACTIONS(15),
    [anon_sym_STAR] = ACTIONS(17),
    [anon_sym_lat] = ACTIONS(19),
    [anon_sym_fill] = ACTIONS(21),
    [anon_sym_cosy] = ACTIONS(23),
    [anon_sym_bflcl] = ACTIONS(13),
    [anon_sym_tr] = ACTIONS(25),
    [anon_sym_area] = ACTIONS(13),
    [anon_sym_uran] = ACTIONS(13),
    [anon_sym_mesh] = ACTIONS(13),
    [anon_sym_dawwg] = ACTIONS(13),
    [anon_sym_dm] = ACTIONS(13),
    [anon_sym_embed] = ACTIONS(13),
    [anon_sym_embee] = ACTIONS(13),
    [anon_sym_embeb] = ACTIONS(13),
    [anon_sym_embem] = ACTIONS(13),
    [anon_sym_embtb] = ACTIONS(13),
    [anon_sym_embtm] = ACTIONS(13),
    [anon_sym_embde] = ACTIONS(13),
    [anon_sym_embdf] = ACTIONS(13),
    [anon_sym_m] = ACTIONS(23),
    [anon_sym_mt] = ACTIONS(13),
    [anon_sym_mx] = ACTIONS(13),
    [anon_sym_mpn] = ACTIONS(13),
    [anon_sym_otfdb] = ACTIONS(13),
    [anon_sym_totnu] = ACTIONS(13),
    [anon_sym_awtab] = ACTIONS(13),
    [anon_sym_xs] = ACTIONS(13),
    [anon_sym_void] = ACTIONS(13),
    [anon_sym_mgopt] = ACTIONS(13),
    [anon_sym_drxs] = ACTIONS(13),
    [anon_sym_mode] = ACTIONS(13),
    [anon_sym_phys] = ACTIONS(13),
    [anon_sym_act] = ACTIONS(13),
    [anon_sym_cut] = ACTIONS(13),
    [anon_sym_elpt] = ACTIONS(13),
    [anon_sym_thtme] = ACTIONS(13),
    [anon_sym_dbrc] = ACTIONS(13),
    [anon_sym_mphys] = ACTIONS(13),
    [anon_sym_lca] = ACTIONS(13),
    [anon_sym_lcb] = ACTIONS(13),
    [anon_sym_lcc] = ACTIONS(13),
    [anon_sym_lea] = ACTIONS(13),
    [anon_sym_leb] = ACTIONS(13),
    [anon_sym_fmult] = ACTIONS(13),
    [anon_sym_tropt] = ACTIONS(13),
    [anon_sym_unc] = ACTIONS(13),
    [anon_sym_cosyp] = ACTIONS(13),
    [anon_sym_bfld] = ACTIONS(13),
    [anon_sym_field] = ACTIONS(13),
    [aux_sym_ignored_data_card_token1] = ACTIONS(23),
    [aux_sym_ignored_data_card_token2] = ACTIONS(13),
    [anon_sym_e] = ACTIONS(23),
    [anon_sym_t] = ACTIONS(23),
    [aux_sym_ignored_data_card_token3] = ACTIONS(13),
    [anon_sym_de] = ACTIONS(13),
    [anon_sym_df] = ACTIONS(13),
    [anon_sym_em] = ACTIONS(23),
    [anon_sym_tm] = ACTIONS(23),
    [anon_sym_sf] = ACTIONS(13),
    [anon_sym_sd] = ACTIONS(23),
    [anon_sym_tf] = ACTIONS(13),
    [anon_sym_notrn] = ACTIONS(13),
    [anon_sym_pert] = ACTIONS(13),
    [anon_sym_kpert] = ACTIONS(13),
    [anon_sym_ksen] = ACTIONS(13),
    [anon_sym_kopts] = ACTIONS(13),
    [anon_sym_tmesh] = ACTIONS(13),
    [anon_sym_endmd] = ACTIONS(13),
    [anon_sym_rmesh] = ACTIONS(13),
    [anon_sym_cmesh] = ACTIONS(13),
    [anon_sym_smesh] = ACTIONS(13),
    [anon_sym_cora] = ACTIONS(13),
    [anon_sym_corb] = ACTIONS(13),
    [anon_sym_corc] = ACTIONS(13),
    [anon_sym_ergsh] = ACTIONS(13),
    [anon_sym_mshmf] = ACTIONS(13),
    [aux_sym_ignored_data_card_token4] = ACTIONS(13),
    [anon_sym_spdtl] = ACTIONS(13),
    [anon_sym_var] = ACTIONS(13),
    [anon_sym_wwe] = ACTIONS(13),
    [anon_sym_wwt] = ACTIONS(13),
    [anon_sym_wwp] = ACTIONS(13),
    [anon_sym_wwg] = ACTIONS(23),
    [anon_sym_wwge] = ACTIONS(13),
    [anon_sym_wwgt] = ACTIONS(13),
    [anon_sym_esplt] = ACTIONS(13),
    [anon_sym_tsplt] = ACTIONS(13),
    [anon_sym_ext] = ACTIONS(13),
    [anon_sym_vect] = ACTIONS(13),
    [anon_sym_fcl] = ACTIONS(13),
    [anon_sym_dxt] = ACTIONS(13),
    [anon_sym_dd] = ACTIONS(13),
    [anon_sym_bbrem] = ACTIONS(13),
    [anon_sym_pikmt] = ACTIONS(13),
    [anon_sym_spabi] = ACTIONS(13),
    [anon_sym_nps] = ACTIONS(13),
    [anon_sym_ctme] = ACTIONS(13),
    [anon_sym_stop] = ACTIONS(13),
    [anon_sym_rand] = ACTIONS(13),
    [anon_sym_print] = ACTIONS(13),
    [anon_sym_talnp] = ACTIONS(13),
    [anon_sym_prdmp] = ACTIONS(13),
    [anon_sym_ptrac] = ACTIONS(13),
    [anon_sym_mplot] = ACTIONS(13),
    [anon_sym_histp] = ACTIONS(13),
    [anon_sym_pio] = ACTIONS(13),
    [anon_sym_read] = ACTIONS(13),
    [anon_sym_dbcn] = ACTIONS(13),
    [anon_sym_lost] = ACTIONS(13),
    [anon_sym_idum] = ACTIONS(13),
    [anon_sym_rdum] = ACTIONS(13),
    [aux_sym_ignored_data_card_token5] = ACTIONS(13),
    [anon_sym_files] = ACTIONS(13),
    [anon_sym_disable] = ACTIONS(13),
    [anon_sym_sdef] = ACTIONS(13),
    [anon_sym_si] = ACTIONS(13),
    [anon_sym_sp] = ACTIONS(23),
    [anon_sym_sb] = ACTIONS(13),
    [anon_sym_ds] = ACTIONS(13),
    [anon_sym_sc] = ACTIONS(13),
    [anon_sym_ssw] = ACTIONS(13),
    [anon_sym_ssr] = ACTIONS(13),
    [anon_sym_kcode] = ACTIONS(13),
    [anon_sym_ksrc] = ACTIONS(13),
    [anon_sym_hsrc] = ACTIONS(13),
    [anon_sym_burn] = ACTIONS(13),
    [sym_inline_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
  },
  [5] = {
    [sym_vertical_data] = STATE(6),
    [aux_sym_transform_card_repeat1] = STATE(115),
    [aux_sym_vertical_data_block_multiple_line_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(60),
    [anon_sym_POUND] = ACTIONS(60),
    [anon_sym_imp_COLON] = ACTIONS(60),
    [anon_sym_vol] = ACTIONS(60),
    [anon_sym_pwt] = ACTIONS(60),
    [anon_sym_wwn] = ACTIONS(60),
    [anon_sym_dxc] = ACTIONS(60),
    [anon_sym_nonu] = ACTIONS(60),
    [anon_sym_pd] = ACTIONS(60),
    [anon_sym_tmp] = ACTIONS(60),
    [anon_sym_u] = ACTIONS(62),
    [anon_sym_STAR] = ACTIONS(62),
    [anon_sym_lat] = ACTIONS(60),
    [anon_sym_fill] = ACTIONS(60),
    [anon_sym_cosy] = ACTIONS(62),
    [anon_sym_bflcl] = ACTIONS(60),
    [anon_sym_tr] = ACTIONS(62),
    [anon_sym_area] = ACTIONS(60),
    [anon_sym_uran] = ACTIONS(60),
    [anon_sym_mesh] = ACTIONS(60),
    [anon_sym_dawwg] = ACTIONS(60),
    [anon_sym_dm] = ACTIONS(60),
    [anon_sym_embed] = ACTIONS(60),
    [anon_sym_embee] = ACTIONS(60),
    [anon_sym_embeb] = ACTIONS(60),
    [anon_sym_embem] = ACTIONS(60),
    [anon_sym_embtb] = ACTIONS(60),
    [anon_sym_embtm] = ACTIONS(60),
    [anon_sym_embde] = ACTIONS(60),
    [anon_sym_embdf] = ACTIONS(60),
    [anon_sym_m] = ACTIONS(62),
    [anon_sym_mt] = ACTIONS(60),
    [anon_sym_mx] = ACTIONS(60),
    [anon_sym_mpn] = ACTIONS(60),
    [anon_sym_otfdb] = ACTIONS(60),
    [anon_sym_totnu] = ACTIONS(60),
    [anon_sym_awtab] = ACTIONS(60),
    [anon_sym_xs] = ACTIONS(60),
    [anon_sym_void] = ACTIONS(60),
    [anon_sym_mgopt] = ACTIONS(60),
    [anon_sym_drxs] = ACTIONS(60),
    [anon_sym_mode] = ACTIONS(60),
    [anon_sym_phys] = ACTIONS(60),
    [anon_sym_act] = ACTIONS(60),
    [anon_sym_cut] = ACTIONS(60),
    [anon_sym_elpt] = ACTIONS(60),
    [anon_sym_thtme] = ACTIONS(60),
    [anon_sym_dbrc] = ACTIONS(60),
    [anon_sym_mphys] = ACTIONS(60),
    [anon_sym_lca] = ACTIONS(60),
    [anon_sym_lcb] = ACTIONS(60),
    [anon_sym_lcc] = ACTIONS(60),
    [anon_sym_lea] = ACTIONS(60),
    [anon_sym_leb] = ACTIONS(60),
    [anon_sym_fmult] = ACTIONS(60),
    [anon_sym_tropt] = ACTIONS(60),
    [anon_sym_unc] = ACTIONS(60),
    [anon_sym_cosyp] = ACTIONS(60),
    [anon_sym_bfld] = ACTIONS(60),
    [anon_sym_field] = ACTIONS(60),
    [aux_sym_ignored_data_card_token1] = ACTIONS(62),
    [aux_sym_ignored_data_card_token2] = ACTIONS(60),
    [anon_sym_e] = ACTIONS(62),
    [anon_sym_t] = ACTIONS(62),
    [aux_sym_ignored_data_card_token3] = ACTIONS(60),
    [anon_sym_de] = ACTIONS(60),
    [anon_sym_df] = ACTIONS(60),
    [anon_sym_em] = ACTIONS(62),
    [anon_sym_tm] = ACTIONS(62),
    [anon_sym_sf] = ACTIONS(60),
    [anon_sym_sd] = ACTIONS(62),
    [anon_sym_tf] = ACTIONS(60),
    [anon_sym_notrn] = ACTIONS(60),
    [anon_sym_pert] = ACTIONS(60),
    [anon_sym_kpert] = ACTIONS(60),
    [anon_sym_ksen] = ACTIONS(60),
    [anon_sym_kopts] = ACTIONS(60),
    [anon_sym_tmesh] = ACTIONS(60),
    [anon_sym_endmd] = ACTIONS(60),
    [anon_sym_rmesh] = ACTIONS(60),
    [anon_sym_cmesh] = ACTIONS(60),
    [anon_sym_smesh] = ACTIONS(60),
    [anon_sym_cora] = ACTIONS(60),
    [anon_sym_corb] = ACTIONS(60),
    [anon_sym_corc] = ACTIONS(60),
    [anon_sym_ergsh] = ACTIONS(60),
    [anon_sym_mshmf] = ACTIONS(60),
    [aux_sym_ignored_data_card_token4] = ACTIONS(60),
    [anon_sym_spdtl] = ACTIONS(60),
    [anon_sym_var] = ACTIONS(60),
    [anon_sym_wwe] = ACTIONS(60),
    [anon_sym_wwt] = ACTIONS(60),
    [anon_sym_wwp] = ACTIONS(60),
    [anon_sym_wwg] = ACTIONS(62),
    [anon_sym_wwge] = ACTIONS(60),
    [anon_sym_wwgt] = ACTIONS(60),
    [anon_sym_esplt] = ACTIONS(60),
    [anon_sym_tsplt] = ACTIONS(60),
    [anon_sym_ext] = ACTIONS(60),
    [anon_sym_vect] = ACTIONS(60),
    [anon_sym_fcl] = ACTIONS(60),
    [anon_sym_dxt] = ACTIONS(60),
    [anon_sym_dd] = ACTIONS(60),
    [anon_sym_bbrem] = ACTIONS(60),
    [anon_sym_pikmt] = ACTIONS(60),
    [anon_sym_spabi] = ACTIONS(60),
    [anon_sym_nps] = ACTIONS(60),
    [anon_sym_ctme] = ACTIONS(60),
    [anon_sym_stop] = ACTIONS(60),
    [anon_sym_rand] = ACTIONS(60),
    [anon_sym_print] = ACTIONS(60),
    [anon_sym_talnp] = ACTIONS(60),
    [anon_sym_prdmp] = ACTIONS(60),
    [anon_sym_ptrac] = ACTIONS(60),
    [anon_sym_mplot] = ACTIONS(60),
    [anon_sym_histp] = ACTIONS(60),
    [anon_sym_pio] = ACTIONS(60),
    [anon_sym_read] = ACTIONS(60),
    [anon_sym_dbcn] = ACTIONS(60),
    [anon_sym_lost] = ACTIONS(60),
    [anon_sym_idum] = ACTIONS(60),
    [anon_sym_rdum] = ACTIONS(60),
    [aux_sym_ignored_data_card_token5] = ACTIONS(60),
    [anon_sym_files] = ACTIONS(60),
    [anon_sym_disable] = ACTIONS(60),
    [anon_sym_sdef] = ACTIONS(60),
    [anon_sym_si] = ACTIONS(60),
    [anon_sym_sp] = ACTIONS(62),
    [anon_sym_sb] = ACTIONS(60),
    [anon_sym_ds] = ACTIONS(60),
    [anon_sym_sc] = ACTIONS(60),
    [anon_sym_ssw] = ACTIONS(60),
    [anon_sym_ssr] = ACTIONS(60),
    [anon_sym_kcode] = ACTIONS(60),
    [anon_sym_ksrc] = ACTIONS(60),
    [anon_sym_hsrc] = ACTIONS(60),
    [anon_sym_burn] = ACTIONS(60),
    [sym_delimiter] = ACTIONS(62),
    [sym_inline_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_number] = ACTIONS(64),
    [sym_shortcut] = ACTIONS(64),
  },
  [6] = {
    [sym_vertical_data] = STATE(6),
    [aux_sym_transform_card_repeat1] = STATE(115),
    [aux_sym_vertical_data_block_multiple_line_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(66),
    [anon_sym_POUND] = ACTIONS(66),
    [anon_sym_imp_COLON] = ACTIONS(66),
    [anon_sym_vol] = ACTIONS(66),
    [anon_sym_pwt] = ACTIONS(66),
    [anon_sym_wwn] = ACTIONS(66),
    [anon_sym_dxc] = ACTIONS(66),
    [anon_sym_nonu] = ACTIONS(66),
    [anon_sym_pd] = ACTIONS(66),
    [anon_sym_tmp] = ACTIONS(66),
    [anon_sym_u] = ACTIONS(68),
    [anon_sym_STAR] = ACTIONS(68),
    [anon_sym_lat] = ACTIONS(66),
    [anon_sym_fill] = ACTIONS(66),
    [anon_sym_cosy] = ACTIONS(68),
    [anon_sym_bflcl] = ACTIONS(66),
    [anon_sym_tr] = ACTIONS(68),
    [anon_sym_area] = ACTIONS(66),
    [anon_sym_uran] = ACTIONS(66),
    [anon_sym_mesh] = ACTIONS(66),
    [anon_sym_dawwg] = ACTIONS(66),
    [anon_sym_dm] = ACTIONS(66),
    [anon_sym_embed] = ACTIONS(66),
    [anon_sym_embee] = ACTIONS(66),
    [anon_sym_embeb] = ACTIONS(66),
    [anon_sym_embem] = ACTIONS(66),
    [anon_sym_embtb] = ACTIONS(66),
    [anon_sym_embtm] = ACTIONS(66),
    [anon_sym_embde] = ACTIONS(66),
    [anon_sym_embdf] = ACTIONS(66),
    [anon_sym_m] = ACTIONS(68),
    [anon_sym_mt] = ACTIONS(66),
    [anon_sym_mx] = ACTIONS(66),
    [anon_sym_mpn] = ACTIONS(66),
    [anon_sym_otfdb] = ACTIONS(66),
    [anon_sym_totnu] = ACTIONS(66),
    [anon_sym_awtab] = ACTIONS(66),
    [anon_sym_xs] = ACTIONS(66),
    [anon_sym_void] = ACTIONS(66),
    [anon_sym_mgopt] = ACTIONS(66),
    [anon_sym_drxs] = ACTIONS(66),
    [anon_sym_mode] = ACTIONS(66),
    [anon_sym_phys] = ACTIONS(66),
    [anon_sym_act] = ACTIONS(66),
    [anon_sym_cut] = ACTIONS(66),
    [anon_sym_elpt] = ACTIONS(66),
    [anon_sym_thtme] = ACTIONS(66),
    [anon_sym_dbrc] = ACTIONS(66),
    [anon_sym_mphys] = ACTIONS(66),
    [anon_sym_lca] = ACTIONS(66),
    [anon_sym_lcb] = ACTIONS(66),
    [anon_sym_lcc] = ACTIONS(66),
    [anon_sym_lea] = ACTIONS(66),
    [anon_sym_leb] = ACTIONS(66),
    [anon_sym_fmult] = ACTIONS(66),
    [anon_sym_tropt] = ACTIONS(66),
    [anon_sym_unc] = ACTIONS(66),
    [anon_sym_cosyp] = ACTIONS(66),
    [anon_sym_bfld] = ACTIONS(66),
    [anon_sym_field] = ACTIONS(66),
    [aux_sym_ignored_data_card_token1] = ACTIONS(68),
    [aux_sym_ignored_data_card_token2] = ACTIONS(66),
    [anon_sym_e] = ACTIONS(68),
    [anon_sym_t] = ACTIONS(68),
    [aux_sym_ignored_data_card_token3] = ACTIONS(66),
    [anon_sym_de] = ACTIONS(66),
    [anon_sym_df] = ACTIONS(66),
    [anon_sym_em] = ACTIONS(68),
    [anon_sym_tm] = ACTIONS(68),
    [anon_sym_sf] = ACTIONS(66),
    [anon_sym_sd] = ACTIONS(68),
    [anon_sym_tf] = ACTIONS(66),
    [anon_sym_notrn] = ACTIONS(66),
    [anon_sym_pert] = ACTIONS(66),
    [anon_sym_kpert] = ACTIONS(66),
    [anon_sym_ksen] = ACTIONS(66),
    [anon_sym_kopts] = ACTIONS(66),
    [anon_sym_tmesh] = ACTIONS(66),
    [anon_sym_endmd] = ACTIONS(66),
    [anon_sym_rmesh] = ACTIONS(66),
    [anon_sym_cmesh] = ACTIONS(66),
    [anon_sym_smesh] = ACTIONS(66),
    [anon_sym_cora] = ACTIONS(66),
    [anon_sym_corb] = ACTIONS(66),
    [anon_sym_corc] = ACTIONS(66),
    [anon_sym_ergsh] = ACTIONS(66),
    [anon_sym_mshmf] = ACTIONS(66),
    [aux_sym_ignored_data_card_token4] = ACTIONS(66),
    [anon_sym_spdtl] = ACTIONS(66),
    [anon_sym_var] = ACTIONS(66),
    [anon_sym_wwe] = ACTIONS(66),
    [anon_sym_wwt] = ACTIONS(66),
    [anon_sym_wwp] = ACTIONS(66),
    [anon_sym_wwg] = ACTIONS(68),
    [anon_sym_wwge] = ACTIONS(66),
    [anon_sym_wwgt] = ACTIONS(66),
    [anon_sym_esplt] = ACTIONS(66),
    [anon_sym_tsplt] = ACTIONS(66),
    [anon_sym_ext] = ACTIONS(66),
    [anon_sym_vect] = ACTIONS(66),
    [anon_sym_fcl] = ACTIONS(66),
    [anon_sym_dxt] = ACTIONS(66),
    [anon_sym_dd] = ACTIONS(66),
    [anon_sym_bbrem] = ACTIONS(66),
    [anon_sym_pikmt] = ACTIONS(66),
    [anon_sym_spabi] = ACTIONS(66),
    [anon_sym_nps] = ACTIONS(66),
    [anon_sym_ctme] = ACTIONS(66),
    [anon_sym_stop] = ACTIONS(66),
    [anon_sym_rand] = ACTIONS(66),
    [anon_sym_print] = ACTIONS(66),
    [anon_sym_talnp] = ACTIONS(66),
    [anon_sym_prdmp] = ACTIONS(66),
    [anon_sym_ptrac] = ACTIONS(66),
    [anon_sym_mplot] = ACTIONS(66),
    [anon_sym_histp] = ACTIONS(66),
    [anon_sym_pio] = ACTIONS(66),
    [anon_sym_read] = ACTIONS(66),
    [anon_sym_dbcn] = ACTIONS(66),
    [anon_sym_lost] = ACTIONS(66),
    [anon_sym_idum] = ACTIONS(66),
    [anon_sym_rdum] = ACTIONS(66),
    [aux_sym_ignored_data_card_token5] = ACTIONS(66),
    [anon_sym_files] = ACTIONS(66),
    [anon_sym_disable] = ACTIONS(66),
    [anon_sym_sdef] = ACTIONS(66),
    [anon_sym_si] = ACTIONS(66),
    [anon_sym_sp] = ACTIONS(68),
    [anon_sym_sb] = ACTIONS(66),
    [anon_sym_ds] = ACTIONS(66),
    [anon_sym_sc] = ACTIONS(66),
    [anon_sym_ssw] = ACTIONS(66),
    [anon_sym_ssr] = ACTIONS(66),
    [anon_sym_kcode] = ACTIONS(66),
    [anon_sym_ksrc] = ACTIONS(66),
    [anon_sym_hsrc] = ACTIONS(66),
    [anon_sym_burn] = ACTIONS(66),
    [sym_delimiter] = ACTIONS(68),
    [sym_inline_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_number] = ACTIONS(70),
    [sym_shortcut] = ACTIONS(70),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(73),
    [anon_sym_POUND] = ACTIONS(73),
    [anon_sym_imp_COLON] = ACTIONS(73),
    [anon_sym_vol] = ACTIONS(73),
    [anon_sym_pwt] = ACTIONS(73),
    [anon_sym_wwn] = ACTIONS(73),
    [anon_sym_dxc] = ACTIONS(73),
    [anon_sym_nonu] = ACTIONS(73),
    [anon_sym_pd] = ACTIONS(73),
    [anon_sym_tmp] = ACTIONS(73),
    [anon_sym_u] = ACTIONS(75),
    [anon_sym_STAR] = ACTIONS(75),
    [anon_sym_lat] = ACTIONS(73),
    [anon_sym_fill] = ACTIONS(73),
    [anon_sym_cosy] = ACTIONS(75),
    [anon_sym_bflcl] = ACTIONS(73),
    [anon_sym_tr] = ACTIONS(75),
    [anon_sym_area] = ACTIONS(73),
    [anon_sym_uran] = ACTIONS(73),
    [anon_sym_mesh] = ACTIONS(73),
    [anon_sym_dawwg] = ACTIONS(73),
    [anon_sym_dm] = ACTIONS(73),
    [anon_sym_embed] = ACTIONS(73),
    [anon_sym_embee] = ACTIONS(73),
    [anon_sym_embeb] = ACTIONS(73),
    [anon_sym_embem] = ACTIONS(73),
    [anon_sym_embtb] = ACTIONS(73),
    [anon_sym_embtm] = ACTIONS(73),
    [anon_sym_embde] = ACTIONS(73),
    [anon_sym_embdf] = ACTIONS(73),
    [anon_sym_m] = ACTIONS(75),
    [anon_sym_mt] = ACTIONS(73),
    [anon_sym_mx] = ACTIONS(73),
    [anon_sym_mpn] = ACTIONS(73),
    [anon_sym_otfdb] = ACTIONS(73),
    [anon_sym_totnu] = ACTIONS(73),
    [anon_sym_awtab] = ACTIONS(73),
    [anon_sym_xs] = ACTIONS(73),
    [anon_sym_void] = ACTIONS(73),
    [anon_sym_mgopt] = ACTIONS(73),
    [anon_sym_drxs] = ACTIONS(73),
    [anon_sym_mode] = ACTIONS(73),
    [anon_sym_phys] = ACTIONS(73),
    [anon_sym_act] = ACTIONS(73),
    [anon_sym_cut] = ACTIONS(73),
    [anon_sym_elpt] = ACTIONS(73),
    [anon_sym_thtme] = ACTIONS(73),
    [anon_sym_dbrc] = ACTIONS(73),
    [anon_sym_mphys] = ACTIONS(73),
    [anon_sym_lca] = ACTIONS(73),
    [anon_sym_lcb] = ACTIONS(73),
    [anon_sym_lcc] = ACTIONS(73),
    [anon_sym_lea] = ACTIONS(73),
    [anon_sym_leb] = ACTIONS(73),
    [anon_sym_fmult] = ACTIONS(73),
    [anon_sym_tropt] = ACTIONS(73),
    [anon_sym_unc] = ACTIONS(73),
    [anon_sym_cosyp] = ACTIONS(73),
    [anon_sym_bfld] = ACTIONS(73),
    [anon_sym_field] = ACTIONS(73),
    [aux_sym_ignored_data_card_token1] = ACTIONS(75),
    [aux_sym_ignored_data_card_token2] = ACTIONS(73),
    [anon_sym_e] = ACTIONS(75),
    [anon_sym_t] = ACTIONS(75),
    [aux_sym_ignored_data_card_token3] = ACTIONS(73),
    [anon_sym_de] = ACTIONS(73),
    [anon_sym_df] = ACTIONS(73),
    [anon_sym_em] = ACTIONS(75),
    [anon_sym_tm] = ACTIONS(75),
    [anon_sym_sf] = ACTIONS(73),
    [anon_sym_sd] = ACTIONS(75),
    [anon_sym_tf] = ACTIONS(73),
    [anon_sym_notrn] = ACTIONS(73),
    [anon_sym_pert] = ACTIONS(73),
    [anon_sym_kpert] = ACTIONS(73),
    [anon_sym_ksen] = ACTIONS(73),
    [anon_sym_kopts] = ACTIONS(73),
    [anon_sym_tmesh] = ACTIONS(73),
    [anon_sym_endmd] = ACTIONS(73),
    [anon_sym_rmesh] = ACTIONS(73),
    [anon_sym_cmesh] = ACTIONS(73),
    [anon_sym_smesh] = ACTIONS(73),
    [anon_sym_cora] = ACTIONS(73),
    [anon_sym_corb] = ACTIONS(73),
    [anon_sym_corc] = ACTIONS(73),
    [anon_sym_ergsh] = ACTIONS(73),
    [anon_sym_mshmf] = ACTIONS(73),
    [aux_sym_ignored_data_card_token4] = ACTIONS(73),
    [anon_sym_spdtl] = ACTIONS(73),
    [anon_sym_var] = ACTIONS(73),
    [anon_sym_wwe] = ACTIONS(73),
    [anon_sym_wwt] = ACTIONS(73),
    [anon_sym_wwp] = ACTIONS(73),
    [anon_sym_wwg] = ACTIONS(75),
    [anon_sym_wwge] = ACTIONS(73),
    [anon_sym_wwgt] = ACTIONS(73),
    [anon_sym_esplt] = ACTIONS(73),
    [anon_sym_tsplt] = ACTIONS(73),
    [anon_sym_ext] = ACTIONS(73),
    [anon_sym_vect] = ACTIONS(73),
    [anon_sym_fcl] = ACTIONS(73),
    [anon_sym_dxt] = ACTIONS(73),
    [anon_sym_dd] = ACTIONS(73),
    [anon_sym_bbrem] = ACTIONS(73),
    [anon_sym_pikmt] = ACTIONS(73),
    [anon_sym_spabi] = ACTIONS(73),
    [anon_sym_nps] = ACTIONS(73),
    [anon_sym_ctme] = ACTIONS(73),
    [anon_sym_stop] = ACTIONS(73),
    [anon_sym_rand] = ACTIONS(73),
    [anon_sym_print] = ACTIONS(73),
    [anon_sym_talnp] = ACTIONS(73),
    [anon_sym_prdmp] = ACTIONS(73),
    [anon_sym_ptrac] = ACTIONS(73),
    [anon_sym_mplot] = ACTIONS(73),
    [anon_sym_histp] = ACTIONS(73),
    [anon_sym_pio] = ACTIONS(73),
    [anon_sym_read] = ACTIONS(73),
    [anon_sym_dbcn] = ACTIONS(73),
    [anon_sym_lost] = ACTIONS(73),
    [anon_sym_idum] = ACTIONS(73),
    [anon_sym_rdum] = ACTIONS(73),
    [aux_sym_ignored_data_card_token5] = ACTIONS(73),
    [anon_sym_files] = ACTIONS(73),
    [anon_sym_disable] = ACTIONS(73),
    [anon_sym_sdef] = ACTIONS(73),
    [anon_sym_si] = ACTIONS(73),
    [anon_sym_sp] = ACTIONS(75),
    [anon_sym_sb] = ACTIONS(73),
    [anon_sym_ds] = ACTIONS(73),
    [anon_sym_sc] = ACTIONS(73),
    [anon_sym_ssw] = ACTIONS(73),
    [anon_sym_ssr] = ACTIONS(73),
    [anon_sym_kcode] = ACTIONS(73),
    [anon_sym_ksrc] = ACTIONS(73),
    [anon_sym_hsrc] = ACTIONS(73),
    [anon_sym_burn] = ACTIONS(73),
    [sym_delimiter] = ACTIONS(75),
    [sym_inline_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_number] = ACTIONS(75),
    [sym_shortcut] = ACTIONS(75),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(77),
    [anon_sym_POUND] = ACTIONS(77),
    [anon_sym_imp_COLON] = ACTIONS(77),
    [anon_sym_vol] = ACTIONS(77),
    [anon_sym_pwt] = ACTIONS(77),
    [anon_sym_wwn] = ACTIONS(77),
    [anon_sym_dxc] = ACTIONS(77),
    [anon_sym_nonu] = ACTIONS(77),
    [anon_sym_pd] = ACTIONS(77),
    [anon_sym_tmp] = ACTIONS(77),
    [anon_sym_u] = ACTIONS(79),
    [anon_sym_STAR] = ACTIONS(79),
    [anon_sym_lat] = ACTIONS(77),
    [anon_sym_fill] = ACTIONS(77),
    [anon_sym_cosy] = ACTIONS(79),
    [anon_sym_bflcl] = ACTIONS(77),
    [anon_sym_tr] = ACTIONS(79),
    [anon_sym_area] = ACTIONS(77),
    [anon_sym_uran] = ACTIONS(77),
    [anon_sym_mesh] = ACTIONS(77),
    [anon_sym_dawwg] = ACTIONS(77),
    [anon_sym_dm] = ACTIONS(77),
    [anon_sym_embed] = ACTIONS(77),
    [anon_sym_embee] = ACTIONS(77),
    [anon_sym_embeb] = ACTIONS(77),
    [anon_sym_embem] = ACTIONS(77),
    [anon_sym_embtb] = ACTIONS(77),
    [anon_sym_embtm] = ACTIONS(77),
    [anon_sym_embde] = ACTIONS(77),
    [anon_sym_embdf] = ACTIONS(77),
    [anon_sym_m] = ACTIONS(79),
    [anon_sym_mt] = ACTIONS(77),
    [anon_sym_mx] = ACTIONS(77),
    [anon_sym_mpn] = ACTIONS(77),
    [anon_sym_otfdb] = ACTIONS(77),
    [anon_sym_totnu] = ACTIONS(77),
    [anon_sym_awtab] = ACTIONS(77),
    [anon_sym_xs] = ACTIONS(77),
    [anon_sym_void] = ACTIONS(77),
    [anon_sym_mgopt] = ACTIONS(77),
    [anon_sym_drxs] = ACTIONS(77),
    [anon_sym_mode] = ACTIONS(77),
    [anon_sym_phys] = ACTIONS(77),
    [anon_sym_act] = ACTIONS(77),
    [anon_sym_cut] = ACTIONS(77),
    [anon_sym_elpt] = ACTIONS(77),
    [anon_sym_thtme] = ACTIONS(77),
    [anon_sym_dbrc] = ACTIONS(77),
    [anon_sym_mphys] = ACTIONS(77),
    [anon_sym_lca] = ACTIONS(77),
    [anon_sym_lcb] = ACTIONS(77),
    [anon_sym_lcc] = ACTIONS(77),
    [anon_sym_lea] = ACTIONS(77),
    [anon_sym_leb] = ACTIONS(77),
    [anon_sym_fmult] = ACTIONS(77),
    [anon_sym_tropt] = ACTIONS(77),
    [anon_sym_unc] = ACTIONS(77),
    [anon_sym_cosyp] = ACTIONS(77),
    [anon_sym_bfld] = ACTIONS(77),
    [anon_sym_field] = ACTIONS(77),
    [aux_sym_ignored_data_card_token1] = ACTIONS(79),
    [aux_sym_ignored_data_card_token2] = ACTIONS(77),
    [anon_sym_e] = ACTIONS(79),
    [anon_sym_t] = ACTIONS(79),
    [aux_sym_ignored_data_card_token3] = ACTIONS(77),
    [anon_sym_de] = ACTIONS(77),
    [anon_sym_df] = ACTIONS(77),
    [anon_sym_em] = ACTIONS(79),
    [anon_sym_tm] = ACTIONS(79),
    [anon_sym_sf] = ACTIONS(77),
    [anon_sym_sd] = ACTIONS(79),
    [anon_sym_tf] = ACTIONS(77),
    [anon_sym_notrn] = ACTIONS(77),
    [anon_sym_pert] = ACTIONS(77),
    [anon_sym_kpert] = ACTIONS(77),
    [anon_sym_ksen] = ACTIONS(77),
    [anon_sym_kopts] = ACTIONS(77),
    [anon_sym_tmesh] = ACTIONS(77),
    [anon_sym_endmd] = ACTIONS(77),
    [anon_sym_rmesh] = ACTIONS(77),
    [anon_sym_cmesh] = ACTIONS(77),
    [anon_sym_smesh] = ACTIONS(77),
    [anon_sym_cora] = ACTIONS(77),
    [anon_sym_corb] = ACTIONS(77),
    [anon_sym_corc] = ACTIONS(77),
    [anon_sym_ergsh] = ACTIONS(77),
    [anon_sym_mshmf] = ACTIONS(77),
    [aux_sym_ignored_data_card_token4] = ACTIONS(77),
    [anon_sym_spdtl] = ACTIONS(77),
    [anon_sym_var] = ACTIONS(77),
    [anon_sym_wwe] = ACTIONS(77),
    [anon_sym_wwt] = ACTIONS(77),
    [anon_sym_wwp] = ACTIONS(77),
    [anon_sym_wwg] = ACTIONS(79),
    [anon_sym_wwge] = ACTIONS(77),
    [anon_sym_wwgt] = ACTIONS(77),
    [anon_sym_esplt] = ACTIONS(77),
    [anon_sym_tsplt] = ACTIONS(77),
    [anon_sym_ext] = ACTIONS(77),
    [anon_sym_vect] = ACTIONS(77),
    [anon_sym_fcl] = ACTIONS(77),
    [anon_sym_dxt] = ACTIONS(77),
    [anon_sym_dd] = ACTIONS(77),
    [anon_sym_bbrem] = ACTIONS(77),
    [anon_sym_pikmt] = ACTIONS(77),
    [anon_sym_spabi] = ACTIONS(77),
    [anon_sym_nps] = ACTIONS(77),
    [anon_sym_ctme] = ACTIONS(77),
    [anon_sym_stop] = ACTIONS(77),
    [anon_sym_rand] = ACTIONS(77),
    [anon_sym_print] = ACTIONS(77),
    [anon_sym_talnp] = ACTIONS(77),
    [anon_sym_prdmp] = ACTIONS(77),
    [anon_sym_ptrac] = ACTIONS(77),
    [anon_sym_mplot] = ACTIONS(77),
    [anon_sym_histp] = ACTIONS(77),
    [anon_sym_pio] = ACTIONS(77),
    [anon_sym_read] = ACTIONS(77),
    [anon_sym_dbcn] = ACTIONS(77),
    [anon_sym_lost] = ACTIONS(77),
    [anon_sym_idum] = ACTIONS(77),
    [anon_sym_rdum] = ACTIONS(77),
    [aux_sym_ignored_data_card_token5] = ACTIONS(77),
    [anon_sym_files] = ACTIONS(77),
    [anon_sym_disable] = ACTIONS(77),
    [anon_sym_sdef] = ACTIONS(77),
    [anon_sym_si] = ACTIONS(77),
    [anon_sym_sp] = ACTIONS(79),
    [anon_sym_sb] = ACTIONS(77),
    [anon_sym_ds] = ACTIONS(77),
    [anon_sym_sc] = ACTIONS(77),
    [anon_sym_ssw] = ACTIONS(77),
    [anon_sym_ssr] = ACTIONS(77),
    [anon_sym_kcode] = ACTIONS(77),
    [anon_sym_ksrc] = ACTIONS(77),
    [anon_sym_hsrc] = ACTIONS(77),
    [anon_sym_burn] = ACTIONS(77),
    [sym_delimiter] = ACTIONS(79),
    [sym_inline_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(81),
    [anon_sym_POUND] = ACTIONS(81),
    [anon_sym_imp_COLON] = ACTIONS(81),
    [anon_sym_vol] = ACTIONS(81),
    [anon_sym_pwt] = ACTIONS(81),
    [anon_sym_wwn] = ACTIONS(81),
    [anon_sym_dxc] = ACTIONS(81),
    [anon_sym_nonu] = ACTIONS(81),
    [anon_sym_pd] = ACTIONS(81),
    [anon_sym_tmp] = ACTIONS(81),
    [anon_sym_u] = ACTIONS(83),
    [anon_sym_STAR] = ACTIONS(83),
    [anon_sym_lat] = ACTIONS(81),
    [anon_sym_fill] = ACTIONS(81),
    [anon_sym_cosy] = ACTIONS(83),
    [anon_sym_bflcl] = ACTIONS(81),
    [anon_sym_tr] = ACTIONS(83),
    [anon_sym_area] = ACTIONS(81),
    [anon_sym_uran] = ACTIONS(81),
    [anon_sym_mesh] = ACTIONS(81),
    [anon_sym_dawwg] = ACTIONS(81),
    [anon_sym_dm] = ACTIONS(81),
    [anon_sym_embed] = ACTIONS(81),
    [anon_sym_embee] = ACTIONS(81),
    [anon_sym_embeb] = ACTIONS(81),
    [anon_sym_embem] = ACTIONS(81),
    [anon_sym_embtb] = ACTIONS(81),
    [anon_sym_embtm] = ACTIONS(81),
    [anon_sym_embde] = ACTIONS(81),
    [anon_sym_embdf] = ACTIONS(81),
    [anon_sym_m] = ACTIONS(83),
    [anon_sym_mt] = ACTIONS(81),
    [anon_sym_mx] = ACTIONS(81),
    [anon_sym_mpn] = ACTIONS(81),
    [anon_sym_otfdb] = ACTIONS(81),
    [anon_sym_totnu] = ACTIONS(81),
    [anon_sym_awtab] = ACTIONS(81),
    [anon_sym_xs] = ACTIONS(81),
    [anon_sym_void] = ACTIONS(81),
    [anon_sym_mgopt] = ACTIONS(81),
    [anon_sym_drxs] = ACTIONS(81),
    [anon_sym_mode] = ACTIONS(81),
    [anon_sym_phys] = ACTIONS(81),
    [anon_sym_act] = ACTIONS(81),
    [anon_sym_cut] = ACTIONS(81),
    [anon_sym_elpt] = ACTIONS(81),
    [anon_sym_thtme] = ACTIONS(81),
    [anon_sym_dbrc] = ACTIONS(81),
    [anon_sym_mphys] = ACTIONS(81),
    [anon_sym_lca] = ACTIONS(81),
    [anon_sym_lcb] = ACTIONS(81),
    [anon_sym_lcc] = ACTIONS(81),
    [anon_sym_lea] = ACTIONS(81),
    [anon_sym_leb] = ACTIONS(81),
    [anon_sym_fmult] = ACTIONS(81),
    [anon_sym_tropt] = ACTIONS(81),
    [anon_sym_unc] = ACTIONS(81),
    [anon_sym_cosyp] = ACTIONS(81),
    [anon_sym_bfld] = ACTIONS(81),
    [anon_sym_field] = ACTIONS(81),
    [aux_sym_ignored_data_card_token1] = ACTIONS(83),
    [aux_sym_ignored_data_card_token2] = ACTIONS(81),
    [anon_sym_e] = ACTIONS(83),
    [anon_sym_t] = ACTIONS(83),
    [aux_sym_ignored_data_card_token3] = ACTIONS(81),
    [anon_sym_de] = ACTIONS(81),
    [anon_sym_df] = ACTIONS(81),
    [anon_sym_em] = ACTIONS(83),
    [anon_sym_tm] = ACTIONS(83),
    [anon_sym_sf] = ACTIONS(81),
    [anon_sym_sd] = ACTIONS(83),
    [anon_sym_tf] = ACTIONS(81),
    [anon_sym_notrn] = ACTIONS(81),
    [anon_sym_pert] = ACTIONS(81),
    [anon_sym_kpert] = ACTIONS(81),
    [anon_sym_ksen] = ACTIONS(81),
    [anon_sym_kopts] = ACTIONS(81),
    [anon_sym_tmesh] = ACTIONS(81),
    [anon_sym_endmd] = ACTIONS(81),
    [anon_sym_rmesh] = ACTIONS(81),
    [anon_sym_cmesh] = ACTIONS(81),
    [anon_sym_smesh] = ACTIONS(81),
    [anon_sym_cora] = ACTIONS(81),
    [anon_sym_corb] = ACTIONS(81),
    [anon_sym_corc] = ACTIONS(81),
    [anon_sym_ergsh] = ACTIONS(81),
    [anon_sym_mshmf] = ACTIONS(81),
    [aux_sym_ignored_data_card_token4] = ACTIONS(81),
    [anon_sym_spdtl] = ACTIONS(81),
    [anon_sym_var] = ACTIONS(81),
    [anon_sym_wwe] = ACTIONS(81),
    [anon_sym_wwt] = ACTIONS(81),
    [anon_sym_wwp] = ACTIONS(81),
    [anon_sym_wwg] = ACTIONS(83),
    [anon_sym_wwge] = ACTIONS(81),
    [anon_sym_wwgt] = ACTIONS(81),
    [anon_sym_esplt] = ACTIONS(81),
    [anon_sym_tsplt] = ACTIONS(81),
    [anon_sym_ext] = ACTIONS(81),
    [anon_sym_vect] = ACTIONS(81),
    [anon_sym_fcl] = ACTIONS(81),
    [anon_sym_dxt] = ACTIONS(81),
    [anon_sym_dd] = ACTIONS(81),
    [anon_sym_bbrem] = ACTIONS(81),
    [anon_sym_pikmt] = ACTIONS(81),
    [anon_sym_spabi] = ACTIONS(81),
    [anon_sym_nps] = ACTIONS(81),
    [anon_sym_ctme] = ACTIONS(81),
    [anon_sym_stop] = ACTIONS(81),
    [anon_sym_rand] = ACTIONS(81),
    [anon_sym_print] = ACTIONS(81),
    [anon_sym_talnp] = ACTIONS(81),
    [anon_sym_prdmp] = ACTIONS(81),
    [anon_sym_ptrac] = ACTIONS(81),
    [anon_sym_mplot] = ACTIONS(81),
    [anon_sym_histp] = ACTIONS(81),
    [anon_sym_pio] = ACTIONS(81),
    [anon_sym_read] = ACTIONS(81),
    [anon_sym_dbcn] = ACTIONS(81),
    [anon_sym_lost] = ACTIONS(81),
    [anon_sym_idum] = ACTIONS(81),
    [anon_sym_rdum] = ACTIONS(81),
    [aux_sym_ignored_data_card_token5] = ACTIONS(81),
    [anon_sym_files] = ACTIONS(81),
    [anon_sym_disable] = ACTIONS(81),
    [anon_sym_sdef] = ACTIONS(81),
    [anon_sym_si] = ACTIONS(81),
    [anon_sym_sp] = ACTIONS(83),
    [anon_sym_sb] = ACTIONS(81),
    [anon_sym_ds] = ACTIONS(81),
    [anon_sym_sc] = ACTIONS(81),
    [anon_sym_ssw] = ACTIONS(81),
    [anon_sym_ssr] = ACTIONS(81),
    [anon_sym_kcode] = ACTIONS(81),
    [anon_sym_ksrc] = ACTIONS(81),
    [anon_sym_hsrc] = ACTIONS(81),
    [anon_sym_burn] = ACTIONS(81),
    [sym_delimiter] = ACTIONS(83),
    [sym_inline_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(85),
    [anon_sym_POUND] = ACTIONS(85),
    [anon_sym_imp_COLON] = ACTIONS(85),
    [anon_sym_vol] = ACTIONS(85),
    [anon_sym_pwt] = ACTIONS(85),
    [anon_sym_wwn] = ACTIONS(85),
    [anon_sym_dxc] = ACTIONS(85),
    [anon_sym_nonu] = ACTIONS(85),
    [anon_sym_pd] = ACTIONS(85),
    [anon_sym_tmp] = ACTIONS(85),
    [anon_sym_u] = ACTIONS(87),
    [anon_sym_STAR] = ACTIONS(87),
    [anon_sym_lat] = ACTIONS(85),
    [anon_sym_fill] = ACTIONS(85),
    [anon_sym_cosy] = ACTIONS(87),
    [anon_sym_bflcl] = ACTIONS(85),
    [anon_sym_tr] = ACTIONS(87),
    [anon_sym_area] = ACTIONS(85),
    [anon_sym_uran] = ACTIONS(85),
    [anon_sym_mesh] = ACTIONS(85),
    [anon_sym_dawwg] = ACTIONS(85),
    [anon_sym_dm] = ACTIONS(85),
    [anon_sym_embed] = ACTIONS(85),
    [anon_sym_embee] = ACTIONS(85),
    [anon_sym_embeb] = ACTIONS(85),
    [anon_sym_embem] = ACTIONS(85),
    [anon_sym_embtb] = ACTIONS(85),
    [anon_sym_embtm] = ACTIONS(85),
    [anon_sym_embde] = ACTIONS(85),
    [anon_sym_embdf] = ACTIONS(85),
    [anon_sym_m] = ACTIONS(87),
    [anon_sym_mt] = ACTIONS(85),
    [anon_sym_mx] = ACTIONS(85),
    [anon_sym_mpn] = ACTIONS(85),
    [anon_sym_otfdb] = ACTIONS(85),
    [anon_sym_totnu] = ACTIONS(85),
    [anon_sym_awtab] = ACTIONS(85),
    [anon_sym_xs] = ACTIONS(85),
    [anon_sym_void] = ACTIONS(85),
    [anon_sym_mgopt] = ACTIONS(85),
    [anon_sym_drxs] = ACTIONS(85),
    [anon_sym_mode] = ACTIONS(85),
    [anon_sym_phys] = ACTIONS(85),
    [anon_sym_act] = ACTIONS(85),
    [anon_sym_cut] = ACTIONS(85),
    [anon_sym_elpt] = ACTIONS(85),
    [anon_sym_thtme] = ACTIONS(85),
    [anon_sym_dbrc] = ACTIONS(85),
    [anon_sym_mphys] = ACTIONS(85),
    [anon_sym_lca] = ACTIONS(85),
    [anon_sym_lcb] = ACTIONS(85),
    [anon_sym_lcc] = ACTIONS(85),
    [anon_sym_lea] = ACTIONS(85),
    [anon_sym_leb] = ACTIONS(85),
    [anon_sym_fmult] = ACTIONS(85),
    [anon_sym_tropt] = ACTIONS(85),
    [anon_sym_unc] = ACTIONS(85),
    [anon_sym_cosyp] = ACTIONS(85),
    [anon_sym_bfld] = ACTIONS(85),
    [anon_sym_field] = ACTIONS(85),
    [aux_sym_ignored_data_card_token1] = ACTIONS(87),
    [aux_sym_ignored_data_card_token2] = ACTIONS(85),
    [anon_sym_e] = ACTIONS(87),
    [anon_sym_t] = ACTIONS(87),
    [aux_sym_ignored_data_card_token3] = ACTIONS(85),
    [anon_sym_de] = ACTIONS(85),
    [anon_sym_df] = ACTIONS(85),
    [anon_sym_em] = ACTIONS(87),
    [anon_sym_tm] = ACTIONS(87),
    [anon_sym_sf] = ACTIONS(85),
    [anon_sym_sd] = ACTIONS(87),
    [anon_sym_tf] = ACTIONS(85),
    [anon_sym_notrn] = ACTIONS(85),
    [anon_sym_pert] = ACTIONS(85),
    [anon_sym_kpert] = ACTIONS(85),
    [anon_sym_ksen] = ACTIONS(85),
    [anon_sym_kopts] = ACTIONS(85),
    [anon_sym_tmesh] = ACTIONS(85),
    [anon_sym_endmd] = ACTIONS(85),
    [anon_sym_rmesh] = ACTIONS(85),
    [anon_sym_cmesh] = ACTIONS(85),
    [anon_sym_smesh] = ACTIONS(85),
    [anon_sym_cora] = ACTIONS(85),
    [anon_sym_corb] = ACTIONS(85),
    [anon_sym_corc] = ACTIONS(85),
    [anon_sym_ergsh] = ACTIONS(85),
    [anon_sym_mshmf] = ACTIONS(85),
    [aux_sym_ignored_data_card_token4] = ACTIONS(85),
    [anon_sym_spdtl] = ACTIONS(85),
    [anon_sym_var] = ACTIONS(85),
    [anon_sym_wwe] = ACTIONS(85),
    [anon_sym_wwt] = ACTIONS(85),
    [anon_sym_wwp] = ACTIONS(85),
    [anon_sym_wwg] = ACTIONS(87),
    [anon_sym_wwge] = ACTIONS(85),
    [anon_sym_wwgt] = ACTIONS(85),
    [anon_sym_esplt] = ACTIONS(85),
    [anon_sym_tsplt] = ACTIONS(85),
    [anon_sym_ext] = ACTIONS(85),
    [anon_sym_vect] = ACTIONS(85),
    [anon_sym_fcl] = ACTIONS(85),
    [anon_sym_dxt] = ACTIONS(85),
    [anon_sym_dd] = ACTIONS(85),
    [anon_sym_bbrem] = ACTIONS(85),
    [anon_sym_pikmt] = ACTIONS(85),
    [anon_sym_spabi] = ACTIONS(85),
    [anon_sym_nps] = ACTIONS(85),
    [anon_sym_ctme] = ACTIONS(85),
    [anon_sym_stop] = ACTIONS(85),
    [anon_sym_rand] = ACTIONS(85),
    [anon_sym_print] = ACTIONS(85),
    [anon_sym_talnp] = ACTIONS(85),
    [anon_sym_prdmp] = ACTIONS(85),
    [anon_sym_ptrac] = ACTIONS(85),
    [anon_sym_mplot] = ACTIONS(85),
    [anon_sym_histp] = ACTIONS(85),
    [anon_sym_pio] = ACTIONS(85),
    [anon_sym_read] = ACTIONS(85),
    [anon_sym_dbcn] = ACTIONS(85),
    [anon_sym_lost] = ACTIONS(85),
    [anon_sym_idum] = ACTIONS(85),
    [anon_sym_rdum] = ACTIONS(85),
    [aux_sym_ignored_data_card_token5] = ACTIONS(85),
    [anon_sym_files] = ACTIONS(85),
    [anon_sym_disable] = ACTIONS(85),
    [anon_sym_sdef] = ACTIONS(85),
    [anon_sym_si] = ACTIONS(85),
    [anon_sym_sp] = ACTIONS(87),
    [anon_sym_sb] = ACTIONS(85),
    [anon_sym_ds] = ACTIONS(85),
    [anon_sym_sc] = ACTIONS(85),
    [anon_sym_ssw] = ACTIONS(85),
    [anon_sym_ssr] = ACTIONS(85),
    [anon_sym_kcode] = ACTIONS(85),
    [anon_sym_ksrc] = ACTIONS(85),
    [anon_sym_hsrc] = ACTIONS(85),
    [anon_sym_burn] = ACTIONS(85),
    [sym_delimiter] = ACTIONS(87),
    [sym_inline_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 33,
    ACTIONS(89), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      anon_sym_COLON,
    ACTIONS(93), 1,
      anon_sym_POUND,
    ACTIONS(95), 1,
      anon_sym_imp_COLON,
    ACTIONS(97), 1,
      anon_sym_vol,
    ACTIONS(99), 1,
      anon_sym_pwt,
    ACTIONS(101), 1,
      anon_sym_ext_COLON,
    ACTIONS(103), 1,
      anon_sym_fcl_COLON,
    ACTIONS(105), 1,
      anon_sym_wwn,
    ACTIONS(107), 1,
      anon_sym_dxc,
    ACTIONS(109), 1,
      anon_sym_nonu,
    ACTIONS(111), 1,
      anon_sym_pd,
    ACTIONS(113), 1,
      anon_sym_tmp,
    ACTIONS(115), 1,
      anon_sym_u,
    ACTIONS(117), 1,
      anon_sym_trcl,
    ACTIONS(119), 1,
      anon_sym_STAR,
    ACTIONS(121), 1,
      anon_sym_lat,
    ACTIONS(123), 1,
      anon_sym_fill,
    ACTIONS(125), 1,
      anon_sym_elpt_COLON,
    ACTIONS(127), 1,
      anon_sym_cosy,
    ACTIONS(129), 1,
      anon_sym_bflcl,
    ACTIONS(131), 1,
      anon_sym_unc_COLON,
    ACTIONS(133), 1,
      sym_endline,
    ACTIONS(135), 1,
      sym_signed_integer,
    ACTIONS(137), 1,
      sym_facet_half_space,
    STATE(22), 1,
      sym_cell_geometry,
    STATE(270), 1,
      sym_cell_parameters,
    STATE(16), 2,
      sym_cell_parameter,
      aux_sym_cell_parameters_repeat1,
    STATE(42), 2,
      sym_trcl_number,
      sym_trcl_matrix,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    STATE(24), 3,
      sym_union,
      sym_intersect,
      sym_complement,
    STATE(43), 3,
      sym_fill_form1,
      sym_fill_form2,
      sym_fill_form3,
    STATE(41), 18,
      sym_cell_para_imp,
      sym_cell_para_vol,
      sym_cell_para_pwt,
      sym_cell_para_ext,
      sym_cell_para_fcl,
      sym_cell_para_wwn,
      sym_cell_para_dxc,
      sym_cell_para_nonu,
      sym_cell_para_pd,
      sym_cell_para_tmp,
      sym_cell_para_univ,
      sym_cell_para_trcl,
      sym_cell_para_lat,
      sym_cell_para_fill,
      sym_cell_para_elpt,
      sym_cell_para_cosy,
      sym_cell_para_bflcl,
      sym_cell_para_unc,
  [125] = 33,
    ACTIONS(89), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      anon_sym_COLON,
    ACTIONS(93), 1,
      anon_sym_POUND,
    ACTIONS(95), 1,
      anon_sym_imp_COLON,
    ACTIONS(97), 1,
      anon_sym_vol,
    ACTIONS(99), 1,
      anon_sym_pwt,
    ACTIONS(101), 1,
      anon_sym_ext_COLON,
    ACTIONS(103), 1,
      anon_sym_fcl_COLON,
    ACTIONS(105), 1,
      anon_sym_wwn,
    ACTIONS(107), 1,
      anon_sym_dxc,
    ACTIONS(109), 1,
      anon_sym_nonu,
    ACTIONS(111), 1,
      anon_sym_pd,
    ACTIONS(113), 1,
      anon_sym_tmp,
    ACTIONS(115), 1,
      anon_sym_u,
    ACTIONS(117), 1,
      anon_sym_trcl,
    ACTIONS(119), 1,
      anon_sym_STAR,
    ACTIONS(121), 1,
      anon_sym_lat,
    ACTIONS(123), 1,
      anon_sym_fill,
    ACTIONS(125), 1,
      anon_sym_elpt_COLON,
    ACTIONS(127), 1,
      anon_sym_cosy,
    ACTIONS(129), 1,
      anon_sym_bflcl,
    ACTIONS(131), 1,
      anon_sym_unc_COLON,
    ACTIONS(135), 1,
      sym_signed_integer,
    ACTIONS(137), 1,
      sym_facet_half_space,
    ACTIONS(139), 1,
      sym_endline,
    STATE(22), 1,
      sym_cell_geometry,
    STATE(225), 1,
      sym_cell_parameters,
    STATE(16), 2,
      sym_cell_parameter,
      aux_sym_cell_parameters_repeat1,
    STATE(42), 2,
      sym_trcl_number,
      sym_trcl_matrix,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    STATE(24), 3,
      sym_union,
      sym_intersect,
      sym_complement,
    STATE(43), 3,
      sym_fill_form1,
      sym_fill_form2,
      sym_fill_form3,
    STATE(41), 18,
      sym_cell_para_imp,
      sym_cell_para_vol,
      sym_cell_para_pwt,
      sym_cell_para_ext,
      sym_cell_para_fcl,
      sym_cell_para_wwn,
      sym_cell_para_dxc,
      sym_cell_para_nonu,
      sym_cell_para_pd,
      sym_cell_para_tmp,
      sym_cell_para_univ,
      sym_cell_para_trcl,
      sym_cell_para_lat,
      sym_cell_para_fill,
      sym_cell_para_elpt,
      sym_cell_para_cosy,
      sym_cell_para_bflcl,
      sym_cell_para_unc,
  [250] = 28,
    ACTIONS(95), 1,
      anon_sym_imp_COLON,
    ACTIONS(97), 1,
      anon_sym_vol,
    ACTIONS(99), 1,
      anon_sym_pwt,
    ACTIONS(101), 1,
      anon_sym_ext_COLON,
    ACTIONS(103), 1,
      anon_sym_fcl_COLON,
    ACTIONS(105), 1,
      anon_sym_wwn,
    ACTIONS(107), 1,
      anon_sym_dxc,
    ACTIONS(109), 1,
      anon_sym_nonu,
    ACTIONS(111), 1,
      anon_sym_pd,
    ACTIONS(113), 1,
      anon_sym_tmp,
    ACTIONS(115), 1,
      anon_sym_u,
    ACTIONS(117), 1,
      anon_sym_trcl,
    ACTIONS(119), 1,
      anon_sym_STAR,
    ACTIONS(121), 1,
      anon_sym_lat,
    ACTIONS(123), 1,
      anon_sym_fill,
    ACTIONS(125), 1,
      anon_sym_elpt_COLON,
    ACTIONS(127), 1,
      anon_sym_cosy,
    ACTIONS(129), 1,
      anon_sym_bflcl,
    ACTIONS(131), 1,
      anon_sym_unc_COLON,
    ACTIONS(141), 1,
      anon_sym_mat,
    ACTIONS(143), 1,
      anon_sym_rho,
    STATE(221), 1,
      sym_cell_like_parameters,
    STATE(15), 2,
      sym_cell_like_parameter,
      aux_sym_cell_like_parameters_repeat1,
    STATE(42), 2,
      sym_trcl_number,
      sym_trcl_matrix,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    STATE(40), 3,
      sym_cell_parameter,
      sym_cell_para_mat,
      sym_cell_para_dens,
    STATE(43), 3,
      sym_fill_form1,
      sym_fill_form2,
      sym_fill_form3,
    STATE(41), 18,
      sym_cell_para_imp,
      sym_cell_para_vol,
      sym_cell_para_pwt,
      sym_cell_para_ext,
      sym_cell_para_fcl,
      sym_cell_para_wwn,
      sym_cell_para_dxc,
      sym_cell_para_nonu,
      sym_cell_para_pd,
      sym_cell_para_tmp,
      sym_cell_para_univ,
      sym_cell_para_trcl,
      sym_cell_para_lat,
      sym_cell_para_fill,
      sym_cell_para_elpt,
      sym_cell_para_cosy,
      sym_cell_para_bflcl,
      sym_cell_para_unc,
  [360] = 28,
    ACTIONS(145), 1,
      anon_sym_imp_COLON,
    ACTIONS(148), 1,
      anon_sym_vol,
    ACTIONS(151), 1,
      anon_sym_pwt,
    ACTIONS(154), 1,
      anon_sym_ext_COLON,
    ACTIONS(157), 1,
      anon_sym_fcl_COLON,
    ACTIONS(160), 1,
      anon_sym_wwn,
    ACTIONS(163), 1,
      anon_sym_dxc,
    ACTIONS(166), 1,
      anon_sym_nonu,
    ACTIONS(169), 1,
      anon_sym_pd,
    ACTIONS(172), 1,
      anon_sym_tmp,
    ACTIONS(175), 1,
      anon_sym_u,
    ACTIONS(178), 1,
      anon_sym_trcl,
    ACTIONS(181), 1,
      anon_sym_STAR,
    ACTIONS(184), 1,
      anon_sym_lat,
    ACTIONS(187), 1,
      anon_sym_fill,
    ACTIONS(190), 1,
      anon_sym_elpt_COLON,
    ACTIONS(193), 1,
      anon_sym_cosy,
    ACTIONS(196), 1,
      anon_sym_bflcl,
    ACTIONS(199), 1,
      anon_sym_unc_COLON,
    ACTIONS(202), 1,
      anon_sym_mat,
    ACTIONS(205), 1,
      anon_sym_rho,
    ACTIONS(208), 1,
      sym_endline,
    STATE(14), 2,
      sym_cell_like_parameter,
      aux_sym_cell_like_parameters_repeat1,
    STATE(42), 2,
      sym_trcl_number,
      sym_trcl_matrix,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    STATE(40), 3,
      sym_cell_parameter,
      sym_cell_para_mat,
      sym_cell_para_dens,
    STATE(43), 3,
      sym_fill_form1,
      sym_fill_form2,
      sym_fill_form3,
    STATE(41), 18,
      sym_cell_para_imp,
      sym_cell_para_vol,
      sym_cell_para_pwt,
      sym_cell_para_ext,
      sym_cell_para_fcl,
      sym_cell_para_wwn,
      sym_cell_para_dxc,
      sym_cell_para_nonu,
      sym_cell_para_pd,
      sym_cell_para_tmp,
      sym_cell_para_univ,
      sym_cell_para_trcl,
      sym_cell_para_lat,
      sym_cell_para_fill,
      sym_cell_para_elpt,
      sym_cell_para_cosy,
      sym_cell_para_bflcl,
      sym_cell_para_unc,
  [470] = 28,
    ACTIONS(95), 1,
      anon_sym_imp_COLON,
    ACTIONS(97), 1,
      anon_sym_vol,
    ACTIONS(99), 1,
      anon_sym_pwt,
    ACTIONS(101), 1,
      anon_sym_ext_COLON,
    ACTIONS(103), 1,
      anon_sym_fcl_COLON,
    ACTIONS(105), 1,
      anon_sym_wwn,
    ACTIONS(107), 1,
      anon_sym_dxc,
    ACTIONS(109), 1,
      anon_sym_nonu,
    ACTIONS(111), 1,
      anon_sym_pd,
    ACTIONS(113), 1,
      anon_sym_tmp,
    ACTIONS(115), 1,
      anon_sym_u,
    ACTIONS(117), 1,
      anon_sym_trcl,
    ACTIONS(119), 1,
      anon_sym_STAR,
    ACTIONS(121), 1,
      anon_sym_lat,
    ACTIONS(123), 1,
      anon_sym_fill,
    ACTIONS(125), 1,
      anon_sym_elpt_COLON,
    ACTIONS(127), 1,
      anon_sym_cosy,
    ACTIONS(129), 1,
      anon_sym_bflcl,
    ACTIONS(131), 1,
      anon_sym_unc_COLON,
    ACTIONS(141), 1,
      anon_sym_mat,
    ACTIONS(143), 1,
      anon_sym_rho,
    ACTIONS(210), 1,
      sym_endline,
    STATE(14), 2,
      sym_cell_like_parameter,
      aux_sym_cell_like_parameters_repeat1,
    STATE(42), 2,
      sym_trcl_number,
      sym_trcl_matrix,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    STATE(40), 3,
      sym_cell_parameter,
      sym_cell_para_mat,
      sym_cell_para_dens,
    STATE(43), 3,
      sym_fill_form1,
      sym_fill_form2,
      sym_fill_form3,
    STATE(41), 18,
      sym_cell_para_imp,
      sym_cell_para_vol,
      sym_cell_para_pwt,
      sym_cell_para_ext,
      sym_cell_para_fcl,
      sym_cell_para_wwn,
      sym_cell_para_dxc,
      sym_cell_para_nonu,
      sym_cell_para_pd,
      sym_cell_para_tmp,
      sym_cell_para_univ,
      sym_cell_para_trcl,
      sym_cell_para_lat,
      sym_cell_para_fill,
      sym_cell_para_elpt,
      sym_cell_para_cosy,
      sym_cell_para_bflcl,
      sym_cell_para_unc,
  [580] = 25,
    ACTIONS(95), 1,
      anon_sym_imp_COLON,
    ACTIONS(97), 1,
      anon_sym_vol,
    ACTIONS(99), 1,
      anon_sym_pwt,
    ACTIONS(101), 1,
      anon_sym_ext_COLON,
    ACTIONS(103), 1,
      anon_sym_fcl_COLON,
    ACTIONS(105), 1,
      anon_sym_wwn,
    ACTIONS(107), 1,
      anon_sym_dxc,
    ACTIONS(109), 1,
      anon_sym_nonu,
    ACTIONS(111), 1,
      anon_sym_pd,
    ACTIONS(113), 1,
      anon_sym_tmp,
    ACTIONS(115), 1,
      anon_sym_u,
    ACTIONS(117), 1,
      anon_sym_trcl,
    ACTIONS(119), 1,
      anon_sym_STAR,
    ACTIONS(121), 1,
      anon_sym_lat,
    ACTIONS(123), 1,
      anon_sym_fill,
    ACTIONS(125), 1,
      anon_sym_elpt_COLON,
    ACTIONS(127), 1,
      anon_sym_cosy,
    ACTIONS(129), 1,
      anon_sym_bflcl,
    ACTIONS(131), 1,
      anon_sym_unc_COLON,
    ACTIONS(212), 1,
      sym_endline,
    STATE(17), 2,
      sym_cell_parameter,
      aux_sym_cell_parameters_repeat1,
    STATE(42), 2,
      sym_trcl_number,
      sym_trcl_matrix,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    STATE(43), 3,
      sym_fill_form1,
      sym_fill_form2,
      sym_fill_form3,
    STATE(41), 18,
      sym_cell_para_imp,
      sym_cell_para_vol,
      sym_cell_para_pwt,
      sym_cell_para_ext,
      sym_cell_para_fcl,
      sym_cell_para_wwn,
      sym_cell_para_dxc,
      sym_cell_para_nonu,
      sym_cell_para_pd,
      sym_cell_para_tmp,
      sym_cell_para_univ,
      sym_cell_para_trcl,
      sym_cell_para_lat,
      sym_cell_para_fill,
      sym_cell_para_elpt,
      sym_cell_para_cosy,
      sym_cell_para_bflcl,
      sym_cell_para_unc,
  [679] = 25,
    ACTIONS(214), 1,
      anon_sym_imp_COLON,
    ACTIONS(217), 1,
      anon_sym_vol,
    ACTIONS(220), 1,
      anon_sym_pwt,
    ACTIONS(223), 1,
      anon_sym_ext_COLON,
    ACTIONS(226), 1,
      anon_sym_fcl_COLON,
    ACTIONS(229), 1,
      anon_sym_wwn,
    ACTIONS(232), 1,
      anon_sym_dxc,
    ACTIONS(235), 1,
      anon_sym_nonu,
    ACTIONS(238), 1,
      anon_sym_pd,
    ACTIONS(241), 1,
      anon_sym_tmp,
    ACTIONS(244), 1,
      anon_sym_u,
    ACTIONS(247), 1,
      anon_sym_trcl,
    ACTIONS(250), 1,
      anon_sym_STAR,
    ACTIONS(253), 1,
      anon_sym_lat,
    ACTIONS(256), 1,
      anon_sym_fill,
    ACTIONS(259), 1,
      anon_sym_elpt_COLON,
    ACTIONS(262), 1,
      anon_sym_cosy,
    ACTIONS(265), 1,
      anon_sym_bflcl,
    ACTIONS(268), 1,
      anon_sym_unc_COLON,
    ACTIONS(271), 1,
      sym_endline,
    STATE(17), 2,
      sym_cell_parameter,
      aux_sym_cell_parameters_repeat1,
    STATE(42), 2,
      sym_trcl_number,
      sym_trcl_matrix,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    STATE(43), 3,
      sym_fill_form1,
      sym_fill_form2,
      sym_fill_form3,
    STATE(41), 18,
      sym_cell_para_imp,
      sym_cell_para_vol,
      sym_cell_para_pwt,
      sym_cell_para_ext,
      sym_cell_para_fcl,
      sym_cell_para_wwn,
      sym_cell_para_dxc,
      sym_cell_para_nonu,
      sym_cell_para_pd,
      sym_cell_para_tmp,
      sym_cell_para_univ,
      sym_cell_para_trcl,
      sym_cell_para_lat,
      sym_cell_para_fill,
      sym_cell_para_elpt,
      sym_cell_para_cosy,
      sym_cell_para_bflcl,
      sym_cell_para_unc,
  [778] = 4,
    ACTIONS(277), 1,
      sym_signed_integer,
    ACTIONS(273), 2,
      anon_sym_s,
      anon_sym_p,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    ACTIONS(275), 38,
      anon_sym_x,
      anon_sym_y,
      anon_sym_z,
      anon_sym_px,
      anon_sym_py,
      anon_sym_pz,
      anon_sym_so,
      anon_sym_sx,
      anon_sym_sy,
      anon_sym_sz,
      anon_sym_c_SLASHx,
      anon_sym_c_SLASHy,
      anon_sym_c_SLASHz,
      anon_sym_cx,
      anon_sym_cy,
      anon_sym_cz,
      anon_sym_k_SLASHx,
      anon_sym_k_SLASHy,
      anon_sym_k_SLASHz,
      anon_sym_kx,
      anon_sym_ky,
      anon_sym_kz,
      anon_sym_sq,
      anon_sym_gq,
      anon_sym_tx,
      anon_sym_ty,
      anon_sym_tz,
      anon_sym_box,
      anon_sym_rpp,
      anon_sym_sph,
      anon_sym_rcc,
      anon_sym_rhp,
      anon_sym_hex,
      anon_sym_rec,
      anon_sym_trc,
      anon_sym_ell,
      anon_sym_wed,
      anon_sym_arb,
  [831] = 4,
    ACTIONS(283), 1,
      sym_signed_integer,
    ACTIONS(279), 2,
      anon_sym_s,
      anon_sym_p,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    ACTIONS(281), 38,
      anon_sym_x,
      anon_sym_y,
      anon_sym_z,
      anon_sym_px,
      anon_sym_py,
      anon_sym_pz,
      anon_sym_so,
      anon_sym_sx,
      anon_sym_sy,
      anon_sym_sz,
      anon_sym_c_SLASHx,
      anon_sym_c_SLASHy,
      anon_sym_c_SLASHz,
      anon_sym_cx,
      anon_sym_cy,
      anon_sym_cz,
      anon_sym_k_SLASHx,
      anon_sym_k_SLASHy,
      anon_sym_k_SLASHz,
      anon_sym_kx,
      anon_sym_ky,
      anon_sym_kz,
      anon_sym_sq,
      anon_sym_gq,
      anon_sym_tx,
      anon_sym_ty,
      anon_sym_tz,
      anon_sym_box,
      anon_sym_rpp,
      anon_sym_sph,
      anon_sym_rcc,
      anon_sym_rhp,
      anon_sym_hex,
      anon_sym_rec,
      anon_sym_trc,
      anon_sym_ell,
      anon_sym_wed,
      anon_sym_arb,
  [884] = 3,
    ACTIONS(285), 2,
      anon_sym_s,
      anon_sym_p,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    ACTIONS(287), 38,
      anon_sym_x,
      anon_sym_y,
      anon_sym_z,
      anon_sym_px,
      anon_sym_py,
      anon_sym_pz,
      anon_sym_so,
      anon_sym_sx,
      anon_sym_sy,
      anon_sym_sz,
      anon_sym_c_SLASHx,
      anon_sym_c_SLASHy,
      anon_sym_c_SLASHz,
      anon_sym_cx,
      anon_sym_cy,
      anon_sym_cz,
      anon_sym_k_SLASHx,
      anon_sym_k_SLASHy,
      anon_sym_k_SLASHz,
      anon_sym_kx,
      anon_sym_ky,
      anon_sym_kz,
      anon_sym_sq,
      anon_sym_gq,
      anon_sym_tx,
      anon_sym_ty,
      anon_sym_tz,
      anon_sym_box,
      anon_sym_rpp,
      anon_sym_sph,
      anon_sym_rcc,
      anon_sym_rhp,
      anon_sym_hex,
      anon_sym_rec,
      anon_sym_trc,
      anon_sym_ell,
      anon_sym_wed,
      anon_sym_arb,
  [934] = 3,
    ACTIONS(289), 2,
      anon_sym_s,
      anon_sym_p,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    ACTIONS(291), 38,
      anon_sym_x,
      anon_sym_y,
      anon_sym_z,
      anon_sym_px,
      anon_sym_py,
      anon_sym_pz,
      anon_sym_so,
      anon_sym_sx,
      anon_sym_sy,
      anon_sym_sz,
      anon_sym_c_SLASHx,
      anon_sym_c_SLASHy,
      anon_sym_c_SLASHz,
      anon_sym_cx,
      anon_sym_cy,
      anon_sym_cz,
      anon_sym_k_SLASHx,
      anon_sym_k_SLASHy,
      anon_sym_k_SLASHz,
      anon_sym_kx,
      anon_sym_ky,
      anon_sym_kz,
      anon_sym_sq,
      anon_sym_gq,
      anon_sym_tx,
      anon_sym_ty,
      anon_sym_tz,
      anon_sym_box,
      anon_sym_rpp,
      anon_sym_sph,
      anon_sym_rcc,
      anon_sym_rhp,
      anon_sym_hex,
      anon_sym_rec,
      anon_sym_trc,
      anon_sym_ell,
      anon_sym_wed,
      anon_sym_arb,
  [984] = 5,
    STATE(22), 1,
      sym_cell_geometry,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    ACTIONS(295), 3,
      anon_sym_u,
      sym_endline,
      sym_signed_integer,
    STATE(24), 3,
      sym_union,
      sym_intersect,
      sym_complement,
    ACTIONS(293), 23,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_POUND,
      anon_sym_imp_COLON,
      anon_sym_vol,
      anon_sym_pwt,
      anon_sym_ext_COLON,
      anon_sym_fcl_COLON,
      anon_sym_wwn,
      anon_sym_dxc,
      anon_sym_nonu,
      anon_sym_pd,
      anon_sym_tmp,
      anon_sym_trcl,
      anon_sym_STAR,
      anon_sym_lat,
      anon_sym_fill,
      anon_sym_elpt_COLON,
      anon_sym_cosy,
      anon_sym_bflcl,
      anon_sym_unc_COLON,
      sym_facet_half_space,
  [1028] = 9,
    ACTIONS(89), 1,
      anon_sym_LPAREN,
    ACTIONS(93), 1,
      anon_sym_POUND,
    ACTIONS(135), 1,
      sym_signed_integer,
    ACTIONS(137), 1,
      sym_facet_half_space,
    STATE(22), 1,
      sym_cell_geometry,
    ACTIONS(299), 2,
      anon_sym_u,
      sym_endline,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    STATE(24), 3,
      sym_union,
      sym_intersect,
      sym_complement,
    ACTIONS(297), 20,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_imp_COLON,
      anon_sym_vol,
      anon_sym_pwt,
      anon_sym_ext_COLON,
      anon_sym_fcl_COLON,
      anon_sym_wwn,
      anon_sym_dxc,
      anon_sym_nonu,
      anon_sym_pd,
      anon_sym_tmp,
      anon_sym_trcl,
      anon_sym_STAR,
      anon_sym_lat,
      anon_sym_fill,
      anon_sym_elpt_COLON,
      anon_sym_cosy,
      anon_sym_bflcl,
      anon_sym_unc_COLON,
  [1080] = 3,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    ACTIONS(303), 3,
      anon_sym_u,
      sym_endline,
      sym_signed_integer,
    ACTIONS(301), 23,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_POUND,
      anon_sym_imp_COLON,
      anon_sym_vol,
      anon_sym_pwt,
      anon_sym_ext_COLON,
      anon_sym_fcl_COLON,
      anon_sym_wwn,
      anon_sym_dxc,
      anon_sym_nonu,
      anon_sym_pd,
      anon_sym_tmp,
      anon_sym_trcl,
      anon_sym_STAR,
      anon_sym_lat,
      anon_sym_fill,
      anon_sym_elpt_COLON,
      anon_sym_cosy,
      anon_sym_bflcl,
      anon_sym_unc_COLON,
      sym_facet_half_space,
  [1116] = 3,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    ACTIONS(303), 3,
      anon_sym_u,
      sym_endline,
      sym_signed_integer,
    ACTIONS(301), 23,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_POUND,
      anon_sym_imp_COLON,
      anon_sym_vol,
      anon_sym_pwt,
      anon_sym_ext_COLON,
      anon_sym_fcl_COLON,
      anon_sym_wwn,
      anon_sym_dxc,
      anon_sym_nonu,
      anon_sym_pd,
      anon_sym_tmp,
      anon_sym_trcl,
      anon_sym_STAR,
      anon_sym_lat,
      anon_sym_fill,
      anon_sym_elpt_COLON,
      anon_sym_cosy,
      anon_sym_bflcl,
      anon_sym_unc_COLON,
      sym_facet_half_space,
  [1152] = 3,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    ACTIONS(307), 3,
      anon_sym_u,
      sym_endline,
      sym_signed_integer,
    ACTIONS(305), 23,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_POUND,
      anon_sym_imp_COLON,
      anon_sym_vol,
      anon_sym_pwt,
      anon_sym_ext_COLON,
      anon_sym_fcl_COLON,
      anon_sym_wwn,
      anon_sym_dxc,
      anon_sym_nonu,
      anon_sym_pd,
      anon_sym_tmp,
      anon_sym_trcl,
      anon_sym_STAR,
      anon_sym_lat,
      anon_sym_fill,
      anon_sym_elpt_COLON,
      anon_sym_cosy,
      anon_sym_bflcl,
      anon_sym_unc_COLON,
      sym_facet_half_space,
  [1188] = 3,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    ACTIONS(311), 3,
      anon_sym_u,
      sym_endline,
      sym_signed_integer,
    ACTIONS(309), 23,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_POUND,
      anon_sym_imp_COLON,
      anon_sym_vol,
      anon_sym_pwt,
      anon_sym_ext_COLON,
      anon_sym_fcl_COLON,
      anon_sym_wwn,
      anon_sym_dxc,
      anon_sym_nonu,
      anon_sym_pd,
      anon_sym_tmp,
      anon_sym_trcl,
      anon_sym_STAR,
      anon_sym_lat,
      anon_sym_fill,
      anon_sym_elpt_COLON,
      anon_sym_cosy,
      anon_sym_bflcl,
      anon_sym_unc_COLON,
      sym_facet_half_space,
  [1224] = 3,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    ACTIONS(315), 3,
      anon_sym_u,
      sym_endline,
      sym_signed_integer,
    ACTIONS(313), 23,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_POUND,
      anon_sym_imp_COLON,
      anon_sym_vol,
      anon_sym_pwt,
      anon_sym_ext_COLON,
      anon_sym_fcl_COLON,
      anon_sym_wwn,
      anon_sym_dxc,
      anon_sym_nonu,
      anon_sym_pd,
      anon_sym_tmp,
      anon_sym_trcl,
      anon_sym_STAR,
      anon_sym_lat,
      anon_sym_fill,
      anon_sym_elpt_COLON,
      anon_sym_cosy,
      anon_sym_bflcl,
      anon_sym_unc_COLON,
      sym_facet_half_space,
  [1260] = 5,
    ACTIONS(319), 1,
      anon_sym_v,
    ACTIONS(323), 2,
      anon_sym_u,
      sym_endline,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    ACTIONS(321), 3,
      anon_sym_x,
      anon_sym_y,
      anon_sym_z,
    ACTIONS(317), 20,
      anon_sym_imp_COLON,
      anon_sym_vol,
      anon_sym_pwt,
      anon_sym_ext_COLON,
      anon_sym_fcl_COLON,
      anon_sym_wwn,
      anon_sym_dxc,
      anon_sym_nonu,
      anon_sym_pd,
      anon_sym_tmp,
      anon_sym_trcl,
      anon_sym_STAR,
      anon_sym_lat,
      anon_sym_fill,
      anon_sym_elpt_COLON,
      anon_sym_cosy,
      anon_sym_bflcl,
      anon_sym_unc_COLON,
      anon_sym_mat,
      anon_sym_rho,
  [1300] = 3,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    ACTIONS(327), 3,
      anon_sym_u,
      sym_endline,
      sym_signed_integer,
    ACTIONS(325), 23,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_POUND,
      anon_sym_imp_COLON,
      anon_sym_vol,
      anon_sym_pwt,
      anon_sym_ext_COLON,
      anon_sym_fcl_COLON,
      anon_sym_wwn,
      anon_sym_dxc,
      anon_sym_nonu,
      anon_sym_pd,
      anon_sym_tmp,
      anon_sym_trcl,
      anon_sym_STAR,
      anon_sym_lat,
      anon_sym_fill,
      anon_sym_elpt_COLON,
      anon_sym_cosy,
      anon_sym_bflcl,
      anon_sym_unc_COLON,
      sym_facet_half_space,
  [1336] = 5,
    STATE(31), 1,
      aux_sym_fill_form3_repeat1,
    ACTIONS(331), 2,
      anon_sym_u,
      sym_endline,
    ACTIONS(333), 2,
      sym_signed_integer,
      sym_shortcut,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    ACTIONS(329), 20,
      anon_sym_imp_COLON,
      anon_sym_vol,
      anon_sym_pwt,
      anon_sym_ext_COLON,
      anon_sym_fcl_COLON,
      anon_sym_wwn,
      anon_sym_dxc,
      anon_sym_nonu,
      anon_sym_pd,
      anon_sym_tmp,
      anon_sym_trcl,
      anon_sym_STAR,
      anon_sym_lat,
      anon_sym_fill,
      anon_sym_elpt_COLON,
      anon_sym_cosy,
      anon_sym_bflcl,
      anon_sym_unc_COLON,
      anon_sym_mat,
      anon_sym_rho,
  [1375] = 5,
    STATE(31), 1,
      aux_sym_fill_form3_repeat1,
    ACTIONS(338), 2,
      anon_sym_u,
      sym_endline,
    ACTIONS(340), 2,
      sym_signed_integer,
      sym_shortcut,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    ACTIONS(336), 20,
      anon_sym_imp_COLON,
      anon_sym_vol,
      anon_sym_pwt,
      anon_sym_ext_COLON,
      anon_sym_fcl_COLON,
      anon_sym_wwn,
      anon_sym_dxc,
      anon_sym_nonu,
      anon_sym_pd,
      anon_sym_tmp,
      anon_sym_trcl,
      anon_sym_STAR,
      anon_sym_lat,
      anon_sym_fill,
      anon_sym_elpt_COLON,
      anon_sym_cosy,
      anon_sym_bflcl,
      anon_sym_unc_COLON,
      anon_sym_mat,
      anon_sym_rho,
  [1414] = 5,
    STATE(31), 1,
      aux_sym_fill_form3_repeat1,
    ACTIONS(340), 2,
      sym_signed_integer,
      sym_shortcut,
    ACTIONS(344), 2,
      anon_sym_u,
      sym_endline,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    ACTIONS(342), 20,
      anon_sym_imp_COLON,
      anon_sym_vol,
      anon_sym_pwt,
      anon_sym_ext_COLON,
      anon_sym_fcl_COLON,
      anon_sym_wwn,
      anon_sym_dxc,
      anon_sym_nonu,
      anon_sym_pd,
      anon_sym_tmp,
      anon_sym_trcl,
      anon_sym_STAR,
      anon_sym_lat,
      anon_sym_fill,
      anon_sym_elpt_COLON,
      anon_sym_cosy,
      anon_sym_bflcl,
      anon_sym_unc_COLON,
      anon_sym_mat,
      anon_sym_rho,
  [1453] = 5,
    ACTIONS(346), 1,
      anon_sym_LPAREN,
    ACTIONS(348), 1,
      anon_sym_COLON,
    ACTIONS(352), 2,
      anon_sym_u,
      sym_endline,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    ACTIONS(350), 20,
      anon_sym_imp_COLON,
      anon_sym_vol,
      anon_sym_pwt,
      anon_sym_ext_COLON,
      anon_sym_fcl_COLON,
      anon_sym_wwn,
      anon_sym_dxc,
      anon_sym_nonu,
      anon_sym_pd,
      anon_sym_tmp,
      anon_sym_trcl,
      anon_sym_STAR,
      anon_sym_lat,
      anon_sym_fill,
      anon_sym_elpt_COLON,
      anon_sym_cosy,
      anon_sym_bflcl,
      anon_sym_unc_COLON,
      anon_sym_mat,
      anon_sym_rho,
  [1491] = 5,
    ACTIONS(354), 1,
      anon_sym_LPAREN,
    ACTIONS(356), 1,
      anon_sym_COLON,
    ACTIONS(360), 2,
      anon_sym_u,
      sym_endline,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    ACTIONS(358), 20,
      anon_sym_imp_COLON,
      anon_sym_vol,
      anon_sym_pwt,
      anon_sym_ext_COLON,
      anon_sym_fcl_COLON,
      anon_sym_wwn,
      anon_sym_dxc,
      anon_sym_nonu,
      anon_sym_pd,
      anon_sym_tmp,
      anon_sym_trcl,
      anon_sym_STAR,
      anon_sym_lat,
      anon_sym_fill,
      anon_sym_elpt_COLON,
      anon_sym_cosy,
      anon_sym_bflcl,
      anon_sym_unc_COLON,
      anon_sym_mat,
      anon_sym_rho,
  [1529] = 3,
    ACTIONS(364), 2,
      anon_sym_u,
      sym_endline,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    ACTIONS(362), 20,
      anon_sym_imp_COLON,
      anon_sym_vol,
      anon_sym_pwt,
      anon_sym_ext_COLON,
      anon_sym_fcl_COLON,
      anon_sym_wwn,
      anon_sym_dxc,
      anon_sym_nonu,
      anon_sym_pd,
      anon_sym_tmp,
      anon_sym_trcl,
      anon_sym_STAR,
      anon_sym_lat,
      anon_sym_fill,
      anon_sym_elpt_COLON,
      anon_sym_cosy,
      anon_sym_bflcl,
      anon_sym_unc_COLON,
      anon_sym_mat,
      anon_sym_rho,
  [1561] = 3,
    ACTIONS(368), 2,
      anon_sym_u,
      sym_endline,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    ACTIONS(366), 20,
      anon_sym_imp_COLON,
      anon_sym_vol,
      anon_sym_pwt,
      anon_sym_ext_COLON,
      anon_sym_fcl_COLON,
      anon_sym_wwn,
      anon_sym_dxc,
      anon_sym_nonu,
      anon_sym_pd,
      anon_sym_tmp,
      anon_sym_trcl,
      anon_sym_STAR,
      anon_sym_lat,
      anon_sym_fill,
      anon_sym_elpt_COLON,
      anon_sym_cosy,
      anon_sym_bflcl,
      anon_sym_unc_COLON,
      anon_sym_mat,
      anon_sym_rho,
  [1593] = 3,
    ACTIONS(372), 2,
      anon_sym_u,
      sym_endline,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    ACTIONS(370), 20,
      anon_sym_imp_COLON,
      anon_sym_vol,
      anon_sym_pwt,
      anon_sym_ext_COLON,
      anon_sym_fcl_COLON,
      anon_sym_wwn,
      anon_sym_dxc,
      anon_sym_nonu,
      anon_sym_pd,
      anon_sym_tmp,
      anon_sym_trcl,
      anon_sym_STAR,
      anon_sym_lat,
      anon_sym_fill,
      anon_sym_elpt_COLON,
      anon_sym_cosy,
      anon_sym_bflcl,
      anon_sym_unc_COLON,
      anon_sym_mat,
      anon_sym_rho,
  [1625] = 3,
    ACTIONS(376), 2,
      anon_sym_u,
      sym_endline,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    ACTIONS(374), 20,
      anon_sym_imp_COLON,
      anon_sym_vol,
      anon_sym_pwt,
      anon_sym_ext_COLON,
      anon_sym_fcl_COLON,
      anon_sym_wwn,
      anon_sym_dxc,
      anon_sym_nonu,
      anon_sym_pd,
      anon_sym_tmp,
      anon_sym_trcl,
      anon_sym_STAR,
      anon_sym_lat,
      anon_sym_fill,
      anon_sym_elpt_COLON,
      anon_sym_cosy,
      anon_sym_bflcl,
      anon_sym_unc_COLON,
      anon_sym_mat,
      anon_sym_rho,
  [1657] = 3,
    ACTIONS(380), 2,
      anon_sym_u,
      sym_endline,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    ACTIONS(378), 20,
      anon_sym_imp_COLON,
      anon_sym_vol,
      anon_sym_pwt,
      anon_sym_ext_COLON,
      anon_sym_fcl_COLON,
      anon_sym_wwn,
      anon_sym_dxc,
      anon_sym_nonu,
      anon_sym_pd,
      anon_sym_tmp,
      anon_sym_trcl,
      anon_sym_STAR,
      anon_sym_lat,
      anon_sym_fill,
      anon_sym_elpt_COLON,
      anon_sym_cosy,
      anon_sym_bflcl,
      anon_sym_unc_COLON,
      anon_sym_mat,
      anon_sym_rho,
  [1689] = 3,
    ACTIONS(384), 2,
      anon_sym_u,
      sym_endline,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    ACTIONS(382), 20,
      anon_sym_imp_COLON,
      anon_sym_vol,
      anon_sym_pwt,
      anon_sym_ext_COLON,
      anon_sym_fcl_COLON,
      anon_sym_wwn,
      anon_sym_dxc,
      anon_sym_nonu,
      anon_sym_pd,
      anon_sym_tmp,
      anon_sym_trcl,
      anon_sym_STAR,
      anon_sym_lat,
      anon_sym_fill,
      anon_sym_elpt_COLON,
      anon_sym_cosy,
      anon_sym_bflcl,
      anon_sym_unc_COLON,
      anon_sym_mat,
      anon_sym_rho,
  [1721] = 3,
    ACTIONS(388), 2,
      anon_sym_u,
      sym_endline,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    ACTIONS(386), 20,
      anon_sym_imp_COLON,
      anon_sym_vol,
      anon_sym_pwt,
      anon_sym_ext_COLON,
      anon_sym_fcl_COLON,
      anon_sym_wwn,
      anon_sym_dxc,
      anon_sym_nonu,
      anon_sym_pd,
      anon_sym_tmp,
      anon_sym_trcl,
      anon_sym_STAR,
      anon_sym_lat,
      anon_sym_fill,
      anon_sym_elpt_COLON,
      anon_sym_cosy,
      anon_sym_bflcl,
      anon_sym_unc_COLON,
      anon_sym_mat,
      anon_sym_rho,
  [1753] = 3,
    ACTIONS(392), 2,
      anon_sym_u,
      sym_endline,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    ACTIONS(390), 20,
      anon_sym_imp_COLON,
      anon_sym_vol,
      anon_sym_pwt,
      anon_sym_ext_COLON,
      anon_sym_fcl_COLON,
      anon_sym_wwn,
      anon_sym_dxc,
      anon_sym_nonu,
      anon_sym_pd,
      anon_sym_tmp,
      anon_sym_trcl,
      anon_sym_STAR,
      anon_sym_lat,
      anon_sym_fill,
      anon_sym_elpt_COLON,
      anon_sym_cosy,
      anon_sym_bflcl,
      anon_sym_unc_COLON,
      anon_sym_mat,
      anon_sym_rho,
  [1785] = 3,
    ACTIONS(396), 2,
      anon_sym_u,
      sym_endline,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    ACTIONS(394), 20,
      anon_sym_imp_COLON,
      anon_sym_vol,
      anon_sym_pwt,
      anon_sym_ext_COLON,
      anon_sym_fcl_COLON,
      anon_sym_wwn,
      anon_sym_dxc,
      anon_sym_nonu,
      anon_sym_pd,
      anon_sym_tmp,
      anon_sym_trcl,
      anon_sym_STAR,
      anon_sym_lat,
      anon_sym_fill,
      anon_sym_elpt_COLON,
      anon_sym_cosy,
      anon_sym_bflcl,
      anon_sym_unc_COLON,
      anon_sym_mat,
      anon_sym_rho,
  [1817] = 3,
    ACTIONS(400), 2,
      anon_sym_u,
      sym_endline,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    ACTIONS(398), 20,
      anon_sym_imp_COLON,
      anon_sym_vol,
      anon_sym_pwt,
      anon_sym_ext_COLON,
      anon_sym_fcl_COLON,
      anon_sym_wwn,
      anon_sym_dxc,
      anon_sym_nonu,
      anon_sym_pd,
      anon_sym_tmp,
      anon_sym_trcl,
      anon_sym_STAR,
      anon_sym_lat,
      anon_sym_fill,
      anon_sym_elpt_COLON,
      anon_sym_cosy,
      anon_sym_bflcl,
      anon_sym_unc_COLON,
      anon_sym_mat,
      anon_sym_rho,
  [1849] = 3,
    ACTIONS(404), 2,
      anon_sym_u,
      sym_endline,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    ACTIONS(402), 20,
      anon_sym_imp_COLON,
      anon_sym_vol,
      anon_sym_pwt,
      anon_sym_ext_COLON,
      anon_sym_fcl_COLON,
      anon_sym_wwn,
      anon_sym_dxc,
      anon_sym_nonu,
      anon_sym_pd,
      anon_sym_tmp,
      anon_sym_trcl,
      anon_sym_STAR,
      anon_sym_lat,
      anon_sym_fill,
      anon_sym_elpt_COLON,
      anon_sym_cosy,
      anon_sym_bflcl,
      anon_sym_unc_COLON,
      anon_sym_mat,
      anon_sym_rho,
  [1881] = 3,
    ACTIONS(323), 2,
      anon_sym_u,
      sym_endline,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    ACTIONS(317), 20,
      anon_sym_imp_COLON,
      anon_sym_vol,
      anon_sym_pwt,
      anon_sym_ext_COLON,
      anon_sym_fcl_COLON,
      anon_sym_wwn,
      anon_sym_dxc,
      anon_sym_nonu,
      anon_sym_pd,
      anon_sym_tmp,
      anon_sym_trcl,
      anon_sym_STAR,
      anon_sym_lat,
      anon_sym_fill,
      anon_sym_elpt_COLON,
      anon_sym_cosy,
      anon_sym_bflcl,
      anon_sym_unc_COLON,
      anon_sym_mat,
      anon_sym_rho,
  [1913] = 3,
    ACTIONS(408), 2,
      anon_sym_u,
      sym_endline,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    ACTIONS(406), 20,
      anon_sym_imp_COLON,
      anon_sym_vol,
      anon_sym_pwt,
      anon_sym_ext_COLON,
      anon_sym_fcl_COLON,
      anon_sym_wwn,
      anon_sym_dxc,
      anon_sym_nonu,
      anon_sym_pd,
      anon_sym_tmp,
      anon_sym_trcl,
      anon_sym_STAR,
      anon_sym_lat,
      anon_sym_fill,
      anon_sym_elpt_COLON,
      anon_sym_cosy,
      anon_sym_bflcl,
      anon_sym_unc_COLON,
      anon_sym_mat,
      anon_sym_rho,
  [1945] = 3,
    ACTIONS(412), 2,
      anon_sym_u,
      sym_endline,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    ACTIONS(410), 20,
      anon_sym_imp_COLON,
      anon_sym_vol,
      anon_sym_pwt,
      anon_sym_ext_COLON,
      anon_sym_fcl_COLON,
      anon_sym_wwn,
      anon_sym_dxc,
      anon_sym_nonu,
      anon_sym_pd,
      anon_sym_tmp,
      anon_sym_trcl,
      anon_sym_STAR,
      anon_sym_lat,
      anon_sym_fill,
      anon_sym_elpt_COLON,
      anon_sym_cosy,
      anon_sym_bflcl,
      anon_sym_unc_COLON,
      anon_sym_mat,
      anon_sym_rho,
  [1977] = 3,
    ACTIONS(416), 2,
      anon_sym_u,
      sym_endline,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    ACTIONS(414), 20,
      anon_sym_imp_COLON,
      anon_sym_vol,
      anon_sym_pwt,
      anon_sym_ext_COLON,
      anon_sym_fcl_COLON,
      anon_sym_wwn,
      anon_sym_dxc,
      anon_sym_nonu,
      anon_sym_pd,
      anon_sym_tmp,
      anon_sym_trcl,
      anon_sym_STAR,
      anon_sym_lat,
      anon_sym_fill,
      anon_sym_elpt_COLON,
      anon_sym_cosy,
      anon_sym_bflcl,
      anon_sym_unc_COLON,
      anon_sym_mat,
      anon_sym_rho,
  [2009] = 3,
    ACTIONS(420), 2,
      anon_sym_u,
      sym_endline,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    ACTIONS(418), 20,
      anon_sym_imp_COLON,
      anon_sym_vol,
      anon_sym_pwt,
      anon_sym_ext_COLON,
      anon_sym_fcl_COLON,
      anon_sym_wwn,
      anon_sym_dxc,
      anon_sym_nonu,
      anon_sym_pd,
      anon_sym_tmp,
      anon_sym_trcl,
      anon_sym_STAR,
      anon_sym_lat,
      anon_sym_fill,
      anon_sym_elpt_COLON,
      anon_sym_cosy,
      anon_sym_bflcl,
      anon_sym_unc_COLON,
      anon_sym_mat,
      anon_sym_rho,
  [2041] = 3,
    ACTIONS(424), 2,
      anon_sym_u,
      sym_endline,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    ACTIONS(422), 20,
      anon_sym_imp_COLON,
      anon_sym_vol,
      anon_sym_pwt,
      anon_sym_ext_COLON,
      anon_sym_fcl_COLON,
      anon_sym_wwn,
      anon_sym_dxc,
      anon_sym_nonu,
      anon_sym_pd,
      anon_sym_tmp,
      anon_sym_trcl,
      anon_sym_STAR,
      anon_sym_lat,
      anon_sym_fill,
      anon_sym_elpt_COLON,
      anon_sym_cosy,
      anon_sym_bflcl,
      anon_sym_unc_COLON,
      anon_sym_mat,
      anon_sym_rho,
  [2073] = 3,
    ACTIONS(428), 2,
      anon_sym_u,
      sym_endline,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    ACTIONS(426), 20,
      anon_sym_imp_COLON,
      anon_sym_vol,
      anon_sym_pwt,
      anon_sym_ext_COLON,
      anon_sym_fcl_COLON,
      anon_sym_wwn,
      anon_sym_dxc,
      anon_sym_nonu,
      anon_sym_pd,
      anon_sym_tmp,
      anon_sym_trcl,
      anon_sym_STAR,
      anon_sym_lat,
      anon_sym_fill,
      anon_sym_elpt_COLON,
      anon_sym_cosy,
      anon_sym_bflcl,
      anon_sym_unc_COLON,
      anon_sym_mat,
      anon_sym_rho,
  [2105] = 3,
    ACTIONS(432), 2,
      anon_sym_u,
      sym_endline,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    ACTIONS(430), 20,
      anon_sym_imp_COLON,
      anon_sym_vol,
      anon_sym_pwt,
      anon_sym_ext_COLON,
      anon_sym_fcl_COLON,
      anon_sym_wwn,
      anon_sym_dxc,
      anon_sym_nonu,
      anon_sym_pd,
      anon_sym_tmp,
      anon_sym_trcl,
      anon_sym_STAR,
      anon_sym_lat,
      anon_sym_fill,
      anon_sym_elpt_COLON,
      anon_sym_cosy,
      anon_sym_bflcl,
      anon_sym_unc_COLON,
      anon_sym_mat,
      anon_sym_rho,
  [2137] = 3,
    ACTIONS(436), 2,
      anon_sym_u,
      sym_endline,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    ACTIONS(434), 20,
      anon_sym_imp_COLON,
      anon_sym_vol,
      anon_sym_pwt,
      anon_sym_ext_COLON,
      anon_sym_fcl_COLON,
      anon_sym_wwn,
      anon_sym_dxc,
      anon_sym_nonu,
      anon_sym_pd,
      anon_sym_tmp,
      anon_sym_trcl,
      anon_sym_STAR,
      anon_sym_lat,
      anon_sym_fill,
      anon_sym_elpt_COLON,
      anon_sym_cosy,
      anon_sym_bflcl,
      anon_sym_unc_COLON,
      anon_sym_mat,
      anon_sym_rho,
  [2169] = 3,
    ACTIONS(440), 2,
      anon_sym_u,
      sym_endline,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    ACTIONS(438), 20,
      anon_sym_imp_COLON,
      anon_sym_vol,
      anon_sym_pwt,
      anon_sym_ext_COLON,
      anon_sym_fcl_COLON,
      anon_sym_wwn,
      anon_sym_dxc,
      anon_sym_nonu,
      anon_sym_pd,
      anon_sym_tmp,
      anon_sym_trcl,
      anon_sym_STAR,
      anon_sym_lat,
      anon_sym_fill,
      anon_sym_elpt_COLON,
      anon_sym_cosy,
      anon_sym_bflcl,
      anon_sym_unc_COLON,
      anon_sym_mat,
      anon_sym_rho,
  [2201] = 3,
    ACTIONS(444), 2,
      anon_sym_u,
      sym_endline,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    ACTIONS(442), 20,
      anon_sym_imp_COLON,
      anon_sym_vol,
      anon_sym_pwt,
      anon_sym_ext_COLON,
      anon_sym_fcl_COLON,
      anon_sym_wwn,
      anon_sym_dxc,
      anon_sym_nonu,
      anon_sym_pd,
      anon_sym_tmp,
      anon_sym_trcl,
      anon_sym_STAR,
      anon_sym_lat,
      anon_sym_fill,
      anon_sym_elpt_COLON,
      anon_sym_cosy,
      anon_sym_bflcl,
      anon_sym_unc_COLON,
      anon_sym_mat,
      anon_sym_rho,
  [2233] = 3,
    ACTIONS(448), 2,
      anon_sym_u,
      sym_endline,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    ACTIONS(446), 20,
      anon_sym_imp_COLON,
      anon_sym_vol,
      anon_sym_pwt,
      anon_sym_ext_COLON,
      anon_sym_fcl_COLON,
      anon_sym_wwn,
      anon_sym_dxc,
      anon_sym_nonu,
      anon_sym_pd,
      anon_sym_tmp,
      anon_sym_trcl,
      anon_sym_STAR,
      anon_sym_lat,
      anon_sym_fill,
      anon_sym_elpt_COLON,
      anon_sym_cosy,
      anon_sym_bflcl,
      anon_sym_unc_COLON,
      anon_sym_mat,
      anon_sym_rho,
  [2265] = 3,
    ACTIONS(452), 2,
      anon_sym_u,
      sym_endline,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    ACTIONS(450), 20,
      anon_sym_imp_COLON,
      anon_sym_vol,
      anon_sym_pwt,
      anon_sym_ext_COLON,
      anon_sym_fcl_COLON,
      anon_sym_wwn,
      anon_sym_dxc,
      anon_sym_nonu,
      anon_sym_pd,
      anon_sym_tmp,
      anon_sym_trcl,
      anon_sym_STAR,
      anon_sym_lat,
      anon_sym_fill,
      anon_sym_elpt_COLON,
      anon_sym_cosy,
      anon_sym_bflcl,
      anon_sym_unc_COLON,
      anon_sym_mat,
      anon_sym_rho,
  [2297] = 3,
    ACTIONS(456), 2,
      anon_sym_u,
      sym_endline,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    ACTIONS(454), 20,
      anon_sym_imp_COLON,
      anon_sym_vol,
      anon_sym_pwt,
      anon_sym_ext_COLON,
      anon_sym_fcl_COLON,
      anon_sym_wwn,
      anon_sym_dxc,
      anon_sym_nonu,
      anon_sym_pd,
      anon_sym_tmp,
      anon_sym_trcl,
      anon_sym_STAR,
      anon_sym_lat,
      anon_sym_fill,
      anon_sym_elpt_COLON,
      anon_sym_cosy,
      anon_sym_bflcl,
      anon_sym_unc_COLON,
      anon_sym_mat,
      anon_sym_rho,
  [2329] = 3,
    ACTIONS(460), 2,
      anon_sym_u,
      sym_endline,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    ACTIONS(458), 20,
      anon_sym_imp_COLON,
      anon_sym_vol,
      anon_sym_pwt,
      anon_sym_ext_COLON,
      anon_sym_fcl_COLON,
      anon_sym_wwn,
      anon_sym_dxc,
      anon_sym_nonu,
      anon_sym_pd,
      anon_sym_tmp,
      anon_sym_trcl,
      anon_sym_STAR,
      anon_sym_lat,
      anon_sym_fill,
      anon_sym_elpt_COLON,
      anon_sym_cosy,
      anon_sym_bflcl,
      anon_sym_unc_COLON,
      anon_sym_mat,
      anon_sym_rho,
  [2361] = 3,
    ACTIONS(464), 2,
      anon_sym_u,
      sym_endline,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    ACTIONS(462), 20,
      anon_sym_imp_COLON,
      anon_sym_vol,
      anon_sym_pwt,
      anon_sym_ext_COLON,
      anon_sym_fcl_COLON,
      anon_sym_wwn,
      anon_sym_dxc,
      anon_sym_nonu,
      anon_sym_pd,
      anon_sym_tmp,
      anon_sym_trcl,
      anon_sym_STAR,
      anon_sym_lat,
      anon_sym_fill,
      anon_sym_elpt_COLON,
      anon_sym_cosy,
      anon_sym_bflcl,
      anon_sym_unc_COLON,
      anon_sym_mat,
      anon_sym_rho,
  [2393] = 3,
    ACTIONS(468), 2,
      anon_sym_u,
      sym_endline,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    ACTIONS(466), 20,
      anon_sym_imp_COLON,
      anon_sym_vol,
      anon_sym_pwt,
      anon_sym_ext_COLON,
      anon_sym_fcl_COLON,
      anon_sym_wwn,
      anon_sym_dxc,
      anon_sym_nonu,
      anon_sym_pd,
      anon_sym_tmp,
      anon_sym_trcl,
      anon_sym_STAR,
      anon_sym_lat,
      anon_sym_fill,
      anon_sym_elpt_COLON,
      anon_sym_cosy,
      anon_sym_bflcl,
      anon_sym_unc_COLON,
      anon_sym_mat,
      anon_sym_rho,
  [2425] = 3,
    ACTIONS(472), 2,
      anon_sym_u,
      sym_endline,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    ACTIONS(470), 20,
      anon_sym_imp_COLON,
      anon_sym_vol,
      anon_sym_pwt,
      anon_sym_ext_COLON,
      anon_sym_fcl_COLON,
      anon_sym_wwn,
      anon_sym_dxc,
      anon_sym_nonu,
      anon_sym_pd,
      anon_sym_tmp,
      anon_sym_trcl,
      anon_sym_STAR,
      anon_sym_lat,
      anon_sym_fill,
      anon_sym_elpt_COLON,
      anon_sym_cosy,
      anon_sym_bflcl,
      anon_sym_unc_COLON,
      anon_sym_mat,
      anon_sym_rho,
  [2457] = 3,
    ACTIONS(476), 2,
      anon_sym_u,
      sym_endline,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    ACTIONS(474), 20,
      anon_sym_imp_COLON,
      anon_sym_vol,
      anon_sym_pwt,
      anon_sym_ext_COLON,
      anon_sym_fcl_COLON,
      anon_sym_wwn,
      anon_sym_dxc,
      anon_sym_nonu,
      anon_sym_pd,
      anon_sym_tmp,
      anon_sym_trcl,
      anon_sym_STAR,
      anon_sym_lat,
      anon_sym_fill,
      anon_sym_elpt_COLON,
      anon_sym_cosy,
      anon_sym_bflcl,
      anon_sym_unc_COLON,
      anon_sym_mat,
      anon_sym_rho,
  [2489] = 3,
    ACTIONS(480), 2,
      anon_sym_u,
      sym_endline,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    ACTIONS(478), 20,
      anon_sym_imp_COLON,
      anon_sym_vol,
      anon_sym_pwt,
      anon_sym_ext_COLON,
      anon_sym_fcl_COLON,
      anon_sym_wwn,
      anon_sym_dxc,
      anon_sym_nonu,
      anon_sym_pd,
      anon_sym_tmp,
      anon_sym_trcl,
      anon_sym_STAR,
      anon_sym_lat,
      anon_sym_fill,
      anon_sym_elpt_COLON,
      anon_sym_cosy,
      anon_sym_bflcl,
      anon_sym_unc_COLON,
      anon_sym_mat,
      anon_sym_rho,
  [2521] = 3,
    ACTIONS(484), 2,
      anon_sym_u,
      sym_endline,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    ACTIONS(482), 20,
      anon_sym_imp_COLON,
      anon_sym_vol,
      anon_sym_pwt,
      anon_sym_ext_COLON,
      anon_sym_fcl_COLON,
      anon_sym_wwn,
      anon_sym_dxc,
      anon_sym_nonu,
      anon_sym_pd,
      anon_sym_tmp,
      anon_sym_trcl,
      anon_sym_STAR,
      anon_sym_lat,
      anon_sym_fill,
      anon_sym_elpt_COLON,
      anon_sym_cosy,
      anon_sym_bflcl,
      anon_sym_unc_COLON,
      anon_sym_mat,
      anon_sym_rho,
  [2553] = 3,
    ACTIONS(488), 2,
      anon_sym_u,
      sym_endline,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    ACTIONS(486), 20,
      anon_sym_imp_COLON,
      anon_sym_vol,
      anon_sym_pwt,
      anon_sym_ext_COLON,
      anon_sym_fcl_COLON,
      anon_sym_wwn,
      anon_sym_dxc,
      anon_sym_nonu,
      anon_sym_pd,
      anon_sym_tmp,
      anon_sym_trcl,
      anon_sym_STAR,
      anon_sym_lat,
      anon_sym_fill,
      anon_sym_elpt_COLON,
      anon_sym_cosy,
      anon_sym_bflcl,
      anon_sym_unc_COLON,
      anon_sym_mat,
      anon_sym_rho,
  [2585] = 3,
    ACTIONS(492), 2,
      anon_sym_u,
      sym_endline,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    ACTIONS(490), 20,
      anon_sym_imp_COLON,
      anon_sym_vol,
      anon_sym_pwt,
      anon_sym_ext_COLON,
      anon_sym_fcl_COLON,
      anon_sym_wwn,
      anon_sym_dxc,
      anon_sym_nonu,
      anon_sym_pd,
      anon_sym_tmp,
      anon_sym_trcl,
      anon_sym_STAR,
      anon_sym_lat,
      anon_sym_fill,
      anon_sym_elpt_COLON,
      anon_sym_cosy,
      anon_sym_bflcl,
      anon_sym_unc_COLON,
      anon_sym_mat,
      anon_sym_rho,
  [2617] = 3,
    ACTIONS(496), 2,
      anon_sym_u,
      sym_endline,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    ACTIONS(494), 20,
      anon_sym_imp_COLON,
      anon_sym_vol,
      anon_sym_pwt,
      anon_sym_ext_COLON,
      anon_sym_fcl_COLON,
      anon_sym_wwn,
      anon_sym_dxc,
      anon_sym_nonu,
      anon_sym_pd,
      anon_sym_tmp,
      anon_sym_trcl,
      anon_sym_STAR,
      anon_sym_lat,
      anon_sym_fill,
      anon_sym_elpt_COLON,
      anon_sym_cosy,
      anon_sym_bflcl,
      anon_sym_unc_COLON,
      anon_sym_mat,
      anon_sym_rho,
  [2649] = 3,
    ACTIONS(500), 2,
      anon_sym_u,
      sym_endline,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    ACTIONS(498), 20,
      anon_sym_imp_COLON,
      anon_sym_vol,
      anon_sym_pwt,
      anon_sym_ext_COLON,
      anon_sym_fcl_COLON,
      anon_sym_wwn,
      anon_sym_dxc,
      anon_sym_nonu,
      anon_sym_pd,
      anon_sym_tmp,
      anon_sym_trcl,
      anon_sym_STAR,
      anon_sym_lat,
      anon_sym_fill,
      anon_sym_elpt_COLON,
      anon_sym_cosy,
      anon_sym_bflcl,
      anon_sym_unc_COLON,
      anon_sym_mat,
      anon_sym_rho,
  [2681] = 3,
    ACTIONS(504), 2,
      anon_sym_u,
      sym_endline,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    ACTIONS(502), 20,
      anon_sym_imp_COLON,
      anon_sym_vol,
      anon_sym_pwt,
      anon_sym_ext_COLON,
      anon_sym_fcl_COLON,
      anon_sym_wwn,
      anon_sym_dxc,
      anon_sym_nonu,
      anon_sym_pd,
      anon_sym_tmp,
      anon_sym_trcl,
      anon_sym_STAR,
      anon_sym_lat,
      anon_sym_fill,
      anon_sym_elpt_COLON,
      anon_sym_cosy,
      anon_sym_bflcl,
      anon_sym_unc_COLON,
      anon_sym_mat,
      anon_sym_rho,
  [2713] = 3,
    ACTIONS(508), 2,
      anon_sym_u,
      sym_endline,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    ACTIONS(506), 20,
      anon_sym_imp_COLON,
      anon_sym_vol,
      anon_sym_pwt,
      anon_sym_ext_COLON,
      anon_sym_fcl_COLON,
      anon_sym_wwn,
      anon_sym_dxc,
      anon_sym_nonu,
      anon_sym_pd,
      anon_sym_tmp,
      anon_sym_trcl,
      anon_sym_STAR,
      anon_sym_lat,
      anon_sym_fill,
      anon_sym_elpt_COLON,
      anon_sym_cosy,
      anon_sym_bflcl,
      anon_sym_unc_COLON,
      anon_sym_mat,
      anon_sym_rho,
  [2745] = 3,
    ACTIONS(512), 2,
      anon_sym_u,
      sym_endline,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    ACTIONS(510), 20,
      anon_sym_imp_COLON,
      anon_sym_vol,
      anon_sym_pwt,
      anon_sym_ext_COLON,
      anon_sym_fcl_COLON,
      anon_sym_wwn,
      anon_sym_dxc,
      anon_sym_nonu,
      anon_sym_pd,
      anon_sym_tmp,
      anon_sym_trcl,
      anon_sym_STAR,
      anon_sym_lat,
      anon_sym_fill,
      anon_sym_elpt_COLON,
      anon_sym_cosy,
      anon_sym_bflcl,
      anon_sym_unc_COLON,
      anon_sym_mat,
      anon_sym_rho,
  [2777] = 3,
    ACTIONS(516), 2,
      anon_sym_u,
      sym_endline,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    ACTIONS(514), 20,
      anon_sym_imp_COLON,
      anon_sym_vol,
      anon_sym_pwt,
      anon_sym_ext_COLON,
      anon_sym_fcl_COLON,
      anon_sym_wwn,
      anon_sym_dxc,
      anon_sym_nonu,
      anon_sym_pd,
      anon_sym_tmp,
      anon_sym_trcl,
      anon_sym_STAR,
      anon_sym_lat,
      anon_sym_fill,
      anon_sym_elpt_COLON,
      anon_sym_cosy,
      anon_sym_bflcl,
      anon_sym_unc_COLON,
      anon_sym_mat,
      anon_sym_rho,
  [2809] = 3,
    ACTIONS(520), 2,
      anon_sym_u,
      sym_endline,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    ACTIONS(518), 20,
      anon_sym_imp_COLON,
      anon_sym_vol,
      anon_sym_pwt,
      anon_sym_ext_COLON,
      anon_sym_fcl_COLON,
      anon_sym_wwn,
      anon_sym_dxc,
      anon_sym_nonu,
      anon_sym_pd,
      anon_sym_tmp,
      anon_sym_trcl,
      anon_sym_STAR,
      anon_sym_lat,
      anon_sym_fill,
      anon_sym_elpt_COLON,
      anon_sym_cosy,
      anon_sym_bflcl,
      anon_sym_unc_COLON,
      anon_sym_mat,
      anon_sym_rho,
  [2841] = 3,
    ACTIONS(524), 2,
      anon_sym_u,
      sym_endline,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    ACTIONS(522), 20,
      anon_sym_imp_COLON,
      anon_sym_vol,
      anon_sym_pwt,
      anon_sym_ext_COLON,
      anon_sym_fcl_COLON,
      anon_sym_wwn,
      anon_sym_dxc,
      anon_sym_nonu,
      anon_sym_pd,
      anon_sym_tmp,
      anon_sym_trcl,
      anon_sym_STAR,
      anon_sym_lat,
      anon_sym_fill,
      anon_sym_elpt_COLON,
      anon_sym_cosy,
      anon_sym_bflcl,
      anon_sym_unc_COLON,
      anon_sym_mat,
      anon_sym_rho,
  [2873] = 3,
    ACTIONS(528), 2,
      anon_sym_u,
      sym_endline,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    ACTIONS(526), 20,
      anon_sym_imp_COLON,
      anon_sym_vol,
      anon_sym_pwt,
      anon_sym_ext_COLON,
      anon_sym_fcl_COLON,
      anon_sym_wwn,
      anon_sym_dxc,
      anon_sym_nonu,
      anon_sym_pd,
      anon_sym_tmp,
      anon_sym_trcl,
      anon_sym_STAR,
      anon_sym_lat,
      anon_sym_fill,
      anon_sym_elpt_COLON,
      anon_sym_cosy,
      anon_sym_bflcl,
      anon_sym_unc_COLON,
      anon_sym_mat,
      anon_sym_rho,
  [2905] = 3,
    ACTIONS(532), 2,
      anon_sym_u,
      sym_endline,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    ACTIONS(530), 20,
      anon_sym_imp_COLON,
      anon_sym_vol,
      anon_sym_pwt,
      anon_sym_ext_COLON,
      anon_sym_fcl_COLON,
      anon_sym_wwn,
      anon_sym_dxc,
      anon_sym_nonu,
      anon_sym_pd,
      anon_sym_tmp,
      anon_sym_trcl,
      anon_sym_STAR,
      anon_sym_lat,
      anon_sym_fill,
      anon_sym_elpt_COLON,
      anon_sym_cosy,
      anon_sym_bflcl,
      anon_sym_unc_COLON,
      anon_sym_mat,
      anon_sym_rho,
  [2937] = 3,
    ACTIONS(536), 2,
      anon_sym_u,
      sym_endline,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    ACTIONS(534), 20,
      anon_sym_imp_COLON,
      anon_sym_vol,
      anon_sym_pwt,
      anon_sym_ext_COLON,
      anon_sym_fcl_COLON,
      anon_sym_wwn,
      anon_sym_dxc,
      anon_sym_nonu,
      anon_sym_pd,
      anon_sym_tmp,
      anon_sym_trcl,
      anon_sym_STAR,
      anon_sym_lat,
      anon_sym_fill,
      anon_sym_elpt_COLON,
      anon_sym_cosy,
      anon_sym_bflcl,
      anon_sym_unc_COLON,
      anon_sym_mat,
      anon_sym_rho,
  [2969] = 3,
    ACTIONS(540), 2,
      anon_sym_u,
      sym_endline,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    ACTIONS(538), 20,
      anon_sym_imp_COLON,
      anon_sym_vol,
      anon_sym_pwt,
      anon_sym_ext_COLON,
      anon_sym_fcl_COLON,
      anon_sym_wwn,
      anon_sym_dxc,
      anon_sym_nonu,
      anon_sym_pd,
      anon_sym_tmp,
      anon_sym_trcl,
      anon_sym_STAR,
      anon_sym_lat,
      anon_sym_fill,
      anon_sym_elpt_COLON,
      anon_sym_cosy,
      anon_sym_bflcl,
      anon_sym_unc_COLON,
      anon_sym_mat,
      anon_sym_rho,
  [3001] = 3,
    ACTIONS(544), 2,
      anon_sym_u,
      sym_endline,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    ACTIONS(542), 20,
      anon_sym_imp_COLON,
      anon_sym_vol,
      anon_sym_pwt,
      anon_sym_ext_COLON,
      anon_sym_fcl_COLON,
      anon_sym_wwn,
      anon_sym_dxc,
      anon_sym_nonu,
      anon_sym_pd,
      anon_sym_tmp,
      anon_sym_trcl,
      anon_sym_STAR,
      anon_sym_lat,
      anon_sym_fill,
      anon_sym_elpt_COLON,
      anon_sym_cosy,
      anon_sym_bflcl,
      anon_sym_unc_COLON,
      anon_sym_mat,
      anon_sym_rho,
  [3033] = 3,
    ACTIONS(548), 2,
      anon_sym_u,
      sym_endline,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    ACTIONS(546), 20,
      anon_sym_imp_COLON,
      anon_sym_vol,
      anon_sym_pwt,
      anon_sym_ext_COLON,
      anon_sym_fcl_COLON,
      anon_sym_wwn,
      anon_sym_dxc,
      anon_sym_nonu,
      anon_sym_pd,
      anon_sym_tmp,
      anon_sym_trcl,
      anon_sym_STAR,
      anon_sym_lat,
      anon_sym_fill,
      anon_sym_elpt_COLON,
      anon_sym_cosy,
      anon_sym_bflcl,
      anon_sym_unc_COLON,
      anon_sym_mat,
      anon_sym_rho,
  [3065] = 3,
    ACTIONS(552), 2,
      anon_sym_u,
      sym_endline,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    ACTIONS(550), 20,
      anon_sym_imp_COLON,
      anon_sym_vol,
      anon_sym_pwt,
      anon_sym_ext_COLON,
      anon_sym_fcl_COLON,
      anon_sym_wwn,
      anon_sym_dxc,
      anon_sym_nonu,
      anon_sym_pd,
      anon_sym_tmp,
      anon_sym_trcl,
      anon_sym_STAR,
      anon_sym_lat,
      anon_sym_fill,
      anon_sym_elpt_COLON,
      anon_sym_cosy,
      anon_sym_bflcl,
      anon_sym_unc_COLON,
      anon_sym_mat,
      anon_sym_rho,
  [3097] = 3,
    ACTIONS(556), 2,
      anon_sym_u,
      sym_endline,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    ACTIONS(554), 20,
      anon_sym_imp_COLON,
      anon_sym_vol,
      anon_sym_pwt,
      anon_sym_ext_COLON,
      anon_sym_fcl_COLON,
      anon_sym_wwn,
      anon_sym_dxc,
      anon_sym_nonu,
      anon_sym_pd,
      anon_sym_tmp,
      anon_sym_trcl,
      anon_sym_STAR,
      anon_sym_lat,
      anon_sym_fill,
      anon_sym_elpt_COLON,
      anon_sym_cosy,
      anon_sym_bflcl,
      anon_sym_unc_COLON,
      anon_sym_mat,
      anon_sym_rho,
  [3129] = 3,
    ACTIONS(560), 2,
      anon_sym_u,
      sym_endline,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    ACTIONS(558), 20,
      anon_sym_imp_COLON,
      anon_sym_vol,
      anon_sym_pwt,
      anon_sym_ext_COLON,
      anon_sym_fcl_COLON,
      anon_sym_wwn,
      anon_sym_dxc,
      anon_sym_nonu,
      anon_sym_pd,
      anon_sym_tmp,
      anon_sym_trcl,
      anon_sym_STAR,
      anon_sym_lat,
      anon_sym_fill,
      anon_sym_elpt_COLON,
      anon_sym_cosy,
      anon_sym_bflcl,
      anon_sym_unc_COLON,
      anon_sym_mat,
      anon_sym_rho,
  [3161] = 3,
    ACTIONS(564), 2,
      anon_sym_u,
      sym_endline,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    ACTIONS(562), 20,
      anon_sym_imp_COLON,
      anon_sym_vol,
      anon_sym_pwt,
      anon_sym_ext_COLON,
      anon_sym_fcl_COLON,
      anon_sym_wwn,
      anon_sym_dxc,
      anon_sym_nonu,
      anon_sym_pd,
      anon_sym_tmp,
      anon_sym_trcl,
      anon_sym_STAR,
      anon_sym_lat,
      anon_sym_fill,
      anon_sym_elpt_COLON,
      anon_sym_cosy,
      anon_sym_bflcl,
      anon_sym_unc_COLON,
      anon_sym_mat,
      anon_sym_rho,
  [3193] = 3,
    ACTIONS(568), 2,
      anon_sym_u,
      sym_endline,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    ACTIONS(566), 20,
      anon_sym_imp_COLON,
      anon_sym_vol,
      anon_sym_pwt,
      anon_sym_ext_COLON,
      anon_sym_fcl_COLON,
      anon_sym_wwn,
      anon_sym_dxc,
      anon_sym_nonu,
      anon_sym_pd,
      anon_sym_tmp,
      anon_sym_trcl,
      anon_sym_STAR,
      anon_sym_lat,
      anon_sym_fill,
      anon_sym_elpt_COLON,
      anon_sym_cosy,
      anon_sym_bflcl,
      anon_sym_unc_COLON,
      anon_sym_mat,
      anon_sym_rho,
  [3225] = 3,
    ACTIONS(572), 2,
      anon_sym_u,
      sym_endline,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    ACTIONS(570), 20,
      anon_sym_imp_COLON,
      anon_sym_vol,
      anon_sym_pwt,
      anon_sym_ext_COLON,
      anon_sym_fcl_COLON,
      anon_sym_wwn,
      anon_sym_dxc,
      anon_sym_nonu,
      anon_sym_pd,
      anon_sym_tmp,
      anon_sym_trcl,
      anon_sym_STAR,
      anon_sym_lat,
      anon_sym_fill,
      anon_sym_elpt_COLON,
      anon_sym_cosy,
      anon_sym_bflcl,
      anon_sym_unc_COLON,
      anon_sym_mat,
      anon_sym_rho,
  [3257] = 3,
    ACTIONS(576), 2,
      anon_sym_u,
      sym_endline,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    ACTIONS(574), 20,
      anon_sym_imp_COLON,
      anon_sym_vol,
      anon_sym_pwt,
      anon_sym_ext_COLON,
      anon_sym_fcl_COLON,
      anon_sym_wwn,
      anon_sym_dxc,
      anon_sym_nonu,
      anon_sym_pd,
      anon_sym_tmp,
      anon_sym_trcl,
      anon_sym_STAR,
      anon_sym_lat,
      anon_sym_fill,
      anon_sym_elpt_COLON,
      anon_sym_cosy,
      anon_sym_bflcl,
      anon_sym_unc_COLON,
      anon_sym_mat,
      anon_sym_rho,
  [3289] = 3,
    ACTIONS(580), 2,
      anon_sym_u,
      sym_endline,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    ACTIONS(578), 20,
      anon_sym_imp_COLON,
      anon_sym_vol,
      anon_sym_pwt,
      anon_sym_ext_COLON,
      anon_sym_fcl_COLON,
      anon_sym_wwn,
      anon_sym_dxc,
      anon_sym_nonu,
      anon_sym_pd,
      anon_sym_tmp,
      anon_sym_trcl,
      anon_sym_STAR,
      anon_sym_lat,
      anon_sym_fill,
      anon_sym_elpt_COLON,
      anon_sym_cosy,
      anon_sym_bflcl,
      anon_sym_unc_COLON,
      anon_sym_mat,
      anon_sym_rho,
  [3321] = 3,
    ACTIONS(584), 2,
      anon_sym_u,
      sym_endline,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    ACTIONS(582), 20,
      anon_sym_imp_COLON,
      anon_sym_vol,
      anon_sym_pwt,
      anon_sym_ext_COLON,
      anon_sym_fcl_COLON,
      anon_sym_wwn,
      anon_sym_dxc,
      anon_sym_nonu,
      anon_sym_pd,
      anon_sym_tmp,
      anon_sym_trcl,
      anon_sym_STAR,
      anon_sym_lat,
      anon_sym_fill,
      anon_sym_elpt_COLON,
      anon_sym_cosy,
      anon_sym_bflcl,
      anon_sym_unc_COLON,
      anon_sym_mat,
      anon_sym_rho,
  [3353] = 9,
    ACTIONS(89), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      anon_sym_COLON,
    ACTIONS(93), 1,
      anon_sym_POUND,
    ACTIONS(135), 1,
      sym_signed_integer,
    ACTIONS(137), 1,
      sym_facet_half_space,
    ACTIONS(586), 1,
      anon_sym_RPAREN,
    STATE(22), 1,
      sym_cell_geometry,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    STATE(24), 3,
      sym_union,
      sym_intersect,
      sym_complement,
  [3385] = 9,
    ACTIONS(89), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      anon_sym_COLON,
    ACTIONS(93), 1,
      anon_sym_POUND,
    ACTIONS(135), 1,
      sym_signed_integer,
    ACTIONS(137), 1,
      sym_facet_half_space,
    ACTIONS(588), 1,
      anon_sym_RPAREN,
    STATE(22), 1,
      sym_cell_geometry,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    STATE(24), 3,
      sym_union,
      sym_intersect,
      sym_complement,
  [3417] = 7,
    ACTIONS(89), 1,
      anon_sym_LPAREN,
    ACTIONS(93), 1,
      anon_sym_POUND,
    ACTIONS(135), 1,
      sym_signed_integer,
    ACTIONS(137), 1,
      sym_facet_half_space,
    STATE(94), 1,
      sym_cell_geometry,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    STATE(24), 3,
      sym_union,
      sym_intersect,
      sym_complement,
  [3443] = 7,
    ACTIONS(89), 1,
      anon_sym_LPAREN,
    ACTIONS(93), 1,
      anon_sym_POUND,
    ACTIONS(135), 1,
      sym_signed_integer,
    ACTIONS(137), 1,
      sym_facet_half_space,
    STATE(93), 1,
      sym_cell_geometry,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    STATE(24), 3,
      sym_union,
      sym_intersect,
      sym_complement,
  [3469] = 7,
    ACTIONS(89), 1,
      anon_sym_LPAREN,
    ACTIONS(93), 1,
      anon_sym_POUND,
    ACTIONS(135), 1,
      sym_signed_integer,
    ACTIONS(137), 1,
      sym_facet_half_space,
    STATE(11), 1,
      sym_cell_geometry,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    STATE(24), 3,
      sym_union,
      sym_intersect,
      sym_complement,
  [3495] = 7,
    ACTIONS(89), 1,
      anon_sym_LPAREN,
    ACTIONS(93), 1,
      anon_sym_POUND,
    ACTIONS(135), 1,
      sym_signed_integer,
    ACTIONS(137), 1,
      sym_facet_half_space,
    STATE(12), 1,
      sym_cell_geometry,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    STATE(24), 3,
      sym_union,
      sym_intersect,
      sym_complement,
  [3521] = 7,
    ACTIONS(89), 1,
      anon_sym_LPAREN,
    ACTIONS(93), 1,
      anon_sym_POUND,
    ACTIONS(135), 1,
      sym_signed_integer,
    ACTIONS(137), 1,
      sym_facet_half_space,
    STATE(23), 1,
      sym_cell_geometry,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    STATE(24), 3,
      sym_union,
      sym_intersect,
      sym_complement,
  [3547] = 5,
    ACTIONS(590), 1,
      sym_delimiter,
    ACTIONS(592), 1,
      sym_positive_integer,
    STATE(102), 2,
      sym_cell_card,
      aux_sym_cell_card_block_repeat1,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    STATE(212), 3,
      sym_cell_card_void,
      sym_cell_card_mat,
      sym_cell_card_like,
  [3568] = 5,
    ACTIONS(592), 1,
      sym_positive_integer,
    STATE(266), 1,
      sym_cell_card_block,
    STATE(100), 2,
      sym_cell_card,
      aux_sym_cell_card_block_repeat1,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    STATE(212), 3,
      sym_cell_card_void,
      sym_cell_card_mat,
      sym_cell_card_like,
  [3589] = 5,
    ACTIONS(594), 1,
      sym_delimiter,
    ACTIONS(596), 1,
      sym_positive_integer,
    STATE(102), 2,
      sym_cell_card,
      aux_sym_cell_card_block_repeat1,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    STATE(212), 3,
      sym_cell_card_void,
      sym_cell_card_mat,
      sym_cell_card_like,
  [3610] = 5,
    ACTIONS(599), 1,
      aux_sym_surface_card_token1,
    ACTIONS(602), 1,
      sym_delimiter,
    ACTIONS(604), 1,
      sym_positive_integer,
    STATE(103), 2,
      sym_surface_card,
      aux_sym_surface_card_block_repeat1,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [3629] = 5,
    ACTIONS(607), 1,
      aux_sym_surface_card_token1,
    ACTIONS(609), 1,
      sym_positive_integer,
    STATE(211), 1,
      sym_surface_card_block,
    STATE(107), 2,
      sym_surface_card,
      aux_sym_surface_card_block_repeat1,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [3648] = 5,
    ACTIONS(611), 1,
      anon_sym_0,
    ACTIONS(613), 1,
      anon_sym_EQ,
    STATE(48), 1,
      sym_stretch_para,
    ACTIONS(615), 2,
      anon_sym_s,
      sym_signed_float,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [3667] = 5,
    ACTIONS(64), 1,
      sym_number,
    ACTIONS(617), 1,
      sym_shortcut,
    STATE(115), 1,
      aux_sym_transform_card_repeat1,
    STATE(5), 2,
      sym_vertical_data,
      aux_sym_vertical_data_block_multiple_line_repeat1,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [3686] = 5,
    ACTIONS(607), 1,
      aux_sym_surface_card_token1,
    ACTIONS(609), 1,
      sym_positive_integer,
    ACTIONS(619), 1,
      sym_delimiter,
    STATE(103), 2,
      sym_surface_card,
      aux_sym_surface_card_block_repeat1,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [3705] = 5,
    ACTIONS(331), 1,
      sym_endline,
    ACTIONS(621), 1,
      sym_signed_integer,
    ACTIONS(624), 1,
      sym_shortcut,
    STATE(108), 1,
      aux_sym_fill_form3_repeat1,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [3723] = 5,
    ACTIONS(627), 1,
      sym_endline,
    ACTIONS(629), 1,
      sym_number,
    ACTIONS(632), 1,
      sym_shortcut,
    STATE(109), 1,
      aux_sym_transform_card_repeat1,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [3741] = 5,
    ACTIONS(635), 1,
      sym_endline,
    ACTIONS(637), 1,
      sym_number,
    ACTIONS(639), 1,
      sym_shortcut,
    STATE(109), 1,
      aux_sym_transform_card_repeat1,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [3759] = 5,
    ACTIONS(641), 1,
      sym_endline,
    ACTIONS(643), 1,
      sym_number,
    ACTIONS(645), 1,
      sym_shortcut,
    STATE(110), 1,
      aux_sym_transform_card_repeat1,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [3777] = 5,
    ACTIONS(647), 1,
      sym_endline,
    ACTIONS(649), 1,
      sym_signed_integer,
    ACTIONS(651), 1,
      sym_shortcut,
    STATE(108), 1,
      aux_sym_fill_form3_repeat1,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [3795] = 5,
    ACTIONS(649), 1,
      sym_signed_integer,
    ACTIONS(651), 1,
      sym_shortcut,
    ACTIONS(653), 1,
      sym_endline,
    STATE(108), 1,
      aux_sym_fill_form3_repeat1,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [3813] = 5,
    ACTIONS(637), 1,
      sym_number,
    ACTIONS(639), 1,
      sym_shortcut,
    ACTIONS(655), 1,
      sym_endline,
    STATE(109), 1,
      aux_sym_transform_card_repeat1,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [3831] = 5,
    ACTIONS(637), 1,
      sym_number,
    ACTIONS(639), 1,
      sym_shortcut,
    ACTIONS(657), 1,
      sym_endline,
    STATE(109), 1,
      aux_sym_transform_card_repeat1,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [3849] = 5,
    ACTIONS(637), 1,
      sym_number,
    ACTIONS(639), 1,
      sym_shortcut,
    ACTIONS(659), 1,
      sym_endline,
    STATE(109), 1,
      aux_sym_transform_card_repeat1,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [3867] = 5,
    ACTIONS(637), 1,
      sym_number,
    ACTIONS(639), 1,
      sym_shortcut,
    ACTIONS(661), 1,
      sym_endline,
    STATE(109), 1,
      aux_sym_transform_card_repeat1,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [3885] = 5,
    ACTIONS(663), 1,
      sym_endline,
    ACTIONS(665), 1,
      sym_signed_integer,
    ACTIONS(667), 1,
      sym_shortcut,
    STATE(113), 1,
      aux_sym_fill_form3_repeat1,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [3903] = 4,
    ACTIONS(611), 1,
      anon_sym_0,
    STATE(62), 1,
      sym_stretch_para,
    ACTIONS(615), 2,
      anon_sym_s,
      sym_signed_float,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [3919] = 5,
    ACTIONS(669), 1,
      sym_endline,
    ACTIONS(671), 1,
      sym_signed_integer,
    ACTIONS(673), 1,
      sym_shortcut,
    STATE(112), 1,
      aux_sym_fill_form3_repeat1,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [3937] = 4,
    ACTIONS(675), 1,
      anon_sym_RPAREN,
    ACTIONS(677), 1,
      sym_number,
    STATE(132), 1,
      aux_sym_trcl_matrix_repeat1,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [3952] = 4,
    ACTIONS(679), 1,
      anon_sym_0,
    ACTIONS(681), 1,
      anon_sym_like,
    ACTIONS(683), 1,
      sym_positive_integer,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [3967] = 4,
    ACTIONS(677), 1,
      sym_number,
    ACTIONS(685), 1,
      anon_sym_RPAREN,
    STATE(132), 1,
      aux_sym_trcl_matrix_repeat1,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [3982] = 4,
    ACTIONS(687), 1,
      sym_endline,
    ACTIONS(689), 1,
      sym_number,
    STATE(126), 1,
      aux_sym__coeffs,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [3997] = 3,
    ACTIONS(693), 1,
      sym_delimiter,
    ACTIONS(691), 2,
      aux_sym_surface_card_token1,
      sym_positive_integer,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [4010] = 4,
    ACTIONS(695), 1,
      sym_endline,
    ACTIONS(697), 1,
      sym_number,
    STATE(126), 1,
      aux_sym__coeffs,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [4025] = 4,
    ACTIONS(689), 1,
      sym_number,
    ACTIONS(700), 1,
      sym_endline,
    STATE(126), 1,
      aux_sym__coeffs,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [4040] = 5,
    ACTIONS(702), 1,
      sym_line_continuation,
    ACTIONS(704), 1,
      sym_endline,
    ACTIONS(706), 1,
      sym_ignored_data,
    STATE(139), 1,
      aux_sym_vertical_data_block_single_line_repeat1,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_comment,
  [4057] = 4,
    ACTIONS(708), 1,
      sym_endline,
    ACTIONS(710), 1,
      sym_ignored_data,
    STATE(140), 1,
      aux_sym_ignored_data_card_repeat1,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [4072] = 4,
    ACTIONS(712), 1,
      aux_sym_cell_para_lat_token1,
    ACTIONS(714), 1,
      sym_endline,
    STATE(142), 1,
      aux_sym_lattice_card_repeat1,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [4087] = 4,
    ACTIONS(716), 1,
      sym_number,
    ACTIONS(718), 1,
      sym_shortcut,
    STATE(114), 1,
      aux_sym_transform_card_repeat1,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [4102] = 4,
    ACTIONS(720), 1,
      anon_sym_RPAREN,
    ACTIONS(722), 1,
      sym_number,
    STATE(132), 1,
      aux_sym_trcl_matrix_repeat1,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [4117] = 4,
    ACTIONS(677), 1,
      sym_number,
    ACTIONS(725), 1,
      anon_sym_RPAREN,
    STATE(132), 1,
      aux_sym_trcl_matrix_repeat1,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [4132] = 4,
    ACTIONS(727), 1,
      anon_sym_LPAREN,
    ACTIONS(729), 1,
      anon_sym_EQ,
    ACTIONS(731), 1,
      sym_signed_integer,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [4147] = 3,
    ACTIONS(735), 1,
      sym_delimiter,
    ACTIONS(733), 2,
      aux_sym_surface_card_token1,
      sym_positive_integer,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [4160] = 4,
    ACTIONS(689), 1,
      sym_number,
    ACTIONS(737), 1,
      sym_endline,
    STATE(126), 1,
      aux_sym__coeffs,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [4175] = 4,
    ACTIONS(739), 1,
      sym_signed_integer,
    ACTIONS(741), 1,
      sym_shortcut,
    STATE(33), 1,
      aux_sym_fill_form3_repeat1,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [4190] = 4,
    ACTIONS(743), 1,
      sym_number,
    ACTIONS(745), 1,
      sym_shortcut,
    STATE(116), 1,
      aux_sym_transform_card_repeat1,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [4205] = 5,
    ACTIONS(747), 1,
      sym_line_continuation,
    ACTIONS(749), 1,
      sym_endline,
    ACTIONS(751), 1,
      sym_ignored_data,
    STATE(139), 1,
      aux_sym_vertical_data_block_single_line_repeat1,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_comment,
  [4222] = 4,
    ACTIONS(754), 1,
      sym_endline,
    ACTIONS(756), 1,
      sym_ignored_data,
    STATE(140), 1,
      aux_sym_ignored_data_card_repeat1,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [4237] = 4,
    ACTIONS(759), 1,
      sym_number,
    ACTIONS(761), 1,
      sym_shortcut,
    STATE(117), 1,
      aux_sym_transform_card_repeat1,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [4252] = 4,
    ACTIONS(763), 1,
      aux_sym_cell_para_lat_token1,
    ACTIONS(766), 1,
      sym_endline,
    STATE(142), 1,
      aux_sym_lattice_card_repeat1,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [4267] = 4,
    ACTIONS(677), 1,
      sym_number,
    ACTIONS(768), 1,
      anon_sym_RPAREN,
    STATE(132), 1,
      aux_sym_trcl_matrix_repeat1,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [4282] = 3,
    ACTIONS(772), 1,
      sym_delimiter,
    ACTIONS(770), 2,
      aux_sym_surface_card_token1,
      sym_positive_integer,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [4295] = 4,
    ACTIONS(689), 1,
      sym_number,
    ACTIONS(774), 1,
      sym_endline,
    STATE(126), 1,
      aux_sym__coeffs,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [4310] = 4,
    ACTIONS(776), 1,
      sym_endline,
    ACTIONS(778), 1,
      sym_ignored_data,
    STATE(129), 1,
      aux_sym_ignored_data_card_repeat1,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [4325] = 4,
    ACTIONS(780), 1,
      anon_sym_RPAREN,
    ACTIONS(782), 1,
      sym_number,
    STATE(121), 1,
      aux_sym_trcl_matrix_repeat1,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [4340] = 4,
    ACTIONS(784), 1,
      anon_sym_RPAREN,
    ACTIONS(786), 1,
      sym_number,
    STATE(151), 1,
      aux_sym_trcl_matrix_repeat1,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [4355] = 4,
    ACTIONS(788), 1,
      aux_sym_cell_para_lat_token1,
    ACTIONS(790), 1,
      sym_endline,
    STATE(130), 1,
      aux_sym_lattice_card_repeat1,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [4370] = 4,
    ACTIONS(792), 1,
      anon_sym_RPAREN,
    ACTIONS(794), 1,
      sym_number,
    STATE(152), 1,
      aux_sym_trcl_matrix_repeat1,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [4385] = 4,
    ACTIONS(677), 1,
      sym_number,
    ACTIONS(796), 1,
      anon_sym_RPAREN,
    STATE(132), 1,
      aux_sym_trcl_matrix_repeat1,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [4400] = 4,
    ACTIONS(677), 1,
      sym_number,
    ACTIONS(798), 1,
      anon_sym_RPAREN,
    STATE(132), 1,
      aux_sym_trcl_matrix_repeat1,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [4415] = 4,
    ACTIONS(800), 1,
      sym_signed_integer,
    ACTIONS(802), 1,
      sym_shortcut,
    STATE(32), 1,
      aux_sym_fill_form3_repeat1,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [4430] = 3,
    ACTIONS(806), 1,
      sym_delimiter,
    ACTIONS(804), 2,
      aux_sym_surface_card_token1,
      sym_positive_integer,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [4443] = 3,
    ACTIONS(808), 1,
      sym_positive_integer,
    ACTIONS(810), 1,
      sym_number,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [4455] = 3,
    ACTIONS(689), 1,
      sym_number,
    STATE(136), 1,
      aux_sym__coeffs,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [4467] = 3,
    ACTIONS(812), 1,
      anon_sym_LPAREN,
    ACTIONS(814), 1,
      sym_positive_integer,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [4479] = 3,
    ACTIONS(689), 1,
      sym_number,
    STATE(145), 1,
      aux_sym__coeffs,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [4491] = 3,
    ACTIONS(816), 1,
      sym_line_continuation,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_comment,
    ACTIONS(818), 2,
      sym_endline,
      sym_ignored_data,
  [4503] = 3,
    ACTIONS(820), 1,
      anon_sym_COLON,
    ACTIONS(822), 1,
      sym_signed_integer,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [4515] = 3,
    ACTIONS(824), 1,
      anon_sym_EQ,
    ACTIONS(826), 1,
      sym_number,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [4527] = 3,
    ACTIONS(828), 1,
      anon_sym_EQ,
    ACTIONS(830), 1,
      sym_number,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [4539] = 3,
    ACTIONS(832), 1,
      anon_sym_EQ,
    ACTIONS(834), 1,
      sym_number,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [4551] = 3,
    ACTIONS(836), 1,
      anon_sym_EQ,
    ACTIONS(838), 1,
      aux_sym_cell_para_nonu_token1,
    ACTIONS(840), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [4563] = 3,
    ACTIONS(842), 1,
      sym_number,
    STATE(123), 1,
      aux_sym_trcl_matrix_repeat1,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [4575] = 3,
    ACTIONS(844), 1,
      anon_sym_LPAREN,
    ACTIONS(846), 1,
      sym_signed_integer,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [4587] = 3,
    ACTIONS(844), 1,
      anon_sym_LPAREN,
    ACTIONS(848), 1,
      anon_sym_EQ,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [4599] = 3,
    ACTIONS(850), 1,
      anon_sym_EQ,
    ACTIONS(852), 1,
      sym_signed_integer,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [4611] = 3,
    ACTIONS(854), 1,
      anon_sym_EQ,
    ACTIONS(856), 1,
      sym_number,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [4623] = 3,
    ACTIONS(858), 1,
      anon_sym_EQ,
    ACTIONS(860), 1,
      sym_number,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [4635] = 3,
    ACTIONS(862), 1,
      sym_delimiter,
    ACTIONS(864), 1,
      sym_positive_integer,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [4647] = 3,
    ACTIONS(866), 1,
      sym_number,
    STATE(143), 1,
      aux_sym_trcl_matrix_repeat1,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [4659] = 3,
    ACTIONS(868), 1,
      anon_sym_EQ,
    ACTIONS(870), 1,
      sym_number,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [4671] = 3,
    ACTIONS(872), 1,
      anon_sym_EQ,
    ACTIONS(874), 1,
      sym_number,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [4683] = 3,
    ACTIONS(876), 1,
      anon_sym_EQ,
    ACTIONS(878), 1,
      sym_number,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [4695] = 3,
    ACTIONS(880), 1,
      sym_number,
    ACTIONS(882), 1,
      sym_shortcut,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [4707] = 3,
    ACTIONS(884), 1,
      anon_sym_trcl,
    ACTIONS(886), 1,
      anon_sym_fill,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [4719] = 3,
    ACTIONS(888), 1,
      sym_number,
    STATE(133), 1,
      aux_sym_trcl_matrix_repeat1,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [4731] = 3,
    ACTIONS(890), 1,
      anon_sym_EQ,
    ACTIONS(892), 1,
      aux_sym_cell_para_unc_token1,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [4743] = 3,
    ACTIONS(894), 1,
      anon_sym_EQ,
    ACTIONS(896), 1,
      sym_number,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [4755] = 3,
    ACTIONS(898), 1,
      anon_sym_EQ,
    ACTIONS(900), 1,
      aux_sym_cell_para_lat_token1,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [4767] = 3,
    ACTIONS(902), 1,
      anon_sym_EQ,
    ACTIONS(904), 1,
      sym_positive_integer,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [4779] = 3,
    ACTIONS(906), 1,
      anon_sym_EQ,
    ACTIONS(908), 1,
      sym_number,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [4791] = 3,
    ACTIONS(910), 1,
      anon_sym_EQ,
    ACTIONS(912), 1,
      sym_signed_integer,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [4803] = 3,
    ACTIONS(689), 1,
      sym_number,
    STATE(124), 1,
      aux_sym__coeffs,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [4815] = 3,
    ACTIONS(914), 1,
      anon_sym_EQ,
    ACTIONS(916), 1,
      sym_positive_integer,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [4827] = 3,
    ACTIONS(918), 1,
      sym_endline,
    ACTIONS(920), 1,
      sym_number,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [4839] = 3,
    ACTIONS(689), 1,
      sym_number,
    STATE(127), 1,
      aux_sym__coeffs,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [4851] = 3,
    ACTIONS(706), 1,
      sym_ignored_data,
    STATE(128), 1,
      aux_sym_vertical_data_block_single_line_repeat1,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [4863] = 3,
    ACTIONS(922), 1,
      sym_positive_integer,
    ACTIONS(924), 1,
      sym_number,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [4875] = 3,
    ACTIONS(926), 1,
      anon_sym_EQ,
    ACTIONS(928), 1,
      sym_positive_integer,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [4887] = 3,
    ACTIONS(930), 1,
      ts_builtin_sym_end,
    ACTIONS(932), 1,
      sym_delimiter,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [4899] = 3,
    ACTIONS(934), 1,
      anon_sym_EQ,
    ACTIONS(936), 1,
      sym_number,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [4911] = 3,
    ACTIONS(938), 1,
      anon_sym_EQ,
    ACTIONS(940), 1,
      sym_signed_integer,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [4923] = 2,
    ACTIONS(942), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [4932] = 2,
    ACTIONS(944), 1,
      sym_number,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [4941] = 2,
    ACTIONS(946), 1,
      sym_number,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [4950] = 2,
    ACTIONS(948), 1,
      sym_signed_integer,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [4959] = 2,
    ACTIONS(950), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [4968] = 2,
    ACTIONS(952), 1,
      sym_number,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [4977] = 2,
    ACTIONS(954), 1,
      sym_signed_integer,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [4986] = 2,
    ACTIONS(956), 1,
      sym_number,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [4995] = 2,
    ACTIONS(958), 1,
      sym_positive_integer,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [5004] = 2,
    ACTIONS(960), 1,
      sym_number,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [5013] = 2,
    ACTIONS(962), 1,
      sym_positive_integer,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [5022] = 2,
    ACTIONS(964), 1,
      sym_particles,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [5031] = 2,
    ACTIONS(966), 1,
      sym_number,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [5040] = 2,
    ACTIONS(968), 1,
      sym_other_card_block,
    ACTIONS(840), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [5049] = 2,
    ACTIONS(970), 1,
      sym_particles,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [5058] = 2,
    ACTIONS(972), 1,
      sym_signed_integer,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [5067] = 2,
    ACTIONS(974), 1,
      sym_delimiter,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [5076] = 2,
    ACTIONS(976), 1,
      sym_endline,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [5085] = 2,
    ACTIONS(978), 1,
      anon_sym_COLON,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [5094] = 2,
    ACTIONS(980), 1,
      sym_number,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [5103] = 2,
    ACTIONS(982), 1,
      sym_signed_integer,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [5112] = 2,
    ACTIONS(984), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [5121] = 2,
    ACTIONS(986), 1,
      sym_positive_integer,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [5130] = 2,
    ACTIONS(988), 1,
      sym_positive_integer,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [5139] = 2,
    ACTIONS(990), 1,
      aux_sym_cell_para_nonu_token1,
    ACTIONS(840), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [5148] = 2,
    ACTIONS(992), 1,
      sym_positive_integer,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [5157] = 2,
    ACTIONS(994), 1,
      sym_endline,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [5166] = 2,
    ACTIONS(996), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [5175] = 2,
    ACTIONS(998), 1,
      sym_number,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [5184] = 2,
    ACTIONS(1000), 1,
      sym_particles,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [5193] = 2,
    ACTIONS(1002), 1,
      sym_endline,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [5202] = 2,
    ACTIONS(1004), 1,
      sym_number,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [5211] = 2,
    ACTIONS(860), 1,
      sym_number,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [5220] = 2,
    ACTIONS(1006), 1,
      sym_signed_integer,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [5229] = 2,
    ACTIONS(1008), 1,
      sym_number,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [5238] = 2,
    ACTIONS(1010), 1,
      sym_number,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [5247] = 2,
    ACTIONS(1012), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [5256] = 2,
    ACTIONS(1014), 1,
      sym_signed_integer,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [5265] = 2,
    ACTIONS(1016), 1,
      aux_sym_cell_para_lat_token1,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [5274] = 2,
    ACTIONS(1018), 1,
      sym_number,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [5283] = 2,
    ACTIONS(1020), 1,
      sym_positive_integer,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [5292] = 2,
    ACTIONS(1022), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [5301] = 2,
    ACTIONS(1024), 1,
      sym_positive_integer,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [5310] = 2,
    ACTIONS(1026), 1,
      sym_number,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [5319] = 2,
    ACTIONS(1028), 1,
      sym_positive_integer,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [5328] = 2,
    ACTIONS(1030), 1,
      sym_signed_integer,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [5337] = 2,
    ACTIONS(1032), 1,
      sym_particles,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [5346] = 2,
    ACTIONS(1034), 1,
      sym_number,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [5355] = 2,
    ACTIONS(1036), 1,
      sym_number,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [5364] = 2,
    ACTIONS(1038), 1,
      sym_particles,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [5373] = 2,
    ACTIONS(1040), 1,
      anon_sym_COLON,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [5382] = 2,
    ACTIONS(1042), 1,
      sym_particles,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [5391] = 2,
    ACTIONS(1044), 1,
      sym_signed_integer,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [5400] = 2,
    ACTIONS(1046), 1,
      sym_particles,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [5409] = 2,
    ACTIONS(1048), 1,
      sym_number,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [5418] = 2,
    ACTIONS(1050), 1,
      sym_signed_integer,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [5427] = 2,
    ACTIONS(1052), 1,
      sym_signed_integer,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [5436] = 2,
    ACTIONS(1054), 1,
      anon_sym_tr,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [5445] = 2,
    ACTIONS(1056), 1,
      sym_number,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [5454] = 2,
    ACTIONS(1058), 1,
      sym_signed_integer,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [5463] = 2,
    ACTIONS(1060), 1,
      sym_number,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [5472] = 2,
    ACTIONS(1062), 1,
      sym_particles,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [5481] = 2,
    ACTIONS(1064), 1,
      sym_neutron_photon,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [5490] = 2,
    ACTIONS(1066), 1,
      sym_signed_integer,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [5499] = 2,
    ACTIONS(1068), 1,
      sym_positive_integer,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [5508] = 2,
    ACTIONS(1070), 1,
      anon_sym_COLON,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [5517] = 2,
    ACTIONS(1072), 1,
      sym_number,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [5526] = 2,
    ACTIONS(1074), 1,
      sym_positive_integer,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [5535] = 2,
    ACTIONS(1076), 1,
      sym_endline,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [5544] = 2,
    ACTIONS(1078), 1,
      anon_sym_COLON,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [5553] = 2,
    ACTIONS(1080), 1,
      sym_signed_integer,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [5562] = 2,
    ACTIONS(1082), 1,
      sym_delimiter,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [5571] = 2,
    ACTIONS(1084), 1,
      sym_signed_integer,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [5580] = 2,
    ACTIONS(1086), 1,
      aux_sym_cell_para_unc_token1,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [5589] = 2,
    ACTIONS(1088), 1,
      anon_sym_COLON,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [5598] = 2,
    ACTIONS(1090), 1,
      sym_endline,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [5607] = 2,
    ACTIONS(1092), 1,
      anon_sym_but,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [5616] = 2,
    ACTIONS(1094), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [5625] = 2,
    ACTIONS(1096), 1,
      anon_sym_COLON,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(11)] = 0,
  [SMALL_STATE(12)] = 125,
  [SMALL_STATE(13)] = 250,
  [SMALL_STATE(14)] = 360,
  [SMALL_STATE(15)] = 470,
  [SMALL_STATE(16)] = 580,
  [SMALL_STATE(17)] = 679,
  [SMALL_STATE(18)] = 778,
  [SMALL_STATE(19)] = 831,
  [SMALL_STATE(20)] = 884,
  [SMALL_STATE(21)] = 934,
  [SMALL_STATE(22)] = 984,
  [SMALL_STATE(23)] = 1028,
  [SMALL_STATE(24)] = 1080,
  [SMALL_STATE(25)] = 1116,
  [SMALL_STATE(26)] = 1152,
  [SMALL_STATE(27)] = 1188,
  [SMALL_STATE(28)] = 1224,
  [SMALL_STATE(29)] = 1260,
  [SMALL_STATE(30)] = 1300,
  [SMALL_STATE(31)] = 1336,
  [SMALL_STATE(32)] = 1375,
  [SMALL_STATE(33)] = 1414,
  [SMALL_STATE(34)] = 1453,
  [SMALL_STATE(35)] = 1491,
  [SMALL_STATE(36)] = 1529,
  [SMALL_STATE(37)] = 1561,
  [SMALL_STATE(38)] = 1593,
  [SMALL_STATE(39)] = 1625,
  [SMALL_STATE(40)] = 1657,
  [SMALL_STATE(41)] = 1689,
  [SMALL_STATE(42)] = 1721,
  [SMALL_STATE(43)] = 1753,
  [SMALL_STATE(44)] = 1785,
  [SMALL_STATE(45)] = 1817,
  [SMALL_STATE(46)] = 1849,
  [SMALL_STATE(47)] = 1881,
  [SMALL_STATE(48)] = 1913,
  [SMALL_STATE(49)] = 1945,
  [SMALL_STATE(50)] = 1977,
  [SMALL_STATE(51)] = 2009,
  [SMALL_STATE(52)] = 2041,
  [SMALL_STATE(53)] = 2073,
  [SMALL_STATE(54)] = 2105,
  [SMALL_STATE(55)] = 2137,
  [SMALL_STATE(56)] = 2169,
  [SMALL_STATE(57)] = 2201,
  [SMALL_STATE(58)] = 2233,
  [SMALL_STATE(59)] = 2265,
  [SMALL_STATE(60)] = 2297,
  [SMALL_STATE(61)] = 2329,
  [SMALL_STATE(62)] = 2361,
  [SMALL_STATE(63)] = 2393,
  [SMALL_STATE(64)] = 2425,
  [SMALL_STATE(65)] = 2457,
  [SMALL_STATE(66)] = 2489,
  [SMALL_STATE(67)] = 2521,
  [SMALL_STATE(68)] = 2553,
  [SMALL_STATE(69)] = 2585,
  [SMALL_STATE(70)] = 2617,
  [SMALL_STATE(71)] = 2649,
  [SMALL_STATE(72)] = 2681,
  [SMALL_STATE(73)] = 2713,
  [SMALL_STATE(74)] = 2745,
  [SMALL_STATE(75)] = 2777,
  [SMALL_STATE(76)] = 2809,
  [SMALL_STATE(77)] = 2841,
  [SMALL_STATE(78)] = 2873,
  [SMALL_STATE(79)] = 2905,
  [SMALL_STATE(80)] = 2937,
  [SMALL_STATE(81)] = 2969,
  [SMALL_STATE(82)] = 3001,
  [SMALL_STATE(83)] = 3033,
  [SMALL_STATE(84)] = 3065,
  [SMALL_STATE(85)] = 3097,
  [SMALL_STATE(86)] = 3129,
  [SMALL_STATE(87)] = 3161,
  [SMALL_STATE(88)] = 3193,
  [SMALL_STATE(89)] = 3225,
  [SMALL_STATE(90)] = 3257,
  [SMALL_STATE(91)] = 3289,
  [SMALL_STATE(92)] = 3321,
  [SMALL_STATE(93)] = 3353,
  [SMALL_STATE(94)] = 3385,
  [SMALL_STATE(95)] = 3417,
  [SMALL_STATE(96)] = 3443,
  [SMALL_STATE(97)] = 3469,
  [SMALL_STATE(98)] = 3495,
  [SMALL_STATE(99)] = 3521,
  [SMALL_STATE(100)] = 3547,
  [SMALL_STATE(101)] = 3568,
  [SMALL_STATE(102)] = 3589,
  [SMALL_STATE(103)] = 3610,
  [SMALL_STATE(104)] = 3629,
  [SMALL_STATE(105)] = 3648,
  [SMALL_STATE(106)] = 3667,
  [SMALL_STATE(107)] = 3686,
  [SMALL_STATE(108)] = 3705,
  [SMALL_STATE(109)] = 3723,
  [SMALL_STATE(110)] = 3741,
  [SMALL_STATE(111)] = 3759,
  [SMALL_STATE(112)] = 3777,
  [SMALL_STATE(113)] = 3795,
  [SMALL_STATE(114)] = 3813,
  [SMALL_STATE(115)] = 3831,
  [SMALL_STATE(116)] = 3849,
  [SMALL_STATE(117)] = 3867,
  [SMALL_STATE(118)] = 3885,
  [SMALL_STATE(119)] = 3903,
  [SMALL_STATE(120)] = 3919,
  [SMALL_STATE(121)] = 3937,
  [SMALL_STATE(122)] = 3952,
  [SMALL_STATE(123)] = 3967,
  [SMALL_STATE(124)] = 3982,
  [SMALL_STATE(125)] = 3997,
  [SMALL_STATE(126)] = 4010,
  [SMALL_STATE(127)] = 4025,
  [SMALL_STATE(128)] = 4040,
  [SMALL_STATE(129)] = 4057,
  [SMALL_STATE(130)] = 4072,
  [SMALL_STATE(131)] = 4087,
  [SMALL_STATE(132)] = 4102,
  [SMALL_STATE(133)] = 4117,
  [SMALL_STATE(134)] = 4132,
  [SMALL_STATE(135)] = 4147,
  [SMALL_STATE(136)] = 4160,
  [SMALL_STATE(137)] = 4175,
  [SMALL_STATE(138)] = 4190,
  [SMALL_STATE(139)] = 4205,
  [SMALL_STATE(140)] = 4222,
  [SMALL_STATE(141)] = 4237,
  [SMALL_STATE(142)] = 4252,
  [SMALL_STATE(143)] = 4267,
  [SMALL_STATE(144)] = 4282,
  [SMALL_STATE(145)] = 4295,
  [SMALL_STATE(146)] = 4310,
  [SMALL_STATE(147)] = 4325,
  [SMALL_STATE(148)] = 4340,
  [SMALL_STATE(149)] = 4355,
  [SMALL_STATE(150)] = 4370,
  [SMALL_STATE(151)] = 4385,
  [SMALL_STATE(152)] = 4400,
  [SMALL_STATE(153)] = 4415,
  [SMALL_STATE(154)] = 4430,
  [SMALL_STATE(155)] = 4443,
  [SMALL_STATE(156)] = 4455,
  [SMALL_STATE(157)] = 4467,
  [SMALL_STATE(158)] = 4479,
  [SMALL_STATE(159)] = 4491,
  [SMALL_STATE(160)] = 4503,
  [SMALL_STATE(161)] = 4515,
  [SMALL_STATE(162)] = 4527,
  [SMALL_STATE(163)] = 4539,
  [SMALL_STATE(164)] = 4551,
  [SMALL_STATE(165)] = 4563,
  [SMALL_STATE(166)] = 4575,
  [SMALL_STATE(167)] = 4587,
  [SMALL_STATE(168)] = 4599,
  [SMALL_STATE(169)] = 4611,
  [SMALL_STATE(170)] = 4623,
  [SMALL_STATE(171)] = 4635,
  [SMALL_STATE(172)] = 4647,
  [SMALL_STATE(173)] = 4659,
  [SMALL_STATE(174)] = 4671,
  [SMALL_STATE(175)] = 4683,
  [SMALL_STATE(176)] = 4695,
  [SMALL_STATE(177)] = 4707,
  [SMALL_STATE(178)] = 4719,
  [SMALL_STATE(179)] = 4731,
  [SMALL_STATE(180)] = 4743,
  [SMALL_STATE(181)] = 4755,
  [SMALL_STATE(182)] = 4767,
  [SMALL_STATE(183)] = 4779,
  [SMALL_STATE(184)] = 4791,
  [SMALL_STATE(185)] = 4803,
  [SMALL_STATE(186)] = 4815,
  [SMALL_STATE(187)] = 4827,
  [SMALL_STATE(188)] = 4839,
  [SMALL_STATE(189)] = 4851,
  [SMALL_STATE(190)] = 4863,
  [SMALL_STATE(191)] = 4875,
  [SMALL_STATE(192)] = 4887,
  [SMALL_STATE(193)] = 4899,
  [SMALL_STATE(194)] = 4911,
  [SMALL_STATE(195)] = 4923,
  [SMALL_STATE(196)] = 4932,
  [SMALL_STATE(197)] = 4941,
  [SMALL_STATE(198)] = 4950,
  [SMALL_STATE(199)] = 4959,
  [SMALL_STATE(200)] = 4968,
  [SMALL_STATE(201)] = 4977,
  [SMALL_STATE(202)] = 4986,
  [SMALL_STATE(203)] = 4995,
  [SMALL_STATE(204)] = 5004,
  [SMALL_STATE(205)] = 5013,
  [SMALL_STATE(206)] = 5022,
  [SMALL_STATE(207)] = 5031,
  [SMALL_STATE(208)] = 5040,
  [SMALL_STATE(209)] = 5049,
  [SMALL_STATE(210)] = 5058,
  [SMALL_STATE(211)] = 5067,
  [SMALL_STATE(212)] = 5076,
  [SMALL_STATE(213)] = 5085,
  [SMALL_STATE(214)] = 5094,
  [SMALL_STATE(215)] = 5103,
  [SMALL_STATE(216)] = 5112,
  [SMALL_STATE(217)] = 5121,
  [SMALL_STATE(218)] = 5130,
  [SMALL_STATE(219)] = 5139,
  [SMALL_STATE(220)] = 5148,
  [SMALL_STATE(221)] = 5157,
  [SMALL_STATE(222)] = 5166,
  [SMALL_STATE(223)] = 5175,
  [SMALL_STATE(224)] = 5184,
  [SMALL_STATE(225)] = 5193,
  [SMALL_STATE(226)] = 5202,
  [SMALL_STATE(227)] = 5211,
  [SMALL_STATE(228)] = 5220,
  [SMALL_STATE(229)] = 5229,
  [SMALL_STATE(230)] = 5238,
  [SMALL_STATE(231)] = 5247,
  [SMALL_STATE(232)] = 5256,
  [SMALL_STATE(233)] = 5265,
  [SMALL_STATE(234)] = 5274,
  [SMALL_STATE(235)] = 5283,
  [SMALL_STATE(236)] = 5292,
  [SMALL_STATE(237)] = 5301,
  [SMALL_STATE(238)] = 5310,
  [SMALL_STATE(239)] = 5319,
  [SMALL_STATE(240)] = 5328,
  [SMALL_STATE(241)] = 5337,
  [SMALL_STATE(242)] = 5346,
  [SMALL_STATE(243)] = 5355,
  [SMALL_STATE(244)] = 5364,
  [SMALL_STATE(245)] = 5373,
  [SMALL_STATE(246)] = 5382,
  [SMALL_STATE(247)] = 5391,
  [SMALL_STATE(248)] = 5400,
  [SMALL_STATE(249)] = 5409,
  [SMALL_STATE(250)] = 5418,
  [SMALL_STATE(251)] = 5427,
  [SMALL_STATE(252)] = 5436,
  [SMALL_STATE(253)] = 5445,
  [SMALL_STATE(254)] = 5454,
  [SMALL_STATE(255)] = 5463,
  [SMALL_STATE(256)] = 5472,
  [SMALL_STATE(257)] = 5481,
  [SMALL_STATE(258)] = 5490,
  [SMALL_STATE(259)] = 5499,
  [SMALL_STATE(260)] = 5508,
  [SMALL_STATE(261)] = 5517,
  [SMALL_STATE(262)] = 5526,
  [SMALL_STATE(263)] = 5535,
  [SMALL_STATE(264)] = 5544,
  [SMALL_STATE(265)] = 5553,
  [SMALL_STATE(266)] = 5562,
  [SMALL_STATE(267)] = 5571,
  [SMALL_STATE(268)] = 5580,
  [SMALL_STATE(269)] = 5589,
  [SMALL_STATE(270)] = 5598,
  [SMALL_STATE(271)] = 5607,
  [SMALL_STATE(272)] = 5616,
  [SMALL_STATE(273)] = 5625,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_card_block, 1, 0, 0),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(252),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(259),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_data_card_block, 1, 0, 0),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_data_card_block_repeat1, 2, 0, 0),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_card_block_repeat1, 2, 0, 0), SHIFT_REPEAT(189),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_card_block_repeat1, 2, 0, 0), SHIFT_REPEAT(241),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_card_block_repeat1, 2, 0, 0), SHIFT_REPEAT(146),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_data_card_block_repeat1, 2, 0, 0), SHIFT_REPEAT(120),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_data_card_block_repeat1, 2, 0, 0), SHIFT_REPEAT(252),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_card_block_repeat1, 2, 0, 0), SHIFT_REPEAT(149),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_card_block_repeat1, 2, 0, 0), SHIFT_REPEAT(118),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_data_card_block_repeat1, 2, 0, 0), SHIFT_REPEAT(146),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_data_card_block_repeat1, 2, 0, 0), SHIFT_REPEAT(259),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_data_card_block_repeat1, 2, 0, 0),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertical_data_block_multiple_line, 2, 0, 0),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vertical_data_block_multiple_line, 2, 0, 0),
  [64] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_vertical_data_block_multiple_line_repeat1, 2, 0, 0),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_vertical_data_block_multiple_line_repeat1, 2, 0, 0),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_vertical_data_block_multiple_line_repeat1, 2, 0, 0), SHIFT_REPEAT(115),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertical_data, 2, 0, 0),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vertical_data, 2, 0, 0),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertical_data_block, 1, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vertical_data_block, 1, 0, 0),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_card, 2, 0, 0),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_data_card, 2, 0, 0),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertical_data_block_single_line, 5, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vertical_data_block_single_line, 5, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cell_card_void, 3, 0, 2),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cell_card_mat, 4, 0, 5),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cell_like_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(206),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cell_like_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(174),
  [151] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cell_like_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(175),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cell_like_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(244),
  [157] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cell_like_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(257),
  [160] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cell_like_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(262),
  [163] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cell_like_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(160),
  [166] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cell_like_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(164),
  [169] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cell_like_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(215),
  [172] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cell_like_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(239),
  [175] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cell_like_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(194),
  [178] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cell_like_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(134),
  [181] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cell_like_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(177),
  [184] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cell_like_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(181),
  [187] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cell_like_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(184),
  [190] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cell_like_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(224),
  [193] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cell_like_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(186),
  [196] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cell_like_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(191),
  [199] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cell_like_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(256),
  [202] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cell_like_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(182),
  [205] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cell_like_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(183),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_cell_like_parameters_repeat1, 2, 0, 0),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cell_like_parameters, 1, 0, 0),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cell_parameters, 1, 0, 0),
  [214] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cell_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(206),
  [217] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cell_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(174),
  [220] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cell_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(175),
  [223] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cell_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(244),
  [226] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cell_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(257),
  [229] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cell_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(262),
  [232] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cell_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(160),
  [235] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cell_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(164),
  [238] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cell_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(215),
  [241] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cell_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(239),
  [244] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cell_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(194),
  [247] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cell_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(134),
  [250] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cell_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(177),
  [253] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cell_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(181),
  [256] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cell_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(184),
  [259] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cell_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(224),
  [262] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cell_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(186),
  [265] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cell_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(191),
  [268] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cell_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(256),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_cell_parameters_repeat1, 2, 0, 0),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_intersect, 2, 0, 4),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_intersect, 2, 0, 4),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union, 3, 0, 6),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_union, 3, 0, 6),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cell_geometry, 1, 0, 0),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cell_geometry, 1, 0, 0),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_complement, 2, 0, 3),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_complement, 2, 0, 3),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cell_geometry, 1, 0, 1),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cell_geometry, 1, 0, 1),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cell_geometry, 3, 0, 0),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cell_geometry, 3, 0, 0),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stretch_para, 1, 0, 0),
  [319] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stretch_para, 1, 0, 0),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_complement, 4, 0, 0),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_complement, 4, 0, 0),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fill_form3_repeat1, 2, 0, 0),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_fill_form3_repeat1, 2, 0, 0),
  [333] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_fill_form3_repeat1, 2, 0, 0), SHIFT_REPEAT(31),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fill_form3, 11, 0, 22),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fill_form3, 11, 0, 22),
  [340] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fill_form3, 12, 0, 23),
  [344] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fill_form3, 12, 0, 23),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fill_form1, 3, 0, 9),
  [352] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fill_form1, 3, 0, 9),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fill_form1, 2, 0, 7),
  [360] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fill_form1, 2, 0, 7),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fill_form1, 6, 0, 20),
  [364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fill_form1, 6, 0, 20),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cell_para_lat, 2, 0, 0),
  [368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cell_para_lat, 2, 0, 0),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cell_para_cosy, 2, 0, 0),
  [372] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cell_para_cosy, 2, 0, 0),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cell_para_bflcl, 2, 0, 0),
  [376] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cell_para_bflcl, 2, 0, 0),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cell_like_parameter, 1, 0, 0),
  [380] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cell_like_parameter, 1, 0, 0),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cell_parameter, 1, 0, 0),
  [384] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cell_parameter, 1, 0, 0),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cell_para_trcl, 1, 0, 0),
  [388] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cell_para_trcl, 1, 0, 0),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cell_para_fill, 1, 0, 0),
  [392] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cell_para_fill, 1, 0, 0),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cell_para_imp, 3, 0, 0),
  [396] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cell_para_imp, 3, 0, 0),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cell_para_vol, 3, 0, 0),
  [400] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cell_para_vol, 3, 0, 0),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cell_para_pwt, 3, 0, 0),
  [404] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cell_para_pwt, 3, 0, 0),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cell_para_ext, 3, 0, 0),
  [408] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cell_para_ext, 3, 0, 0),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cell_para_fcl, 3, 0, 0),
  [412] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cell_para_fcl, 3, 0, 0),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cell_para_nonu, 3, 0, 0),
  [416] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cell_para_nonu, 3, 0, 0),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cell_para_pd, 3, 0, 0),
  [420] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cell_para_pd, 3, 0, 0),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cell_para_tmp, 3, 0, 0),
  [424] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cell_para_tmp, 3, 0, 0),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cell_para_univ, 3, 0, 0),
  [428] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cell_para_univ, 3, 0, 0),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trcl_number, 3, 0, 0),
  [432] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_trcl_number, 3, 0, 0),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cell_para_lat, 3, 0, 0),
  [436] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cell_para_lat, 3, 0, 0),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cell_para_elpt, 3, 0, 0),
  [440] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cell_para_elpt, 3, 0, 0),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cell_para_cosy, 3, 0, 0),
  [444] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cell_para_cosy, 3, 0, 0),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cell_para_bflcl, 3, 0, 0),
  [448] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cell_para_bflcl, 3, 0, 0),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cell_para_unc, 3, 0, 0),
  [452] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cell_para_unc, 3, 0, 0),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cell_para_mat, 2, 0, 10),
  [456] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cell_para_mat, 2, 0, 10),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cell_para_dens, 2, 0, 11),
  [460] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cell_para_dens, 2, 0, 11),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cell_para_ext, 4, 0, 0),
  [464] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cell_para_ext, 4, 0, 0),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stretch_para, 2, 0, 0),
  [468] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stretch_para, 2, 0, 0),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cell_para_fcl, 4, 0, 0),
  [472] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cell_para_fcl, 4, 0, 0),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cell_para_dxc, 4, 0, 0),
  [476] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cell_para_dxc, 4, 0, 0),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cell_para_pd, 4, 0, 0),
  [480] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cell_para_pd, 4, 0, 0),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cell_para_tmp, 4, 0, 0),
  [484] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cell_para_tmp, 4, 0, 0),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trcl_matrix, 4, 0, 0),
  [488] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_trcl_matrix, 4, 0, 0),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cell_para_elpt, 4, 0, 0),
  [492] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cell_para_elpt, 4, 0, 0),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cell_para_unc, 4, 0, 0),
  [496] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cell_para_unc, 4, 0, 0),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cell_para_mat, 3, 0, 14),
  [500] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cell_para_mat, 3, 0, 14),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cell_para_dens, 3, 0, 15),
  [504] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cell_para_dens, 3, 0, 15),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stretch_para, 3, 0, 0),
  [508] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stretch_para, 3, 0, 0),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cell_para_wwn, 5, 0, 0),
  [512] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cell_para_wwn, 5, 0, 0),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cell_para_dxc, 5, 0, 0),
  [516] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cell_para_dxc, 5, 0, 0),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trcl_matrix, 5, 0, 0),
  [520] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_trcl_matrix, 5, 0, 0),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fill_form1, 5, 0, 18),
  [524] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fill_form1, 5, 0, 18),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cell_para_wwn, 6, 0, 0),
  [528] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cell_para_wwn, 6, 0, 0),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cell_para_dxc, 6, 0, 0),
  [532] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cell_para_dxc, 6, 0, 0),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trcl_matrix, 6, 0, 0),
  [536] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_trcl_matrix, 6, 0, 0),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cell_para_vol, 2, 0, 0),
  [540] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cell_para_vol, 2, 0, 0),
  [542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cell_para_pwt, 2, 0, 0),
  [544] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cell_para_pwt, 2, 0, 0),
  [546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fill_form2, 7, 0, 7),
  [548] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fill_form2, 7, 0, 7),
  [550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fill_form2, 8, 0, 9),
  [552] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fill_form2, 8, 0, 9),
  [554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fill_form2, 8, 0, 7),
  [556] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fill_form2, 8, 0, 7),
  [558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fill_form2, 9, 0, 21),
  [560] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fill_form2, 9, 0, 21),
  [562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fill_form2, 9, 0, 9),
  [564] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fill_form2, 9, 0, 9),
  [566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fill_form2, 10, 0, 21),
  [568] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fill_form2, 10, 0, 21),
  [570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cell_para_nonu, 2, 0, 0),
  [572] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cell_para_nonu, 2, 0, 0),
  [574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cell_para_univ, 2, 0, 0),
  [576] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cell_para_univ, 2, 0, 0),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trcl_number, 2, 0, 0),
  [580] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_trcl_number, 2, 0, 0),
  [582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cell_para_imp, 4, 0, 0),
  [584] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cell_para_imp, 4, 0, 0),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [590] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cell_card_block, 1, 0, 0),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [594] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_cell_card_block_repeat1, 2, 0, 0),
  [596] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cell_card_block_repeat1, 2, 0, 0), SHIFT_REPEAT(122),
  [599] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_surface_card_block_repeat1, 2, 0, 0), SHIFT_REPEAT(218),
  [602] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_surface_card_block_repeat1, 2, 0, 0),
  [604] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_surface_card_block_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [611] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [619] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_surface_card_block, 1, 0, 0),
  [621] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_fill_form3_repeat1, 2, 0, 0), SHIFT_REPEAT(108),
  [624] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fill_form3_repeat1, 2, 0, 0), SHIFT_REPEAT(108),
  [627] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_transform_card_repeat1, 2, 0, 0),
  [629] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_transform_card_repeat1, 2, 0, 0), SHIFT_REPEAT(109),
  [632] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transform_card_repeat1, 2, 0, 0), SHIFT_REPEAT(109),
  [635] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_importance_card, 3, 0, 0),
  [637] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [641] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_importance_card, 2, 0, 0),
  [643] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [647] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_universe_card, 2, 0, 0),
  [649] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [653] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fill_card, 2, 0, 0),
  [655] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transform_card, 3, 0, 0),
  [657] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [659] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [661] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transform_card, 4, 0, 0),
  [663] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fill_card, 1, 0, 0),
  [665] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [669] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_universe_card, 1, 0, 0),
  [671] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [687] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [691] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_surface_card, 4, 0, 12),
  [693] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_surface_card, 4, 0, 12),
  [695] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__coeffs, 2, 0, 0),
  [697] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__coeffs, 2, 0, 0), SHIFT_REPEAT(187),
  [700] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [704] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [706] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [708] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ignored_data_card, 2, 0, 0),
  [710] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [714] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lattice_card, 2, 0, 0),
  [716] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [720] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_trcl_matrix_repeat1, 2, 0, 0),
  [722] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_trcl_matrix_repeat1, 2, 0, 0), SHIFT_REPEAT(132),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [733] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_surface_card, 5, 0, 16),
  [735] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_surface_card, 5, 0, 16),
  [737] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [739] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [743] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [747] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_vertical_data_block_single_line_repeat1, 2, 0, 0),
  [749] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_vertical_data_block_single_line_repeat1, 2, 0, 0),
  [751] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_vertical_data_block_single_line_repeat1, 2, 0, 0), SHIFT_REPEAT(159),
  [754] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_ignored_data_card_repeat1, 2, 0, 0),
  [756] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ignored_data_card_repeat1, 2, 0, 0), SHIFT_REPEAT(140),
  [759] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [763] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_lattice_card_repeat1, 2, 0, 0), SHIFT_REPEAT(142),
  [766] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_lattice_card_repeat1, 2, 0, 0),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [770] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_surface_card, 6, 0, 19),
  [772] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_surface_card, 6, 0, 19),
  [774] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [776] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ignored_data_card, 1, 0, 0),
  [778] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [790] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lattice_card, 1, 0, 0),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [800] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [804] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_surface_card, 5, 0, 17),
  [806] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_surface_card, 5, 0, 17),
  [808] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [810] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [816] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_vertical_data_block_single_line_repeat1, 1, 0, 13),
  [818] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_vertical_data_block_single_line_repeat1, 1, 0, 13),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [836] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [840] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [862] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cell_card, 2, 0, 0),
  [864] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cell_card, 2, 0, 0),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [880] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vertical_header, 3, 0, 0),
  [882] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertical_header, 3, 0, 0),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [918] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__coeffs, 1, 0, 0),
  [920] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__coeffs, 1, 0, 0),
  [922] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [924] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [930] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 6, 0, 0),
  [932] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [942] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 8, 0, 0),
  [944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [964] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [970] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [974] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [976] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [978] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [994] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cell_card_like, 5, 0, 8),
  [996] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [1000] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [1002] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cell_card_mat, 5, 0, 5),
  [1004] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [1006] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [1008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [1010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [1012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [1014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [1016] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [1018] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [1020] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [1022] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [1024] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [1026] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [1028] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [1030] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [1032] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [1034] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [1036] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [1038] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [1040] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [1042] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [1044] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [1046] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [1048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [1050] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [1052] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [1054] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [1056] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [1058] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [1060] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [1062] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [1064] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [1066] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [1068] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [1070] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [1072] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [1074] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [1076] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [1078] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [1080] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [1082] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [1084] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [1086] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [1088] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [1090] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cell_card_void, 4, 0, 2),
  [1092] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [1094] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [1096] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
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
