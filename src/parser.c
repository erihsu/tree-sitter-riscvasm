#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 53
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 59
#define ALIAS_COUNT 0
#define TOKEN_COUNT 35
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum {
  aux_sym_source_file_token1 = 1,
  anon_sym_LF = 2,
  sym_comment = 3,
  anon_sym_db = 4,
  anon_sym_dw = 5,
  anon_sym_dd = 6,
  anon_sym_dq = 7,
  anon_sym_DOTtext = 8,
  anon_sym_DOTdata = 9,
  anon_sym_DOTwodata = 10,
  aux_sym_objdump_machine_code_bytes_token1 = 11,
  aux_sym_label_token1 = 12,
  anon_sym_ = 13,
  sym_register = 14,
  sym_escape_sequence = 15,
  anon_sym_DQUOTE = 16,
  aux_sym_string_literal_token1 = 17,
  anon_sym_LT = 18,
  anon_sym_PLUS = 19,
  anon_sym_GT = 20,
  aux_sym__decimal_literal_token1 = 21,
  aux_sym__decimal_literal_token2 = 22,
  aux_sym__decimal_literal_token3 = 23,
  aux_sym__hex_literal_token1 = 24,
  aux_sym__hex_literal_token2 = 25,
  aux_sym__hex_literal_token3 = 26,
  aux_sym__octal_literal_token1 = 27,
  aux_sym__octal_literal_token2 = 28,
  aux_sym__binary_literal_token1 = 29,
  aux_sym__binary_literal_token2 = 30,
  anon_sym_CR_LF = 31,
  sym_mnemonic = 32,
  sym_section_name = 33,
  sym__IDENTIFIER = 34,
  sym_source_file = 35,
  sym_directive = 36,
  sym_builtin = 37,
  sym_builtin_kw = 38,
  sym_section = 39,
  sym_section_type = 40,
  sym_label = 41,
  sym_label_name = 42,
  sym_ins = 43,
  sym_operand_args = 44,
  sym_operand = 45,
  sym_operand_ident = 46,
  sym_string_literal = 47,
  sym_integer_literal = 48,
  sym_literal_offset = 49,
  sym__decimal_literal = 50,
  sym__hex_literal = 51,
  sym__octal_literal = 52,
  sym__binary_literal = 53,
  sym__NEWLINE = 54,
  sym_identifier = 55,
  aux_sym_source_file_repeat1 = 56,
  aux_sym_operand_args_repeat1 = 57,
  aux_sym_string_literal_repeat1 = 58,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_source_file_token1] = "source_file_token1",
  [anon_sym_LF] = "\n",
  [sym_comment] = "comment",
  [anon_sym_db] = "db",
  [anon_sym_dw] = "dw",
  [anon_sym_dd] = "dd",
  [anon_sym_dq] = "dq",
  [anon_sym_DOTtext] = ".text",
  [anon_sym_DOTdata] = ".data",
  [anon_sym_DOTwodata] = ".wodata",
  [aux_sym_objdump_machine_code_bytes_token1] = "objdump_machine_code_bytes_token1",
  [aux_sym_label_token1] = "label_token1",
  [anon_sym_] = " ",
  [sym_register] = "register",
  [sym_escape_sequence] = "escape_sequence",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_literal_token1] = "string_literal_token1",
  [anon_sym_LT] = "<",
  [anon_sym_PLUS] = "+",
  [anon_sym_GT] = ">",
  [aux_sym__decimal_literal_token1] = "_decimal_literal_token1",
  [aux_sym__decimal_literal_token2] = "_decimal_literal_token2",
  [aux_sym__decimal_literal_token3] = "_decimal_literal_token3",
  [aux_sym__hex_literal_token1] = "_hex_literal_token1",
  [aux_sym__hex_literal_token2] = "_hex_literal_token2",
  [aux_sym__hex_literal_token3] = "_hex_literal_token3",
  [aux_sym__octal_literal_token1] = "_octal_literal_token1",
  [aux_sym__octal_literal_token2] = "_octal_literal_token2",
  [aux_sym__binary_literal_token1] = "_binary_literal_token1",
  [aux_sym__binary_literal_token2] = "_binary_literal_token2",
  [anon_sym_CR_LF] = "\r\n",
  [sym_mnemonic] = "mnemonic",
  [sym_section_name] = "section_name",
  [sym__IDENTIFIER] = "_IDENTIFIER",
  [sym_source_file] = "source_file",
  [sym_directive] = "directive",
  [sym_builtin] = "builtin",
  [sym_builtin_kw] = "builtin_kw",
  [sym_section] = "section",
  [sym_section_type] = "section_type",
  [sym_label] = "label",
  [sym_label_name] = "label_name",
  [sym_ins] = "ins",
  [sym_operand_args] = "operand_args",
  [sym_operand] = "operand",
  [sym_operand_ident] = "operand_ident",
  [sym_string_literal] = "string_literal",
  [sym_integer_literal] = "integer_literal",
  [sym_literal_offset] = "literal_offset",
  [sym__decimal_literal] = "_decimal_literal",
  [sym__hex_literal] = "_hex_literal",
  [sym__octal_literal] = "_octal_literal",
  [sym__binary_literal] = "_binary_literal",
  [sym__NEWLINE] = "_NEWLINE",
  [sym_identifier] = "identifier",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_operand_args_repeat1] = "operand_args_repeat1",
  [aux_sym_string_literal_repeat1] = "string_literal_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_source_file_token1] = aux_sym_source_file_token1,
  [anon_sym_LF] = anon_sym_LF,
  [sym_comment] = sym_comment,
  [anon_sym_db] = anon_sym_db,
  [anon_sym_dw] = anon_sym_dw,
  [anon_sym_dd] = anon_sym_dd,
  [anon_sym_dq] = anon_sym_dq,
  [anon_sym_DOTtext] = anon_sym_DOTtext,
  [anon_sym_DOTdata] = anon_sym_DOTdata,
  [anon_sym_DOTwodata] = anon_sym_DOTwodata,
  [aux_sym_objdump_machine_code_bytes_token1] = aux_sym_objdump_machine_code_bytes_token1,
  [aux_sym_label_token1] = aux_sym_label_token1,
  [anon_sym_] = anon_sym_,
  [sym_register] = sym_register,
  [sym_escape_sequence] = sym_escape_sequence,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_literal_token1] = aux_sym_string_literal_token1,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_GT] = anon_sym_GT,
  [aux_sym__decimal_literal_token1] = aux_sym__decimal_literal_token1,
  [aux_sym__decimal_literal_token2] = aux_sym__decimal_literal_token2,
  [aux_sym__decimal_literal_token3] = aux_sym__decimal_literal_token3,
  [aux_sym__hex_literal_token1] = aux_sym__hex_literal_token1,
  [aux_sym__hex_literal_token2] = aux_sym__hex_literal_token2,
  [aux_sym__hex_literal_token3] = aux_sym__hex_literal_token3,
  [aux_sym__octal_literal_token1] = aux_sym__octal_literal_token1,
  [aux_sym__octal_literal_token2] = aux_sym__octal_literal_token2,
  [aux_sym__binary_literal_token1] = aux_sym__binary_literal_token1,
  [aux_sym__binary_literal_token2] = aux_sym__binary_literal_token2,
  [anon_sym_CR_LF] = anon_sym_CR_LF,
  [sym_mnemonic] = sym_mnemonic,
  [sym_section_name] = sym_section_name,
  [sym__IDENTIFIER] = sym__IDENTIFIER,
  [sym_source_file] = sym_source_file,
  [sym_directive] = sym_directive,
  [sym_builtin] = sym_builtin,
  [sym_builtin_kw] = sym_builtin_kw,
  [sym_section] = sym_section,
  [sym_section_type] = sym_section_type,
  [sym_label] = sym_label,
  [sym_label_name] = sym_label_name,
  [sym_ins] = sym_ins,
  [sym_operand_args] = sym_operand_args,
  [sym_operand] = sym_operand,
  [sym_operand_ident] = sym_operand_ident,
  [sym_string_literal] = sym_string_literal,
  [sym_integer_literal] = sym_integer_literal,
  [sym_literal_offset] = sym_literal_offset,
  [sym__decimal_literal] = sym__decimal_literal,
  [sym__hex_literal] = sym__hex_literal,
  [sym__octal_literal] = sym__octal_literal,
  [sym__binary_literal] = sym__binary_literal,
  [sym__NEWLINE] = sym__NEWLINE,
  [sym_identifier] = sym_identifier,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_operand_args_repeat1] = aux_sym_operand_args_repeat1,
  [aux_sym_string_literal_repeat1] = aux_sym_string_literal_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_file_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_db] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dw] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTtext] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTdata] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTwodata] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_objdump_machine_code_bytes_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_label_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_] = {
    .visible = true,
    .named = false,
  },
  [sym_register] = {
    .visible = true,
    .named = true,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__decimal_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__decimal_literal_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__decimal_literal_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__hex_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__hex_literal_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__hex_literal_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__octal_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__octal_literal_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__binary_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__binary_literal_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_CR_LF] = {
    .visible = true,
    .named = false,
  },
  [sym_mnemonic] = {
    .visible = true,
    .named = true,
  },
  [sym_section_name] = {
    .visible = true,
    .named = true,
  },
  [sym__IDENTIFIER] = {
    .visible = false,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_builtin] = {
    .visible = true,
    .named = true,
  },
  [sym_builtin_kw] = {
    .visible = true,
    .named = true,
  },
  [sym_section] = {
    .visible = true,
    .named = true,
  },
  [sym_section_type] = {
    .visible = true,
    .named = true,
  },
  [sym_label] = {
    .visible = true,
    .named = true,
  },
  [sym_label_name] = {
    .visible = true,
    .named = true,
  },
  [sym_ins] = {
    .visible = true,
    .named = true,
  },
  [sym_operand_args] = {
    .visible = true,
    .named = true,
  },
  [sym_operand] = {
    .visible = true,
    .named = true,
  },
  [sym_operand_ident] = {
    .visible = true,
    .named = true,
  },
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_integer_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_literal_offset] = {
    .visible = true,
    .named = true,
  },
  [sym__decimal_literal] = {
    .visible = false,
    .named = true,
  },
  [sym__hex_literal] = {
    .visible = false,
    .named = true,
  },
  [sym__octal_literal] = {
    .visible = false,
    .named = true,
  },
  [sym__binary_literal] = {
    .visible = false,
    .named = true,
  },
  [sym__NEWLINE] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_operand_args_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(28);
      if (lookahead == '"') ADVANCE(53);
      if (lookahead == '#') ADVANCE(34);
      if (lookahead == '$') ADVANCE(6);
      if (lookahead == '+') ADVANCE(57);
      if (lookahead == '.') ADVANCE(96);
      if (lookahead == '0') ADVANCE(10);
      if (lookahead == ':') ADVANCE(11);
      if (lookahead == '<') ADVANCE(56);
      if (lookahead == '>') ADVANCE(58);
      if (lookahead == '\\') ADVANCE(7);
      if (lookahead == 'a') ADVANCE(150);
      if (lookahead == 'd') ADVANCE(106);
      if (lookahead == 'g') ADVANCE(134);
      if (lookahead == 'r') ADVANCE(97);
      if (lookahead == 's') ADVANCE(147);
      if (lookahead == 't') ADVANCE(149);
      if (lookahead == 'z') ADVANCE(116);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(148);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(14);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(151);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('h' <= lookahead && lookahead <= 'y')) ADVANCE(152);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(33);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(4)
      if (lookahead == '"') ADVANCE(53);
      if (lookahead == '\\') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(54);
      if (lookahead != 0) ADVANCE(55);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(53);
      if (lookahead == '$') ADVANCE(6);
      if (lookahead == '0') ADVANCE(62);
      if (lookahead == '1') ADVANCE(63);
      if (lookahead == '_') ADVANCE(145);
      if (lookahead == 'a') ADVANCE(122);
      if (lookahead == 'g') ADVANCE(134);
      if (lookahead == 'r') ADVANCE(97);
      if (lookahead == 's') ADVANCE(147);
      if (lookahead == 't') ADVANCE(149);
      if (lookahead == 'z') ADVANCE(116);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(148);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(65);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(64);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(123);
      if (lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('h' <= lookahead && lookahead <= 'y')) ADVANCE(152);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(53);
      if (lookahead == '\\') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == '#') ADVANCE(34);
      if (lookahead == '.') ADVANCE(114);
      if (lookahead == 'a') ADVANCE(112);
      if (lookahead == 'b') ADVANCE(117);
      if (lookahead == 'd') ADVANCE(107);
      if (lookahead == 'e') ADVANCE(110);
      if (lookahead == 'j') ADVANCE(98);
      if (lookahead == 'l') ADVANCE(108);
      if (lookahead == 'o') ADVANCE(138);
      if (lookahead == 's') ADVANCE(146);
      if (lookahead == 'x') ADVANCE(132);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 6:
      if (lookahead == '0') ADVANCE(16);
      END_STATE();
    case 7:
      if (lookahead == 'U') ADVANCE(24);
      if (lookahead == 'u') ADVANCE(20);
      if (lookahead == 'x') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
      if (lookahead != 0) ADVANCE(50);
      END_STATE();
    case 8:
      if (lookahead == 'h') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == 'b' ||
          lookahead == 'y') ADVANCE(73);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == 'h' ||
          lookahead == 'x') ADVANCE(17);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(45);
      END_STATE();
    case 11:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(46);
      END_STATE();
    case 12:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 13:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(72);
      END_STATE();
    case 14:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(45);
      END_STATE();
    case 15:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(50);
      END_STATE();
    case 16:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(68);
      END_STATE();
    case 17:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(69);
      END_STATE();
    case 18:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(15);
      END_STATE();
    case 19:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(18);
      END_STATE();
    case 20:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(19);
      END_STATE();
    case 21:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(20);
      END_STATE();
    case 22:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(21);
      END_STATE();
    case 23:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(22);
      END_STATE();
    case 24:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(23);
      END_STATE();
    case 25:
      if (eof) ADVANCE(28);
      if (lookahead == '\n') ADVANCE(30);
      if (lookahead == '"') ADVANCE(53);
      if (lookahead == '#') ADVANCE(34);
      if (lookahead == '$') ADVANCE(6);
      if (lookahead == '0') ADVANCE(62);
      if (lookahead == '1') ADVANCE(63);
      if (lookahead == '_') ADVANCE(145);
      if (lookahead == 'a') ADVANCE(122);
      if (lookahead == 'g') ADVANCE(134);
      if (lookahead == 'r') ADVANCE(97);
      if (lookahead == 's') ADVANCE(147);
      if (lookahead == 't') ADVANCE(149);
      if (lookahead == 'z') ADVANCE(116);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(148);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(65);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(25)
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(64);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(123);
      if (lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('h' <= lookahead && lookahead <= 'y')) ADVANCE(152);
      END_STATE();
    case 26:
      if (eof) ADVANCE(28);
      if (lookahead == '\n') ADVANCE(31);
      if (lookahead == '#') ADVANCE(34);
      if (lookahead == '.') ADVANCE(114);
      if (lookahead == 'a') ADVANCE(112);
      if (lookahead == 'b') ADVANCE(117);
      if (lookahead == 'd') ADVANCE(107);
      if (lookahead == 'e') ADVANCE(110);
      if (lookahead == 'j') ADVANCE(98);
      if (lookahead == 'l') ADVANCE(108);
      if (lookahead == 'o') ADVANCE(138);
      if (lookahead == 's') ADVANCE(146);
      if (lookahead == 'x') ADVANCE(132);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26)
      if (('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 27:
      if (eof) ADVANCE(28);
      if (lookahead == '\n') ADVANCE(32);
      if (lookahead == ' ') ADVANCE(47);
      if (lookahead == '#') ADVANCE(34);
      if (lookahead == '<') ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == '\r') SKIP(27)
      END_STATE();
    case 28:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_source_file_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(31);
      if (lookahead == 'a') ADVANCE(112);
      if (lookahead == 'b') ADVANCE(117);
      if (lookahead == 'e') ADVANCE(110);
      if (lookahead == 'j') ADVANCE(98);
      if (lookahead == 'l') ADVANCE(108);
      if (lookahead == 'o') ADVANCE(138);
      if (lookahead == 's') ADVANCE(146);
      if (lookahead == 'x') ADVANCE(132);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(32);
      if (lookahead == ' ') ADVANCE(47);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(33);
      if (lookahead == '\r') ADVANCE(1);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\\' &&
          lookahead != 'n') ADVANCE(34);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_db);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_dw);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_dd);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_dq);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_DOTtext);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_DOTtext);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_DOTdata);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_DOTdata);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_DOTwodata);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_DOTwodata);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_objdump_machine_code_bytes_token1);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(46);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\n') ADVANCE(32);
      if (lookahead == ' ') ADVANCE(47);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_register);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'h') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(123);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(50);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(55);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(55);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym__decimal_literal_token1);
      if (lookahead == 'h') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(61);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(8);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym__decimal_literal_token1);
      if (lookahead == 'h') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(8);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym__decimal_literal_token2);
      if (lookahead == 'h') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(61);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(8);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym__decimal_literal_token3);
      if (lookahead == '_') ADVANCE(9);
      if (lookahead == 'b') ADVANCE(74);
      if (lookahead == 'd') ADVANCE(59);
      if (lookahead == 'h') ADVANCE(67);
      if (lookahead == 'x') ADVANCE(17);
      if (lookahead == 'y') ADVANCE(76);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(71);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(63);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(65);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(64);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(8);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym__decimal_literal_token3);
      if (lookahead == '_') ADVANCE(9);
      if (lookahead == 'b') ADVANCE(75);
      if (lookahead == 'd') ADVANCE(60);
      if (lookahead == 'h') ADVANCE(66);
      if (lookahead == 'y') ADVANCE(73);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(70);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(63);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(65);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(64);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(8);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym__decimal_literal_token3);
      if (lookahead == 'd') ADVANCE(60);
      if (lookahead == 'h') ADVANCE(66);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(70);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(64);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(8);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym__decimal_literal_token3);
      if (lookahead == 'd') ADVANCE(60);
      if (lookahead == 'h') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(65);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(8);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym__hex_literal_token1);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym__hex_literal_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(69);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym__hex_literal_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(68);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym__hex_literal_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(69);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym__octal_literal_token1);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym__octal_literal_token1);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(72);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym__octal_literal_token2);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(72);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym__binary_literal_token1);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym__binary_literal_token1);
      if (lookahead == '_') ADVANCE(78);
      if (lookahead == 'h') ADVANCE(66);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(77);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(8);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym__binary_literal_token1);
      if (lookahead == 'h') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(8);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym__binary_literal_token1);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(78);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym__binary_literal_token2);
      if (lookahead == '_') ADVANCE(78);
      if (lookahead == 'h') ADVANCE(66);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(77);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(8);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym__binary_literal_token2);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(78);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_mnemonic);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_mnemonic);
      if (lookahead == 'i') ADVANCE(83);
      if (lookahead == 'u') ADVANCE(79);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_mnemonic);
      if (lookahead == 'i') ADVANCE(79);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_mnemonic);
      if (lookahead == 'r') ADVANCE(79);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_mnemonic);
      if (lookahead == 'u') ADVANCE(79);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'a') ADVANCE(92);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'a') ADVANCE(42);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'a') ADVANCE(44);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'a') ADVANCE(93);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'd') ADVANCE(87);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'e') ADVANCE(94);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'o') ADVANCE(88);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 't') ADVANCE(40);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 't') ADVANCE(85);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 't') ADVANCE(86);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'x') ADVANCE(91);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == '$') ADVANCE(152);
      if (lookahead == 'd') ADVANCE(84);
      if (lookahead == 't') ADVANCE(89);
      if (lookahead == 'w') ADVANCE(90);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'a') ADVANCE(48);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'a') ADVANCE(129);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'a') ADVANCE(81);
      if (lookahead == 'l') ADVANCE(81);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'a') ADVANCE(41);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'a') ADVANCE(126);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'a') ADVANCE(43);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'a') ADVANCE(142);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'a') ADVANCE(130);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'a') ADVANCE(143);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'b') ADVANCE(35);
      if (lookahead == 'd') ADVANCE(37);
      if (lookahead == 'q') ADVANCE(38);
      if (lookahead == 'w') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(45);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'b') ADVANCE(35);
      if (lookahead == 'd') ADVANCE(37);
      if (lookahead == 'q') ADVANCE(38);
      if (lookahead == 'w') ADVANCE(36);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'b') ADVANCE(83);
      if (lookahead == 'h') ADVANCE(83);
      if (lookahead == 'u') ADVANCE(124);
      if (lookahead == 'w') ADVANCE(79);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'b') ADVANCE(79);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'b') ADVANCE(139);
      if (lookahead == 'c') ADVANCE(104);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'c') ADVANCE(79);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'd') ADVANCE(113);
      if (lookahead == 'n') ADVANCE(113);
      if (lookahead == 'u') ADVANCE(125);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'd') ADVANCE(81);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'd') ADVANCE(103);
      if (lookahead == 't') ADVANCE(120);
      if (lookahead == 'w') ADVANCE(133);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'd') ADVANCE(105);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'e') ADVANCE(137);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'e') ADVANCE(136);
      if (lookahead == 'g') ADVANCE(118);
      if (lookahead == 'l') ADVANCE(140);
      if (lookahead == 'n') ADVANCE(119);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'e') ADVANCE(83);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'e') ADVANCE(79);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'e') ADVANCE(144);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'e') ADVANCE(101);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'h') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(49);
      if (lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(123);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'h') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(123);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'i') ADVANCE(79);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'i') ADVANCE(135);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'k') ADVANCE(79);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'l') ADVANCE(79);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'l') ADVANCE(81);
      if (lookahead == 't') ADVANCE(80);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'l') ADVANCE(82);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'l') ADVANCE(127);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'o') ADVANCE(48);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'o') ADVANCE(138);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'o') ADVANCE(115);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'p') ADVANCE(48);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'p') ADVANCE(111);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'q') ADVANCE(79);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'r') ADVANCE(131);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'r') ADVANCE(81);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'r') ADVANCE(121);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 't') ADVANCE(83);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 't') ADVANCE(39);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 't') ADVANCE(100);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 't') ADVANCE(102);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'x') ADVANCE(141);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'b' ||
          lookahead == 'y') ADVANCE(73);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(145);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('2' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'b' ||
          lookahead == 'h' ||
          lookahead == 'w') ADVANCE(79);
      if (lookahead == 'l') ADVANCE(128);
      if (lookahead == 'r') ADVANCE(99);
      if (lookahead == 'u') ADVANCE(109);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == 'p') ADVANCE(48);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('2' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(48);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('4' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (('0' <= lookahead && lookahead <= '6') ||
          lookahead == 'p') ADVANCE(48);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('7' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(45);
      if (lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(45);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(45);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 29},
  [2] = {.lex_state = 25},
  [3] = {.lex_state = 3},
  [4] = {.lex_state = 26},
  [5] = {.lex_state = 26},
  [6] = {.lex_state = 3},
  [7] = {.lex_state = 5},
  [8] = {.lex_state = 3},
  [9] = {.lex_state = 27},
  [10] = {.lex_state = 27},
  [11] = {.lex_state = 27},
  [12] = {.lex_state = 27},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 27},
  [15] = {.lex_state = 27},
  [16] = {.lex_state = 27},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 27},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 27},
  [23] = {.lex_state = 27},
  [24] = {.lex_state = 27},
  [25] = {.lex_state = 25},
  [26] = {.lex_state = 27},
  [27] = {.lex_state = 25},
  [28] = {.lex_state = 25},
  [29] = {.lex_state = 25},
  [30] = {.lex_state = 25},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 25},
  [33] = {.lex_state = 25},
  [34] = {.lex_state = 25},
  [35] = {.lex_state = 25},
  [36] = {.lex_state = 25},
  [37] = {.lex_state = 25},
  [38] = {.lex_state = 25},
  [39] = {.lex_state = 25},
  [40] = {.lex_state = 25},
  [41] = {.lex_state = 25},
  [42] = {.lex_state = 25},
  [43] = {.lex_state = 25},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 25},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 12},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_db] = ACTIONS(1),
    [anon_sym_dw] = ACTIONS(1),
    [anon_sym_dd] = ACTIONS(1),
    [anon_sym_dq] = ACTIONS(1),
    [anon_sym_DOTtext] = ACTIONS(1),
    [anon_sym_DOTdata] = ACTIONS(1),
    [anon_sym_DOTwodata] = ACTIONS(1),
    [aux_sym_objdump_machine_code_bytes_token1] = ACTIONS(1),
    [aux_sym_label_token1] = ACTIONS(1),
    [sym_register] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [aux_sym__hex_literal_token2] = ACTIONS(1),
    [aux_sym__hex_literal_token3] = ACTIONS(1),
    [aux_sym__octal_literal_token2] = ACTIONS(1),
    [sym_section_name] = ACTIONS(1),
    [sym__IDENTIFIER] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(52),
    [aux_sym_source_file_token1] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(9), 1,
      sym_register,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      sym__IDENTIFIER,
    STATE(12), 1,
      sym_operand,
    STATE(35), 1,
      sym_operand_args,
    ACTIONS(5), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(20), 3,
      sym_operand_ident,
      sym_string_literal,
      sym_integer_literal,
    STATE(9), 4,
      sym__decimal_literal,
      sym__hex_literal,
      sym__octal_literal,
      sym__binary_literal,
    ACTIONS(13), 10,
      aux_sym__decimal_literal_token1,
      aux_sym__decimal_literal_token2,
      aux_sym__decimal_literal_token3,
      aux_sym__hex_literal_token1,
      aux_sym__hex_literal_token2,
      aux_sym__hex_literal_token3,
      aux_sym__octal_literal_token1,
      aux_sym__octal_literal_token2,
      aux_sym__binary_literal_token1,
      aux_sym__binary_literal_token2,
  [46] = 9,
    ACTIONS(9), 1,
      sym_register,
    ACTIONS(15), 1,
      sym__IDENTIFIER,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    STATE(12), 1,
      sym_operand,
    STATE(34), 1,
      sym_operand_args,
    ACTIONS(19), 3,
      aux_sym__hex_literal_token2,
      aux_sym__hex_literal_token3,
      aux_sym__octal_literal_token2,
    STATE(20), 3,
      sym_operand_ident,
      sym_string_literal,
      sym_integer_literal,
    STATE(9), 4,
      sym__decimal_literal,
      sym__hex_literal,
      sym__octal_literal,
      sym__binary_literal,
    ACTIONS(13), 7,
      aux_sym__decimal_literal_token1,
      aux_sym__decimal_literal_token2,
      aux_sym__decimal_literal_token3,
      aux_sym__hex_literal_token1,
      aux_sym__octal_literal_token1,
      aux_sym__binary_literal_token1,
      aux_sym__binary_literal_token2,
  [87] = 15,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    ACTIONS(29), 1,
      sym_mnemonic,
    ACTIONS(31), 1,
      sym__IDENTIFIER,
    STATE(3), 1,
      sym_builtin_kw,
    STATE(17), 1,
      sym_section_type,
    STATE(37), 1,
      sym_builtin,
    STATE(38), 1,
      sym_section,
    STATE(39), 1,
      sym_ins,
    STATE(40), 1,
      sym_label,
    STATE(42), 1,
      sym_directive,
    STATE(47), 1,
      sym_label_name,
    STATE(49), 1,
      sym_identifier,
    ACTIONS(23), 2,
      anon_sym_LF,
      sym_comment,
    ACTIONS(27), 3,
      anon_sym_DOTtext,
      anon_sym_DOTdata,
      anon_sym_DOTwodata,
    ACTIONS(25), 4,
      anon_sym_db,
      anon_sym_dw,
      anon_sym_dd,
      anon_sym_dq,
  [139] = 16,
    ACTIONS(29), 1,
      sym_mnemonic,
    ACTIONS(31), 1,
      sym__IDENTIFIER,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
    ACTIONS(35), 1,
      anon_sym_LF,
    ACTIONS(37), 1,
      sym_comment,
    STATE(3), 1,
      sym_builtin_kw,
    STATE(17), 1,
      sym_section_type,
    STATE(32), 1,
      sym_directive,
    STATE(37), 1,
      sym_builtin,
    STATE(38), 1,
      sym_section,
    STATE(39), 1,
      sym_ins,
    STATE(40), 1,
      sym_label,
    STATE(47), 1,
      sym_label_name,
    STATE(49), 1,
      sym_identifier,
    ACTIONS(27), 3,
      anon_sym_DOTtext,
      anon_sym_DOTdata,
      anon_sym_DOTwodata,
    ACTIONS(25), 4,
      anon_sym_db,
      anon_sym_dw,
      anon_sym_dd,
      anon_sym_dq,
  [193] = 8,
    ACTIONS(9), 1,
      sym_register,
    ACTIONS(15), 1,
      sym__IDENTIFIER,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    STATE(24), 1,
      sym_operand,
    ACTIONS(19), 3,
      aux_sym__hex_literal_token2,
      aux_sym__hex_literal_token3,
      aux_sym__octal_literal_token2,
    STATE(20), 3,
      sym_operand_ident,
      sym_string_literal,
      sym_integer_literal,
    STATE(9), 4,
      sym__decimal_literal,
      sym__hex_literal,
      sym__octal_literal,
      sym__binary_literal,
    ACTIONS(13), 7,
      aux_sym__decimal_literal_token1,
      aux_sym__decimal_literal_token2,
      aux_sym__decimal_literal_token3,
      aux_sym__hex_literal_token1,
      aux_sym__octal_literal_token1,
      aux_sym__binary_literal_token1,
      aux_sym__binary_literal_token2,
  [231] = 14,
    ACTIONS(31), 1,
      sym__IDENTIFIER,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(45), 1,
      sym_mnemonic,
    STATE(3), 1,
      sym_builtin_kw,
    STATE(17), 1,
      sym_section_type,
    STATE(25), 1,
      sym_directive,
    STATE(37), 1,
      sym_builtin,
    STATE(38), 1,
      sym_section,
    STATE(39), 1,
      sym_ins,
    STATE(40), 1,
      sym_label,
    STATE(47), 1,
      sym_label_name,
    STATE(49), 1,
      sym_identifier,
    ACTIONS(43), 3,
      anon_sym_DOTtext,
      anon_sym_DOTdata,
      anon_sym_DOTwodata,
    ACTIONS(41), 4,
      anon_sym_db,
      anon_sym_dw,
      anon_sym_dd,
      anon_sym_dq,
  [279] = 2,
    ACTIONS(49), 4,
      anon_sym_DQUOTE,
      aux_sym__hex_literal_token2,
      aux_sym__hex_literal_token3,
      aux_sym__octal_literal_token2,
    ACTIONS(47), 9,
      sym_register,
      aux_sym__decimal_literal_token1,
      aux_sym__decimal_literal_token2,
      aux_sym__decimal_literal_token3,
      aux_sym__hex_literal_token1,
      aux_sym__octal_literal_token1,
      aux_sym__binary_literal_token1,
      aux_sym__binary_literal_token2,
      sym__IDENTIFIER,
  [297] = 4,
    ACTIONS(51), 1,
      ts_builtin_sym_end,
    ACTIONS(55), 1,
      anon_sym_LT,
    STATE(15), 1,
      sym_literal_offset,
    ACTIONS(53), 3,
      anon_sym_LF,
      sym_comment,
      anon_sym_,
  [312] = 4,
    ACTIONS(57), 1,
      ts_builtin_sym_end,
    ACTIONS(61), 1,
      anon_sym_,
    STATE(11), 1,
      aux_sym_operand_args_repeat1,
    ACTIONS(59), 2,
      anon_sym_LF,
      sym_comment,
  [326] = 4,
    ACTIONS(63), 1,
      ts_builtin_sym_end,
    ACTIONS(67), 1,
      anon_sym_,
    STATE(11), 1,
      aux_sym_operand_args_repeat1,
    ACTIONS(65), 2,
      anon_sym_LF,
      sym_comment,
  [340] = 4,
    ACTIONS(61), 1,
      anon_sym_,
    ACTIONS(70), 1,
      ts_builtin_sym_end,
    STATE(10), 1,
      aux_sym_operand_args_repeat1,
    ACTIONS(72), 2,
      anon_sym_LF,
      sym_comment,
  [354] = 3,
    ACTIONS(74), 1,
      aux_sym__hex_literal_token1,
    STATE(51), 1,
      sym__hex_literal,
    ACTIONS(76), 2,
      aux_sym__hex_literal_token2,
      aux_sym__hex_literal_token3,
  [365] = 2,
    ACTIONS(78), 1,
      ts_builtin_sym_end,
    ACTIONS(80), 3,
      anon_sym_LF,
      sym_comment,
      anon_sym_,
  [374] = 2,
    ACTIONS(82), 1,
      ts_builtin_sym_end,
    ACTIONS(84), 3,
      anon_sym_LF,
      sym_comment,
      anon_sym_,
  [383] = 2,
    ACTIONS(86), 1,
      ts_builtin_sym_end,
    ACTIONS(88), 3,
      anon_sym_LF,
      sym_comment,
      anon_sym_,
  [392] = 3,
    ACTIONS(92), 1,
      sym_comment,
    STATE(29), 1,
      sym__NEWLINE,
    ACTIONS(90), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [403] = 4,
    ACTIONS(94), 1,
      sym_escape_sequence,
    ACTIONS(97), 1,
      anon_sym_DQUOTE,
    ACTIONS(99), 1,
      aux_sym_string_literal_token1,
    STATE(18), 1,
      aux_sym_string_literal_repeat1,
  [416] = 4,
    ACTIONS(102), 1,
      sym_escape_sequence,
    ACTIONS(104), 1,
      anon_sym_DQUOTE,
    ACTIONS(106), 1,
      aux_sym_string_literal_token1,
    STATE(18), 1,
      aux_sym_string_literal_repeat1,
  [429] = 2,
    ACTIONS(108), 1,
      ts_builtin_sym_end,
    ACTIONS(110), 3,
      anon_sym_LF,
      sym_comment,
      anon_sym_,
  [438] = 4,
    ACTIONS(112), 1,
      sym_escape_sequence,
    ACTIONS(114), 1,
      anon_sym_DQUOTE,
    ACTIONS(116), 1,
      aux_sym_string_literal_token1,
    STATE(19), 1,
      aux_sym_string_literal_repeat1,
  [451] = 2,
    ACTIONS(118), 1,
      ts_builtin_sym_end,
    ACTIONS(120), 3,
      anon_sym_LF,
      sym_comment,
      anon_sym_,
  [460] = 2,
    ACTIONS(122), 1,
      ts_builtin_sym_end,
    ACTIONS(124), 3,
      anon_sym_LF,
      sym_comment,
      anon_sym_,
  [469] = 2,
    ACTIONS(63), 1,
      ts_builtin_sym_end,
    ACTIONS(65), 3,
      anon_sym_LF,
      sym_comment,
      anon_sym_,
  [478] = 4,
    ACTIONS(126), 1,
      ts_builtin_sym_end,
    ACTIONS(128), 1,
      anon_sym_LF,
    ACTIONS(130), 1,
      sym_comment,
    STATE(36), 1,
      aux_sym_source_file_repeat1,
  [491] = 2,
    ACTIONS(132), 1,
      ts_builtin_sym_end,
    ACTIONS(134), 3,
      anon_sym_LF,
      sym_comment,
      anon_sym_,
  [500] = 3,
    ACTIONS(128), 1,
      anon_sym_LF,
    ACTIONS(136), 1,
      ts_builtin_sym_end,
    STATE(28), 1,
      aux_sym_source_file_repeat1,
  [510] = 3,
    ACTIONS(128), 1,
      anon_sym_LF,
    ACTIONS(138), 1,
      ts_builtin_sym_end,
    STATE(33), 1,
      aux_sym_source_file_repeat1,
  [520] = 2,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(140), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [528] = 3,
    ACTIONS(126), 1,
      ts_builtin_sym_end,
    ACTIONS(128), 1,
      anon_sym_LF,
    STATE(36), 1,
      aux_sym_source_file_repeat1,
  [538] = 1,
    ACTIONS(144), 3,
      anon_sym_LF,
      sym_comment,
      anon_sym_CR_LF,
  [544] = 2,
    ACTIONS(148), 1,
      sym_comment,
    ACTIONS(146), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [552] = 3,
    ACTIONS(146), 1,
      ts_builtin_sym_end,
    ACTIONS(150), 1,
      anon_sym_LF,
    STATE(33), 1,
      aux_sym_source_file_repeat1,
  [562] = 2,
    ACTIONS(155), 1,
      sym_comment,
    ACTIONS(153), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [570] = 2,
    ACTIONS(159), 1,
      sym_comment,
    ACTIONS(157), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [578] = 3,
    ACTIONS(128), 1,
      anon_sym_LF,
    ACTIONS(136), 1,
      ts_builtin_sym_end,
    STATE(33), 1,
      aux_sym_source_file_repeat1,
  [588] = 2,
    ACTIONS(163), 1,
      sym_comment,
    ACTIONS(161), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [596] = 2,
    ACTIONS(163), 1,
      sym_comment,
    ACTIONS(161), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [604] = 2,
    ACTIONS(163), 1,
      sym_comment,
    ACTIONS(161), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [612] = 2,
    ACTIONS(163), 1,
      sym_comment,
    ACTIONS(161), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [620] = 2,
    ACTIONS(167), 1,
      sym_comment,
    ACTIONS(165), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [628] = 2,
    ACTIONS(171), 1,
      sym_comment,
    ACTIONS(169), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [636] = 1,
    ACTIONS(173), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [641] = 1,
    ACTIONS(175), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [646] = 2,
    ACTIONS(177), 1,
      anon_sym_PLUS,
    ACTIONS(179), 1,
      anon_sym_GT,
  [653] = 1,
    ACTIONS(146), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [658] = 1,
    ACTIONS(181), 1,
      aux_sym_label_token1,
  [662] = 1,
    ACTIONS(183), 1,
      sym__IDENTIFIER,
  [666] = 1,
    ACTIONS(185), 1,
      aux_sym_label_token1,
  [670] = 1,
    ACTIONS(187), 1,
      aux_sym_label_token1,
  [674] = 1,
    ACTIONS(189), 1,
      anon_sym_GT,
  [678] = 1,
    ACTIONS(191), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 46,
  [SMALL_STATE(4)] = 87,
  [SMALL_STATE(5)] = 139,
  [SMALL_STATE(6)] = 193,
  [SMALL_STATE(7)] = 231,
  [SMALL_STATE(8)] = 279,
  [SMALL_STATE(9)] = 297,
  [SMALL_STATE(10)] = 312,
  [SMALL_STATE(11)] = 326,
  [SMALL_STATE(12)] = 340,
  [SMALL_STATE(13)] = 354,
  [SMALL_STATE(14)] = 365,
  [SMALL_STATE(15)] = 374,
  [SMALL_STATE(16)] = 383,
  [SMALL_STATE(17)] = 392,
  [SMALL_STATE(18)] = 403,
  [SMALL_STATE(19)] = 416,
  [SMALL_STATE(20)] = 429,
  [SMALL_STATE(21)] = 438,
  [SMALL_STATE(22)] = 451,
  [SMALL_STATE(23)] = 460,
  [SMALL_STATE(24)] = 469,
  [SMALL_STATE(25)] = 478,
  [SMALL_STATE(26)] = 491,
  [SMALL_STATE(27)] = 500,
  [SMALL_STATE(28)] = 510,
  [SMALL_STATE(29)] = 520,
  [SMALL_STATE(30)] = 528,
  [SMALL_STATE(31)] = 538,
  [SMALL_STATE(32)] = 544,
  [SMALL_STATE(33)] = 552,
  [SMALL_STATE(34)] = 562,
  [SMALL_STATE(35)] = 570,
  [SMALL_STATE(36)] = 578,
  [SMALL_STATE(37)] = 588,
  [SMALL_STATE(38)] = 596,
  [SMALL_STATE(39)] = 604,
  [SMALL_STATE(40)] = 612,
  [SMALL_STATE(41)] = 620,
  [SMALL_STATE(42)] = 628,
  [SMALL_STATE(43)] = 636,
  [SMALL_STATE(44)] = 641,
  [SMALL_STATE(45)] = 646,
  [SMALL_STATE(46)] = 653,
  [SMALL_STATE(47)] = 658,
  [SMALL_STATE(48)] = 662,
  [SMALL_STATE(49)] = 666,
  [SMALL_STATE(50)] = 670,
  [SMALL_STATE(51)] = 674,
  [SMALL_STATE(52)] = 678,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ins, 1),
  [7] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ins, 1),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 2),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 2),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_builtin_kw, 1),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin_kw, 1),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_literal, 1),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_literal, 1),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operand_args, 2),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operand_args, 2),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_operand_args_repeat1, 2),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_operand_args_repeat1, 2),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_operand_args_repeat1, 2), SHIFT_REPEAT(6),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operand_args, 1),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operand_args, 1),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_literal, 2),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_literal, 2),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_offset, 5),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_offset, 5),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(18),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(18),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operand, 1),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operand, 1),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operand_ident, 1),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operand_ident, 1),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 2),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_offset, 3),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_offset, 3),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 4),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 2),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section, 2),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section_type, 1),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [150] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(5),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin, 2),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_builtin, 2),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ins, 2),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ins, 2),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 1),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 1),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__NEWLINE, 2),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__NEWLINE, 2),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 3),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 3),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 3),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_name, 1),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [191] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_riscvasm(void) {
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
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
