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
#define STATE_COUNT 260
#define LARGE_STATE_COUNT 6
#define SYMBOL_COUNT 274
#define ALIAS_COUNT 16
#define TOKEN_COUNT 213
#define EXTERNAL_TOKEN_COUNT 2
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 12
#define PRODUCTION_ID_COUNT 23

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
  aux_sym_cell_card_block_repeat1 = 264,
  aux_sym_cell_parameters_repeat1 = 265,
  aux_sym_cell_like_parameters_repeat1 = 266,
  aux_sym_trcl_matrix_repeat1 = 267,
  aux_sym_fill_form3_repeat1 = 268,
  aux_sym_surface_card_block_repeat1 = 269,
  aux_sym_data_card_block_repeat1 = 270,
  aux_sym_transform_card_repeat1 = 271,
  aux_sym_lattice_card_repeat1 = 272,
  aux_sym_ignored_data_card_repeat1 = 273,
  alias_sym_cell_id = 274,
  alias_sym_coeffs = 275,
  alias_sym_half_space = 276,
  alias_sym_i1 = 277,
  alias_sym_i2 = 278,
  alias_sym_j1 = 279,
  alias_sym_j2 = 280,
  alias_sym_k1 = 281,
  alias_sym_k2 = 282,
  alias_sym_mat_dens = 283,
  alias_sym_mat_id = 284,
  alias_sym_other_cell_id = 285,
  alias_sym_surface_id = 286,
  alias_sym_transform = 287,
  alias_sym_transform_id = 288,
  alias_sym_universe_id = 289,
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
    [2] = alias_sym_mat_id,
  },
  [14] = {
    [2] = alias_sym_mat_dens,
  },
  [15] = {
    [1] = alias_sym_surface_id,
    [2] = aux_sym_cell_para_lat_token1,
    [3] = alias_sym_coeffs,
  },
  [16] = {
    [0] = alias_sym_surface_id,
    [1] = alias_sym_transform,
    [2] = aux_sym_cell_para_lat_token1,
    [3] = alias_sym_coeffs,
  },
  [17] = {
    [1] = alias_sym_universe_id,
    [3] = alias_sym_transform_id,
  },
  [18] = {
    [1] = alias_sym_surface_id,
    [2] = alias_sym_transform,
    [3] = aux_sym_cell_para_lat_token1,
    [4] = alias_sym_coeffs,
  },
  [19] = {
    [2] = alias_sym_universe_id,
    [4] = alias_sym_transform_id,
  },
  [20] = {
    [3] = alias_sym_universe_id,
  },
  [21] = {
    [1] = alias_sym_i1,
    [3] = alias_sym_i2,
    [4] = alias_sym_j1,
    [6] = alias_sym_j2,
    [7] = alias_sym_k1,
    [9] = alias_sym_k2,
  },
  [22] = {
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
  [102] = 28,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
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
        'a', 90,
        'b', 67,
        'c', 36,
        'd', 48,
        'e', 476,
        'f', 473,
        'g', 233,
        'h', 124,
        'i', 99,
        'k', 38,
        'l', 59,
        'm', 442,
        'n', 388,
        'o', 265,
        'p', 391,
        'r', 49,
        's', 352,
        't', 477,
        'u', 368,
        'v', 354,
        'w', 126,
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
        'a', 90,
        'b', 67,
        'c', 36,
        'd', 48,
        'e', 476,
        'f', 473,
        'g', 233,
        'h', 124,
        'i', 99,
        'k', 38,
        'l', 59,
        'm', 442,
        'n', 388,
        'o', 265,
        'p', 391,
        'r', 49,
        's', 352,
        't', 477,
        'u', 368,
        'v', 354,
        'w', 126,
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
        '(', 342,
        ')', 343,
        '*', 372,
        '+', 40,
        '-', 41,
        '0', 572,
        ':', 344,
        'a', 91,
        'b', 68,
        'c', 180,
        'd', 48,
        'e', 476,
        'f', 473,
        'h', 157,
        'i', 99,
        'k', 78,
        'l', 60,
        'm', 442,
        'n', 207,
        'o', 265,
        'p', 100,
        'r', 50,
        's', 75,
        't', 477,
        'u', 368,
        'v', 57,
        'w', 297,
        'x', 247,
        'z', 322,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(2);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(570);
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
        'b', 140,
        'c', 213,
        'd', 306,
        'e', 179,
        'f', 96,
        'i', 187,
        'l', 58,
        'm', 66,
        'n', 212,
        'p', 101,
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
        'b', 140,
        'c', 213,
        'd', 306,
        'e', 179,
        'f', 96,
        'i', 187,
        'l', 58,
        'm', 66,
        'n', 212,
        'p', 101,
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
        '.', 327,
        'b', 140,
        'c', 213,
        'd', 306,
        'e', 179,
        'f', 96,
        'i', 585,
        'j', 582,
        'l', 61,
        'm', 66,
        'n', 212,
        'p', 101,
        'r', 583,
        't', 192,
        'u', 369,
        'v', 214,
        'w', 300,
        '+', 32,
        '-', 32,
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
        '.', 327,
        'b', 140,
        'c', 213,
        'd', 306,
        'e', 179,
        'f', 96,
        'i', 585,
        'j', 582,
        'l', 61,
        'm', 66,
        'n', 212,
        'p', 101,
        'r', 583,
        't', 192,
        'u', 369,
        'v', 214,
        'w', 300,
        '+', 32,
        '-', 32,
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
        '.', 327,
        'c', 323,
        'i', 584,
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(571);
      END_STATE();
    case 13:
      ADVANCE_MAP(
        '\n', 567,
        '\r', 12,
        '$', 564,
        '.', 327,
        'c', 323,
        'i', 584,
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(571);
      END_STATE();
    case 14:
      ADVANCE_MAP(
        '\n', 567,
        '\r', 14,
        '$', 563,
        '&', 586,
        'c', 587,
        '\t', 14,
        0x0b, 14,
        '\f', 14,
        ' ', 14,
      );
      if (lookahead != 0) ADVANCE(588);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(567);
      if (lookahead == '\r') ADVANCE(14);
      if (lookahead == '$') ADVANCE(563);
      if (lookahead == 'c') ADVANCE(587);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(14);
      if (lookahead != 0) ADVANCE(588);
      END_STATE();
    case 16:
      ADVANCE_MAP(
        '\n', 567,
        '\r', 16,
        '$', 564,
        '&', 5,
        ')', 343,
        '.', 333,
        '=', 347,
        'c', 323,
        '+', 35,
        '-', 35,
        '\t', 16,
        0x0b, 16,
        '\f', 16,
        ' ', 16,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(576);
      END_STATE();
    case 17:
      ADVANCE_MAP(
        '\n', 567,
        '\r', 16,
        '$', 564,
        ')', 343,
        '.', 333,
        '=', 347,
        'c', 323,
        '+', 35,
        '-', 35,
        '\t', 16,
        0x0b, 16,
        '\f', 16,
        ' ', 16,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(576);
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
        '.', 331,
        'c', 323,
        'i', 584,
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      END_STATE();
    case 21:
      ADVANCE_MAP(
        '\n', 567,
        '\r', 20,
        '$', 564,
        '.', 331,
        'c', 323,
        'i', 584,
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
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
        'c', 37,
        'e', 175,
        'g', 233,
        'h', 123,
        'k', 39,
        'p', 392,
        'r', 79,
        's', 353,
        't', 244,
        'w', 125,
        'x', 356,
        'y', 358,
        'z', 359,
        '+', 325,
        '-', 325,
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
        '.', 329,
        '0', 339,
        '=', 347,
        'c', 323,
        's', 351,
        '+', 33,
        '-', 33,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(24);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(31);
      END_STATE();
    case 25:
      ADVANCE_MAP(
        '\n', 311,
        '$', 564,
        '&', 5,
        '.', 333,
        '0', 576,
        'c', 323,
        '+', 35,
        '-', 35,
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
        'c', 37,
        'e', 175,
        'g', 233,
        'h', 123,
        'k', 39,
        'p', 392,
        'r', 79,
        's', 353,
        't', 244,
        'w', 125,
        'x', 356,
        'y', 358,
        'z', 359,
        '+', 325,
        '-', 325,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(572);
      END_STATE();
    case 28:
      ADVANCE_MAP(
        '\n', 311,
        '$', 564,
        '.', 329,
        '0', 339,
        '=', 347,
        'c', 323,
        's', 351,
        '+', 33,
        '-', 33,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(24);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(31);
      END_STATE();
    case 29:
      if (lookahead == '\n') ADVANCE(311);
      if (lookahead == '$') ADVANCE(564);
      if (lookahead == '.') ADVANCE(333);
      if (lookahead == '0') ADVANCE(576);
      if (lookahead == 'c') ADVANCE(323);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(35);
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
      if (lookahead == '.') ADVANCE(573);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      END_STATE();
    case 32:
      if (lookahead == '.') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(571);
      END_STATE();
    case 33:
      if (lookahead == '.') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      END_STATE();
    case 34:
      if (lookahead == '.') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      END_STATE();
    case 35:
      if (lookahead == '.') ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(576);
      END_STATE();
    case 36:
      ADVANCE_MAP(
        '/', 302,
        'm', 132,
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
    case 37:
      if (lookahead == '/') ADVANCE(302);
      if (lookahead == 'x') ADVANCE(403);
      if (lookahead == 'y') ADVANCE(404);
      if (lookahead == 'z') ADVANCE(405);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(6);
      END_STATE();
    case 38:
      ADVANCE_MAP(
        '/', 304,
        'c', 216,
        'o', 228,
        'p', 131,
        's', 127,
        'x', 409,
        'y', 410,
        'z', 411,
      );
      END_STATE();
    case 39:
      if (lookahead == '/') ADVANCE(304);
      if (lookahead == 'x') ADVANCE(409);
      if (lookahead == 'y') ADVANCE(410);
      if (lookahead == 'z') ADVANCE(411);
      END_STATE();
    case 40:
      if (lookahead == '0') ADVANCE(572);
      if (lookahead == 'f') ADVANCE(472);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(570);
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
        'b', 92,
        'd', 516,
        'e', 479,
        'f', 480,
        'i', 257,
        'm', 433,
        'r', 305,
        's', 543,
        'x', 81,
      );
      END_STATE();
    case 49:
      if (lookahead == 'a') ADVANCE(203);
      if (lookahead == 'c') ADVANCE(82);
      if (lookahead == 'd') ADVANCE(296);
      if (lookahead == 'e') ADVANCE(63);
      if (lookahead == 'h') ADVANCE(209);
      if (lookahead == 'm') ADVANCE(135);
      if (lookahead == 'p') ADVANCE(220);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(203);
      if (lookahead == 'd') ADVANCE(296);
      if (lookahead == 'e') ADVANCE(62);
      if (lookahead == 'm') ADVANCE(135);
      END_STATE();
    case 51:
      if (lookahead == 'a') ADVANCE(461);
      if (lookahead == 'b') ADVANCE(462);
      if (lookahead == 'c') ADVANCE(463);
      END_STATE();
    case 52:
      if (lookahead == 'a') ADVANCE(464);
      if (lookahead == 'b') ADVANCE(465);
      END_STATE();
    case 53:
      if (lookahead == 'a') ADVANCE(429);
      END_STATE();
    case 54:
      if (lookahead == 'a') ADVANCE(71);
      END_STATE();
    case 55:
      if (lookahead == 'a') ADVANCE(496);
      if (lookahead == 'b') ADVANCE(497);
      if (lookahead == 'c') ADVANCE(498);
      END_STATE();
    case 56:
      if (lookahead == 'a') ADVANCE(77);
      END_STATE();
    case 57:
      if (lookahead == 'a') ADVANCE(235);
      if (lookahead == 'e') ADVANCE(98);
      if (lookahead == 'o') ADVANCE(158);
      END_STATE();
    case 58:
      if (lookahead == 'a') ADVANCE(269);
      END_STATE();
    case 59:
      if (lookahead == 'a') ADVANCE(269);
      if (lookahead == 'c') ADVANCE(51);
      if (lookahead == 'e') ADVANCE(52);
      if (lookahead == 'i') ADVANCE(159);
      if (lookahead == 'o') ADVANCE(264);
      END_STATE();
    case 60:
      if (lookahead == 'a') ADVANCE(269);
      if (lookahead == 'c') ADVANCE(51);
      if (lookahead == 'e') ADVANCE(52);
      if (lookahead == 'o') ADVANCE(264);
      END_STATE();
    case 61:
      if (lookahead == 'a') ADVANCE(269);
      if (lookahead == 'o') ADVANCE(142);
      END_STATE();
    case 62:
      if (lookahead == 'a') ADVANCE(105);
      END_STATE();
    case 63:
      if (lookahead == 'a') ADVANCE(105);
      if (lookahead == 'c') ADVANCE(423);
      END_STATE();
    case 64:
      if (lookahead == 'a') ADVANCE(88);
      END_STATE();
    case 65:
      if (lookahead == 'a') ADVANCE(198);
      END_STATE();
    case 66:
      if (lookahead == 'a') ADVANCE(284);
      END_STATE();
    case 67:
      if (lookahead == 'b') ADVANCE(239);
      if (lookahead == 'f') ADVANCE(161);
      if (lookahead == 'o') ADVANCE(301);
      if (lookahead == 'u') ADVANCE(238);
      END_STATE();
    case 68:
      if (lookahead == 'b') ADVANCE(239);
      if (lookahead == 'f') ADVANCE(161);
      if (lookahead == 'u') ADVANCE(237);
      END_STATE();
    case 69:
      if (lookahead == 'b') ADVANCE(427);
      END_STATE();
    case 70:
      if (lookahead == 'b') ADVANCE(427);
      if (lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 71:
      if (lookahead == 'b') ADVANCE(448);
      END_STATE();
    case 72:
      if (lookahead == 'b') ADVANCE(436);
      if (lookahead == 'd') ADVANCE(434);
      if (lookahead == 'e') ADVANCE(435);
      if (lookahead == 'm') ADVANCE(437);
      END_STATE();
    case 73:
      if (lookahead == 'b') ADVANCE(438);
      if (lookahead == 'm') ADVANCE(439);
      END_STATE();
    case 74:
      if (lookahead == 'b') ADVANCE(446);
      END_STATE();
    case 75:
      ADVANCE_MAP(
        'b', 542,
        'c', 544,
        'd', 484,
        'f', 483,
        'i', 540,
        'm', 136,
        'p', 541,
        's', 234,
        't', 211,
      );
      END_STATE();
    case 76:
      if (lookahead == 'b') ADVANCE(156);
      END_STATE();
    case 77:
      if (lookahead == 'b') ADVANCE(171);
      END_STATE();
    case 78:
      if (lookahead == 'c') ADVANCE(216);
      if (lookahead == 'o') ADVANCE(228);
      if (lookahead == 'p') ADVANCE(131);
      if (lookahead == 's') ADVANCE(127);
      END_STATE();
    case 79:
      if (lookahead == 'c') ADVANCE(82);
      if (lookahead == 'e') ADVANCE(83);
      if (lookahead == 'h') ADVANCE(219);
      if (lookahead == 'p') ADVANCE(220);
      END_STATE();
    case 80:
      if (lookahead == 'c') ADVANCE(362);
      END_STATE();
    case 81:
      if (lookahead == 'c') ADVANCE(362);
      if (lookahead == 't') ADVANCE(515);
      END_STATE();
    case 82:
      if (lookahead == 'c') ADVANCE(420);
      END_STATE();
    case 83:
      if (lookahead == 'c') ADVANCE(423);
      END_STATE();
    case 84:
      if (lookahead == 'c') ADVANCE(468);
      END_STATE();
    case 85:
      if (lookahead == 'c') ADVANCE(459);
      END_STATE();
    case 86:
      if (lookahead == 'c') ADVANCE(549);
      END_STATE();
    case 87:
      if (lookahead == 'c') ADVANCE(548);
      END_STATE();
    case 88:
      if (lookahead == 'c') ADVANCE(527);
      END_STATE();
    case 89:
      if (lookahead == 'c') ADVANCE(424);
      END_STATE();
    case 90:
      if (lookahead == 'c') ADVANCE(266);
      if (lookahead == 'r') ADVANCE(70);
      if (lookahead == 'w') ADVANCE(286);
      END_STATE();
    case 91:
      if (lookahead == 'c') ADVANCE(266);
      if (lookahead == 'r') ADVANCE(122);
      if (lookahead == 'w') ADVANCE(286);
      END_STATE();
    case 92:
      if (lookahead == 'c') ADVANCE(196);
      if (lookahead == 'r') ADVANCE(85);
      END_STATE();
    case 93:
      if (lookahead == 'c') ADVANCE(46);
      END_STATE();
    case 94:
      if (lookahead == 'c') ADVANCE(165);
      END_STATE();
    case 95:
      if (lookahead == 'c') ADVANCE(165);
      if (lookahead == 'd') ADVANCE(470);
      END_STATE();
    case 96:
      if (lookahead == 'c') ADVANCE(169);
      if (lookahead == 'i') ADVANCE(174);
      END_STATE();
    case 97:
      if (lookahead == 'c') ADVANCE(167);
      END_STATE();
    case 98:
      if (lookahead == 'c') ADVANCE(274);
      END_STATE();
    case 99:
      if (lookahead == 'd') ADVANCE(295);
      if (lookahead == 'm') ADVANCE(218);
      END_STATE();
    case 100:
      if (lookahead == 'd') ADVANCE(366);
      if (lookahead == 'e') ADVANCE(245);
      if (lookahead == 'h') ADVANCE(309);
      if (lookahead == 'i') ADVANCE(160);
      if (lookahead == 'r') ADVANCE(112);
      if (lookahead == 't') ADVANCE(241);
      if (lookahead == 'w') ADVANCE(270);
      END_STATE();
    case 101:
      if (lookahead == 'd') ADVANCE(366);
      if (lookahead == 'w') ADVANCE(270);
      END_STATE();
    case 102:
      if (lookahead == 'd') ADVANCE(426);
      END_STATE();
    case 103:
      if (lookahead == 'd') ADVANCE(118);
      if (lookahead == 'e') ADVANCE(72);
      if (lookahead == 't') ADVANCE(73);
      END_STATE();
    case 104:
      if (lookahead == 'd') ADVANCE(523);
      END_STATE();
    case 105:
      if (lookahead == 'd') ADVANCE(531);
      END_STATE();
    case 106:
      if (lookahead == 'd') ADVANCE(450);
      END_STATE();
    case 107:
      if (lookahead == 'd') ADVANCE(492);
      END_STATE();
    case 108:
      if (lookahead == 'd') ADVANCE(471);
      END_STATE();
    case 109:
      if (lookahead == 'd') ADVANCE(191);
      END_STATE();
    case 110:
      if (lookahead == 'd') ADVANCE(74);
      END_STATE();
    case 111:
      if (lookahead == 'd') ADVANCE(117);
      END_STATE();
    case 112:
      if (lookahead == 'd') ADVANCE(189);
      if (lookahead == 'i') ADVANCE(205);
      END_STATE();
    case 113:
      if (lookahead == 'd') ADVANCE(119);
      END_STATE();
    case 114:
      if (lookahead == 'e') ADVANCE(504);
      if (lookahead == 'g') ADVANCE(507);
      if (lookahead == 'n') ADVANCE(361);
      if (lookahead == 'p') ADVANCE(506);
      if (lookahead == 't') ADVANCE(505);
      END_STATE();
    case 115:
      if (lookahead == 'e') ADVANCE(521);
      END_STATE();
    case 116:
      if (lookahead == 'e') ADVANCE(340);
      END_STATE();
    case 117:
      if (lookahead == 'e') ADVANCE(453);
      END_STATE();
    case 118:
      if (lookahead == 'e') ADVANCE(440);
      if (lookahead == 'f') ADVANCE(441);
      END_STATE();
    case 119:
      if (lookahead == 'e') ADVANCE(547);
      END_STATE();
    case 120:
      if (lookahead == 'e') ADVANCE(458);
      END_STATE();
    case 121:
      if (lookahead == 'e') ADVANCE(538);
      END_STATE();
    case 122:
      if (lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 123:
      if (lookahead == 'e') ADVANCE(303);
      END_STATE();
    case 124:
      if (lookahead == 'e') ADVANCE(303);
      if (lookahead == 'i') ADVANCE(263);
      if (lookahead == 's') ADVANCE(240);
      END_STATE();
    case 125:
      if (lookahead == 'e') ADVANCE(102);
      END_STATE();
    case 126:
      if (lookahead == 'e') ADVANCE(102);
      if (lookahead == 'w') ADVANCE(114);
      END_STATE();
    case 127:
      if (lookahead == 'e') ADVANCE(197);
      if (lookahead == 'r') ADVANCE(87);
      END_STATE();
    case 128:
      if (lookahead == 'e') ADVANCE(172);
      if (lookahead == 'l') ADVANCE(129);
      if (lookahead == 'c' ||
          lookahead == 'p' ||
          lookahead == 'r') ADVANCE(42);
      END_STATE();
    case 129:
      if (lookahead == 'e') ADVANCE(251);
      if (lookahead == 'l') ADVANCE(376);
      END_STATE();
    case 130:
      if (lookahead == 'e') ADVANCE(183);
      END_STATE();
    case 131:
      if (lookahead == 'e') ADVANCE(246);
      END_STATE();
    case 132:
      if (lookahead == 'e') ADVANCE(256);
      END_STATE();
    case 133:
      if (lookahead == 'e') ADVANCE(259);
      END_STATE();
    case 134:
      if (lookahead == 'e') ADVANCE(259);
      if (lookahead == 'u') ADVANCE(177);
      END_STATE();
    case 135:
      if (lookahead == 'e') ADVANCE(260);
      END_STATE();
    case 136:
      if (lookahead == 'e') ADVANCE(262);
      END_STATE();
    case 137:
      if (lookahead == 'f') ADVANCE(500);
      END_STATE();
    case 138:
      if (lookahead == 'f') ADVANCE(539);
      END_STATE();
    case 139:
      if (lookahead == 'f') ADVANCE(110);
      END_STATE();
    case 140:
      if (lookahead == 'f') ADVANCE(173);
      END_STATE();
    case 141:
      if (lookahead == 'g') ADVANCE(432);
      END_STATE();
    case 142:
      if (lookahead == 'g') ADVANCE(582);
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
      if (lookahead == 'i') ADVANCE(106);
      if (lookahead == 'l') ADVANCE(348);
      END_STATE();
    case 159:
      if (lookahead == 'k') ADVANCE(116);
      END_STATE();
    case 160:
      if (lookahead == 'k') ADVANCE(193);
      if (lookahead == 'o') ADVANCE(530);
      END_STATE();
    case 161:
      if (lookahead == 'l') ADVANCE(95);
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
      if (lookahead == 'l') ADVANCE(121);
      END_STATE();
    case 172:
      if (lookahead == 'l') ADVANCE(108);
      END_STATE();
    case 173:
      if (lookahead == 'l') ADVANCE(94);
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
      if (lookahead == 'm') ADVANCE(132);
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
          lookahead == 'e') ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(184);
      END_STATE();
    case 185:
      if (lookahead == 'm') ADVANCE(582);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(185);
      END_STATE();
    case 186:
      if (lookahead == 'm') ADVANCE(137);
      END_STATE();
    case 187:
      if (lookahead == 'm') ADVANCE(218);
      END_STATE();
    case 188:
      if (lookahead == 'm') ADVANCE(115);
      END_STATE();
    case 189:
      if (lookahead == 'm') ADVANCE(223);
      END_STATE();
    case 190:
      if (lookahead == 'm') ADVANCE(120);
      END_STATE();
    case 191:
      if (lookahead == 'm') ADVANCE(107);
      END_STATE();
    case 192:
      if (lookahead == 'm') ADVANCE(221);
      if (lookahead == 'r') ADVANCE(97);
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
      if (lookahead == 'n') ADVANCE(104);
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
      if (lookahead == 'o') ADVANCE(142);
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
      if (lookahead == 'o') ADVANCE(113);
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
      if (lookahead == 'r') ADVANCE(55);
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
      if (lookahead == 'r') ADVANCE(130);
      END_STATE();
    case 240:
      if (lookahead == 'r') ADVANCE(86);
      END_STATE();
    case 241:
      if (lookahead == 'r') ADVANCE(64);
      END_STATE();
    case 242:
      if (lookahead == 'r') ADVANCE(69);
      END_STATE();
    case 243:
      if (lookahead == 'r') ADVANCE(199);
      END_STATE();
    case 244:
      if (lookahead == 'r') ADVANCE(89);
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
      if (lookahead == 's') ADVANCE(56);
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
      if (lookahead == 't') ADVANCE(139);
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
      if (lookahead == 't') ADVANCE(54);
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
      if (lookahead == 'w') ADVANCE(114);
      END_STATE();
    case 298:
      if (lookahead == 'w') ADVANCE(299);
      END_STATE();
    case 299:
      if (lookahead == 'w') ADVANCE(141);
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
      if (lookahead == 'x') ADVANCE(80);
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
          lookahead == '-') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(185);
      END_STATE();
    case 317:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(574);
      END_STATE();
    case 318:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(578);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(572);
      END_STATE();
    case 326:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      END_STATE();
    case 327:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(184);
      END_STATE();
    case 328:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(185);
      END_STATE();
    case 329:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(573);
      END_STATE();
    case 330:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(574);
      END_STATE();
    case 331:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(577);
      END_STATE();
    case 332:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(578);
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
        '(', 342,
        ')', 343,
        '*', 372,
        '+', 40,
        '-', 41,
        '0', 572,
        ':', 344,
        'a', 91,
        'b', 68,
        'c', 180,
        'd', 48,
        'e', 476,
        'f', 473,
        'h', 157,
        'i', 99,
        'k', 78,
        'l', 60,
        'm', 442,
        'n', 207,
        'o', 265,
        'p', 100,
        'r', 50,
        's', 75,
        't', 477,
        'u', 368,
        'v', 57,
        'w', 297,
        'x', 247,
        'z', 322,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(2);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(570);
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
          lookahead == 'e') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
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
      if (lookahead == 'e') ADVANCE(98);
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
      if (lookahead == 'n') ADVANCE(84);
      if (lookahead == 'r') ADVANCE(65);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_u);
      if (lookahead == 'n') ADVANCE(93);
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
        'r', 112,
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
      if (lookahead == 'o') ADVANCE(111);
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
      if (lookahead == 'i') ADVANCE(128);
      if (lookahead == 'm') ADVANCE(134);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(aux_sym_ignored_data_card_token1);
      if (lookahead == 'i') ADVANCE(321);
      if (lookahead == 'm') ADVANCE(133);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(aux_sym_ignored_data_card_token2);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(anon_sym_e);
      if (lookahead == 'l') ADVANCE(227);
      if (lookahead == 'm') ADVANCE(481);
      if (lookahead == 'n') ADVANCE(109);
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
      if (lookahead == 'b') ADVANCE(103);
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
      if (lookahead == 'e') ADVANCE(138);
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
      if (lookahead == 'a') ADVANCE(76);
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
        'i', 584,
        'l', 210,
        'E', 316,
        'e', 316,
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
          lookahead == 'e') ADVANCE(317);
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
        'i', 584,
        'l', 210,
        'E', 318,
        'e', 318,
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
          lookahead == 'e') ADVANCE(318);
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
      if (lookahead == 'h') ADVANCE(208);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym_shortcut);
      if (lookahead == 'l') ADVANCE(210);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym_shortcut);
      if (lookahead == 'l') ADVANCE(210);
      if (lookahead == 'm') ADVANCE(218);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym_ignored_data);
      if (lookahead == '\n') ADVANCE(565);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(5);
      if (lookahead != 0) ADVANCE(588);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym_ignored_data);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(6);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(588);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_ignored_data);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(588);
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
  [6] = {.lex_state = 9},
  [7] = {.lex_state = 9},
  [8] = {.lex_state = 9},
  [9] = {.lex_state = 9},
  [10] = {.lex_state = 9},
  [11] = {.lex_state = 9},
  [12] = {.lex_state = 9},
  [13] = {.lex_state = 27},
  [14] = {.lex_state = 27},
  [15] = {.lex_state = 27},
  [16] = {.lex_state = 27},
  [17] = {.lex_state = 9},
  [18] = {.lex_state = 9},
  [19] = {.lex_state = 9},
  [20] = {.lex_state = 9},
  [21] = {.lex_state = 9},
  [22] = {.lex_state = 9},
  [23] = {.lex_state = 9},
  [24] = {.lex_state = 9},
  [25] = {.lex_state = 9},
  [26] = {.lex_state = 11},
  [27] = {.lex_state = 11},
  [28] = {.lex_state = 11},
  [29] = {.lex_state = 9},
  [30] = {.lex_state = 9},
  [31] = {.lex_state = 9},
  [32] = {.lex_state = 9},
  [33] = {.lex_state = 9},
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
  [88] = {.lex_state = 336},
  [89] = {.lex_state = 336},
  [90] = {.lex_state = 336},
  [91] = {.lex_state = 336},
  [92] = {.lex_state = 336},
  [93] = {.lex_state = 336},
  [94] = {.lex_state = 336},
  [95] = {.lex_state = 4},
  [96] = {.lex_state = 4},
  [97] = {.lex_state = 4},
  [98] = {.lex_state = 4},
  [99] = {.lex_state = 4},
  [100] = {.lex_state = 4},
  [101] = {.lex_state = 28},
  [102] = {.lex_state = 13},
  [103] = {.lex_state = 21},
  [104] = {.lex_state = 13},
  [105] = {.lex_state = 13},
  [106] = {.lex_state = 21},
  [107] = {.lex_state = 21},
  [108] = {.lex_state = 21},
  [109] = {.lex_state = 28},
  [110] = {.lex_state = 21},
  [111] = {.lex_state = 13},
  [112] = {.lex_state = 13},
  [113] = {.lex_state = 15},
  [114] = {.lex_state = 13},
  [115] = {.lex_state = 27},
  [116] = {.lex_state = 17},
  [117] = {.lex_state = 17},
  [118] = {.lex_state = 4},
  [119] = {.lex_state = 17},
  [120] = {.lex_state = 17},
  [121] = {.lex_state = 19},
  [122] = {.lex_state = 21},
  [123] = {.lex_state = 17},
  [124] = {.lex_state = 17},
  [125] = {.lex_state = 4},
  [126] = {.lex_state = 17},
  [127] = {.lex_state = 4},
  [128] = {.lex_state = 15},
  [129] = {.lex_state = 21},
  [130] = {.lex_state = 19},
  [131] = {.lex_state = 4},
  [132] = {.lex_state = 17},
  [133] = {.lex_state = 4},
  [134] = {.lex_state = 17},
  [135] = {.lex_state = 17},
  [136] = {.lex_state = 17},
  [137] = {.lex_state = 17},
  [138] = {.lex_state = 17},
  [139] = {.lex_state = 15},
  [140] = {.lex_state = 17},
  [141] = {.lex_state = 17},
  [142] = {.lex_state = 19},
  [143] = {.lex_state = 13},
  [144] = {.lex_state = 29},
  [145] = {.lex_state = 17},
  [146] = {.lex_state = 27},
  [147] = {.lex_state = 17},
  [148] = {.lex_state = 17},
  [149] = {.lex_state = 336},
  [150] = {.lex_state = 17},
  [151] = {.lex_state = 27},
  [152] = {.lex_state = 29},
  [153] = {.lex_state = 4},
  [154] = {.lex_state = 27},
  [155] = {.lex_state = 17},
  [156] = {.lex_state = 30},
  [157] = {.lex_state = 4},
  [158] = {.lex_state = 17},
  [159] = {.lex_state = 17},
  [160] = {.lex_state = 4},
  [161] = {.lex_state = 17},
  [162] = {.lex_state = 365},
  [163] = {.lex_state = 4},
  [164] = {.lex_state = 17},
  [165] = {.lex_state = 17},
  [166] = {.lex_state = 17},
  [167] = {.lex_state = 9},
  [168] = {.lex_state = 17},
  [169] = {.lex_state = 17},
  [170] = {.lex_state = 17},
  [171] = {.lex_state = 17},
  [172] = {.lex_state = 19},
  [173] = {.lex_state = 17},
  [174] = {.lex_state = 17},
  [175] = {.lex_state = 27},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 27},
  [178] = {.lex_state = 17},
  [179] = {.lex_state = 17},
  [180] = {.lex_state = 4},
  [181] = {.lex_state = 27},
  [182] = {.lex_state = 9},
  [183] = {.lex_state = 27},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 17},
  [186] = {.lex_state = 19},
  [187] = {.lex_state = 27},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 17},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 27},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 17},
  [194] = {.lex_state = 27},
  [195] = {.lex_state = 30},
  [196] = {.lex_state = 4},
  [197] = {.lex_state = 4},
  [198] = {.lex_state = 4},
  [199] = {.lex_state = 19},
  [200] = {.lex_state = 4},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 17},
  [203] = {.lex_state = 365},
  [204] = {.lex_state = 19},
  [205] = {.lex_state = 4},
  [206] = {.lex_state = 17},
  [207] = {.lex_state = 4},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 17},
  [210] = {.lex_state = 17},
  [211] = {.lex_state = 17},
  [212] = {.lex_state = 9},
  [213] = {.lex_state = 17},
  [214] = {.lex_state = 17},
  [215] = {.lex_state = 9},
  [216] = {.lex_state = 17},
  [217] = {.lex_state = 17},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 27},
  [220] = {.lex_state = 336},
  [221] = {.lex_state = 27},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 9},
  [224] = {.lex_state = 9},
  [225] = {.lex_state = 4},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 17},
  [228] = {.lex_state = 27},
  [229] = {.lex_state = 17},
  [230] = {.lex_state = 17},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 22},
  [234] = {.lex_state = 27},
  [235] = {.lex_state = 17},
  [236] = {.lex_state = 19},
  [237] = {.lex_state = 27},
  [238] = {.lex_state = 19},
  [239] = {.lex_state = 27},
  [240] = {.lex_state = 27},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 4},
  [243] = {.lex_state = 4},
  [244] = {.lex_state = 27},
  [245] = {.lex_state = 4},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 17},
  [249] = {.lex_state = 19},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 27},
  [252] = {.lex_state = 17},
  [253] = {.lex_state = 19},
  [254] = {.lex_state = 336},
  [255] = {.lex_state = 17},
  [256] = {.lex_state = 4},
  [257] = {.lex_state = 19},
  [258] = {.lex_state = 19},
  [259] = {.lex_state = 17},
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
    [sym_source_file] = STATE(184),
    [sym_inline_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_header] = ACTIONS(5),
  },
  [2] = {
    [sym_data_card] = STATE(2),
    [sym_transform_card] = STATE(223),
    [sym_universe_card] = STATE(223),
    [sym_lattice_card] = STATE(223),
    [sym_fill_card] = STATE(223),
    [sym_importance_card] = STATE(223),
    [sym_ignored_data_card] = STATE(223),
    [aux_sym_data_card_block_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(7),
    [anon_sym_imp_COLON] = ACTIONS(9),
    [anon_sym_vol] = ACTIONS(12),
    [anon_sym_pwt] = ACTIONS(12),
    [anon_sym_wwn] = ACTIONS(12),
    [anon_sym_dxc] = ACTIONS(12),
    [anon_sym_nonu] = ACTIONS(12),
    [anon_sym_pd] = ACTIONS(12),
    [anon_sym_tmp] = ACTIONS(12),
    [anon_sym_u] = ACTIONS(15),
    [anon_sym_STAR] = ACTIONS(18),
    [anon_sym_lat] = ACTIONS(21),
    [anon_sym_fill] = ACTIONS(24),
    [anon_sym_cosy] = ACTIONS(27),
    [anon_sym_bflcl] = ACTIONS(12),
    [anon_sym_tr] = ACTIONS(30),
    [anon_sym_area] = ACTIONS(12),
    [anon_sym_uran] = ACTIONS(12),
    [anon_sym_mesh] = ACTIONS(12),
    [anon_sym_dawwg] = ACTIONS(12),
    [anon_sym_dm] = ACTIONS(12),
    [anon_sym_embed] = ACTIONS(12),
    [anon_sym_embee] = ACTIONS(12),
    [anon_sym_embeb] = ACTIONS(12),
    [anon_sym_embem] = ACTIONS(12),
    [anon_sym_embtb] = ACTIONS(12),
    [anon_sym_embtm] = ACTIONS(12),
    [anon_sym_embde] = ACTIONS(12),
    [anon_sym_embdf] = ACTIONS(12),
    [anon_sym_m] = ACTIONS(27),
    [anon_sym_mt] = ACTIONS(12),
    [anon_sym_mx] = ACTIONS(12),
    [anon_sym_mpn] = ACTIONS(12),
    [anon_sym_otfdb] = ACTIONS(12),
    [anon_sym_totnu] = ACTIONS(12),
    [anon_sym_awtab] = ACTIONS(12),
    [anon_sym_xs] = ACTIONS(12),
    [anon_sym_void] = ACTIONS(12),
    [anon_sym_mgopt] = ACTIONS(12),
    [anon_sym_drxs] = ACTIONS(12),
    [anon_sym_mode] = ACTIONS(12),
    [anon_sym_phys] = ACTIONS(12),
    [anon_sym_act] = ACTIONS(12),
    [anon_sym_cut] = ACTIONS(12),
    [anon_sym_elpt] = ACTIONS(12),
    [anon_sym_thtme] = ACTIONS(12),
    [anon_sym_dbrc] = ACTIONS(12),
    [anon_sym_mphys] = ACTIONS(12),
    [anon_sym_lca] = ACTIONS(12),
    [anon_sym_lcb] = ACTIONS(12),
    [anon_sym_lcc] = ACTIONS(12),
    [anon_sym_lea] = ACTIONS(12),
    [anon_sym_leb] = ACTIONS(12),
    [anon_sym_fmult] = ACTIONS(12),
    [anon_sym_tropt] = ACTIONS(12),
    [anon_sym_unc] = ACTIONS(12),
    [anon_sym_cosyp] = ACTIONS(12),
    [anon_sym_bfld] = ACTIONS(12),
    [anon_sym_field] = ACTIONS(12),
    [aux_sym_ignored_data_card_token1] = ACTIONS(27),
    [aux_sym_ignored_data_card_token2] = ACTIONS(12),
    [anon_sym_e] = ACTIONS(27),
    [anon_sym_t] = ACTIONS(27),
    [aux_sym_ignored_data_card_token3] = ACTIONS(12),
    [anon_sym_de] = ACTIONS(12),
    [anon_sym_df] = ACTIONS(12),
    [anon_sym_em] = ACTIONS(27),
    [anon_sym_tm] = ACTIONS(27),
    [anon_sym_sf] = ACTIONS(12),
    [anon_sym_sd] = ACTIONS(27),
    [anon_sym_tf] = ACTIONS(12),
    [anon_sym_notrn] = ACTIONS(12),
    [anon_sym_pert] = ACTIONS(12),
    [anon_sym_kpert] = ACTIONS(12),
    [anon_sym_ksen] = ACTIONS(12),
    [anon_sym_kopts] = ACTIONS(12),
    [anon_sym_tmesh] = ACTIONS(12),
    [anon_sym_endmd] = ACTIONS(12),
    [anon_sym_rmesh] = ACTIONS(12),
    [anon_sym_cmesh] = ACTIONS(12),
    [anon_sym_smesh] = ACTIONS(12),
    [anon_sym_cora] = ACTIONS(12),
    [anon_sym_corb] = ACTIONS(12),
    [anon_sym_corc] = ACTIONS(12),
    [anon_sym_ergsh] = ACTIONS(12),
    [anon_sym_mshmf] = ACTIONS(12),
    [aux_sym_ignored_data_card_token4] = ACTIONS(12),
    [anon_sym_spdtl] = ACTIONS(12),
    [anon_sym_var] = ACTIONS(12),
    [anon_sym_wwe] = ACTIONS(12),
    [anon_sym_wwt] = ACTIONS(12),
    [anon_sym_wwp] = ACTIONS(12),
    [anon_sym_wwg] = ACTIONS(27),
    [anon_sym_wwge] = ACTIONS(12),
    [anon_sym_wwgt] = ACTIONS(12),
    [anon_sym_esplt] = ACTIONS(12),
    [anon_sym_tsplt] = ACTIONS(12),
    [anon_sym_ext] = ACTIONS(12),
    [anon_sym_vect] = ACTIONS(12),
    [anon_sym_fcl] = ACTIONS(12),
    [anon_sym_dxt] = ACTIONS(12),
    [anon_sym_dd] = ACTIONS(12),
    [anon_sym_bbrem] = ACTIONS(12),
    [anon_sym_pikmt] = ACTIONS(12),
    [anon_sym_spabi] = ACTIONS(12),
    [anon_sym_nps] = ACTIONS(12),
    [anon_sym_ctme] = ACTIONS(12),
    [anon_sym_stop] = ACTIONS(12),
    [anon_sym_rand] = ACTIONS(12),
    [anon_sym_print] = ACTIONS(12),
    [anon_sym_talnp] = ACTIONS(12),
    [anon_sym_prdmp] = ACTIONS(12),
    [anon_sym_ptrac] = ACTIONS(12),
    [anon_sym_mplot] = ACTIONS(12),
    [anon_sym_histp] = ACTIONS(12),
    [anon_sym_pio] = ACTIONS(12),
    [anon_sym_read] = ACTIONS(12),
    [anon_sym_dbcn] = ACTIONS(12),
    [anon_sym_lost] = ACTIONS(12),
    [anon_sym_idum] = ACTIONS(12),
    [anon_sym_rdum] = ACTIONS(12),
    [aux_sym_ignored_data_card_token5] = ACTIONS(12),
    [anon_sym_files] = ACTIONS(12),
    [anon_sym_disable] = ACTIONS(12),
    [anon_sym_sdef] = ACTIONS(12),
    [anon_sym_si] = ACTIONS(12),
    [anon_sym_sp] = ACTIONS(27),
    [anon_sym_sb] = ACTIONS(12),
    [anon_sym_ds] = ACTIONS(12),
    [anon_sym_sc] = ACTIONS(12),
    [anon_sym_ssw] = ACTIONS(12),
    [anon_sym_ssr] = ACTIONS(12),
    [anon_sym_kcode] = ACTIONS(12),
    [anon_sym_ksrc] = ACTIONS(12),
    [anon_sym_hsrc] = ACTIONS(12),
    [anon_sym_burn] = ACTIONS(12),
    [sym_delimiter] = ACTIONS(33),
    [sym_inline_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
  },
  [3] = {
    [sym_data_card] = STATE(2),
    [sym_transform_card] = STATE(223),
    [sym_universe_card] = STATE(223),
    [sym_lattice_card] = STATE(223),
    [sym_fill_card] = STATE(223),
    [sym_importance_card] = STATE(223),
    [sym_ignored_data_card] = STATE(223),
    [aux_sym_data_card_block_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(35),
    [anon_sym_imp_COLON] = ACTIONS(37),
    [anon_sym_vol] = ACTIONS(39),
    [anon_sym_pwt] = ACTIONS(39),
    [anon_sym_wwn] = ACTIONS(39),
    [anon_sym_dxc] = ACTIONS(39),
    [anon_sym_nonu] = ACTIONS(39),
    [anon_sym_pd] = ACTIONS(39),
    [anon_sym_tmp] = ACTIONS(39),
    [anon_sym_u] = ACTIONS(41),
    [anon_sym_STAR] = ACTIONS(43),
    [anon_sym_lat] = ACTIONS(45),
    [anon_sym_fill] = ACTIONS(47),
    [anon_sym_cosy] = ACTIONS(49),
    [anon_sym_bflcl] = ACTIONS(39),
    [anon_sym_tr] = ACTIONS(51),
    [anon_sym_area] = ACTIONS(39),
    [anon_sym_uran] = ACTIONS(39),
    [anon_sym_mesh] = ACTIONS(39),
    [anon_sym_dawwg] = ACTIONS(39),
    [anon_sym_dm] = ACTIONS(39),
    [anon_sym_embed] = ACTIONS(39),
    [anon_sym_embee] = ACTIONS(39),
    [anon_sym_embeb] = ACTIONS(39),
    [anon_sym_embem] = ACTIONS(39),
    [anon_sym_embtb] = ACTIONS(39),
    [anon_sym_embtm] = ACTIONS(39),
    [anon_sym_embde] = ACTIONS(39),
    [anon_sym_embdf] = ACTIONS(39),
    [anon_sym_m] = ACTIONS(49),
    [anon_sym_mt] = ACTIONS(39),
    [anon_sym_mx] = ACTIONS(39),
    [anon_sym_mpn] = ACTIONS(39),
    [anon_sym_otfdb] = ACTIONS(39),
    [anon_sym_totnu] = ACTIONS(39),
    [anon_sym_awtab] = ACTIONS(39),
    [anon_sym_xs] = ACTIONS(39),
    [anon_sym_void] = ACTIONS(39),
    [anon_sym_mgopt] = ACTIONS(39),
    [anon_sym_drxs] = ACTIONS(39),
    [anon_sym_mode] = ACTIONS(39),
    [anon_sym_phys] = ACTIONS(39),
    [anon_sym_act] = ACTIONS(39),
    [anon_sym_cut] = ACTIONS(39),
    [anon_sym_elpt] = ACTIONS(39),
    [anon_sym_thtme] = ACTIONS(39),
    [anon_sym_dbrc] = ACTIONS(39),
    [anon_sym_mphys] = ACTIONS(39),
    [anon_sym_lca] = ACTIONS(39),
    [anon_sym_lcb] = ACTIONS(39),
    [anon_sym_lcc] = ACTIONS(39),
    [anon_sym_lea] = ACTIONS(39),
    [anon_sym_leb] = ACTIONS(39),
    [anon_sym_fmult] = ACTIONS(39),
    [anon_sym_tropt] = ACTIONS(39),
    [anon_sym_unc] = ACTIONS(39),
    [anon_sym_cosyp] = ACTIONS(39),
    [anon_sym_bfld] = ACTIONS(39),
    [anon_sym_field] = ACTIONS(39),
    [aux_sym_ignored_data_card_token1] = ACTIONS(49),
    [aux_sym_ignored_data_card_token2] = ACTIONS(39),
    [anon_sym_e] = ACTIONS(49),
    [anon_sym_t] = ACTIONS(49),
    [aux_sym_ignored_data_card_token3] = ACTIONS(39),
    [anon_sym_de] = ACTIONS(39),
    [anon_sym_df] = ACTIONS(39),
    [anon_sym_em] = ACTIONS(49),
    [anon_sym_tm] = ACTIONS(49),
    [anon_sym_sf] = ACTIONS(39),
    [anon_sym_sd] = ACTIONS(49),
    [anon_sym_tf] = ACTIONS(39),
    [anon_sym_notrn] = ACTIONS(39),
    [anon_sym_pert] = ACTIONS(39),
    [anon_sym_kpert] = ACTIONS(39),
    [anon_sym_ksen] = ACTIONS(39),
    [anon_sym_kopts] = ACTIONS(39),
    [anon_sym_tmesh] = ACTIONS(39),
    [anon_sym_endmd] = ACTIONS(39),
    [anon_sym_rmesh] = ACTIONS(39),
    [anon_sym_cmesh] = ACTIONS(39),
    [anon_sym_smesh] = ACTIONS(39),
    [anon_sym_cora] = ACTIONS(39),
    [anon_sym_corb] = ACTIONS(39),
    [anon_sym_corc] = ACTIONS(39),
    [anon_sym_ergsh] = ACTIONS(39),
    [anon_sym_mshmf] = ACTIONS(39),
    [aux_sym_ignored_data_card_token4] = ACTIONS(39),
    [anon_sym_spdtl] = ACTIONS(39),
    [anon_sym_var] = ACTIONS(39),
    [anon_sym_wwe] = ACTIONS(39),
    [anon_sym_wwt] = ACTIONS(39),
    [anon_sym_wwp] = ACTIONS(39),
    [anon_sym_wwg] = ACTIONS(49),
    [anon_sym_wwge] = ACTIONS(39),
    [anon_sym_wwgt] = ACTIONS(39),
    [anon_sym_esplt] = ACTIONS(39),
    [anon_sym_tsplt] = ACTIONS(39),
    [anon_sym_ext] = ACTIONS(39),
    [anon_sym_vect] = ACTIONS(39),
    [anon_sym_fcl] = ACTIONS(39),
    [anon_sym_dxt] = ACTIONS(39),
    [anon_sym_dd] = ACTIONS(39),
    [anon_sym_bbrem] = ACTIONS(39),
    [anon_sym_pikmt] = ACTIONS(39),
    [anon_sym_spabi] = ACTIONS(39),
    [anon_sym_nps] = ACTIONS(39),
    [anon_sym_ctme] = ACTIONS(39),
    [anon_sym_stop] = ACTIONS(39),
    [anon_sym_rand] = ACTIONS(39),
    [anon_sym_print] = ACTIONS(39),
    [anon_sym_talnp] = ACTIONS(39),
    [anon_sym_prdmp] = ACTIONS(39),
    [anon_sym_ptrac] = ACTIONS(39),
    [anon_sym_mplot] = ACTIONS(39),
    [anon_sym_histp] = ACTIONS(39),
    [anon_sym_pio] = ACTIONS(39),
    [anon_sym_read] = ACTIONS(39),
    [anon_sym_dbcn] = ACTIONS(39),
    [anon_sym_lost] = ACTIONS(39),
    [anon_sym_idum] = ACTIONS(39),
    [anon_sym_rdum] = ACTIONS(39),
    [aux_sym_ignored_data_card_token5] = ACTIONS(39),
    [anon_sym_files] = ACTIONS(39),
    [anon_sym_disable] = ACTIONS(39),
    [anon_sym_sdef] = ACTIONS(39),
    [anon_sym_si] = ACTIONS(39),
    [anon_sym_sp] = ACTIONS(49),
    [anon_sym_sb] = ACTIONS(39),
    [anon_sym_ds] = ACTIONS(39),
    [anon_sym_sc] = ACTIONS(39),
    [anon_sym_ssw] = ACTIONS(39),
    [anon_sym_ssr] = ACTIONS(39),
    [anon_sym_kcode] = ACTIONS(39),
    [anon_sym_ksrc] = ACTIONS(39),
    [anon_sym_hsrc] = ACTIONS(39),
    [anon_sym_burn] = ACTIONS(39),
    [sym_delimiter] = ACTIONS(53),
    [sym_inline_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
  },
  [4] = {
    [sym_data_card_block] = STATE(149),
    [sym_data_card] = STATE(3),
    [sym_transform_card] = STATE(223),
    [sym_universe_card] = STATE(223),
    [sym_lattice_card] = STATE(223),
    [sym_fill_card] = STATE(223),
    [sym_importance_card] = STATE(223),
    [sym_ignored_data_card] = STATE(223),
    [aux_sym_data_card_block_repeat1] = STATE(3),
    [anon_sym_imp_COLON] = ACTIONS(37),
    [anon_sym_vol] = ACTIONS(39),
    [anon_sym_pwt] = ACTIONS(39),
    [anon_sym_wwn] = ACTIONS(39),
    [anon_sym_dxc] = ACTIONS(39),
    [anon_sym_nonu] = ACTIONS(39),
    [anon_sym_pd] = ACTIONS(39),
    [anon_sym_tmp] = ACTIONS(39),
    [anon_sym_u] = ACTIONS(41),
    [anon_sym_STAR] = ACTIONS(43),
    [anon_sym_lat] = ACTIONS(45),
    [anon_sym_fill] = ACTIONS(47),
    [anon_sym_cosy] = ACTIONS(49),
    [anon_sym_bflcl] = ACTIONS(39),
    [anon_sym_tr] = ACTIONS(51),
    [anon_sym_area] = ACTIONS(39),
    [anon_sym_uran] = ACTIONS(39),
    [anon_sym_mesh] = ACTIONS(39),
    [anon_sym_dawwg] = ACTIONS(39),
    [anon_sym_dm] = ACTIONS(39),
    [anon_sym_embed] = ACTIONS(39),
    [anon_sym_embee] = ACTIONS(39),
    [anon_sym_embeb] = ACTIONS(39),
    [anon_sym_embem] = ACTIONS(39),
    [anon_sym_embtb] = ACTIONS(39),
    [anon_sym_embtm] = ACTIONS(39),
    [anon_sym_embde] = ACTIONS(39),
    [anon_sym_embdf] = ACTIONS(39),
    [anon_sym_m] = ACTIONS(49),
    [anon_sym_mt] = ACTIONS(39),
    [anon_sym_mx] = ACTIONS(39),
    [anon_sym_mpn] = ACTIONS(39),
    [anon_sym_otfdb] = ACTIONS(39),
    [anon_sym_totnu] = ACTIONS(39),
    [anon_sym_awtab] = ACTIONS(39),
    [anon_sym_xs] = ACTIONS(39),
    [anon_sym_void] = ACTIONS(39),
    [anon_sym_mgopt] = ACTIONS(39),
    [anon_sym_drxs] = ACTIONS(39),
    [anon_sym_mode] = ACTIONS(39),
    [anon_sym_phys] = ACTIONS(39),
    [anon_sym_act] = ACTIONS(39),
    [anon_sym_cut] = ACTIONS(39),
    [anon_sym_elpt] = ACTIONS(39),
    [anon_sym_thtme] = ACTIONS(39),
    [anon_sym_dbrc] = ACTIONS(39),
    [anon_sym_mphys] = ACTIONS(39),
    [anon_sym_lca] = ACTIONS(39),
    [anon_sym_lcb] = ACTIONS(39),
    [anon_sym_lcc] = ACTIONS(39),
    [anon_sym_lea] = ACTIONS(39),
    [anon_sym_leb] = ACTIONS(39),
    [anon_sym_fmult] = ACTIONS(39),
    [anon_sym_tropt] = ACTIONS(39),
    [anon_sym_unc] = ACTIONS(39),
    [anon_sym_cosyp] = ACTIONS(39),
    [anon_sym_bfld] = ACTIONS(39),
    [anon_sym_field] = ACTIONS(39),
    [aux_sym_ignored_data_card_token1] = ACTIONS(49),
    [aux_sym_ignored_data_card_token2] = ACTIONS(39),
    [anon_sym_e] = ACTIONS(49),
    [anon_sym_t] = ACTIONS(49),
    [aux_sym_ignored_data_card_token3] = ACTIONS(39),
    [anon_sym_de] = ACTIONS(39),
    [anon_sym_df] = ACTIONS(39),
    [anon_sym_em] = ACTIONS(49),
    [anon_sym_tm] = ACTIONS(49),
    [anon_sym_sf] = ACTIONS(39),
    [anon_sym_sd] = ACTIONS(49),
    [anon_sym_tf] = ACTIONS(39),
    [anon_sym_notrn] = ACTIONS(39),
    [anon_sym_pert] = ACTIONS(39),
    [anon_sym_kpert] = ACTIONS(39),
    [anon_sym_ksen] = ACTIONS(39),
    [anon_sym_kopts] = ACTIONS(39),
    [anon_sym_tmesh] = ACTIONS(39),
    [anon_sym_endmd] = ACTIONS(39),
    [anon_sym_rmesh] = ACTIONS(39),
    [anon_sym_cmesh] = ACTIONS(39),
    [anon_sym_smesh] = ACTIONS(39),
    [anon_sym_cora] = ACTIONS(39),
    [anon_sym_corb] = ACTIONS(39),
    [anon_sym_corc] = ACTIONS(39),
    [anon_sym_ergsh] = ACTIONS(39),
    [anon_sym_mshmf] = ACTIONS(39),
    [aux_sym_ignored_data_card_token4] = ACTIONS(39),
    [anon_sym_spdtl] = ACTIONS(39),
    [anon_sym_var] = ACTIONS(39),
    [anon_sym_wwe] = ACTIONS(39),
    [anon_sym_wwt] = ACTIONS(39),
    [anon_sym_wwp] = ACTIONS(39),
    [anon_sym_wwg] = ACTIONS(49),
    [anon_sym_wwge] = ACTIONS(39),
    [anon_sym_wwgt] = ACTIONS(39),
    [anon_sym_esplt] = ACTIONS(39),
    [anon_sym_tsplt] = ACTIONS(39),
    [anon_sym_ext] = ACTIONS(39),
    [anon_sym_vect] = ACTIONS(39),
    [anon_sym_fcl] = ACTIONS(39),
    [anon_sym_dxt] = ACTIONS(39),
    [anon_sym_dd] = ACTIONS(39),
    [anon_sym_bbrem] = ACTIONS(39),
    [anon_sym_pikmt] = ACTIONS(39),
    [anon_sym_spabi] = ACTIONS(39),
    [anon_sym_nps] = ACTIONS(39),
    [anon_sym_ctme] = ACTIONS(39),
    [anon_sym_stop] = ACTIONS(39),
    [anon_sym_rand] = ACTIONS(39),
    [anon_sym_print] = ACTIONS(39),
    [anon_sym_talnp] = ACTIONS(39),
    [anon_sym_prdmp] = ACTIONS(39),
    [anon_sym_ptrac] = ACTIONS(39),
    [anon_sym_mplot] = ACTIONS(39),
    [anon_sym_histp] = ACTIONS(39),
    [anon_sym_pio] = ACTIONS(39),
    [anon_sym_read] = ACTIONS(39),
    [anon_sym_dbcn] = ACTIONS(39),
    [anon_sym_lost] = ACTIONS(39),
    [anon_sym_idum] = ACTIONS(39),
    [anon_sym_rdum] = ACTIONS(39),
    [aux_sym_ignored_data_card_token5] = ACTIONS(39),
    [anon_sym_files] = ACTIONS(39),
    [anon_sym_disable] = ACTIONS(39),
    [anon_sym_sdef] = ACTIONS(39),
    [anon_sym_si] = ACTIONS(39),
    [anon_sym_sp] = ACTIONS(49),
    [anon_sym_sb] = ACTIONS(39),
    [anon_sym_ds] = ACTIONS(39),
    [anon_sym_sc] = ACTIONS(39),
    [anon_sym_ssw] = ACTIONS(39),
    [anon_sym_ssr] = ACTIONS(39),
    [anon_sym_kcode] = ACTIONS(39),
    [anon_sym_ksrc] = ACTIONS(39),
    [anon_sym_hsrc] = ACTIONS(39),
    [anon_sym_burn] = ACTIONS(39),
    [sym_inline_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(55),
    [anon_sym_imp_COLON] = ACTIONS(55),
    [anon_sym_vol] = ACTIONS(55),
    [anon_sym_pwt] = ACTIONS(55),
    [anon_sym_wwn] = ACTIONS(55),
    [anon_sym_dxc] = ACTIONS(55),
    [anon_sym_nonu] = ACTIONS(55),
    [anon_sym_pd] = ACTIONS(55),
    [anon_sym_tmp] = ACTIONS(55),
    [anon_sym_u] = ACTIONS(57),
    [anon_sym_STAR] = ACTIONS(57),
    [anon_sym_lat] = ACTIONS(55),
    [anon_sym_fill] = ACTIONS(55),
    [anon_sym_cosy] = ACTIONS(57),
    [anon_sym_bflcl] = ACTIONS(55),
    [anon_sym_tr] = ACTIONS(57),
    [anon_sym_area] = ACTIONS(55),
    [anon_sym_uran] = ACTIONS(55),
    [anon_sym_mesh] = ACTIONS(55),
    [anon_sym_dawwg] = ACTIONS(55),
    [anon_sym_dm] = ACTIONS(55),
    [anon_sym_embed] = ACTIONS(55),
    [anon_sym_embee] = ACTIONS(55),
    [anon_sym_embeb] = ACTIONS(55),
    [anon_sym_embem] = ACTIONS(55),
    [anon_sym_embtb] = ACTIONS(55),
    [anon_sym_embtm] = ACTIONS(55),
    [anon_sym_embde] = ACTIONS(55),
    [anon_sym_embdf] = ACTIONS(55),
    [anon_sym_m] = ACTIONS(57),
    [anon_sym_mt] = ACTIONS(55),
    [anon_sym_mx] = ACTIONS(55),
    [anon_sym_mpn] = ACTIONS(55),
    [anon_sym_otfdb] = ACTIONS(55),
    [anon_sym_totnu] = ACTIONS(55),
    [anon_sym_awtab] = ACTIONS(55),
    [anon_sym_xs] = ACTIONS(55),
    [anon_sym_void] = ACTIONS(55),
    [anon_sym_mgopt] = ACTIONS(55),
    [anon_sym_drxs] = ACTIONS(55),
    [anon_sym_mode] = ACTIONS(55),
    [anon_sym_phys] = ACTIONS(55),
    [anon_sym_act] = ACTIONS(55),
    [anon_sym_cut] = ACTIONS(55),
    [anon_sym_elpt] = ACTIONS(55),
    [anon_sym_thtme] = ACTIONS(55),
    [anon_sym_dbrc] = ACTIONS(55),
    [anon_sym_mphys] = ACTIONS(55),
    [anon_sym_lca] = ACTIONS(55),
    [anon_sym_lcb] = ACTIONS(55),
    [anon_sym_lcc] = ACTIONS(55),
    [anon_sym_lea] = ACTIONS(55),
    [anon_sym_leb] = ACTIONS(55),
    [anon_sym_fmult] = ACTIONS(55),
    [anon_sym_tropt] = ACTIONS(55),
    [anon_sym_unc] = ACTIONS(55),
    [anon_sym_cosyp] = ACTIONS(55),
    [anon_sym_bfld] = ACTIONS(55),
    [anon_sym_field] = ACTIONS(55),
    [aux_sym_ignored_data_card_token1] = ACTIONS(57),
    [aux_sym_ignored_data_card_token2] = ACTIONS(55),
    [anon_sym_e] = ACTIONS(57),
    [anon_sym_t] = ACTIONS(57),
    [aux_sym_ignored_data_card_token3] = ACTIONS(55),
    [anon_sym_de] = ACTIONS(55),
    [anon_sym_df] = ACTIONS(55),
    [anon_sym_em] = ACTIONS(57),
    [anon_sym_tm] = ACTIONS(57),
    [anon_sym_sf] = ACTIONS(55),
    [anon_sym_sd] = ACTIONS(57),
    [anon_sym_tf] = ACTIONS(55),
    [anon_sym_notrn] = ACTIONS(55),
    [anon_sym_pert] = ACTIONS(55),
    [anon_sym_kpert] = ACTIONS(55),
    [anon_sym_ksen] = ACTIONS(55),
    [anon_sym_kopts] = ACTIONS(55),
    [anon_sym_tmesh] = ACTIONS(55),
    [anon_sym_endmd] = ACTIONS(55),
    [anon_sym_rmesh] = ACTIONS(55),
    [anon_sym_cmesh] = ACTIONS(55),
    [anon_sym_smesh] = ACTIONS(55),
    [anon_sym_cora] = ACTIONS(55),
    [anon_sym_corb] = ACTIONS(55),
    [anon_sym_corc] = ACTIONS(55),
    [anon_sym_ergsh] = ACTIONS(55),
    [anon_sym_mshmf] = ACTIONS(55),
    [aux_sym_ignored_data_card_token4] = ACTIONS(55),
    [anon_sym_spdtl] = ACTIONS(55),
    [anon_sym_var] = ACTIONS(55),
    [anon_sym_wwe] = ACTIONS(55),
    [anon_sym_wwt] = ACTIONS(55),
    [anon_sym_wwp] = ACTIONS(55),
    [anon_sym_wwg] = ACTIONS(57),
    [anon_sym_wwge] = ACTIONS(55),
    [anon_sym_wwgt] = ACTIONS(55),
    [anon_sym_esplt] = ACTIONS(55),
    [anon_sym_tsplt] = ACTIONS(55),
    [anon_sym_ext] = ACTIONS(55),
    [anon_sym_vect] = ACTIONS(55),
    [anon_sym_fcl] = ACTIONS(55),
    [anon_sym_dxt] = ACTIONS(55),
    [anon_sym_dd] = ACTIONS(55),
    [anon_sym_bbrem] = ACTIONS(55),
    [anon_sym_pikmt] = ACTIONS(55),
    [anon_sym_spabi] = ACTIONS(55),
    [anon_sym_nps] = ACTIONS(55),
    [anon_sym_ctme] = ACTIONS(55),
    [anon_sym_stop] = ACTIONS(55),
    [anon_sym_rand] = ACTIONS(55),
    [anon_sym_print] = ACTIONS(55),
    [anon_sym_talnp] = ACTIONS(55),
    [anon_sym_prdmp] = ACTIONS(55),
    [anon_sym_ptrac] = ACTIONS(55),
    [anon_sym_mplot] = ACTIONS(55),
    [anon_sym_histp] = ACTIONS(55),
    [anon_sym_pio] = ACTIONS(55),
    [anon_sym_read] = ACTIONS(55),
    [anon_sym_dbcn] = ACTIONS(55),
    [anon_sym_lost] = ACTIONS(55),
    [anon_sym_idum] = ACTIONS(55),
    [anon_sym_rdum] = ACTIONS(55),
    [aux_sym_ignored_data_card_token5] = ACTIONS(55),
    [anon_sym_files] = ACTIONS(55),
    [anon_sym_disable] = ACTIONS(55),
    [anon_sym_sdef] = ACTIONS(55),
    [anon_sym_si] = ACTIONS(55),
    [anon_sym_sp] = ACTIONS(57),
    [anon_sym_sb] = ACTIONS(55),
    [anon_sym_ds] = ACTIONS(55),
    [anon_sym_sc] = ACTIONS(55),
    [anon_sym_ssw] = ACTIONS(55),
    [anon_sym_ssr] = ACTIONS(55),
    [anon_sym_kcode] = ACTIONS(55),
    [anon_sym_ksrc] = ACTIONS(55),
    [anon_sym_hsrc] = ACTIONS(55),
    [anon_sym_burn] = ACTIONS(55),
    [sym_delimiter] = ACTIONS(57),
    [sym_inline_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 33,
    ACTIONS(59), 1,
      anon_sym_LPAREN,
    ACTIONS(61), 1,
      anon_sym_COLON,
    ACTIONS(63), 1,
      anon_sym_POUND,
    ACTIONS(65), 1,
      anon_sym_imp_COLON,
    ACTIONS(67), 1,
      anon_sym_vol,
    ACTIONS(69), 1,
      anon_sym_pwt,
    ACTIONS(71), 1,
      anon_sym_ext_COLON,
    ACTIONS(73), 1,
      anon_sym_fcl_COLON,
    ACTIONS(75), 1,
      anon_sym_wwn,
    ACTIONS(77), 1,
      anon_sym_dxc,
    ACTIONS(79), 1,
      anon_sym_nonu,
    ACTIONS(81), 1,
      anon_sym_pd,
    ACTIONS(83), 1,
      anon_sym_tmp,
    ACTIONS(85), 1,
      anon_sym_u,
    ACTIONS(87), 1,
      anon_sym_trcl,
    ACTIONS(89), 1,
      anon_sym_STAR,
    ACTIONS(91), 1,
      anon_sym_lat,
    ACTIONS(93), 1,
      anon_sym_fill,
    ACTIONS(95), 1,
      anon_sym_elpt_COLON,
    ACTIONS(97), 1,
      anon_sym_cosy,
    ACTIONS(99), 1,
      anon_sym_bflcl,
    ACTIONS(101), 1,
      anon_sym_unc_COLON,
    ACTIONS(103), 1,
      sym_endline,
    ACTIONS(105), 1,
      sym_signed_integer,
    ACTIONS(107), 1,
      sym_facet_half_space,
    STATE(17), 1,
      sym_cell_geometry,
    STATE(224), 1,
      sym_cell_parameters,
    STATE(11), 2,
      sym_cell_parameter,
      aux_sym_cell_parameters_repeat1,
    STATE(33), 2,
      sym_trcl_number,
      sym_trcl_matrix,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    STATE(22), 3,
      sym_union,
      sym_intersect,
      sym_complement,
    STATE(34), 3,
      sym_fill_form1,
      sym_fill_form2,
      sym_fill_form3,
    STATE(32), 18,
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
    ACTIONS(59), 1,
      anon_sym_LPAREN,
    ACTIONS(61), 1,
      anon_sym_COLON,
    ACTIONS(63), 1,
      anon_sym_POUND,
    ACTIONS(65), 1,
      anon_sym_imp_COLON,
    ACTIONS(67), 1,
      anon_sym_vol,
    ACTIONS(69), 1,
      anon_sym_pwt,
    ACTIONS(71), 1,
      anon_sym_ext_COLON,
    ACTIONS(73), 1,
      anon_sym_fcl_COLON,
    ACTIONS(75), 1,
      anon_sym_wwn,
    ACTIONS(77), 1,
      anon_sym_dxc,
    ACTIONS(79), 1,
      anon_sym_nonu,
    ACTIONS(81), 1,
      anon_sym_pd,
    ACTIONS(83), 1,
      anon_sym_tmp,
    ACTIONS(85), 1,
      anon_sym_u,
    ACTIONS(87), 1,
      anon_sym_trcl,
    ACTIONS(89), 1,
      anon_sym_STAR,
    ACTIONS(91), 1,
      anon_sym_lat,
    ACTIONS(93), 1,
      anon_sym_fill,
    ACTIONS(95), 1,
      anon_sym_elpt_COLON,
    ACTIONS(97), 1,
      anon_sym_cosy,
    ACTIONS(99), 1,
      anon_sym_bflcl,
    ACTIONS(101), 1,
      anon_sym_unc_COLON,
    ACTIONS(105), 1,
      sym_signed_integer,
    ACTIONS(107), 1,
      sym_facet_half_space,
    ACTIONS(109), 1,
      sym_endline,
    STATE(17), 1,
      sym_cell_geometry,
    STATE(182), 1,
      sym_cell_parameters,
    STATE(11), 2,
      sym_cell_parameter,
      aux_sym_cell_parameters_repeat1,
    STATE(33), 2,
      sym_trcl_number,
      sym_trcl_matrix,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    STATE(22), 3,
      sym_union,
      sym_intersect,
      sym_complement,
    STATE(34), 3,
      sym_fill_form1,
      sym_fill_form2,
      sym_fill_form3,
    STATE(32), 18,
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
    ACTIONS(65), 1,
      anon_sym_imp_COLON,
    ACTIONS(67), 1,
      anon_sym_vol,
    ACTIONS(69), 1,
      anon_sym_pwt,
    ACTIONS(71), 1,
      anon_sym_ext_COLON,
    ACTIONS(73), 1,
      anon_sym_fcl_COLON,
    ACTIONS(75), 1,
      anon_sym_wwn,
    ACTIONS(77), 1,
      anon_sym_dxc,
    ACTIONS(79), 1,
      anon_sym_nonu,
    ACTIONS(81), 1,
      anon_sym_pd,
    ACTIONS(83), 1,
      anon_sym_tmp,
    ACTIONS(85), 1,
      anon_sym_u,
    ACTIONS(87), 1,
      anon_sym_trcl,
    ACTIONS(89), 1,
      anon_sym_STAR,
    ACTIONS(91), 1,
      anon_sym_lat,
    ACTIONS(93), 1,
      anon_sym_fill,
    ACTIONS(95), 1,
      anon_sym_elpt_COLON,
    ACTIONS(97), 1,
      anon_sym_cosy,
    ACTIONS(99), 1,
      anon_sym_bflcl,
    ACTIONS(101), 1,
      anon_sym_unc_COLON,
    ACTIONS(111), 1,
      anon_sym_mat,
    ACTIONS(113), 1,
      anon_sym_rho,
    STATE(212), 1,
      sym_cell_like_parameters,
    STATE(10), 2,
      sym_cell_like_parameter,
      aux_sym_cell_like_parameters_repeat1,
    STATE(33), 2,
      sym_trcl_number,
      sym_trcl_matrix,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    STATE(34), 3,
      sym_fill_form1,
      sym_fill_form2,
      sym_fill_form3,
    STATE(43), 3,
      sym_cell_parameter,
      sym_cell_para_mat,
      sym_cell_para_dens,
    STATE(32), 18,
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
    ACTIONS(115), 1,
      anon_sym_imp_COLON,
    ACTIONS(118), 1,
      anon_sym_vol,
    ACTIONS(121), 1,
      anon_sym_pwt,
    ACTIONS(124), 1,
      anon_sym_ext_COLON,
    ACTIONS(127), 1,
      anon_sym_fcl_COLON,
    ACTIONS(130), 1,
      anon_sym_wwn,
    ACTIONS(133), 1,
      anon_sym_dxc,
    ACTIONS(136), 1,
      anon_sym_nonu,
    ACTIONS(139), 1,
      anon_sym_pd,
    ACTIONS(142), 1,
      anon_sym_tmp,
    ACTIONS(145), 1,
      anon_sym_u,
    ACTIONS(148), 1,
      anon_sym_trcl,
    ACTIONS(151), 1,
      anon_sym_STAR,
    ACTIONS(154), 1,
      anon_sym_lat,
    ACTIONS(157), 1,
      anon_sym_fill,
    ACTIONS(160), 1,
      anon_sym_elpt_COLON,
    ACTIONS(163), 1,
      anon_sym_cosy,
    ACTIONS(166), 1,
      anon_sym_bflcl,
    ACTIONS(169), 1,
      anon_sym_unc_COLON,
    ACTIONS(172), 1,
      anon_sym_mat,
    ACTIONS(175), 1,
      anon_sym_rho,
    ACTIONS(178), 1,
      sym_endline,
    STATE(9), 2,
      sym_cell_like_parameter,
      aux_sym_cell_like_parameters_repeat1,
    STATE(33), 2,
      sym_trcl_number,
      sym_trcl_matrix,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    STATE(34), 3,
      sym_fill_form1,
      sym_fill_form2,
      sym_fill_form3,
    STATE(43), 3,
      sym_cell_parameter,
      sym_cell_para_mat,
      sym_cell_para_dens,
    STATE(32), 18,
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
    ACTIONS(65), 1,
      anon_sym_imp_COLON,
    ACTIONS(67), 1,
      anon_sym_vol,
    ACTIONS(69), 1,
      anon_sym_pwt,
    ACTIONS(71), 1,
      anon_sym_ext_COLON,
    ACTIONS(73), 1,
      anon_sym_fcl_COLON,
    ACTIONS(75), 1,
      anon_sym_wwn,
    ACTIONS(77), 1,
      anon_sym_dxc,
    ACTIONS(79), 1,
      anon_sym_nonu,
    ACTIONS(81), 1,
      anon_sym_pd,
    ACTIONS(83), 1,
      anon_sym_tmp,
    ACTIONS(85), 1,
      anon_sym_u,
    ACTIONS(87), 1,
      anon_sym_trcl,
    ACTIONS(89), 1,
      anon_sym_STAR,
    ACTIONS(91), 1,
      anon_sym_lat,
    ACTIONS(93), 1,
      anon_sym_fill,
    ACTIONS(95), 1,
      anon_sym_elpt_COLON,
    ACTIONS(97), 1,
      anon_sym_cosy,
    ACTIONS(99), 1,
      anon_sym_bflcl,
    ACTIONS(101), 1,
      anon_sym_unc_COLON,
    ACTIONS(111), 1,
      anon_sym_mat,
    ACTIONS(113), 1,
      anon_sym_rho,
    ACTIONS(180), 1,
      sym_endline,
    STATE(9), 2,
      sym_cell_like_parameter,
      aux_sym_cell_like_parameters_repeat1,
    STATE(33), 2,
      sym_trcl_number,
      sym_trcl_matrix,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    STATE(34), 3,
      sym_fill_form1,
      sym_fill_form2,
      sym_fill_form3,
    STATE(43), 3,
      sym_cell_parameter,
      sym_cell_para_mat,
      sym_cell_para_dens,
    STATE(32), 18,
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
    ACTIONS(65), 1,
      anon_sym_imp_COLON,
    ACTIONS(67), 1,
      anon_sym_vol,
    ACTIONS(69), 1,
      anon_sym_pwt,
    ACTIONS(71), 1,
      anon_sym_ext_COLON,
    ACTIONS(73), 1,
      anon_sym_fcl_COLON,
    ACTIONS(75), 1,
      anon_sym_wwn,
    ACTIONS(77), 1,
      anon_sym_dxc,
    ACTIONS(79), 1,
      anon_sym_nonu,
    ACTIONS(81), 1,
      anon_sym_pd,
    ACTIONS(83), 1,
      anon_sym_tmp,
    ACTIONS(85), 1,
      anon_sym_u,
    ACTIONS(87), 1,
      anon_sym_trcl,
    ACTIONS(89), 1,
      anon_sym_STAR,
    ACTIONS(91), 1,
      anon_sym_lat,
    ACTIONS(93), 1,
      anon_sym_fill,
    ACTIONS(95), 1,
      anon_sym_elpt_COLON,
    ACTIONS(97), 1,
      anon_sym_cosy,
    ACTIONS(99), 1,
      anon_sym_bflcl,
    ACTIONS(101), 1,
      anon_sym_unc_COLON,
    ACTIONS(182), 1,
      sym_endline,
    STATE(12), 2,
      sym_cell_parameter,
      aux_sym_cell_parameters_repeat1,
    STATE(33), 2,
      sym_trcl_number,
      sym_trcl_matrix,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    STATE(34), 3,
      sym_fill_form1,
      sym_fill_form2,
      sym_fill_form3,
    STATE(32), 18,
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
    ACTIONS(184), 1,
      anon_sym_imp_COLON,
    ACTIONS(187), 1,
      anon_sym_vol,
    ACTIONS(190), 1,
      anon_sym_pwt,
    ACTIONS(193), 1,
      anon_sym_ext_COLON,
    ACTIONS(196), 1,
      anon_sym_fcl_COLON,
    ACTIONS(199), 1,
      anon_sym_wwn,
    ACTIONS(202), 1,
      anon_sym_dxc,
    ACTIONS(205), 1,
      anon_sym_nonu,
    ACTIONS(208), 1,
      anon_sym_pd,
    ACTIONS(211), 1,
      anon_sym_tmp,
    ACTIONS(214), 1,
      anon_sym_u,
    ACTIONS(217), 1,
      anon_sym_trcl,
    ACTIONS(220), 1,
      anon_sym_STAR,
    ACTIONS(223), 1,
      anon_sym_lat,
    ACTIONS(226), 1,
      anon_sym_fill,
    ACTIONS(229), 1,
      anon_sym_elpt_COLON,
    ACTIONS(232), 1,
      anon_sym_cosy,
    ACTIONS(235), 1,
      anon_sym_bflcl,
    ACTIONS(238), 1,
      anon_sym_unc_COLON,
    ACTIONS(241), 1,
      sym_endline,
    STATE(12), 2,
      sym_cell_parameter,
      aux_sym_cell_parameters_repeat1,
    STATE(33), 2,
      sym_trcl_number,
      sym_trcl_matrix,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    STATE(34), 3,
      sym_fill_form1,
      sym_fill_form2,
      sym_fill_form3,
    STATE(32), 18,
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
    ACTIONS(247), 1,
      sym_signed_integer,
    ACTIONS(243), 2,
      anon_sym_s,
      anon_sym_p,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    ACTIONS(245), 38,
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
    ACTIONS(253), 1,
      sym_signed_integer,
    ACTIONS(249), 2,
      anon_sym_s,
      anon_sym_p,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    ACTIONS(251), 38,
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
    ACTIONS(255), 2,
      anon_sym_s,
      anon_sym_p,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    ACTIONS(257), 38,
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
    ACTIONS(259), 2,
      anon_sym_s,
      anon_sym_p,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    ACTIONS(261), 38,
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
    STATE(17), 1,
      sym_cell_geometry,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    ACTIONS(265), 3,
      anon_sym_u,
      sym_endline,
      sym_signed_integer,
    STATE(22), 3,
      sym_union,
      sym_intersect,
      sym_complement,
    ACTIONS(263), 23,
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
    ACTIONS(59), 1,
      anon_sym_LPAREN,
    ACTIONS(63), 1,
      anon_sym_POUND,
    ACTIONS(105), 1,
      sym_signed_integer,
    ACTIONS(107), 1,
      sym_facet_half_space,
    STATE(17), 1,
      sym_cell_geometry,
    ACTIONS(269), 2,
      anon_sym_u,
      sym_endline,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    STATE(22), 3,
      sym_union,
      sym_intersect,
      sym_complement,
    ACTIONS(267), 20,
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
    ACTIONS(273), 3,
      anon_sym_u,
      sym_endline,
      sym_signed_integer,
    ACTIONS(271), 23,
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
    ACTIONS(277), 3,
      anon_sym_u,
      sym_endline,
      sym_signed_integer,
    ACTIONS(275), 23,
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
    ACTIONS(281), 3,
      anon_sym_u,
      sym_endline,
      sym_signed_integer,
    ACTIONS(279), 23,
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
    ACTIONS(273), 3,
      anon_sym_u,
      sym_endline,
      sym_signed_integer,
    ACTIONS(271), 23,
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
    ACTIONS(285), 3,
      anon_sym_u,
      sym_endline,
      sym_signed_integer,
    ACTIONS(283), 23,
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
    ACTIONS(289), 1,
      anon_sym_v,
    ACTIONS(293), 2,
      anon_sym_u,
      sym_endline,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    ACTIONS(291), 3,
      anon_sym_x,
      anon_sym_y,
      anon_sym_z,
    ACTIONS(287), 20,
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
    ACTIONS(297), 3,
      anon_sym_u,
      sym_endline,
      sym_signed_integer,
    ACTIONS(295), 23,
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
    STATE(28), 1,
      aux_sym_fill_form3_repeat1,
    ACTIONS(301), 2,
      anon_sym_u,
      sym_endline,
    ACTIONS(303), 2,
      sym_signed_integer,
      sym_shortcut,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    ACTIONS(299), 20,
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
    STATE(28), 1,
      aux_sym_fill_form3_repeat1,
    ACTIONS(303), 2,
      sym_signed_integer,
      sym_shortcut,
    ACTIONS(307), 2,
      anon_sym_u,
      sym_endline,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    ACTIONS(305), 20,
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
    STATE(28), 1,
      aux_sym_fill_form3_repeat1,
    ACTIONS(311), 2,
      anon_sym_u,
      sym_endline,
    ACTIONS(313), 2,
      sym_signed_integer,
      sym_shortcut,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    ACTIONS(309), 20,
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
    ACTIONS(316), 1,
      anon_sym_LPAREN,
    ACTIONS(318), 1,
      anon_sym_COLON,
    ACTIONS(322), 2,
      anon_sym_u,
      sym_endline,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    ACTIONS(320), 20,
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
    ACTIONS(324), 1,
      anon_sym_LPAREN,
    ACTIONS(326), 1,
      anon_sym_COLON,
    ACTIONS(330), 2,
      anon_sym_u,
      sym_endline,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    ACTIONS(328), 20,
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
    ACTIONS(334), 2,
      anon_sym_u,
      sym_endline,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    ACTIONS(332), 20,
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
    ACTIONS(338), 2,
      anon_sym_u,
      sym_endline,
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
  [1593] = 3,
    ACTIONS(342), 2,
      anon_sym_u,
      sym_endline,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    ACTIONS(340), 20,
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
    ACTIONS(346), 2,
      anon_sym_u,
      sym_endline,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    ACTIONS(344), 20,
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
    ACTIONS(350), 2,
      anon_sym_u,
      sym_endline,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    ACTIONS(348), 20,
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
    ACTIONS(354), 2,
      anon_sym_u,
      sym_endline,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    ACTIONS(352), 20,
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
    ACTIONS(358), 2,
      anon_sym_u,
      sym_endline,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    ACTIONS(356), 20,
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
    ACTIONS(362), 2,
      anon_sym_u,
      sym_endline,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    ACTIONS(360), 20,
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
    ACTIONS(366), 2,
      anon_sym_u,
      sym_endline,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    ACTIONS(364), 20,
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
    ACTIONS(370), 2,
      anon_sym_u,
      sym_endline,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    ACTIONS(368), 20,
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
    ACTIONS(374), 2,
      anon_sym_u,
      sym_endline,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    ACTIONS(372), 20,
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
    ACTIONS(378), 2,
      anon_sym_u,
      sym_endline,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    ACTIONS(376), 20,
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
    ACTIONS(382), 2,
      anon_sym_u,
      sym_endline,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    ACTIONS(380), 20,
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
    ACTIONS(386), 2,
      anon_sym_u,
      sym_endline,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    ACTIONS(384), 20,
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
    ACTIONS(390), 2,
      anon_sym_u,
      sym_endline,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    ACTIONS(388), 20,
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
    ACTIONS(394), 2,
      anon_sym_u,
      sym_endline,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    ACTIONS(392), 20,
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
    ACTIONS(293), 2,
      anon_sym_u,
      sym_endline,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    ACTIONS(287), 20,
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
    ACTIONS(398), 2,
      anon_sym_u,
      sym_endline,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    ACTIONS(396), 20,
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
    ACTIONS(402), 2,
      anon_sym_u,
      sym_endline,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    ACTIONS(400), 20,
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
    ACTIONS(406), 2,
      anon_sym_u,
      sym_endline,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    ACTIONS(404), 20,
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
    ACTIONS(410), 2,
      anon_sym_u,
      sym_endline,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    ACTIONS(408), 20,
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
    ACTIONS(414), 2,
      anon_sym_u,
      sym_endline,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    ACTIONS(412), 20,
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
    ACTIONS(418), 2,
      anon_sym_u,
      sym_endline,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    ACTIONS(416), 20,
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
    ACTIONS(422), 2,
      anon_sym_u,
      sym_endline,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    ACTIONS(420), 20,
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
    ACTIONS(426), 2,
      anon_sym_u,
      sym_endline,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    ACTIONS(424), 20,
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
    ACTIONS(430), 2,
      anon_sym_u,
      sym_endline,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    ACTIONS(428), 20,
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
    ACTIONS(434), 2,
      anon_sym_u,
      sym_endline,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    ACTIONS(432), 20,
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
    ACTIONS(438), 2,
      anon_sym_u,
      sym_endline,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    ACTIONS(436), 20,
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
    ACTIONS(442), 2,
      anon_sym_u,
      sym_endline,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    ACTIONS(440), 20,
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
    ACTIONS(446), 2,
      anon_sym_u,
      sym_endline,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    ACTIONS(444), 20,
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
    ACTIONS(450), 2,
      anon_sym_u,
      sym_endline,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    ACTIONS(448), 20,
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
    ACTIONS(454), 2,
      anon_sym_u,
      sym_endline,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    ACTIONS(452), 20,
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
    ACTIONS(458), 2,
      anon_sym_u,
      sym_endline,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    ACTIONS(456), 20,
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
    ACTIONS(462), 2,
      anon_sym_u,
      sym_endline,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    ACTIONS(460), 20,
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
    ACTIONS(466), 2,
      anon_sym_u,
      sym_endline,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    ACTIONS(464), 20,
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
    ACTIONS(470), 2,
      anon_sym_u,
      sym_endline,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    ACTIONS(468), 20,
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
    ACTIONS(474), 2,
      anon_sym_u,
      sym_endline,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    ACTIONS(472), 20,
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
    ACTIONS(478), 2,
      anon_sym_u,
      sym_endline,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    ACTIONS(476), 20,
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
    ACTIONS(482), 2,
      anon_sym_u,
      sym_endline,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    ACTIONS(480), 20,
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
    ACTIONS(486), 2,
      anon_sym_u,
      sym_endline,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    ACTIONS(484), 20,
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
    ACTIONS(490), 2,
      anon_sym_u,
      sym_endline,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    ACTIONS(488), 20,
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
    ACTIONS(494), 2,
      anon_sym_u,
      sym_endline,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    ACTIONS(492), 20,
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
    ACTIONS(498), 2,
      anon_sym_u,
      sym_endline,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    ACTIONS(496), 20,
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
    ACTIONS(502), 2,
      anon_sym_u,
      sym_endline,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    ACTIONS(500), 20,
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
    ACTIONS(506), 2,
      anon_sym_u,
      sym_endline,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    ACTIONS(504), 20,
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
    ACTIONS(510), 2,
      anon_sym_u,
      sym_endline,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    ACTIONS(508), 20,
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
    ACTIONS(514), 2,
      anon_sym_u,
      sym_endline,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    ACTIONS(512), 20,
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
    ACTIONS(518), 2,
      anon_sym_u,
      sym_endline,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    ACTIONS(516), 20,
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
    ACTIONS(522), 2,
      anon_sym_u,
      sym_endline,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    ACTIONS(520), 20,
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
    ACTIONS(526), 2,
      anon_sym_u,
      sym_endline,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    ACTIONS(524), 20,
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
    ACTIONS(530), 2,
      anon_sym_u,
      sym_endline,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    ACTIONS(528), 20,
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
    ACTIONS(534), 2,
      anon_sym_u,
      sym_endline,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    ACTIONS(532), 20,
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
    ACTIONS(538), 2,
      anon_sym_u,
      sym_endline,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    ACTIONS(536), 20,
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
    ACTIONS(542), 2,
      anon_sym_u,
      sym_endline,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    ACTIONS(540), 20,
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
    ACTIONS(546), 2,
      anon_sym_u,
      sym_endline,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    ACTIONS(544), 20,
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
    ACTIONS(550), 2,
      anon_sym_u,
      sym_endline,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    ACTIONS(548), 20,
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
    ACTIONS(554), 2,
      anon_sym_u,
      sym_endline,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    ACTIONS(552), 20,
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
    ACTIONS(59), 1,
      anon_sym_LPAREN,
    ACTIONS(61), 1,
      anon_sym_COLON,
    ACTIONS(63), 1,
      anon_sym_POUND,
    ACTIONS(105), 1,
      sym_signed_integer,
    ACTIONS(107), 1,
      sym_facet_half_space,
    ACTIONS(556), 1,
      anon_sym_RPAREN,
    STATE(17), 1,
      sym_cell_geometry,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    STATE(22), 3,
      sym_union,
      sym_intersect,
      sym_complement,
  [3385] = 9,
    ACTIONS(59), 1,
      anon_sym_LPAREN,
    ACTIONS(61), 1,
      anon_sym_COLON,
    ACTIONS(63), 1,
      anon_sym_POUND,
    ACTIONS(105), 1,
      sym_signed_integer,
    ACTIONS(107), 1,
      sym_facet_half_space,
    ACTIONS(558), 1,
      anon_sym_RPAREN,
    STATE(17), 1,
      sym_cell_geometry,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    STATE(22), 3,
      sym_union,
      sym_intersect,
      sym_complement,
  [3417] = 7,
    ACTIONS(59), 1,
      anon_sym_LPAREN,
    ACTIONS(63), 1,
      anon_sym_POUND,
    ACTIONS(105), 1,
      sym_signed_integer,
    ACTIONS(107), 1,
      sym_facet_half_space,
    STATE(88), 1,
      sym_cell_geometry,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    STATE(22), 3,
      sym_union,
      sym_intersect,
      sym_complement,
  [3443] = 7,
    ACTIONS(59), 1,
      anon_sym_LPAREN,
    ACTIONS(63), 1,
      anon_sym_POUND,
    ACTIONS(105), 1,
      sym_signed_integer,
    ACTIONS(107), 1,
      sym_facet_half_space,
    STATE(7), 1,
      sym_cell_geometry,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    STATE(22), 3,
      sym_union,
      sym_intersect,
      sym_complement,
  [3469] = 7,
    ACTIONS(59), 1,
      anon_sym_LPAREN,
    ACTIONS(63), 1,
      anon_sym_POUND,
    ACTIONS(105), 1,
      sym_signed_integer,
    ACTIONS(107), 1,
      sym_facet_half_space,
    STATE(18), 1,
      sym_cell_geometry,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    STATE(22), 3,
      sym_union,
      sym_intersect,
      sym_complement,
  [3495] = 7,
    ACTIONS(59), 1,
      anon_sym_LPAREN,
    ACTIONS(63), 1,
      anon_sym_POUND,
    ACTIONS(105), 1,
      sym_signed_integer,
    ACTIONS(107), 1,
      sym_facet_half_space,
    STATE(6), 1,
      sym_cell_geometry,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    STATE(22), 3,
      sym_union,
      sym_intersect,
      sym_complement,
  [3521] = 7,
    ACTIONS(59), 1,
      anon_sym_LPAREN,
    ACTIONS(63), 1,
      anon_sym_POUND,
    ACTIONS(105), 1,
      sym_signed_integer,
    ACTIONS(107), 1,
      sym_facet_half_space,
    STATE(89), 1,
      sym_cell_geometry,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    STATE(22), 3,
      sym_union,
      sym_intersect,
      sym_complement,
  [3547] = 5,
    ACTIONS(560), 1,
      sym_delimiter,
    ACTIONS(562), 1,
      sym_positive_integer,
    STATE(96), 2,
      sym_cell_card,
      aux_sym_cell_card_block_repeat1,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    STATE(215), 3,
      sym_cell_card_void,
      sym_cell_card_mat,
      sym_cell_card_like,
  [3568] = 5,
    ACTIONS(564), 1,
      sym_delimiter,
    ACTIONS(566), 1,
      sym_positive_integer,
    STATE(96), 2,
      sym_cell_card,
      aux_sym_cell_card_block_repeat1,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    STATE(215), 3,
      sym_cell_card_void,
      sym_cell_card_mat,
      sym_cell_card_like,
  [3589] = 5,
    ACTIONS(562), 1,
      sym_positive_integer,
    STATE(220), 1,
      sym_cell_card_block,
    STATE(95), 2,
      sym_cell_card,
      aux_sym_cell_card_block_repeat1,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
    STATE(215), 3,
      sym_cell_card_void,
      sym_cell_card_mat,
      sym_cell_card_like,
  [3610] = 5,
    ACTIONS(569), 1,
      aux_sym_surface_card_token1,
    ACTIONS(571), 1,
      sym_delimiter,
    ACTIONS(573), 1,
      sym_positive_integer,
    STATE(100), 2,
      sym_surface_card,
      aux_sym_surface_card_block_repeat1,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [3629] = 5,
    ACTIONS(569), 1,
      aux_sym_surface_card_token1,
    ACTIONS(573), 1,
      sym_positive_integer,
    STATE(254), 1,
      sym_surface_card_block,
    STATE(98), 2,
      sym_surface_card,
      aux_sym_surface_card_block_repeat1,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [3648] = 5,
    ACTIONS(575), 1,
      aux_sym_surface_card_token1,
    ACTIONS(578), 1,
      sym_delimiter,
    ACTIONS(580), 1,
      sym_positive_integer,
    STATE(100), 2,
      sym_surface_card,
      aux_sym_surface_card_block_repeat1,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [3667] = 5,
    ACTIONS(583), 1,
      anon_sym_0,
    ACTIONS(585), 1,
      anon_sym_EQ,
    STATE(48), 1,
      sym_stretch_para,
    ACTIONS(587), 2,
      anon_sym_s,
      sym_signed_float,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [3686] = 5,
    ACTIONS(311), 1,
      sym_endline,
    ACTIONS(589), 1,
      sym_signed_integer,
    ACTIONS(592), 1,
      sym_shortcut,
    STATE(102), 1,
      aux_sym_fill_form3_repeat1,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [3704] = 5,
    ACTIONS(595), 1,
      sym_endline,
    ACTIONS(597), 1,
      sym_number,
    ACTIONS(599), 1,
      sym_shortcut,
    STATE(108), 1,
      aux_sym_transform_card_repeat1,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [3722] = 5,
    ACTIONS(601), 1,
      sym_endline,
    ACTIONS(603), 1,
      sym_signed_integer,
    ACTIONS(605), 1,
      sym_shortcut,
    STATE(102), 1,
      aux_sym_fill_form3_repeat1,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [3740] = 5,
    ACTIONS(603), 1,
      sym_signed_integer,
    ACTIONS(605), 1,
      sym_shortcut,
    ACTIONS(607), 1,
      sym_endline,
    STATE(102), 1,
      aux_sym_fill_form3_repeat1,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [3758] = 5,
    ACTIONS(609), 1,
      sym_endline,
    ACTIONS(611), 1,
      sym_number,
    ACTIONS(613), 1,
      sym_shortcut,
    STATE(103), 1,
      aux_sym_transform_card_repeat1,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [3776] = 5,
    ACTIONS(597), 1,
      sym_number,
    ACTIONS(599), 1,
      sym_shortcut,
    ACTIONS(615), 1,
      sym_endline,
    STATE(108), 1,
      aux_sym_transform_card_repeat1,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [3794] = 5,
    ACTIONS(617), 1,
      sym_endline,
    ACTIONS(619), 1,
      sym_number,
    ACTIONS(622), 1,
      sym_shortcut,
    STATE(108), 1,
      aux_sym_transform_card_repeat1,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [3812] = 4,
    ACTIONS(583), 1,
      anon_sym_0,
    STATE(62), 1,
      sym_stretch_para,
    ACTIONS(587), 2,
      anon_sym_s,
      sym_signed_float,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [3828] = 5,
    ACTIONS(597), 1,
      sym_number,
    ACTIONS(599), 1,
      sym_shortcut,
    ACTIONS(625), 1,
      sym_endline,
    STATE(108), 1,
      aux_sym_transform_card_repeat1,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [3846] = 5,
    ACTIONS(627), 1,
      sym_endline,
    ACTIONS(629), 1,
      sym_signed_integer,
    ACTIONS(631), 1,
      sym_shortcut,
    STATE(104), 1,
      aux_sym_fill_form3_repeat1,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [3864] = 5,
    ACTIONS(633), 1,
      sym_endline,
    ACTIONS(635), 1,
      sym_signed_integer,
    ACTIONS(637), 1,
      sym_shortcut,
    STATE(105), 1,
      aux_sym_fill_form3_repeat1,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [3882] = 4,
    ACTIONS(639), 1,
      sym_endline,
    ACTIONS(641), 1,
      sym_ignored_data,
    STATE(128), 1,
      aux_sym_ignored_data_card_repeat1,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [3897] = 4,
    ACTIONS(643), 1,
      sym_signed_integer,
    ACTIONS(645), 1,
      sym_shortcut,
    STATE(27), 1,
      aux_sym_fill_form3_repeat1,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [3912] = 4,
    ACTIONS(647), 1,
      anon_sym_LPAREN,
    ACTIONS(649), 1,
      anon_sym_EQ,
    ACTIONS(651), 1,
      sym_signed_integer,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [3927] = 4,
    ACTIONS(653), 1,
      anon_sym_RPAREN,
    ACTIONS(655), 1,
      sym_number,
    STATE(123), 1,
      aux_sym_trcl_matrix_repeat1,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [3942] = 4,
    ACTIONS(657), 1,
      sym_endline,
    ACTIONS(659), 1,
      sym_number,
    STATE(119), 1,
      aux_sym__coeffs,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [3957] = 3,
    ACTIONS(663), 1,
      sym_delimiter,
    ACTIONS(661), 2,
      aux_sym_surface_card_token1,
      sym_positive_integer,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [3970] = 4,
    ACTIONS(665), 1,
      sym_endline,
    ACTIONS(667), 1,
      sym_number,
    STATE(119), 1,
      aux_sym__coeffs,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [3985] = 4,
    ACTIONS(659), 1,
      sym_number,
    ACTIONS(670), 1,
      sym_endline,
    STATE(119), 1,
      aux_sym__coeffs,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [4000] = 4,
    ACTIONS(672), 1,
      aux_sym_cell_para_lat_token1,
    ACTIONS(674), 1,
      sym_endline,
    STATE(130), 1,
      aux_sym_lattice_card_repeat1,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [4015] = 4,
    ACTIONS(676), 1,
      sym_number,
    ACTIONS(678), 1,
      sym_shortcut,
    STATE(107), 1,
      aux_sym_transform_card_repeat1,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [4030] = 4,
    ACTIONS(680), 1,
      anon_sym_RPAREN,
    ACTIONS(682), 1,
      sym_number,
    STATE(123), 1,
      aux_sym_trcl_matrix_repeat1,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [4045] = 4,
    ACTIONS(655), 1,
      sym_number,
    ACTIONS(685), 1,
      anon_sym_RPAREN,
    STATE(123), 1,
      aux_sym_trcl_matrix_repeat1,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [4060] = 3,
    ACTIONS(689), 1,
      sym_delimiter,
    ACTIONS(687), 2,
      aux_sym_surface_card_token1,
      sym_positive_integer,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [4073] = 4,
    ACTIONS(659), 1,
      sym_number,
    ACTIONS(691), 1,
      sym_endline,
    STATE(119), 1,
      aux_sym__coeffs,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [4088] = 3,
    ACTIONS(695), 1,
      sym_delimiter,
    ACTIONS(693), 2,
      aux_sym_surface_card_token1,
      sym_positive_integer,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [4101] = 4,
    ACTIONS(697), 1,
      sym_endline,
    ACTIONS(699), 1,
      sym_ignored_data,
    STATE(128), 1,
      aux_sym_ignored_data_card_repeat1,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [4116] = 4,
    ACTIONS(702), 1,
      sym_number,
    ACTIONS(704), 1,
      sym_shortcut,
    STATE(110), 1,
      aux_sym_transform_card_repeat1,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [4131] = 4,
    ACTIONS(706), 1,
      aux_sym_cell_para_lat_token1,
    ACTIONS(709), 1,
      sym_endline,
    STATE(130), 1,
      aux_sym_lattice_card_repeat1,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [4146] = 4,
    ACTIONS(711), 1,
      anon_sym_0,
    ACTIONS(713), 1,
      anon_sym_like,
    ACTIONS(715), 1,
      sym_positive_integer,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [4161] = 4,
    ACTIONS(655), 1,
      sym_number,
    ACTIONS(717), 1,
      anon_sym_RPAREN,
    STATE(123), 1,
      aux_sym_trcl_matrix_repeat1,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [4176] = 3,
    ACTIONS(721), 1,
      sym_delimiter,
    ACTIONS(719), 2,
      aux_sym_surface_card_token1,
      sym_positive_integer,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [4189] = 4,
    ACTIONS(659), 1,
      sym_number,
    ACTIONS(723), 1,
      sym_endline,
    STATE(119), 1,
      aux_sym__coeffs,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [4204] = 4,
    ACTIONS(725), 1,
      anon_sym_RPAREN,
    ACTIONS(727), 1,
      sym_number,
    STATE(137), 1,
      aux_sym_trcl_matrix_repeat1,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [4219] = 4,
    ACTIONS(729), 1,
      anon_sym_RPAREN,
    ACTIONS(731), 1,
      sym_number,
    STATE(140), 1,
      aux_sym_trcl_matrix_repeat1,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [4234] = 4,
    ACTIONS(655), 1,
      sym_number,
    ACTIONS(733), 1,
      anon_sym_RPAREN,
    STATE(123), 1,
      aux_sym_trcl_matrix_repeat1,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [4249] = 4,
    ACTIONS(735), 1,
      anon_sym_RPAREN,
    ACTIONS(737), 1,
      sym_number,
    STATE(141), 1,
      aux_sym_trcl_matrix_repeat1,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [4264] = 4,
    ACTIONS(739), 1,
      sym_endline,
    ACTIONS(741), 1,
      sym_ignored_data,
    STATE(113), 1,
      aux_sym_ignored_data_card_repeat1,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [4279] = 4,
    ACTIONS(655), 1,
      sym_number,
    ACTIONS(743), 1,
      anon_sym_RPAREN,
    STATE(123), 1,
      aux_sym_trcl_matrix_repeat1,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [4294] = 4,
    ACTIONS(655), 1,
      sym_number,
    ACTIONS(745), 1,
      anon_sym_RPAREN,
    STATE(123), 1,
      aux_sym_trcl_matrix_repeat1,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [4309] = 4,
    ACTIONS(747), 1,
      aux_sym_cell_para_lat_token1,
    ACTIONS(749), 1,
      sym_endline,
    STATE(121), 1,
      aux_sym_lattice_card_repeat1,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [4324] = 4,
    ACTIONS(751), 1,
      sym_signed_integer,
    ACTIONS(753), 1,
      sym_shortcut,
    STATE(26), 1,
      aux_sym_fill_form3_repeat1,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [4339] = 3,
    ACTIONS(755), 1,
      sym_positive_integer,
    ACTIONS(757), 1,
      sym_number,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [4351] = 3,
    ACTIONS(759), 1,
      anon_sym_EQ,
    ACTIONS(761), 1,
      sym_number,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [4363] = 3,
    ACTIONS(763), 1,
      anon_sym_EQ,
    ACTIONS(765), 1,
      sym_signed_integer,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [4375] = 3,
    ACTIONS(767), 1,
      sym_number,
    STATE(124), 1,
      aux_sym_trcl_matrix_repeat1,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [4387] = 3,
    ACTIONS(769), 1,
      sym_number,
    STATE(132), 1,
      aux_sym_trcl_matrix_repeat1,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [4399] = 3,
    ACTIONS(771), 1,
      ts_builtin_sym_end,
    ACTIONS(773), 1,
      sym_delimiter,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [4411] = 3,
    ACTIONS(775), 1,
      anon_sym_EQ,
    ACTIONS(777), 1,
      sym_number,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [4423] = 3,
    ACTIONS(779), 1,
      anon_sym_EQ,
    ACTIONS(781), 1,
      sym_signed_integer,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [4435] = 3,
    ACTIONS(783), 1,
      sym_positive_integer,
    ACTIONS(785), 1,
      sym_number,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [4447] = 3,
    ACTIONS(787), 1,
      anon_sym_EQ,
    ACTIONS(789), 1,
      sym_positive_integer,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [4459] = 3,
    ACTIONS(791), 1,
      anon_sym_COLON,
    ACTIONS(793), 1,
      sym_signed_integer,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [4471] = 3,
    ACTIONS(795), 1,
      anon_sym_EQ,
    ACTIONS(797), 1,
      sym_number,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [4483] = 3,
    ACTIONS(799), 1,
      anon_sym_EQ,
    ACTIONS(801), 1,
      aux_sym_cell_para_unc_token1,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [4495] = 3,
    ACTIONS(803), 1,
      anon_sym_EQ,
    ACTIONS(805), 1,
      sym_positive_integer,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [4507] = 3,
    ACTIONS(659), 1,
      sym_number,
    STATE(134), 1,
      aux_sym__coeffs,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [4519] = 3,
    ACTIONS(659), 1,
      sym_number,
    STATE(126), 1,
      aux_sym__coeffs,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [4531] = 3,
    ACTIONS(807), 1,
      sym_delimiter,
    ACTIONS(809), 1,
      sym_positive_integer,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [4543] = 3,
    ACTIONS(811), 1,
      anon_sym_EQ,
    ACTIONS(813), 1,
      sym_number,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [4555] = 3,
    ACTIONS(815), 1,
      anon_sym_EQ,
    ACTIONS(817), 1,
      aux_sym_cell_para_nonu_token1,
    ACTIONS(819), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [4567] = 3,
    ACTIONS(821), 1,
      anon_sym_LPAREN,
    ACTIONS(823), 1,
      sym_positive_integer,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [4579] = 3,
    ACTIONS(825), 1,
      anon_sym_EQ,
    ACTIONS(827), 1,
      sym_number,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [4591] = 3,
    ACTIONS(659), 1,
      sym_number,
    STATE(117), 1,
      aux_sym__coeffs,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [4603] = 3,
    ACTIONS(829), 1,
      sym_endline,
    ACTIONS(831), 1,
      sym_number,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [4615] = 3,
    ACTIONS(833), 1,
      anon_sym_trcl,
    ACTIONS(835), 1,
      anon_sym_fill,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [4627] = 3,
    ACTIONS(659), 1,
      sym_number,
    STATE(120), 1,
      aux_sym__coeffs,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [4639] = 3,
    ACTIONS(837), 1,
      anon_sym_EQ,
    ACTIONS(839), 1,
      sym_number,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [4651] = 3,
    ACTIONS(841), 1,
      anon_sym_EQ,
    ACTIONS(843), 1,
      sym_number,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [4663] = 3,
    ACTIONS(845), 1,
      anon_sym_EQ,
    ACTIONS(847), 1,
      sym_number,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [4675] = 3,
    ACTIONS(849), 1,
      anon_sym_EQ,
    ACTIONS(851), 1,
      aux_sym_cell_para_lat_token1,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [4687] = 3,
    ACTIONS(853), 1,
      anon_sym_EQ,
    ACTIONS(855), 1,
      sym_number,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [4699] = 3,
    ACTIONS(857), 1,
      sym_number,
    STATE(116), 1,
      aux_sym_trcl_matrix_repeat1,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [4711] = 3,
    ACTIONS(859), 1,
      anon_sym_LPAREN,
    ACTIONS(861), 1,
      sym_signed_integer,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [4723] = 3,
    ACTIONS(859), 1,
      anon_sym_LPAREN,
    ACTIONS(863), 1,
      anon_sym_EQ,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [4735] = 3,
    ACTIONS(865), 1,
      anon_sym_EQ,
    ACTIONS(867), 1,
      sym_signed_integer,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [4747] = 3,
    ACTIONS(869), 1,
      anon_sym_EQ,
    ACTIONS(871), 1,
      sym_number,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [4759] = 3,
    ACTIONS(873), 1,
      anon_sym_EQ,
    ACTIONS(875), 1,
      sym_number,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [4771] = 3,
    ACTIONS(877), 1,
      anon_sym_EQ,
    ACTIONS(879), 1,
      sym_positive_integer,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [4783] = 2,
    ACTIONS(881), 1,
      sym_signed_integer,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [4792] = 2,
    ACTIONS(883), 1,
      sym_endline,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [4801] = 2,
    ACTIONS(885), 1,
      sym_signed_integer,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [4810] = 2,
    ACTIONS(887), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [4819] = 2,
    ACTIONS(889), 1,
      sym_number,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [4828] = 2,
    ACTIONS(891), 1,
      sym_particles,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [4837] = 2,
    ACTIONS(893), 1,
      sym_signed_integer,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [4846] = 2,
    ACTIONS(895), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [4855] = 2,
    ACTIONS(897), 1,
      sym_number,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [4864] = 2,
    ACTIONS(899), 1,
      anon_sym_COLON,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [4873] = 2,
    ACTIONS(901), 1,
      sym_signed_integer,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [4882] = 2,
    ACTIONS(903), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [4891] = 2,
    ACTIONS(905), 1,
      sym_number,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [4900] = 2,
    ACTIONS(907), 1,
      sym_signed_integer,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [4909] = 2,
    ACTIONS(909), 1,
      aux_sym_cell_para_unc_token1,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [4918] = 2,
    ACTIONS(911), 1,
      sym_positive_integer,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [4927] = 2,
    ACTIONS(913), 1,
      sym_positive_integer,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [4936] = 2,
    ACTIONS(915), 1,
      sym_positive_integer,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [4945] = 2,
    ACTIONS(917), 1,
      sym_particles,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [4954] = 2,
    ACTIONS(919), 1,
      sym_positive_integer,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [4963] = 2,
    ACTIONS(921), 1,
      anon_sym_COLON,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [4972] = 2,
    ACTIONS(923), 1,
      sym_number,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [4981] = 2,
    ACTIONS(925), 1,
      aux_sym_cell_para_nonu_token1,
    ACTIONS(819), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [4990] = 2,
    ACTIONS(927), 1,
      sym_particles,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [4999] = 2,
    ACTIONS(929), 1,
      sym_positive_integer,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [5008] = 2,
    ACTIONS(931), 1,
      sym_number,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [5017] = 2,
    ACTIONS(933), 1,
      sym_positive_integer,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [5026] = 2,
    ACTIONS(935), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [5035] = 2,
    ACTIONS(937), 1,
      sym_number,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [5044] = 2,
    ACTIONS(939), 1,
      sym_number,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [5053] = 2,
    ACTIONS(941), 1,
      sym_number,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [5062] = 2,
    ACTIONS(943), 1,
      sym_endline,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [5071] = 2,
    ACTIONS(945), 1,
      sym_number,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [5080] = 2,
    ACTIONS(947), 1,
      sym_number,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [5089] = 2,
    ACTIONS(949), 1,
      sym_endline,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [5098] = 2,
    ACTIONS(951), 1,
      sym_number,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [5107] = 2,
    ACTIONS(953), 1,
      sym_number,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [5116] = 2,
    ACTIONS(955), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [5125] = 2,
    ACTIONS(957), 1,
      sym_signed_integer,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [5134] = 2,
    ACTIONS(959), 1,
      sym_delimiter,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [5143] = 2,
    ACTIONS(961), 1,
      sym_signed_integer,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [5152] = 2,
    ACTIONS(963), 1,
      anon_sym_COLON,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [5161] = 2,
    ACTIONS(965), 1,
      sym_endline,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [5170] = 2,
    ACTIONS(967), 1,
      sym_endline,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [5179] = 2,
    ACTIONS(969), 1,
      sym_positive_integer,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [5188] = 2,
    ACTIONS(971), 1,
      anon_sym_but,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [5197] = 2,
    ACTIONS(973), 1,
      sym_number,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [5206] = 2,
    ACTIONS(975), 1,
      sym_signed_integer,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [5215] = 2,
    ACTIONS(977), 1,
      sym_number,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [5224] = 2,
    ACTIONS(979), 1,
      sym_number,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [5233] = 2,
    ACTIONS(981), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [5242] = 2,
    ACTIONS(983), 1,
      anon_sym_COLON,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [5251] = 2,
    ACTIONS(985), 1,
      sym_other_card_block,
    ACTIONS(819), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [5260] = 2,
    ACTIONS(987), 1,
      sym_signed_integer,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [5269] = 2,
    ACTIONS(989), 1,
      sym_number,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [5278] = 2,
    ACTIONS(991), 1,
      sym_particles,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [5287] = 2,
    ACTIONS(993), 1,
      sym_signed_integer,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [5296] = 2,
    ACTIONS(995), 1,
      sym_particles,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [5305] = 2,
    ACTIONS(997), 1,
      sym_signed_integer,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [5314] = 2,
    ACTIONS(999), 1,
      sym_signed_integer,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [5323] = 2,
    ACTIONS(1001), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [5332] = 2,
    ACTIONS(1003), 1,
      sym_neutron_photon,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [5341] = 2,
    ACTIONS(1005), 1,
      sym_positive_integer,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [5350] = 2,
    ACTIONS(1007), 1,
      sym_signed_integer,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [5359] = 2,
    ACTIONS(1009), 1,
      sym_positive_integer,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [5368] = 2,
    ACTIONS(1011), 1,
      anon_sym_COLON,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [5377] = 2,
    ACTIONS(1013), 1,
      anon_sym_tr,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [5386] = 2,
    ACTIONS(1015), 1,
      sym_number,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [5395] = 2,
    ACTIONS(1017), 1,
      sym_particles,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [5404] = 2,
    ACTIONS(1019), 1,
      anon_sym_COLON,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [5413] = 2,
    ACTIONS(1021), 1,
      sym_signed_integer,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [5422] = 2,
    ACTIONS(1023), 1,
      sym_number,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [5431] = 2,
    ACTIONS(1025), 1,
      sym_particles,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [5440] = 2,
    ACTIONS(1027), 1,
      sym_delimiter,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [5449] = 2,
    ACTIONS(761), 1,
      sym_number,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [5458] = 2,
    ACTIONS(1029), 1,
      sym_positive_integer,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [5467] = 2,
    ACTIONS(1031), 1,
      sym_particles,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [5476] = 2,
    ACTIONS(1033), 1,
      aux_sym_cell_para_lat_token1,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
  [5485] = 2,
    ACTIONS(1035), 1,
      sym_number,
    ACTIONS(3), 3,
      sym_inline_comment,
      sym_line_continuation,
      sym_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(6)] = 0,
  [SMALL_STATE(7)] = 125,
  [SMALL_STATE(8)] = 250,
  [SMALL_STATE(9)] = 360,
  [SMALL_STATE(10)] = 470,
  [SMALL_STATE(11)] = 580,
  [SMALL_STATE(12)] = 679,
  [SMALL_STATE(13)] = 778,
  [SMALL_STATE(14)] = 831,
  [SMALL_STATE(15)] = 884,
  [SMALL_STATE(16)] = 934,
  [SMALL_STATE(17)] = 984,
  [SMALL_STATE(18)] = 1028,
  [SMALL_STATE(19)] = 1080,
  [SMALL_STATE(20)] = 1116,
  [SMALL_STATE(21)] = 1152,
  [SMALL_STATE(22)] = 1188,
  [SMALL_STATE(23)] = 1224,
  [SMALL_STATE(24)] = 1260,
  [SMALL_STATE(25)] = 1300,
  [SMALL_STATE(26)] = 1336,
  [SMALL_STATE(27)] = 1375,
  [SMALL_STATE(28)] = 1414,
  [SMALL_STATE(29)] = 1453,
  [SMALL_STATE(30)] = 1491,
  [SMALL_STATE(31)] = 1529,
  [SMALL_STATE(32)] = 1561,
  [SMALL_STATE(33)] = 1593,
  [SMALL_STATE(34)] = 1625,
  [SMALL_STATE(35)] = 1657,
  [SMALL_STATE(36)] = 1689,
  [SMALL_STATE(37)] = 1721,
  [SMALL_STATE(38)] = 1753,
  [SMALL_STATE(39)] = 1785,
  [SMALL_STATE(40)] = 1817,
  [SMALL_STATE(41)] = 1849,
  [SMALL_STATE(42)] = 1881,
  [SMALL_STATE(43)] = 1913,
  [SMALL_STATE(44)] = 1945,
  [SMALL_STATE(45)] = 1977,
  [SMALL_STATE(46)] = 2009,
  [SMALL_STATE(47)] = 2041,
  [SMALL_STATE(48)] = 2073,
  [SMALL_STATE(49)] = 2105,
  [SMALL_STATE(50)] = 2137,
  [SMALL_STATE(51)] = 2169,
  [SMALL_STATE(52)] = 2201,
  [SMALL_STATE(53)] = 2233,
  [SMALL_STATE(54)] = 2265,
  [SMALL_STATE(55)] = 2297,
  [SMALL_STATE(56)] = 2329,
  [SMALL_STATE(57)] = 2361,
  [SMALL_STATE(58)] = 2393,
  [SMALL_STATE(59)] = 2425,
  [SMALL_STATE(60)] = 2457,
  [SMALL_STATE(61)] = 2489,
  [SMALL_STATE(62)] = 2521,
  [SMALL_STATE(63)] = 2553,
  [SMALL_STATE(64)] = 2585,
  [SMALL_STATE(65)] = 2617,
  [SMALL_STATE(66)] = 2649,
  [SMALL_STATE(67)] = 2681,
  [SMALL_STATE(68)] = 2713,
  [SMALL_STATE(69)] = 2745,
  [SMALL_STATE(70)] = 2777,
  [SMALL_STATE(71)] = 2809,
  [SMALL_STATE(72)] = 2841,
  [SMALL_STATE(73)] = 2873,
  [SMALL_STATE(74)] = 2905,
  [SMALL_STATE(75)] = 2937,
  [SMALL_STATE(76)] = 2969,
  [SMALL_STATE(77)] = 3001,
  [SMALL_STATE(78)] = 3033,
  [SMALL_STATE(79)] = 3065,
  [SMALL_STATE(80)] = 3097,
  [SMALL_STATE(81)] = 3129,
  [SMALL_STATE(82)] = 3161,
  [SMALL_STATE(83)] = 3193,
  [SMALL_STATE(84)] = 3225,
  [SMALL_STATE(85)] = 3257,
  [SMALL_STATE(86)] = 3289,
  [SMALL_STATE(87)] = 3321,
  [SMALL_STATE(88)] = 3353,
  [SMALL_STATE(89)] = 3385,
  [SMALL_STATE(90)] = 3417,
  [SMALL_STATE(91)] = 3443,
  [SMALL_STATE(92)] = 3469,
  [SMALL_STATE(93)] = 3495,
  [SMALL_STATE(94)] = 3521,
  [SMALL_STATE(95)] = 3547,
  [SMALL_STATE(96)] = 3568,
  [SMALL_STATE(97)] = 3589,
  [SMALL_STATE(98)] = 3610,
  [SMALL_STATE(99)] = 3629,
  [SMALL_STATE(100)] = 3648,
  [SMALL_STATE(101)] = 3667,
  [SMALL_STATE(102)] = 3686,
  [SMALL_STATE(103)] = 3704,
  [SMALL_STATE(104)] = 3722,
  [SMALL_STATE(105)] = 3740,
  [SMALL_STATE(106)] = 3758,
  [SMALL_STATE(107)] = 3776,
  [SMALL_STATE(108)] = 3794,
  [SMALL_STATE(109)] = 3812,
  [SMALL_STATE(110)] = 3828,
  [SMALL_STATE(111)] = 3846,
  [SMALL_STATE(112)] = 3864,
  [SMALL_STATE(113)] = 3882,
  [SMALL_STATE(114)] = 3897,
  [SMALL_STATE(115)] = 3912,
  [SMALL_STATE(116)] = 3927,
  [SMALL_STATE(117)] = 3942,
  [SMALL_STATE(118)] = 3957,
  [SMALL_STATE(119)] = 3970,
  [SMALL_STATE(120)] = 3985,
  [SMALL_STATE(121)] = 4000,
  [SMALL_STATE(122)] = 4015,
  [SMALL_STATE(123)] = 4030,
  [SMALL_STATE(124)] = 4045,
  [SMALL_STATE(125)] = 4060,
  [SMALL_STATE(126)] = 4073,
  [SMALL_STATE(127)] = 4088,
  [SMALL_STATE(128)] = 4101,
  [SMALL_STATE(129)] = 4116,
  [SMALL_STATE(130)] = 4131,
  [SMALL_STATE(131)] = 4146,
  [SMALL_STATE(132)] = 4161,
  [SMALL_STATE(133)] = 4176,
  [SMALL_STATE(134)] = 4189,
  [SMALL_STATE(135)] = 4204,
  [SMALL_STATE(136)] = 4219,
  [SMALL_STATE(137)] = 4234,
  [SMALL_STATE(138)] = 4249,
  [SMALL_STATE(139)] = 4264,
  [SMALL_STATE(140)] = 4279,
  [SMALL_STATE(141)] = 4294,
  [SMALL_STATE(142)] = 4309,
  [SMALL_STATE(143)] = 4324,
  [SMALL_STATE(144)] = 4339,
  [SMALL_STATE(145)] = 4351,
  [SMALL_STATE(146)] = 4363,
  [SMALL_STATE(147)] = 4375,
  [SMALL_STATE(148)] = 4387,
  [SMALL_STATE(149)] = 4399,
  [SMALL_STATE(150)] = 4411,
  [SMALL_STATE(151)] = 4423,
  [SMALL_STATE(152)] = 4435,
  [SMALL_STATE(153)] = 4447,
  [SMALL_STATE(154)] = 4459,
  [SMALL_STATE(155)] = 4471,
  [SMALL_STATE(156)] = 4483,
  [SMALL_STATE(157)] = 4495,
  [SMALL_STATE(158)] = 4507,
  [SMALL_STATE(159)] = 4519,
  [SMALL_STATE(160)] = 4531,
  [SMALL_STATE(161)] = 4543,
  [SMALL_STATE(162)] = 4555,
  [SMALL_STATE(163)] = 4567,
  [SMALL_STATE(164)] = 4579,
  [SMALL_STATE(165)] = 4591,
  [SMALL_STATE(166)] = 4603,
  [SMALL_STATE(167)] = 4615,
  [SMALL_STATE(168)] = 4627,
  [SMALL_STATE(169)] = 4639,
  [SMALL_STATE(170)] = 4651,
  [SMALL_STATE(171)] = 4663,
  [SMALL_STATE(172)] = 4675,
  [SMALL_STATE(173)] = 4687,
  [SMALL_STATE(174)] = 4699,
  [SMALL_STATE(175)] = 4711,
  [SMALL_STATE(176)] = 4723,
  [SMALL_STATE(177)] = 4735,
  [SMALL_STATE(178)] = 4747,
  [SMALL_STATE(179)] = 4759,
  [SMALL_STATE(180)] = 4771,
  [SMALL_STATE(181)] = 4783,
  [SMALL_STATE(182)] = 4792,
  [SMALL_STATE(183)] = 4801,
  [SMALL_STATE(184)] = 4810,
  [SMALL_STATE(185)] = 4819,
  [SMALL_STATE(186)] = 4828,
  [SMALL_STATE(187)] = 4837,
  [SMALL_STATE(188)] = 4846,
  [SMALL_STATE(189)] = 4855,
  [SMALL_STATE(190)] = 4864,
  [SMALL_STATE(191)] = 4873,
  [SMALL_STATE(192)] = 4882,
  [SMALL_STATE(193)] = 4891,
  [SMALL_STATE(194)] = 4900,
  [SMALL_STATE(195)] = 4909,
  [SMALL_STATE(196)] = 4918,
  [SMALL_STATE(197)] = 4927,
  [SMALL_STATE(198)] = 4936,
  [SMALL_STATE(199)] = 4945,
  [SMALL_STATE(200)] = 4954,
  [SMALL_STATE(201)] = 4963,
  [SMALL_STATE(202)] = 4972,
  [SMALL_STATE(203)] = 4981,
  [SMALL_STATE(204)] = 4990,
  [SMALL_STATE(205)] = 4999,
  [SMALL_STATE(206)] = 5008,
  [SMALL_STATE(207)] = 5017,
  [SMALL_STATE(208)] = 5026,
  [SMALL_STATE(209)] = 5035,
  [SMALL_STATE(210)] = 5044,
  [SMALL_STATE(211)] = 5053,
  [SMALL_STATE(212)] = 5062,
  [SMALL_STATE(213)] = 5071,
  [SMALL_STATE(214)] = 5080,
  [SMALL_STATE(215)] = 5089,
  [SMALL_STATE(216)] = 5098,
  [SMALL_STATE(217)] = 5107,
  [SMALL_STATE(218)] = 5116,
  [SMALL_STATE(219)] = 5125,
  [SMALL_STATE(220)] = 5134,
  [SMALL_STATE(221)] = 5143,
  [SMALL_STATE(222)] = 5152,
  [SMALL_STATE(223)] = 5161,
  [SMALL_STATE(224)] = 5170,
  [SMALL_STATE(225)] = 5179,
  [SMALL_STATE(226)] = 5188,
  [SMALL_STATE(227)] = 5197,
  [SMALL_STATE(228)] = 5206,
  [SMALL_STATE(229)] = 5215,
  [SMALL_STATE(230)] = 5224,
  [SMALL_STATE(231)] = 5233,
  [SMALL_STATE(232)] = 5242,
  [SMALL_STATE(233)] = 5251,
  [SMALL_STATE(234)] = 5260,
  [SMALL_STATE(235)] = 5269,
  [SMALL_STATE(236)] = 5278,
  [SMALL_STATE(237)] = 5287,
  [SMALL_STATE(238)] = 5296,
  [SMALL_STATE(239)] = 5305,
  [SMALL_STATE(240)] = 5314,
  [SMALL_STATE(241)] = 5323,
  [SMALL_STATE(242)] = 5332,
  [SMALL_STATE(243)] = 5341,
  [SMALL_STATE(244)] = 5350,
  [SMALL_STATE(245)] = 5359,
  [SMALL_STATE(246)] = 5368,
  [SMALL_STATE(247)] = 5377,
  [SMALL_STATE(248)] = 5386,
  [SMALL_STATE(249)] = 5395,
  [SMALL_STATE(250)] = 5404,
  [SMALL_STATE(251)] = 5413,
  [SMALL_STATE(252)] = 5422,
  [SMALL_STATE(253)] = 5431,
  [SMALL_STATE(254)] = 5440,
  [SMALL_STATE(255)] = 5449,
  [SMALL_STATE(256)] = 5458,
  [SMALL_STATE(257)] = 5467,
  [SMALL_STATE(258)] = 5476,
  [SMALL_STATE(259)] = 5485,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_data_card_block_repeat1, 2, 0, 0),
  [9] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_card_block_repeat1, 2, 0, 0), SHIFT_REPEAT(238),
  [12] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_card_block_repeat1, 2, 0, 0), SHIFT_REPEAT(139),
  [15] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_data_card_block_repeat1, 2, 0, 0), SHIFT_REPEAT(111),
  [18] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_data_card_block_repeat1, 2, 0, 0), SHIFT_REPEAT(247),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_card_block_repeat1, 2, 0, 0), SHIFT_REPEAT(142),
  [24] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_card_block_repeat1, 2, 0, 0), SHIFT_REPEAT(112),
  [27] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_data_card_block_repeat1, 2, 0, 0), SHIFT_REPEAT(139),
  [30] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_data_card_block_repeat1, 2, 0, 0), SHIFT_REPEAT(256),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_data_card_block_repeat1, 2, 0, 0),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_card_block, 1, 0, 0),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(247),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(256),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_data_card_block, 1, 0, 0),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_card, 2, 0, 0),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_data_card, 2, 0, 0),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cell_card_mat, 4, 0, 5),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cell_card_void, 3, 0, 2),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cell_like_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(257),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cell_like_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(179),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cell_like_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(170),
  [124] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cell_like_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(253),
  [127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cell_like_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(242),
  [130] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cell_like_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(197),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cell_like_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(154),
  [136] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cell_like_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(162),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cell_like_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(187),
  [142] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cell_like_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(205),
  [145] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cell_like_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(146),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cell_like_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(115),
  [151] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cell_like_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(167),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cell_like_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(172),
  [157] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cell_like_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(151),
  [160] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cell_like_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(249),
  [163] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cell_like_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(153),
  [166] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cell_like_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(157),
  [169] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cell_like_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(236),
  [172] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cell_like_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(180),
  [175] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cell_like_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(161),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_cell_like_parameters_repeat1, 2, 0, 0),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cell_like_parameters, 1, 0, 0),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cell_parameters, 1, 0, 0),
  [184] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cell_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(257),
  [187] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cell_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(179),
  [190] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cell_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(170),
  [193] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cell_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(253),
  [196] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cell_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(242),
  [199] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cell_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(197),
  [202] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cell_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(154),
  [205] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cell_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(162),
  [208] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cell_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(187),
  [211] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cell_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(205),
  [214] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cell_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(146),
  [217] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cell_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(115),
  [220] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cell_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(167),
  [223] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cell_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(172),
  [226] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cell_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(151),
  [229] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cell_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(249),
  [232] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cell_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(153),
  [235] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cell_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(157),
  [238] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cell_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(236),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_cell_parameters_repeat1, 2, 0, 0),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_intersect, 2, 0, 4),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_intersect, 2, 0, 4),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union, 3, 0, 6),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_union, 3, 0, 6),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cell_geometry, 1, 0, 0),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cell_geometry, 1, 0, 0),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cell_geometry, 1, 0, 1),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cell_geometry, 1, 0, 1),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_complement, 2, 0, 3),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_complement, 2, 0, 3),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cell_geometry, 3, 0, 0),
  [285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cell_geometry, 3, 0, 0),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stretch_para, 1, 0, 0),
  [289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stretch_para, 1, 0, 0),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_complement, 4, 0, 0),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_complement, 4, 0, 0),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fill_form3, 11, 0, 21),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fill_form3, 11, 0, 21),
  [303] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fill_form3, 12, 0, 22),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fill_form3, 12, 0, 22),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fill_form3_repeat1, 2, 0, 0),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_fill_form3_repeat1, 2, 0, 0),
  [313] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_fill_form3_repeat1, 2, 0, 0), SHIFT_REPEAT(28),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fill_form1, 3, 0, 9),
  [322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fill_form1, 3, 0, 9),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fill_form1, 2, 0, 7),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fill_form1, 2, 0, 7),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cell_para_fcl, 3, 0, 0),
  [334] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cell_para_fcl, 3, 0, 0),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cell_parameter, 1, 0, 0),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cell_parameter, 1, 0, 0),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cell_para_trcl, 1, 0, 0),
  [342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cell_para_trcl, 1, 0, 0),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cell_para_fill, 1, 0, 0),
  [346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cell_para_fill, 1, 0, 0),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cell_para_vol, 2, 0, 0),
  [350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cell_para_vol, 2, 0, 0),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cell_para_pwt, 2, 0, 0),
  [354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cell_para_pwt, 2, 0, 0),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cell_para_nonu, 2, 0, 0),
  [358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cell_para_nonu, 2, 0, 0),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cell_para_univ, 2, 0, 0),
  [362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cell_para_univ, 2, 0, 0),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trcl_number, 2, 0, 0),
  [366] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_trcl_number, 2, 0, 0),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cell_para_lat, 2, 0, 0),
  [370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cell_para_lat, 2, 0, 0),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cell_para_cosy, 2, 0, 0),
  [374] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cell_para_cosy, 2, 0, 0),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cell_para_bflcl, 2, 0, 0),
  [378] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cell_para_bflcl, 2, 0, 0),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cell_like_parameter, 1, 0, 0),
  [382] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cell_like_parameter, 1, 0, 0),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cell_para_imp, 3, 0, 0),
  [386] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cell_para_imp, 3, 0, 0),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cell_para_vol, 3, 0, 0),
  [390] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cell_para_vol, 3, 0, 0),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cell_para_pwt, 3, 0, 0),
  [394] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cell_para_pwt, 3, 0, 0),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cell_para_ext, 3, 0, 0),
  [398] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cell_para_ext, 3, 0, 0),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cell_para_nonu, 3, 0, 0),
  [402] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cell_para_nonu, 3, 0, 0),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cell_para_pd, 3, 0, 0),
  [406] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cell_para_pd, 3, 0, 0),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cell_para_tmp, 3, 0, 0),
  [410] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cell_para_tmp, 3, 0, 0),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cell_para_univ, 3, 0, 0),
  [414] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cell_para_univ, 3, 0, 0),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trcl_number, 3, 0, 0),
  [418] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_trcl_number, 3, 0, 0),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cell_para_lat, 3, 0, 0),
  [422] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cell_para_lat, 3, 0, 0),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cell_para_elpt, 3, 0, 0),
  [426] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cell_para_elpt, 3, 0, 0),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cell_para_cosy, 3, 0, 0),
  [430] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cell_para_cosy, 3, 0, 0),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cell_para_bflcl, 3, 0, 0),
  [434] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cell_para_bflcl, 3, 0, 0),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fill_form2, 10, 0, 20),
  [438] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fill_form2, 10, 0, 20),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cell_para_mat, 2, 0, 10),
  [442] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cell_para_mat, 2, 0, 10),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cell_para_dens, 2, 0, 11),
  [446] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cell_para_dens, 2, 0, 11),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cell_para_imp, 4, 0, 0),
  [450] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cell_para_imp, 4, 0, 0),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cell_para_ext, 4, 0, 0),
  [454] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cell_para_ext, 4, 0, 0),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stretch_para, 2, 0, 0),
  [458] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stretch_para, 2, 0, 0),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cell_para_fcl, 4, 0, 0),
  [462] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cell_para_fcl, 4, 0, 0),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cell_para_dxc, 4, 0, 0),
  [466] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cell_para_dxc, 4, 0, 0),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cell_para_pd, 4, 0, 0),
  [470] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cell_para_pd, 4, 0, 0),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cell_para_tmp, 4, 0, 0),
  [474] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cell_para_tmp, 4, 0, 0),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trcl_matrix, 4, 0, 0),
  [478] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_trcl_matrix, 4, 0, 0),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cell_para_elpt, 4, 0, 0),
  [482] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cell_para_elpt, 4, 0, 0),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cell_para_unc, 4, 0, 0),
  [486] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cell_para_unc, 4, 0, 0),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cell_para_mat, 3, 0, 13),
  [490] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cell_para_mat, 3, 0, 13),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cell_para_dens, 3, 0, 14),
  [494] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cell_para_dens, 3, 0, 14),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stretch_para, 3, 0, 0),
  [498] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stretch_para, 3, 0, 0),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cell_para_wwn, 5, 0, 0),
  [502] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cell_para_wwn, 5, 0, 0),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cell_para_dxc, 5, 0, 0),
  [506] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cell_para_dxc, 5, 0, 0),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trcl_matrix, 5, 0, 0),
  [510] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_trcl_matrix, 5, 0, 0),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fill_form1, 5, 0, 17),
  [514] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fill_form1, 5, 0, 17),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cell_para_wwn, 6, 0, 0),
  [518] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cell_para_wwn, 6, 0, 0),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cell_para_dxc, 6, 0, 0),
  [522] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cell_para_dxc, 6, 0, 0),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trcl_matrix, 6, 0, 0),
  [526] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_trcl_matrix, 6, 0, 0),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fill_form1, 6, 0, 19),
  [530] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fill_form1, 6, 0, 19),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fill_form2, 7, 0, 7),
  [534] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fill_form2, 7, 0, 7),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fill_form2, 8, 0, 9),
  [538] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fill_form2, 8, 0, 9),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fill_form2, 8, 0, 7),
  [542] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fill_form2, 8, 0, 7),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fill_form2, 9, 0, 20),
  [546] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fill_form2, 9, 0, 20),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fill_form2, 9, 0, 9),
  [550] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fill_form2, 9, 0, 9),
  [552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cell_para_unc, 3, 0, 0),
  [554] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cell_para_unc, 3, 0, 0),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [560] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cell_card_block, 1, 0, 0),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [564] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_cell_card_block_repeat1, 2, 0, 0),
  [566] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cell_card_block_repeat1, 2, 0, 0), SHIFT_REPEAT(131),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [571] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_surface_card_block, 1, 0, 0),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [575] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_surface_card_block_repeat1, 2, 0, 0), SHIFT_REPEAT(207),
  [578] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_surface_card_block_repeat1, 2, 0, 0),
  [580] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_surface_card_block_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [583] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [589] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_fill_form3_repeat1, 2, 0, 0), SHIFT_REPEAT(102),
  [592] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fill_form3_repeat1, 2, 0, 0), SHIFT_REPEAT(102),
  [595] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_importance_card, 3, 0, 0),
  [597] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [601] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_universe_card, 2, 0, 0),
  [603] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [607] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fill_card, 2, 0, 0),
  [609] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_importance_card, 2, 0, 0),
  [611] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [615] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transform_card, 3, 0, 0),
  [617] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_transform_card_repeat1, 2, 0, 0),
  [619] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_transform_card_repeat1, 2, 0, 0), SHIFT_REPEAT(108),
  [622] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transform_card_repeat1, 2, 0, 0), SHIFT_REPEAT(108),
  [625] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transform_card, 4, 0, 0),
  [627] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_universe_card, 1, 0, 0),
  [629] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [633] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fill_card, 1, 0, 0),
  [635] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [639] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ignored_data_card, 2, 0, 0),
  [641] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [643] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [657] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_surface_card, 4, 0, 12),
  [663] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_surface_card, 4, 0, 12),
  [665] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__coeffs, 2, 0, 0),
  [667] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__coeffs, 2, 0, 0), SHIFT_REPEAT(166),
  [670] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [674] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lattice_card, 2, 0, 0),
  [676] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [680] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_trcl_matrix_repeat1, 2, 0, 0),
  [682] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_trcl_matrix_repeat1, 2, 0, 0), SHIFT_REPEAT(123),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_surface_card, 5, 0, 15),
  [689] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_surface_card, 5, 0, 15),
  [691] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_surface_card, 5, 0, 16),
  [695] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_surface_card, 5, 0, 16),
  [697] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_ignored_data_card_repeat1, 2, 0, 0),
  [699] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ignored_data_card_repeat1, 2, 0, 0), SHIFT_REPEAT(128),
  [702] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [706] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_lattice_card_repeat1, 2, 0, 0), SHIFT_REPEAT(130),
  [709] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_lattice_card_repeat1, 2, 0, 0),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_surface_card, 6, 0, 18),
  [721] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_surface_card, 6, 0, 18),
  [723] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [739] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ignored_data_card, 1, 0, 0),
  [741] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [749] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lattice_card, 1, 0, 0),
  [751] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [755] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [757] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [771] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 6, 0, 0),
  [773] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [783] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [785] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [807] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cell_card, 2, 0, 0),
  [809] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cell_card, 2, 0, 0),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [815] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [819] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [829] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__coeffs, 1, 0, 0),
  [831] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__coeffs, 1, 0, 0),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [883] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cell_card_void, 4, 0, 2),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [887] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [891] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [917] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [927] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [935] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 8, 0, 0),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [943] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cell_card_like, 5, 0, 8),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [949] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [959] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [965] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [967] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cell_card_mat, 5, 0, 5),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [991] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [995] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [1017] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [1025] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [1027] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [1031] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
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
