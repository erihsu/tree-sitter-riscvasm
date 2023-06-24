#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 49
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 53
#define ALIAS_COUNT 0
#define TOKEN_COUNT 31
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum {
  aux_sym_source_file_token1 = 1,
  anon_sym_LF = 2,
  sym_comment = 3,
  sym_builtin_kw = 4,
  anon_sym_DOTtext = 5,
  anon_sym_DOTdata = 6,
  anon_sym_DOTrodata = 7,
  anon_sym_DOTbss = 8,
  aux_sym_label_token1 = 9,
  anon_sym_COMMA = 10,
  sym_register = 11,
  sym_escape_sequence = 12,
  anon_sym_DQUOTE = 13,
  aux_sym_string_literal_token1 = 14,
  anon_sym_LT = 15,
  anon_sym_PLUS = 16,
  anon_sym_GT = 17,
  aux_sym__decimal_literal_token1 = 18,
  aux_sym__decimal_literal_token2 = 19,
  aux_sym__decimal_literal_token3 = 20,
  aux_sym__hex_literal_token1 = 21,
  aux_sym__hex_literal_token2 = 22,
  aux_sym__hex_literal_token3 = 23,
  aux_sym__octal_literal_token1 = 24,
  aux_sym__octal_literal_token2 = 25,
  aux_sym__binary_literal_token1 = 26,
  aux_sym__binary_literal_token2 = 27,
  sym_mnemonic = 28,
  sym__IDENTIFIER = 29,
  sym__DELIMITER = 30,
  sym_source_file = 31,
  sym_directive = 32,
  sym_decl = 33,
  sym_section = 34,
  sym_section_name = 35,
  sym_label = 36,
  sym_label_name = 37,
  sym_ins = 38,
  sym_operand_args = 39,
  sym_operand = 40,
  sym_operand_ident = 41,
  sym_string_literal = 42,
  sym_integer_literal = 43,
  sym_literal_offset = 44,
  sym__decimal_literal = 45,
  sym__hex_literal = 46,
  sym__octal_literal = 47,
  sym__binary_literal = 48,
  sym_identifier = 49,
  aux_sym_source_file_repeat1 = 50,
  aux_sym_operand_args_repeat1 = 51,
  aux_sym_string_literal_repeat1 = 52,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_source_file_token1] = "source_file_token1",
  [anon_sym_LF] = "\n",
  [sym_comment] = "comment",
  [sym_builtin_kw] = "builtin_kw",
  [anon_sym_DOTtext] = ".text",
  [anon_sym_DOTdata] = ".data",
  [anon_sym_DOTrodata] = ".rodata",
  [anon_sym_DOTbss] = ".bss",
  [aux_sym_label_token1] = "label_token1",
  [anon_sym_COMMA] = ",",
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
  [sym__IDENTIFIER] = "_IDENTIFIER",
  [sym__DELIMITER] = "_DELIMITER",
  [sym_source_file] = "source_file",
  [sym_directive] = "directive",
  [sym_decl] = "decl",
  [sym_section] = "section",
  [sym_section_name] = "section_name",
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
  [sym_builtin_kw] = sym_builtin_kw,
  [anon_sym_DOTtext] = anon_sym_DOTtext,
  [anon_sym_DOTdata] = anon_sym_DOTdata,
  [anon_sym_DOTrodata] = anon_sym_DOTrodata,
  [anon_sym_DOTbss] = anon_sym_DOTbss,
  [aux_sym_label_token1] = aux_sym_label_token1,
  [anon_sym_COMMA] = anon_sym_COMMA,
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
  [sym__IDENTIFIER] = sym__IDENTIFIER,
  [sym__DELIMITER] = sym__DELIMITER,
  [sym_source_file] = sym_source_file,
  [sym_directive] = sym_directive,
  [sym_decl] = sym_decl,
  [sym_section] = sym_section,
  [sym_section_name] = sym_section_name,
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
  [sym_builtin_kw] = {
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
  [anon_sym_DOTrodata] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTbss] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_label_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_COMMA] = {
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
  [sym_decl] = {
    .visible = true,
    .named = true,
  },
  [sym_section] = {
    .visible = true,
    .named = true,
  },
  [sym_section_name] = {
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
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(34);
      if (lookahead == '"') ADVANCE(53);
      if (lookahead == '#') ADVANCE(38);
      if (lookahead == '$') ADVANCE(5);
      if (lookahead == '+') ADVANCE(57);
      if (lookahead == ',') ADVANCE(45);
      if (lookahead == '.') ADVANCE(100);
      if (lookahead == '0') ADVANCE(62);
      if (lookahead == '1') ADVANCE(63);
      if (lookahead == ':') ADVANCE(20);
      if (lookahead == ';') ADVANCE(160);
      if (lookahead == '<') ADVANCE(56);
      if (lookahead == '>') ADVANCE(58);
      if (lookahead == 'A') ADVANCE(126);
      if (lookahead == 'S') ADVANCE(85);
      if (lookahead == 'T') ADVANCE(157);
      if (lookahead == 'X') ADVANCE(88);
      if (lookahead == '\\') ADVANCE(7);
      if (lookahead == '_') ADVANCE(155);
      if (lookahead == 'a') ADVANCE(107);
      if (lookahead == 'b') ADVANCE(113);
      if (lookahead == 'd') ADVANCE(125);
      if (lookahead == 'e') ADVANCE(101);
      if (lookahead == 'g') ADVANCE(141);
      if (lookahead == 'h') ADVANCE(90);
      if (lookahead == 'j') ADVANCE(97);
      if (lookahead == 'l') ADVANCE(102);
      if (lookahead == 'o') ADVANCE(144);
      if (lookahead == 'r') ADVANCE(89);
      if (lookahead == 's') ADVANCE(84);
      if (lookahead == 't') ADVANCE(158);
      if (lookahead == 'w') ADVANCE(139);
      if (lookahead == 'x') ADVANCE(87);
      if (lookahead == 'z') ADVANCE(118);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(65);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(64);
      if (('B' <= lookahead && lookahead <= 'F') ||
          ('c' <= lookahead && lookahead <= 'f')) ADVANCE(127);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('i' <= lookahead && lookahead <= 'y')) ADVANCE(159);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(3)
      if (lookahead == '"') ADVANCE(53);
      if (lookahead == '\\') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(54);
      if (lookahead != 0) ADVANCE(55);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(53);
      if (lookahead == '$') ADVANCE(5);
      if (lookahead == '0') ADVANCE(62);
      if (lookahead == '1') ADVANCE(63);
      if (lookahead == 'S') ADVANCE(85);
      if (lookahead == 'T') ADVANCE(157);
      if (lookahead == '_') ADVANCE(155);
      if (lookahead == 'g') ADVANCE(141);
      if (lookahead == 'r') ADVANCE(89);
      if (lookahead == 's') ADVANCE(86);
      if (lookahead == 't') ADVANCE(158);
      if (lookahead == 'z') ADVANCE(118);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(126);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(88);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(65);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(64);
      if (('B' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(127);
      if (lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('h' <= lookahead && lookahead <= 'y')) ADVANCE(159);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(53);
      if (lookahead == '\\') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(38);
      if (lookahead == '.') ADVANCE(100);
      if (lookahead == 'a') ADVANCE(108);
      if (lookahead == 'b') ADVANCE(117);
      if (lookahead == 'e') ADVANCE(105);
      if (lookahead == 'j') ADVANCE(97);
      if (lookahead == 'l') ADVANCE(103);
      if (lookahead == 'o') ADVANCE(144);
      if (lookahead == 's') ADVANCE(156);
      if (lookahead == 'x') ADVANCE(137);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 5:
      if (lookahead == '0') ADVANCE(23);
      END_STATE();
    case 6:
      if (lookahead == ':') ADVANCE(20);
      if (lookahead == 'd') ADVANCE(18);
      if (lookahead == 'h') ADVANCE(8);
      if (lookahead == 'l') ADVANCE(15);
      if (lookahead == 'w') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      END_STATE();
    case 7:
      if (lookahead == 'U') ADVANCE(31);
      if (lookahead == 'u') ADVANCE(27);
      if (lookahead == 'x') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
      if (lookahead != 0) ADVANCE(50);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(13);
      END_STATE();
    case 9:
      if (lookahead == 'd') ADVANCE(39);
      END_STATE();
    case 10:
      if (lookahead == 'f') ADVANCE(39);
      END_STATE();
    case 11:
      if (lookahead == 'g') ADVANCE(39);
      END_STATE();
    case 12:
      if (lookahead == 'h') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == 'l') ADVANCE(10);
      END_STATE();
    case 14:
      if (lookahead == 'n') ADVANCE(11);
      END_STATE();
    case 15:
      if (lookahead == 'o') ADVANCE(14);
      END_STATE();
    case 16:
      if (lookahead == 'o') ADVANCE(17);
      END_STATE();
    case 17:
      if (lookahead == 'r') ADVANCE(9);
      END_STATE();
    case 18:
      if (lookahead == 'w') ADVANCE(16);
      END_STATE();
    case 19:
      if (lookahead == 'b' ||
          lookahead == 'y') ADVANCE(73);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(19);
      END_STATE();
    case 20:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(44);
      END_STATE();
    case 21:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 22:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(50);
      END_STATE();
    case 23:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(68);
      END_STATE();
    case 24:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(69);
      END_STATE();
    case 25:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(22);
      END_STATE();
    case 26:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(25);
      END_STATE();
    case 27:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(26);
      END_STATE();
    case 28:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(27);
      END_STATE();
    case 29:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(28);
      END_STATE();
    case 30:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(29);
      END_STATE();
    case 31:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(30);
      END_STATE();
    case 32:
      if (eof) ADVANCE(34);
      if (lookahead == '\n') ADVANCE(36);
      if (lookahead == '#') ADVANCE(38);
      if (lookahead == '.') ADVANCE(100);
      if (lookahead == 'a') ADVANCE(108);
      if (lookahead == 'b') ADVANCE(117);
      if (lookahead == 'e') ADVANCE(105);
      if (lookahead == 'j') ADVANCE(97);
      if (lookahead == 'l') ADVANCE(103);
      if (lookahead == 'o') ADVANCE(144);
      if (lookahead == 's') ADVANCE(156);
      if (lookahead == 'x') ADVANCE(137);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(32)
      if (('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 33:
      if (eof) ADVANCE(34);
      if (lookahead == '\n') ADVANCE(37);
      if (lookahead == '#') ADVANCE(38);
      if (lookahead == ',') ADVANCE(45);
      if (lookahead == '<') ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(33)
      END_STATE();
    case 34:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_source_file_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(36);
      if (lookahead == 'a') ADVANCE(108);
      if (lookahead == 'b') ADVANCE(117);
      if (lookahead == 'e') ADVANCE(105);
      if (lookahead == 'j') ADVANCE(97);
      if (lookahead == 'l') ADVANCE(103);
      if (lookahead == 'o') ADVANCE(144);
      if (lookahead == 's') ADVANCE(156);
      if (lookahead == 'x') ADVANCE(137);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(38);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_builtin_kw);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_DOTtext);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_DOTdata);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_DOTrodata);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_DOTbss);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(44);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_register);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'h') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(127);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(46);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_register);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
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
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(12);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym__decimal_literal_token1);
      if (lookahead == 'h') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(12);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym__decimal_literal_token2);
      if (lookahead == 'h') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(61);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(12);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym__decimal_literal_token3);
      if (lookahead == '_') ADVANCE(19);
      if (lookahead == 'b') ADVANCE(74);
      if (lookahead == 'd') ADVANCE(59);
      if (lookahead == 'h') ADVANCE(67);
      if (lookahead == 'x') ADVANCE(24);
      if (lookahead == 'y') ADVANCE(76);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(71);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(63);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(65);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(64);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(12);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym__decimal_literal_token3);
      if (lookahead == '_') ADVANCE(19);
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
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(12);
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
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(12);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym__decimal_literal_token3);
      if (lookahead == 'd') ADVANCE(60);
      if (lookahead == 'h') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(65);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(12);
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
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(12);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym__binary_literal_token1);
      if (lookahead == 'h') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(12);
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
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(12);
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
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == '1') ADVANCE(48);
      if (lookahead == 'b' ||
          lookahead == 'h' ||
          lookahead == 'w') ADVANCE(79);
      if (lookahead == 'l') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'p') ADVANCE(46);
      if (lookahead == 'r') ADVANCE(91);
      if (lookahead == 'u') ADVANCE(104);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == '1') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == '1') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'p') ADVANCE(46);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == '1') ADVANCE(49);
      if (lookahead == '2') ADVANCE(49);
      if (lookahead == '3') ADVANCE(48);
      if (lookahead == 'o') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == '1') ADVANCE(49);
      if (lookahead == '2') ADVANCE(49);
      if (lookahead == '3') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'a') ADVANCE(46);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'a') ADVANCE(133);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'a') ADVANCE(81);
      if (lookahead == 'l') ADVANCE(81);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'a') ADVANCE(122);
      if (lookahead == 'h') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(127);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'a') ADVANCE(41);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'a') ADVANCE(130);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'a') ADVANCE(42);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'a') ADVANCE(152);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'a') ADVANCE(134);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'a') ADVANCE(135);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'a') ADVANCE(153);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'b') ADVANCE(149);
      if (lookahead == 'd') ADVANCE(96);
      if (lookahead == 'r') ADVANCE(140);
      if (lookahead == 't') ADVANCE(116);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'b') ADVANCE(124);
      if (lookahead == 'c') ADVANCE(92);
      if (lookahead == 'h') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(127);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'b') ADVANCE(83);
      if (lookahead == 'h') ADVANCE(83);
      if (lookahead == 'o') ADVANCE(136);
      if (lookahead == 'u') ADVANCE(128);
      if (lookahead == 'w') ADVANCE(79);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'b') ADVANCE(83);
      if (lookahead == 'h') ADVANCE(83);
      if (lookahead == 'u') ADVANCE(128);
      if (lookahead == 'w') ADVANCE(79);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'b') ADVANCE(79);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'b') ADVANCE(147);
      if (lookahead == 'c') ADVANCE(98);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'c') ADVANCE(79);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'd') ADVANCE(109);
      if (lookahead == 'h') ADVANCE(66);
      if (lookahead == 'n') ADVANCE(110);
      if (lookahead == 'u') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(47);
      if (lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(127);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'd') ADVANCE(110);
      if (lookahead == 'n') ADVANCE(110);
      if (lookahead == 'u') ADVANCE(129);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'd') ADVANCE(81);
      if (lookahead == 'h') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(127);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'd') ADVANCE(81);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'd') ADVANCE(39);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'd') ADVANCE(99);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'e') ADVANCE(123);
      if (lookahead == 'g') ADVANCE(114);
      if (lookahead == 'h') ADVANCE(66);
      if (lookahead == 'l') ADVANCE(150);
      if (lookahead == 'n') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(127);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('i' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'e') ADVANCE(83);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'e') ADVANCE(79);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'e') ADVANCE(154);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'e') ADVANCE(143);
      if (lookahead == 'g') ADVANCE(114);
      if (lookahead == 'l') ADVANCE(150);
      if (lookahead == 'n') ADVANCE(115);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'e') ADVANCE(145);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'e') ADVANCE(94);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'f') ADVANCE(39);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'g') ADVANCE(39);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'h') ADVANCE(66);
      if (lookahead == 'l') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(127);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'h') ADVANCE(66);
      if (lookahead == 'q') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(127);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'h') ADVANCE(66);
      if (lookahead == 'r') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(127);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'h') ADVANCE(66);
      if (lookahead == 'w') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(127);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'h') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(47);
      if (lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(127);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'h') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(127);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'i') ADVANCE(79);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'i') ADVANCE(142);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'k') ADVANCE(79);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'l') ADVANCE(79);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'l') ADVANCE(81);
      if (lookahead == 't') ADVANCE(80);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'l') ADVANCE(120);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'l') ADVANCE(82);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'l') ADVANCE(131);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'n') ADVANCE(121);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'o') ADVANCE(144);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'o') ADVANCE(46);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'o') ADVANCE(146);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'o') ADVANCE(112);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'p') ADVANCE(46);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'p') ADVANCE(106);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'q') ADVANCE(79);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'r') ADVANCE(81);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'r') ADVANCE(138);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'r') ADVANCE(111);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'r') ADVANCE(119);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 's') ADVANCE(43);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 's') ADVANCE(148);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 't') ADVANCE(83);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 't') ADVANCE(40);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 't') ADVANCE(93);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 't') ADVANCE(95);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'x') ADVANCE(151);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'b' ||
          lookahead == 'y') ADVANCE(73);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(155);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('2' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'b' ||
          lookahead == 'h' ||
          lookahead == 'w') ADVANCE(79);
      if (lookahead == 'l') ADVANCE(132);
      if (lookahead == 'r') ADVANCE(91);
      if (lookahead == 'u') ADVANCE(104);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (('0' <= lookahead && lookahead <= '6')) ADVANCE(46);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('7' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (('0' <= lookahead && lookahead <= '6') ||
          lookahead == 'p') ADVANCE(46);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('7' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym__DELIMITER);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 35},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 32},
  [5] = {.lex_state = 32},
  [6] = {.lex_state = 4},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 33},
  [9] = {.lex_state = 33},
  [10] = {.lex_state = 33},
  [11] = {.lex_state = 33},
  [12] = {.lex_state = 33},
  [13] = {.lex_state = 33},
  [14] = {.lex_state = 33},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 33},
  [18] = {.lex_state = 33},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 33},
  [21] = {.lex_state = 33},
  [22] = {.lex_state = 33},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 33},
  [25] = {.lex_state = 33},
  [26] = {.lex_state = 33},
  [27] = {.lex_state = 33},
  [28] = {.lex_state = 33},
  [29] = {.lex_state = 33},
  [30] = {.lex_state = 33},
  [31] = {.lex_state = 33},
  [32] = {.lex_state = 33},
  [33] = {.lex_state = 33},
  [34] = {.lex_state = 33},
  [35] = {.lex_state = 33},
  [36] = {.lex_state = 33},
  [37] = {.lex_state = 33},
  [38] = {.lex_state = 33},
  [39] = {.lex_state = 33},
  [40] = {.lex_state = 33},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 6},
  [43] = {.lex_state = 6},
  [44] = {.lex_state = 33},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 21},
  [48] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_builtin_kw] = ACTIONS(1),
    [anon_sym_DOTtext] = ACTIONS(1),
    [anon_sym_DOTdata] = ACTIONS(1),
    [anon_sym_DOTrodata] = ACTIONS(1),
    [anon_sym_DOTbss] = ACTIONS(1),
    [aux_sym_label_token1] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
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
    [sym__IDENTIFIER] = ACTIONS(1),
    [sym__DELIMITER] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(45),
    [aux_sym_source_file_token1] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(5), 1,
      sym_register,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 1,
      sym__IDENTIFIER,
    STATE(9), 1,
      sym_operand,
    STATE(30), 1,
      sym_operand_args,
    ACTIONS(11), 3,
      aux_sym__hex_literal_token2,
      aux_sym__hex_literal_token3,
      aux_sym__octal_literal_token2,
    STATE(18), 3,
      sym_operand_ident,
      sym_string_literal,
      sym_integer_literal,
    STATE(8), 4,
      sym__decimal_literal,
      sym__hex_literal,
      sym__octal_literal,
      sym__binary_literal,
    ACTIONS(9), 7,
      aux_sym__decimal_literal_token1,
      aux_sym__decimal_literal_token2,
      aux_sym__decimal_literal_token3,
      aux_sym__hex_literal_token1,
      aux_sym__octal_literal_token1,
      aux_sym__binary_literal_token1,
      aux_sym__binary_literal_token2,
  [41] = 8,
    ACTIONS(5), 1,
      sym_register,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 1,
      sym__IDENTIFIER,
    STATE(21), 1,
      sym_operand,
    ACTIONS(11), 3,
      aux_sym__hex_literal_token2,
      aux_sym__hex_literal_token3,
      aux_sym__octal_literal_token2,
    STATE(18), 3,
      sym_operand_ident,
      sym_string_literal,
      sym_integer_literal,
    STATE(8), 4,
      sym__decimal_literal,
      sym__hex_literal,
      sym__octal_literal,
      sym__binary_literal,
    ACTIONS(9), 7,
      aux_sym__decimal_literal_token1,
      aux_sym__decimal_literal_token2,
      aux_sym__decimal_literal_token3,
      aux_sym__hex_literal_token1,
      aux_sym__octal_literal_token1,
      aux_sym__binary_literal_token1,
      aux_sym__binary_literal_token2,
  [79] = 13,
    ACTIONS(15), 1,
      ts_builtin_sym_end,
    ACTIONS(21), 1,
      sym_mnemonic,
    ACTIONS(23), 1,
      sym__IDENTIFIER,
    STATE(33), 1,
      sym_ins,
    STATE(34), 1,
      sym_decl,
    STATE(35), 1,
      sym_section,
    STATE(36), 1,
      sym_section_name,
    STATE(37), 1,
      sym_directive,
    STATE(39), 1,
      sym_label,
    STATE(43), 1,
      sym_identifier,
    STATE(46), 1,
      sym_label_name,
    ACTIONS(17), 2,
      anon_sym_LF,
      sym_comment,
    ACTIONS(19), 4,
      anon_sym_DOTtext,
      anon_sym_DOTdata,
      anon_sym_DOTrodata,
      anon_sym_DOTbss,
  [123] = 14,
    ACTIONS(21), 1,
      sym_mnemonic,
    ACTIONS(23), 1,
      sym__IDENTIFIER,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    ACTIONS(27), 1,
      anon_sym_LF,
    ACTIONS(29), 1,
      sym_comment,
    STATE(28), 1,
      sym_directive,
    STATE(33), 1,
      sym_ins,
    STATE(34), 1,
      sym_decl,
    STATE(35), 1,
      sym_section,
    STATE(36), 1,
      sym_section_name,
    STATE(39), 1,
      sym_label,
    STATE(43), 1,
      sym_identifier,
    STATE(46), 1,
      sym_label_name,
    ACTIONS(19), 4,
      anon_sym_DOTtext,
      anon_sym_DOTdata,
      anon_sym_DOTrodata,
      anon_sym_DOTbss,
  [169] = 12,
    ACTIONS(23), 1,
      sym__IDENTIFIER,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(35), 1,
      sym_mnemonic,
    STATE(22), 1,
      sym_directive,
    STATE(33), 1,
      sym_ins,
    STATE(34), 1,
      sym_decl,
    STATE(35), 1,
      sym_section,
    STATE(36), 1,
      sym_section_name,
    STATE(39), 1,
      sym_label,
    STATE(43), 1,
      sym_identifier,
    STATE(46), 1,
      sym_label_name,
    ACTIONS(33), 4,
      anon_sym_DOTtext,
      anon_sym_DOTdata,
      anon_sym_DOTrodata,
      anon_sym_DOTbss,
  [209] = 4,
    STATE(38), 1,
      sym_integer_literal,
    ACTIONS(11), 3,
      aux_sym__hex_literal_token2,
      aux_sym__hex_literal_token3,
      aux_sym__octal_literal_token2,
    STATE(8), 4,
      sym__decimal_literal,
      sym__hex_literal,
      sym__octal_literal,
      sym__binary_literal,
    ACTIONS(9), 7,
      aux_sym__decimal_literal_token1,
      aux_sym__decimal_literal_token2,
      aux_sym__decimal_literal_token3,
      aux_sym__hex_literal_token1,
      aux_sym__octal_literal_token1,
      aux_sym__binary_literal_token1,
      aux_sym__binary_literal_token2,
  [233] = 4,
    ACTIONS(41), 1,
      anon_sym_LT,
    STATE(12), 1,
      sym_literal_offset,
    ACTIONS(37), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(39), 2,
      sym_comment,
      anon_sym_COMMA,
  [248] = 4,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(47), 1,
      anon_sym_COMMA,
    STATE(11), 1,
      aux_sym_operand_args_repeat1,
    ACTIONS(43), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [262] = 4,
    ACTIONS(51), 1,
      sym_comment,
    ACTIONS(53), 1,
      anon_sym_COMMA,
    STATE(10), 1,
      aux_sym_operand_args_repeat1,
    ACTIONS(49), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [276] = 4,
    ACTIONS(47), 1,
      anon_sym_COMMA,
    ACTIONS(58), 1,
      sym_comment,
    STATE(10), 1,
      aux_sym_operand_args_repeat1,
    ACTIONS(56), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [290] = 2,
    ACTIONS(60), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(62), 2,
      sym_comment,
      anon_sym_COMMA,
  [299] = 2,
    ACTIONS(64), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(66), 2,
      sym_comment,
      anon_sym_COMMA,
  [308] = 2,
    ACTIONS(68), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(70), 2,
      sym_comment,
      anon_sym_COMMA,
  [317] = 4,
    ACTIONS(72), 1,
      sym_escape_sequence,
    ACTIONS(74), 1,
      anon_sym_DQUOTE,
    ACTIONS(76), 1,
      aux_sym_string_literal_token1,
    STATE(16), 1,
      aux_sym_string_literal_repeat1,
  [330] = 4,
    ACTIONS(78), 1,
      sym_escape_sequence,
    ACTIONS(81), 1,
      anon_sym_DQUOTE,
    ACTIONS(83), 1,
      aux_sym_string_literal_token1,
    STATE(16), 1,
      aux_sym_string_literal_repeat1,
  [343] = 2,
    ACTIONS(86), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(88), 2,
      sym_comment,
      anon_sym_COMMA,
  [352] = 2,
    ACTIONS(90), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(92), 2,
      sym_comment,
      anon_sym_COMMA,
  [361] = 4,
    ACTIONS(94), 1,
      sym_escape_sequence,
    ACTIONS(96), 1,
      anon_sym_DQUOTE,
    ACTIONS(98), 1,
      aux_sym_string_literal_token1,
    STATE(15), 1,
      aux_sym_string_literal_repeat1,
  [374] = 2,
    ACTIONS(100), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(102), 2,
      sym_comment,
      anon_sym_COMMA,
  [383] = 2,
    ACTIONS(49), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(51), 2,
      sym_comment,
      anon_sym_COMMA,
  [392] = 4,
    ACTIONS(104), 1,
      ts_builtin_sym_end,
    ACTIONS(106), 1,
      anon_sym_LF,
    ACTIONS(108), 1,
      sym_comment,
    STATE(31), 1,
      aux_sym_source_file_repeat1,
  [405] = 3,
    ACTIONS(110), 1,
      aux_sym__hex_literal_token1,
    STATE(48), 1,
      sym__hex_literal,
    ACTIONS(112), 2,
      aux_sym__hex_literal_token2,
      aux_sym__hex_literal_token3,
  [416] = 2,
    ACTIONS(114), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(116), 2,
      sym_comment,
      anon_sym_COMMA,
  [425] = 3,
    ACTIONS(106), 1,
      anon_sym_LF,
    ACTIONS(118), 1,
      ts_builtin_sym_end,
    STATE(26), 1,
      aux_sym_source_file_repeat1,
  [435] = 3,
    ACTIONS(106), 1,
      anon_sym_LF,
    ACTIONS(120), 1,
      ts_builtin_sym_end,
    STATE(29), 1,
      aux_sym_source_file_repeat1,
  [445] = 3,
    ACTIONS(104), 1,
      ts_builtin_sym_end,
    ACTIONS(106), 1,
      anon_sym_LF,
    STATE(31), 1,
      aux_sym_source_file_repeat1,
  [455] = 2,
    ACTIONS(124), 1,
      sym_comment,
    ACTIONS(122), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [463] = 3,
    ACTIONS(122), 1,
      ts_builtin_sym_end,
    ACTIONS(126), 1,
      anon_sym_LF,
    STATE(29), 1,
      aux_sym_source_file_repeat1,
  [473] = 2,
    ACTIONS(131), 1,
      sym_comment,
    ACTIONS(129), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [481] = 3,
    ACTIONS(106), 1,
      anon_sym_LF,
    ACTIONS(118), 1,
      ts_builtin_sym_end,
    STATE(29), 1,
      aux_sym_source_file_repeat1,
  [491] = 2,
    ACTIONS(135), 1,
      sym_comment,
    ACTIONS(133), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [499] = 2,
    ACTIONS(139), 1,
      sym_comment,
    ACTIONS(137), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [507] = 2,
    ACTIONS(139), 1,
      sym_comment,
    ACTIONS(137), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [515] = 2,
    ACTIONS(139), 1,
      sym_comment,
    ACTIONS(137), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [523] = 2,
    ACTIONS(143), 1,
      sym_comment,
    ACTIONS(141), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [531] = 2,
    ACTIONS(147), 1,
      sym_comment,
    ACTIONS(145), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [539] = 2,
    ACTIONS(151), 1,
      sym_comment,
    ACTIONS(149), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [547] = 2,
    ACTIONS(139), 1,
      sym_comment,
    ACTIONS(137), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [555] = 1,
    ACTIONS(153), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [560] = 2,
    ACTIONS(155), 1,
      anon_sym_PLUS,
    ACTIONS(157), 1,
      anon_sym_GT,
  [567] = 1,
    ACTIONS(159), 2,
      sym_builtin_kw,
      aux_sym_label_token1,
  [572] = 2,
    ACTIONS(161), 1,
      sym_builtin_kw,
    ACTIONS(163), 1,
      aux_sym_label_token1,
  [579] = 1,
    ACTIONS(122), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [584] = 1,
    ACTIONS(165), 1,
      ts_builtin_sym_end,
  [588] = 1,
    ACTIONS(167), 1,
      aux_sym_label_token1,
  [592] = 1,
    ACTIONS(169), 1,
      sym__IDENTIFIER,
  [596] = 1,
    ACTIONS(171), 1,
      anon_sym_GT,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 41,
  [SMALL_STATE(4)] = 79,
  [SMALL_STATE(5)] = 123,
  [SMALL_STATE(6)] = 169,
  [SMALL_STATE(7)] = 209,
  [SMALL_STATE(8)] = 233,
  [SMALL_STATE(9)] = 248,
  [SMALL_STATE(10)] = 262,
  [SMALL_STATE(11)] = 276,
  [SMALL_STATE(12)] = 290,
  [SMALL_STATE(13)] = 299,
  [SMALL_STATE(14)] = 308,
  [SMALL_STATE(15)] = 317,
  [SMALL_STATE(16)] = 330,
  [SMALL_STATE(17)] = 343,
  [SMALL_STATE(18)] = 352,
  [SMALL_STATE(19)] = 361,
  [SMALL_STATE(20)] = 374,
  [SMALL_STATE(21)] = 383,
  [SMALL_STATE(22)] = 392,
  [SMALL_STATE(23)] = 405,
  [SMALL_STATE(24)] = 416,
  [SMALL_STATE(25)] = 425,
  [SMALL_STATE(26)] = 435,
  [SMALL_STATE(27)] = 445,
  [SMALL_STATE(28)] = 455,
  [SMALL_STATE(29)] = 463,
  [SMALL_STATE(30)] = 473,
  [SMALL_STATE(31)] = 481,
  [SMALL_STATE(32)] = 491,
  [SMALL_STATE(33)] = 499,
  [SMALL_STATE(34)] = 507,
  [SMALL_STATE(35)] = 515,
  [SMALL_STATE(36)] = 523,
  [SMALL_STATE(37)] = 531,
  [SMALL_STATE(38)] = 539,
  [SMALL_STATE(39)] = 547,
  [SMALL_STATE(40)] = 555,
  [SMALL_STATE(41)] = 560,
  [SMALL_STATE(42)] = 567,
  [SMALL_STATE(43)] = 572,
  [SMALL_STATE(44)] = 579,
  [SMALL_STATE(45)] = 584,
  [SMALL_STATE(46)] = 588,
  [SMALL_STATE(47)] = 592,
  [SMALL_STATE(48)] = 596,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 2),
  [17] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 2),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_literal, 1),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_literal, 1),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operand_args, 1),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operand_args, 1),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_operand_args_repeat1, 2),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_operand_args_repeat1, 2),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_operand_args_repeat1, 2), SHIFT_REPEAT(3),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operand_args, 2),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operand_args, 2),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_literal, 2),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_literal, 2),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_offset, 5),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_offset, 5),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(16),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(16),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 2),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operand, 1),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operand, 1),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operand_ident, 1),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operand_ident, 1),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_offset, 3),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_offset, 3),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 4),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [126] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(5),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ins, 2),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ins, 2),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_name, 1),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section_name, 1),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 1),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 1),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 1),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section, 1),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 3),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 3),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl, 3),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl, 3),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 3),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_name, 1),
  [165] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
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
