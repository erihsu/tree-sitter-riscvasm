#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 45
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 50
#define ALIAS_COUNT 0
#define TOKEN_COUNT 30
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum {
  aux_sym_source_file_token1 = 1,
  anon_sym_LF = 2,
  sym_comment = 3,
  anon_sym_DOTtext = 4,
  anon_sym_DOTdata = 5,
  anon_sym_DOTwodata = 6,
  aux_sym_label_token1 = 7,
  anon_sym_ = 8,
  sym_register = 9,
  sym_escape_sequence = 10,
  anon_sym_DQUOTE = 11,
  aux_sym_string_literal_token1 = 12,
  anon_sym_LT = 13,
  anon_sym_PLUS = 14,
  anon_sym_GT = 15,
  aux_sym__decimal_literal_token1 = 16,
  aux_sym__decimal_literal_token2 = 17,
  aux_sym__decimal_literal_token3 = 18,
  aux_sym__hex_literal_token1 = 19,
  aux_sym__hex_literal_token2 = 20,
  aux_sym__hex_literal_token3 = 21,
  aux_sym__octal_literal_token1 = 22,
  aux_sym__octal_literal_token2 = 23,
  aux_sym__binary_literal_token1 = 24,
  aux_sym__binary_literal_token2 = 25,
  sym_mnemonic = 26,
  sym_section_name = 27,
  sym__IDENTIFIER = 28,
  sym__DELIMITER = 29,
  sym_source_file = 30,
  sym_directive = 31,
  sym_section = 32,
  sym_label = 33,
  sym_label_name = 34,
  sym_ins = 35,
  sym_operand_args = 36,
  sym_operand = 37,
  sym_operand_ident = 38,
  sym_string_literal = 39,
  sym_integer_literal = 40,
  sym_literal_offset = 41,
  sym__decimal_literal = 42,
  sym__hex_literal = 43,
  sym__octal_literal = 44,
  sym__binary_literal = 45,
  sym_identifier = 46,
  aux_sym_source_file_repeat1 = 47,
  aux_sym_operand_args_repeat1 = 48,
  aux_sym_string_literal_repeat1 = 49,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_source_file_token1] = "source_file_token1",
  [anon_sym_LF] = "\n",
  [sym_comment] = "comment",
  [anon_sym_DOTtext] = ".text",
  [anon_sym_DOTdata] = ".data",
  [anon_sym_DOTwodata] = ".wodata",
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
  [sym_mnemonic] = "mnemonic",
  [sym_section_name] = "section_name",
  [sym__IDENTIFIER] = "_IDENTIFIER",
  [sym__DELIMITER] = "_DELIMITER",
  [sym_source_file] = "source_file",
  [sym_directive] = "directive",
  [sym_section] = "section",
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
  [anon_sym_DOTtext] = anon_sym_DOTtext,
  [anon_sym_DOTdata] = anon_sym_DOTdata,
  [anon_sym_DOTwodata] = anon_sym_DOTwodata,
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
  [sym_mnemonic] = sym_mnemonic,
  [sym_section_name] = sym_section_name,
  [sym__IDENTIFIER] = sym__IDENTIFIER,
  [sym__DELIMITER] = sym__DELIMITER,
  [sym_source_file] = sym_source_file,
  [sym_directive] = sym_directive,
  [sym_section] = sym_section,
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
  [sym__DELIMITER] = {
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
  [sym_section] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(24);
      if (lookahead == '"') ADVANCE(43);
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == '$') ADVANCE(5);
      if (lookahead == '+') ADVANCE(47);
      if (lookahead == '.') ADVANCE(86);
      if (lookahead == '0') ADVANCE(52);
      if (lookahead == '1') ADVANCE(53);
      if (lookahead == ':') ADVANCE(9);
      if (lookahead == ';') ADVANCE(149);
      if (lookahead == '<') ADVANCE(46);
      if (lookahead == '>') ADVANCE(48);
      if (lookahead == 'X') ADVANCE(146);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead == '_') ADVANCE(142);
      if (lookahead == 'a') ADVANCE(102);
      if (lookahead == 'b') ADVANCE(108);
      if (lookahead == 'e') ADVANCE(97);
      if (lookahead == 'g') ADVANCE(131);
      if (lookahead == 'j') ADVANCE(88);
      if (lookahead == 'l') ADVANCE(98);
      if (lookahead == 'o') ADVANCE(134);
      if (lookahead == 'r') ADVANCE(87);
      if (lookahead == 's') ADVANCE(144);
      if (lookahead == 't') ADVANCE(147);
      if (lookahead == 'x') ADVANCE(127);
      if (lookahead == 'z') ADVANCE(113);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(55);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(54);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('c' <= lookahead && lookahead <= 'f')) ADVANCE(119);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('h' <= lookahead && lookahead <= 'y')) ADVANCE(148);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(3)
      if (lookahead == '"') ADVANCE(43);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(44);
      if (lookahead != 0) ADVANCE(45);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(43);
      if (lookahead == '$') ADVANCE(5);
      if (lookahead == '0') ADVANCE(52);
      if (lookahead == '1') ADVANCE(53);
      if (lookahead == '_') ADVANCE(142);
      if (lookahead == 'a') ADVANCE(118);
      if (lookahead == 'g') ADVANCE(131);
      if (lookahead == 'r') ADVANCE(87);
      if (lookahead == 's') ADVANCE(145);
      if (lookahead == 't') ADVANCE(147);
      if (lookahead == 'z') ADVANCE(113);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(146);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(55);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(54);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(119);
      if (lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('h' <= lookahead && lookahead <= 'y')) ADVANCE(148);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(43);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == '.') ADVANCE(106);
      if (lookahead == 'a') ADVANCE(103);
      if (lookahead == 'b') ADVANCE(111);
      if (lookahead == 'e') ADVANCE(100);
      if (lookahead == 'j') ADVANCE(88);
      if (lookahead == 'l') ADVANCE(98);
      if (lookahead == 'o') ADVANCE(134);
      if (lookahead == 's') ADVANCE(143);
      if (lookahead == 'x') ADVANCE(128);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 5:
      if (lookahead == '0') ADVANCE(12);
      END_STATE();
    case 6:
      if (lookahead == 'U') ADVANCE(20);
      if (lookahead == 'u') ADVANCE(16);
      if (lookahead == 'x') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      if (lookahead != 0) ADVANCE(40);
      END_STATE();
    case 7:
      if (lookahead == 'h') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == 'b' ||
          lookahead == 'y') ADVANCE(63);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(36);
      END_STATE();
    case 10:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 11:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(40);
      END_STATE();
    case 12:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(58);
      END_STATE();
    case 13:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(59);
      END_STATE();
    case 14:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(11);
      END_STATE();
    case 15:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(14);
      END_STATE();
    case 16:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(15);
      END_STATE();
    case 17:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(16);
      END_STATE();
    case 18:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(17);
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
      if (eof) ADVANCE(24);
      if (lookahead == '\n') ADVANCE(26);
      if (lookahead == '"') ADVANCE(43);
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == '$') ADVANCE(5);
      if (lookahead == '0') ADVANCE(52);
      if (lookahead == '1') ADVANCE(53);
      if (lookahead == '_') ADVANCE(142);
      if (lookahead == 'a') ADVANCE(118);
      if (lookahead == 'g') ADVANCE(131);
      if (lookahead == 'r') ADVANCE(87);
      if (lookahead == 's') ADVANCE(145);
      if (lookahead == 't') ADVANCE(147);
      if (lookahead == 'z') ADVANCE(113);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(146);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(55);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(54);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(119);
      if (lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('h' <= lookahead && lookahead <= 'y')) ADVANCE(148);
      END_STATE();
    case 22:
      if (eof) ADVANCE(24);
      if (lookahead == '\n') ADVANCE(27);
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == '.') ADVANCE(106);
      if (lookahead == 'a') ADVANCE(103);
      if (lookahead == 'b') ADVANCE(111);
      if (lookahead == 'e') ADVANCE(100);
      if (lookahead == 'j') ADVANCE(88);
      if (lookahead == 'l') ADVANCE(98);
      if (lookahead == 'o') ADVANCE(134);
      if (lookahead == 's') ADVANCE(143);
      if (lookahead == 'x') ADVANCE(128);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      if (('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 23:
      if (eof) ADVANCE(24);
      if (lookahead == '\n') ADVANCE(28);
      if (lookahead == ' ') ADVANCE(37);
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == '<') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\r') SKIP(23)
      END_STATE();
    case 24:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_source_file_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(26);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(27);
      if (lookahead == 'a') ADVANCE(103);
      if (lookahead == 'b') ADVANCE(111);
      if (lookahead == 'e') ADVANCE(100);
      if (lookahead == 'j') ADVANCE(88);
      if (lookahead == 'l') ADVANCE(98);
      if (lookahead == 'o') ADVANCE(134);
      if (lookahead == 's') ADVANCE(143);
      if (lookahead == 'x') ADVANCE(128);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(28);
      if (lookahead == ' ') ADVANCE(37);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\\' &&
          lookahead != 'n') ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_DOTtext);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_DOTtext);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_DOTdata);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_DOTdata);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_DOTwodata);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_DOTwodata);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(36);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\n') ADVANCE(28);
      if (lookahead == ' ') ADVANCE(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_register);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'h') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(119);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(45);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(45);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym__decimal_literal_token1);
      if (lookahead == 'h') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(7);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym__decimal_literal_token1);
      if (lookahead == 'h') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(7);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym__decimal_literal_token2);
      if (lookahead == 'h') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(7);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym__decimal_literal_token3);
      if (lookahead == '_') ADVANCE(8);
      if (lookahead == 'b') ADVANCE(64);
      if (lookahead == 'd') ADVANCE(49);
      if (lookahead == 'h') ADVANCE(57);
      if (lookahead == 'x') ADVANCE(13);
      if (lookahead == 'y') ADVANCE(66);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(61);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(53);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(55);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(54);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(7);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym__decimal_literal_token3);
      if (lookahead == '_') ADVANCE(8);
      if (lookahead == 'b') ADVANCE(65);
      if (lookahead == 'd') ADVANCE(50);
      if (lookahead == 'h') ADVANCE(56);
      if (lookahead == 'y') ADVANCE(63);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(60);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(53);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(55);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(54);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(7);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym__decimal_literal_token3);
      if (lookahead == 'd') ADVANCE(50);
      if (lookahead == 'h') ADVANCE(56);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(60);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(54);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(7);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym__decimal_literal_token3);
      if (lookahead == 'd') ADVANCE(50);
      if (lookahead == 'h') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(7);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym__hex_literal_token1);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym__hex_literal_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(59);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym__hex_literal_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(58);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym__hex_literal_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(59);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym__octal_literal_token1);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym__octal_literal_token1);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(62);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym__octal_literal_token2);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(62);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym__binary_literal_token1);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym__binary_literal_token1);
      if (lookahead == '_') ADVANCE(68);
      if (lookahead == 'h') ADVANCE(56);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(67);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(7);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym__binary_literal_token1);
      if (lookahead == 'h') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(7);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym__binary_literal_token1);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(68);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym__binary_literal_token2);
      if (lookahead == '_') ADVANCE(68);
      if (lookahead == 'h') ADVANCE(56);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(67);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(7);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym__binary_literal_token2);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(68);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_mnemonic);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_mnemonic);
      if (lookahead == 'i') ADVANCE(73);
      if (lookahead == 'u') ADVANCE(69);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_mnemonic);
      if (lookahead == 'i') ADVANCE(69);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_mnemonic);
      if (lookahead == 'r') ADVANCE(69);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_mnemonic);
      if (lookahead == 'u') ADVANCE(69);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'a') ADVANCE(82);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'a') ADVANCE(33);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'a') ADVANCE(35);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'a') ADVANCE(83);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'd') ADVANCE(77);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'e') ADVANCE(84);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'o') ADVANCE(78);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 't') ADVANCE(31);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 't') ADVANCE(75);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 't') ADVANCE(76);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'x') ADVANCE(81);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == '$') ADVANCE(148);
      if (lookahead == 'd') ADVANCE(74);
      if (lookahead == 't') ADVANCE(79);
      if (lookahead == 'w') ADVANCE(80);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'a') ADVANCE(38);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'a') ADVANCE(125);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'a') ADVANCE(71);
      if (lookahead == 'l') ADVANCE(71);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'a') ADVANCE(115);
      if (lookahead == 'h') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(119);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'a') ADVANCE(122);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'a') ADVANCE(32);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'a') ADVANCE(34);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'a') ADVANCE(139);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'a') ADVANCE(126);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'a') ADVANCE(140);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'b') ADVANCE(117);
      if (lookahead == 'c') ADVANCE(90);
      if (lookahead == 'h') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(119);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'b') ADVANCE(73);
      if (lookahead == 'h') ADVANCE(73);
      if (lookahead == 'u') ADVANCE(120);
      if (lookahead == 'w') ADVANCE(69);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'b') ADVANCE(69);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'b') ADVANCE(136);
      if (lookahead == 'c') ADVANCE(95);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'c') ADVANCE(69);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'd') ADVANCE(104);
      if (lookahead == 'h') ADVANCE(56);
      if (lookahead == 'n') ADVANCE(105);
      if (lookahead == 'u') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(39);
      if (lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(119);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'd') ADVANCE(105);
      if (lookahead == 'n') ADVANCE(105);
      if (lookahead == 'u') ADVANCE(121);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'd') ADVANCE(71);
      if (lookahead == 'h') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(119);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'd') ADVANCE(71);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'd') ADVANCE(94);
      if (lookahead == 't') ADVANCE(112);
      if (lookahead == 'w') ADVANCE(130);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'd') ADVANCE(96);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'e') ADVANCE(116);
      if (lookahead == 'g') ADVANCE(109);
      if (lookahead == 'h') ADVANCE(56);
      if (lookahead == 'l') ADVANCE(137);
      if (lookahead == 'n') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(119);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('i' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'e') ADVANCE(73);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'e') ADVANCE(69);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'e') ADVANCE(133);
      if (lookahead == 'g') ADVANCE(109);
      if (lookahead == 'l') ADVANCE(137);
      if (lookahead == 'n') ADVANCE(110);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'e') ADVANCE(141);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'e') ADVANCE(135);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'e') ADVANCE(91);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'h') ADVANCE(56);
      if (lookahead == 'l') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(119);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'h') ADVANCE(56);
      if (lookahead == 'q') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(119);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'h') ADVANCE(56);
      if (lookahead == 'r') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(119);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'h') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(39);
      if (lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(119);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'h') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(119);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'i') ADVANCE(69);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'i') ADVANCE(132);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'k') ADVANCE(69);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'l') ADVANCE(69);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'l') ADVANCE(71);
      if (lookahead == 't') ADVANCE(70);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'l') ADVANCE(72);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'l') ADVANCE(123);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'o') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(38);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('4' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'o') ADVANCE(134);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'o') ADVANCE(38);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'o') ADVANCE(107);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'p') ADVANCE(38);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'p') ADVANCE(101);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'q') ADVANCE(69);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'r') ADVANCE(71);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'r') ADVANCE(129);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'r') ADVANCE(114);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 't') ADVANCE(73);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 't') ADVANCE(30);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 't') ADVANCE(92);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 't') ADVANCE(93);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'x') ADVANCE(138);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'b' ||
          lookahead == 'y') ADVANCE(63);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(142);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('2' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'b' ||
          lookahead == 'h' ||
          lookahead == 'w') ADVANCE(69);
      if (lookahead == 'l') ADVANCE(124);
      if (lookahead == 'r') ADVANCE(89);
      if (lookahead == 'u') ADVANCE(99);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'b' ||
          lookahead == 'h' ||
          lookahead == 'w') ADVANCE(69);
      if (lookahead == 'l') ADVANCE(124);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == 'p') ADVANCE(38);
      if (lookahead == 'r') ADVANCE(89);
      if (lookahead == 'u') ADVANCE(99);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('2' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == 'p') ADVANCE(38);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('2' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(38);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('4' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (('0' <= lookahead && lookahead <= '6') ||
          lookahead == 'p') ADVANCE(38);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('7' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym__DELIMITER);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 25},
  [2] = {.lex_state = 21},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 22},
  [5] = {.lex_state = 22},
  [6] = {.lex_state = 4},
  [7] = {.lex_state = 23},
  [8] = {.lex_state = 23},
  [9] = {.lex_state = 23},
  [10] = {.lex_state = 23},
  [11] = {.lex_state = 21},
  [12] = {.lex_state = 23},
  [13] = {.lex_state = 23},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 23},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 23},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 23},
  [21] = {.lex_state = 23},
  [22] = {.lex_state = 23},
  [23] = {.lex_state = 23},
  [24] = {.lex_state = 21},
  [25] = {.lex_state = 21},
  [26] = {.lex_state = 21},
  [27] = {.lex_state = 21},
  [28] = {.lex_state = 21},
  [29] = {.lex_state = 21},
  [30] = {.lex_state = 21},
  [31] = {.lex_state = 21},
  [32] = {.lex_state = 21},
  [33] = {.lex_state = 21},
  [34] = {.lex_state = 21},
  [35] = {.lex_state = 21},
  [36] = {.lex_state = 21},
  [37] = {.lex_state = 21},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 10},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_DOTtext] = ACTIONS(1),
    [anon_sym_DOTdata] = ACTIONS(1),
    [anon_sym_DOTwodata] = ACTIONS(1),
    [aux_sym_label_token1] = ACTIONS(1),
    [sym_register] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [aux_sym__decimal_literal_token1] = ACTIONS(1),
    [aux_sym__decimal_literal_token2] = ACTIONS(1),
    [aux_sym__decimal_literal_token3] = ACTIONS(1),
    [aux_sym__hex_literal_token1] = ACTIONS(1),
    [aux_sym__hex_literal_token2] = ACTIONS(1),
    [aux_sym__hex_literal_token3] = ACTIONS(1),
    [aux_sym__octal_literal_token1] = ACTIONS(1),
    [aux_sym__octal_literal_token2] = ACTIONS(1),
    [aux_sym__binary_literal_token1] = ACTIONS(1),
    [aux_sym__binary_literal_token2] = ACTIONS(1),
    [sym_mnemonic] = ACTIONS(1),
    [sym_section_name] = ACTIONS(1),
    [sym__IDENTIFIER] = ACTIONS(1),
    [sym__DELIMITER] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(39),
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
    STATE(9), 1,
      sym_operand,
    STATE(28), 1,
      sym_operand_args,
    ACTIONS(5), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(16), 3,
      sym_operand_ident,
      sym_string_literal,
      sym_integer_literal,
    STATE(7), 4,
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
  [46] = 8,
    ACTIONS(9), 1,
      sym_register,
    ACTIONS(15), 1,
      sym__IDENTIFIER,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    STATE(20), 1,
      sym_operand,
    ACTIONS(19), 3,
      aux_sym__hex_literal_token2,
      aux_sym__hex_literal_token3,
      aux_sym__octal_literal_token2,
    STATE(16), 3,
      sym_operand_ident,
      sym_string_literal,
      sym_integer_literal,
    STATE(7), 4,
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
  [84] = 11,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    ACTIONS(27), 1,
      sym_mnemonic,
    ACTIONS(29), 1,
      sym__IDENTIFIER,
    STATE(30), 1,
      sym_directive,
    STATE(31), 1,
      sym_ins,
    STATE(32), 1,
      sym_label,
    STATE(33), 1,
      sym_section,
    STATE(41), 1,
      sym_identifier,
    STATE(42), 1,
      sym_label_name,
    ACTIONS(23), 2,
      anon_sym_LF,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_DOTtext,
      anon_sym_DOTdata,
      anon_sym_DOTwodata,
  [121] = 12,
    ACTIONS(27), 1,
      sym_mnemonic,
    ACTIONS(29), 1,
      sym__IDENTIFIER,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(33), 1,
      anon_sym_LF,
    ACTIONS(35), 1,
      sym_comment,
    STATE(25), 1,
      sym_directive,
    STATE(31), 1,
      sym_ins,
    STATE(32), 1,
      sym_label,
    STATE(33), 1,
      sym_section,
    STATE(41), 1,
      sym_identifier,
    STATE(42), 1,
      sym_label_name,
    ACTIONS(25), 3,
      anon_sym_DOTtext,
      anon_sym_DOTdata,
      anon_sym_DOTwodata,
  [160] = 10,
    ACTIONS(29), 1,
      sym__IDENTIFIER,
    ACTIONS(37), 1,
      sym_comment,
    ACTIONS(41), 1,
      sym_mnemonic,
    STATE(11), 1,
      sym_directive,
    STATE(31), 1,
      sym_ins,
    STATE(32), 1,
      sym_label,
    STATE(33), 1,
      sym_section,
    STATE(41), 1,
      sym_identifier,
    STATE(42), 1,
      sym_label_name,
    ACTIONS(39), 3,
      anon_sym_DOTtext,
      anon_sym_DOTdata,
      anon_sym_DOTwodata,
  [193] = 4,
    ACTIONS(43), 1,
      ts_builtin_sym_end,
    ACTIONS(47), 1,
      anon_sym_LT,
    STATE(22), 1,
      sym_literal_offset,
    ACTIONS(45), 3,
      anon_sym_LF,
      sym_comment,
      anon_sym_,
  [208] = 4,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
    ACTIONS(53), 1,
      anon_sym_,
    STATE(8), 1,
      aux_sym_operand_args_repeat1,
    ACTIONS(51), 2,
      anon_sym_LF,
      sym_comment,
  [222] = 4,
    ACTIONS(56), 1,
      ts_builtin_sym_end,
    ACTIONS(60), 1,
      anon_sym_,
    STATE(10), 1,
      aux_sym_operand_args_repeat1,
    ACTIONS(58), 2,
      anon_sym_LF,
      sym_comment,
  [236] = 4,
    ACTIONS(60), 1,
      anon_sym_,
    ACTIONS(62), 1,
      ts_builtin_sym_end,
    STATE(8), 1,
      aux_sym_operand_args_repeat1,
    ACTIONS(64), 2,
      anon_sym_LF,
      sym_comment,
  [250] = 4,
    ACTIONS(66), 1,
      ts_builtin_sym_end,
    ACTIONS(68), 1,
      anon_sym_LF,
    ACTIONS(70), 1,
      sym_comment,
    STATE(29), 1,
      aux_sym_source_file_repeat1,
  [263] = 2,
    ACTIONS(72), 1,
      ts_builtin_sym_end,
    ACTIONS(74), 3,
      anon_sym_LF,
      sym_comment,
      anon_sym_,
  [272] = 2,
    ACTIONS(76), 1,
      ts_builtin_sym_end,
    ACTIONS(78), 3,
      anon_sym_LF,
      sym_comment,
      anon_sym_,
  [281] = 4,
    ACTIONS(80), 1,
      sym_escape_sequence,
    ACTIONS(82), 1,
      anon_sym_DQUOTE,
    ACTIONS(84), 1,
      aux_sym_string_literal_token1,
    STATE(19), 1,
      aux_sym_string_literal_repeat1,
  [294] = 3,
    ACTIONS(86), 1,
      aux_sym__hex_literal_token1,
    STATE(44), 1,
      sym__hex_literal,
    ACTIONS(88), 2,
      aux_sym__hex_literal_token2,
      aux_sym__hex_literal_token3,
  [305] = 2,
    ACTIONS(90), 1,
      ts_builtin_sym_end,
    ACTIONS(92), 3,
      anon_sym_LF,
      sym_comment,
      anon_sym_,
  [314] = 4,
    ACTIONS(94), 1,
      sym_escape_sequence,
    ACTIONS(96), 1,
      anon_sym_DQUOTE,
    ACTIONS(98), 1,
      aux_sym_string_literal_token1,
    STATE(14), 1,
      aux_sym_string_literal_repeat1,
  [327] = 2,
    ACTIONS(100), 1,
      ts_builtin_sym_end,
    ACTIONS(102), 3,
      anon_sym_LF,
      sym_comment,
      anon_sym_,
  [336] = 4,
    ACTIONS(104), 1,
      sym_escape_sequence,
    ACTIONS(107), 1,
      anon_sym_DQUOTE,
    ACTIONS(109), 1,
      aux_sym_string_literal_token1,
    STATE(19), 1,
      aux_sym_string_literal_repeat1,
  [349] = 2,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
    ACTIONS(51), 3,
      anon_sym_LF,
      sym_comment,
      anon_sym_,
  [358] = 2,
    ACTIONS(112), 1,
      ts_builtin_sym_end,
    ACTIONS(114), 3,
      anon_sym_LF,
      sym_comment,
      anon_sym_,
  [367] = 2,
    ACTIONS(116), 1,
      ts_builtin_sym_end,
    ACTIONS(118), 3,
      anon_sym_LF,
      sym_comment,
      anon_sym_,
  [376] = 2,
    ACTIONS(120), 1,
      ts_builtin_sym_end,
    ACTIONS(122), 3,
      anon_sym_LF,
      sym_comment,
      anon_sym_,
  [385] = 3,
    ACTIONS(68), 1,
      anon_sym_LF,
    ACTIONS(124), 1,
      ts_builtin_sym_end,
    STATE(26), 1,
      aux_sym_source_file_repeat1,
  [395] = 2,
    ACTIONS(128), 1,
      sym_comment,
    ACTIONS(126), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [403] = 3,
    ACTIONS(126), 1,
      ts_builtin_sym_end,
    ACTIONS(130), 1,
      anon_sym_LF,
    STATE(26), 1,
      aux_sym_source_file_repeat1,
  [413] = 3,
    ACTIONS(68), 1,
      anon_sym_LF,
    ACTIONS(133), 1,
      ts_builtin_sym_end,
    STATE(24), 1,
      aux_sym_source_file_repeat1,
  [423] = 2,
    ACTIONS(137), 1,
      sym_comment,
    ACTIONS(135), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [431] = 3,
    ACTIONS(68), 1,
      anon_sym_LF,
    ACTIONS(133), 1,
      ts_builtin_sym_end,
    STATE(26), 1,
      aux_sym_source_file_repeat1,
  [441] = 2,
    ACTIONS(141), 1,
      sym_comment,
    ACTIONS(139), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [449] = 2,
    ACTIONS(145), 1,
      sym_comment,
    ACTIONS(143), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [457] = 2,
    ACTIONS(145), 1,
      sym_comment,
    ACTIONS(143), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [465] = 2,
    ACTIONS(145), 1,
      sym_comment,
    ACTIONS(143), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [473] = 2,
    ACTIONS(149), 1,
      sym_comment,
    ACTIONS(147), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [481] = 3,
    ACTIONS(66), 1,
      ts_builtin_sym_end,
    ACTIONS(68), 1,
      anon_sym_LF,
    STATE(29), 1,
      aux_sym_source_file_repeat1,
  [491] = 1,
    ACTIONS(126), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [496] = 1,
    ACTIONS(151), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [501] = 2,
    ACTIONS(153), 1,
      anon_sym_PLUS,
    ACTIONS(155), 1,
      anon_sym_GT,
  [508] = 1,
    ACTIONS(157), 1,
      ts_builtin_sym_end,
  [512] = 1,
    ACTIONS(159), 1,
      sym__IDENTIFIER,
  [516] = 1,
    ACTIONS(161), 1,
      aux_sym_label_token1,
  [520] = 1,
    ACTIONS(163), 1,
      aux_sym_label_token1,
  [524] = 1,
    ACTIONS(165), 1,
      aux_sym_label_token1,
  [528] = 1,
    ACTIONS(167), 1,
      anon_sym_GT,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 46,
  [SMALL_STATE(4)] = 84,
  [SMALL_STATE(5)] = 121,
  [SMALL_STATE(6)] = 160,
  [SMALL_STATE(7)] = 193,
  [SMALL_STATE(8)] = 208,
  [SMALL_STATE(9)] = 222,
  [SMALL_STATE(10)] = 236,
  [SMALL_STATE(11)] = 250,
  [SMALL_STATE(12)] = 263,
  [SMALL_STATE(13)] = 272,
  [SMALL_STATE(14)] = 281,
  [SMALL_STATE(15)] = 294,
  [SMALL_STATE(16)] = 305,
  [SMALL_STATE(17)] = 314,
  [SMALL_STATE(18)] = 327,
  [SMALL_STATE(19)] = 336,
  [SMALL_STATE(20)] = 349,
  [SMALL_STATE(21)] = 358,
  [SMALL_STATE(22)] = 367,
  [SMALL_STATE(23)] = 376,
  [SMALL_STATE(24)] = 385,
  [SMALL_STATE(25)] = 395,
  [SMALL_STATE(26)] = 403,
  [SMALL_STATE(27)] = 413,
  [SMALL_STATE(28)] = 423,
  [SMALL_STATE(29)] = 431,
  [SMALL_STATE(30)] = 441,
  [SMALL_STATE(31)] = 449,
  [SMALL_STATE(32)] = 457,
  [SMALL_STATE(33)] = 465,
  [SMALL_STATE(34)] = 473,
  [SMALL_STATE(35)] = 481,
  [SMALL_STATE(36)] = 491,
  [SMALL_STATE(37)] = 496,
  [SMALL_STATE(38)] = 501,
  [SMALL_STATE(39)] = 508,
  [SMALL_STATE(40)] = 512,
  [SMALL_STATE(41)] = 516,
  [SMALL_STATE(42)] = 520,
  [SMALL_STATE(43)] = 524,
  [SMALL_STATE(44)] = 528,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ins, 1),
  [7] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ins, 1),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 2),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 2),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_literal, 1),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_literal, 1),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_operand_args_repeat1, 2),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_operand_args_repeat1, 2),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_operand_args_repeat1, 2), SHIFT_REPEAT(3),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operand_args, 1),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operand_args, 1),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operand_args, 2),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operand_args, 2),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_offset, 3),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_offset, 3),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operand, 1),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operand, 1),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operand_ident, 1),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operand_ident, 1),
  [104] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(19),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(19),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_offset, 5),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_offset, 5),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_literal, 2),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_literal, 2),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 2),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 4),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [130] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(5),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ins, 2),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ins, 2),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 3),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 3),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 1),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 1),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 1),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section, 1),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 3),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [157] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_name, 1),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
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
