#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 70
#define LARGE_STATE_COUNT 5
#define SYMBOL_COUNT 94
#define ALIAS_COUNT 0
#define TOKEN_COUNT 61
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum {
  aux_sym_source_file_token1 = 1,
  anon_sym_LF = 2,
  sym_comment = 3,
  anon_sym_DOT2byte = 4,
  anon_sym_DOT4byte = 5,
  anon_sym_DOT8byte = 6,
  anon_sym_DOThalf = 7,
  anon_sym_DOTword = 8,
  anon_sym_DOTdword = 9,
  anon_sym_DOTbyte = 10,
  anon_sym_DOTdtpreldword = 11,
  anon_sym_DOTdtprelword = 12,
  anon_sym_DOTsleb128 = 13,
  anon_sym_DOTuleb128 = 14,
  anon_sym_DOTasciz = 15,
  anon_sym_DOTstring = 16,
  anon_sym_DOTincbin = 17,
  anon_sym_DOTzero = 18,
  anon_sym_DOTtext = 19,
  anon_sym_DOTdata = 20,
  anon_sym_DOTrodata = 21,
  anon_sym_DOTbss = 22,
  anon_sym_DOTalign = 23,
  anon_sym_DOTbalign = 24,
  anon_sym_p2align = 25,
  anon_sym_DOTglobl = 26,
  anon_sym_DOTlocal = 27,
  anon_sym_DOTequ = 28,
  anon_sym_DOToption = 29,
  anon_sym_DOTmacro = 30,
  anon_sym_DOTendm = 31,
  anon_sym_DOTfile = 32,
  anon_sym_DOTident = 33,
  anon_sym_DOTsize = 34,
  anon_sym_DOTtype = 35,
  aux_sym_label_token1 = 36,
  anon_sym_COMMA = 37,
  sym_register = 38,
  sym_escape_sequence = 39,
  anon_sym_LPAREN = 40,
  anon_sym_RPAREN = 41,
  sym_relocation_load_store_type = 42,
  anon_sym_DQUOTE = 43,
  aux_sym_string_literal_token1 = 44,
  anon_sym_LT = 45,
  anon_sym_PLUS = 46,
  anon_sym_GT = 47,
  aux_sym__decimal_literal_token1 = 48,
  aux_sym__decimal_literal_token2 = 49,
  aux_sym__decimal_literal_token3 = 50,
  aux_sym__hex_literal_token1 = 51,
  aux_sym__hex_literal_token2 = 52,
  aux_sym__hex_literal_token3 = 53,
  aux_sym__octal_literal_token1 = 54,
  aux_sym__octal_literal_token2 = 55,
  aux_sym__binary_literal_token1 = 56,
  aux_sym__binary_literal_token2 = 57,
  sym_mnemonic = 58,
  sym__IDENTIFIER = 59,
  sym__DELIMITER = 60,
  sym_source_file = 61,
  sym_directive = 62,
  sym_decl = 63,
  sym_decl_value = 64,
  sym_builtin_kw = 65,
  sym_data_type_keyword = 66,
  sym_section = 67,
  sym_section_name = 68,
  sym_alignment = 69,
  sym_align_type = 70,
  sym_symbol_def = 71,
  sym_symbol_scope = 72,
  sym_misc_func = 73,
  sym_misc_func_type = 74,
  sym_label = 75,
  sym_label_name = 76,
  sym_ins = 77,
  sym_operand_args = 78,
  sym_operand = 79,
  sym_operand_ident = 80,
  sym_addressing = 81,
  sym_relocation_load_store = 82,
  sym_string_literal = 83,
  sym_integer_literal = 84,
  sym_literal_offset = 85,
  sym__decimal_literal = 86,
  sym__hex_literal = 87,
  sym__octal_literal = 88,
  sym__binary_literal = 89,
  sym_identifier = 90,
  aux_sym_source_file_repeat1 = 91,
  aux_sym_operand_args_repeat1 = 92,
  aux_sym_string_literal_repeat1 = 93,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_source_file_token1] = "source_file_token1",
  [anon_sym_LF] = "\n",
  [sym_comment] = "comment",
  [anon_sym_DOT2byte] = ".2byte",
  [anon_sym_DOT4byte] = ".4byte",
  [anon_sym_DOT8byte] = ".8byte",
  [anon_sym_DOThalf] = ".half",
  [anon_sym_DOTword] = ".word",
  [anon_sym_DOTdword] = ".dword",
  [anon_sym_DOTbyte] = ".byte",
  [anon_sym_DOTdtpreldword] = ".dtpreldword",
  [anon_sym_DOTdtprelword] = ".dtprelword",
  [anon_sym_DOTsleb128] = ".sleb128",
  [anon_sym_DOTuleb128] = ".uleb128",
  [anon_sym_DOTasciz] = ".asciz",
  [anon_sym_DOTstring] = ".string",
  [anon_sym_DOTincbin] = ".incbin",
  [anon_sym_DOTzero] = ".zero",
  [anon_sym_DOTtext] = ".text",
  [anon_sym_DOTdata] = ".data",
  [anon_sym_DOTrodata] = ".rodata",
  [anon_sym_DOTbss] = ".bss",
  [anon_sym_DOTalign] = ".align",
  [anon_sym_DOTbalign] = ".balign",
  [anon_sym_p2align] = "p2align",
  [anon_sym_DOTglobl] = ".globl",
  [anon_sym_DOTlocal] = ".local",
  [anon_sym_DOTequ] = ".equ",
  [anon_sym_DOToption] = ".option",
  [anon_sym_DOTmacro] = ".macro",
  [anon_sym_DOTendm] = ".endm",
  [anon_sym_DOTfile] = ".file",
  [anon_sym_DOTident] = ".ident",
  [anon_sym_DOTsize] = ".size",
  [anon_sym_DOTtype] = ".type",
  [aux_sym_label_token1] = "label_token1",
  [anon_sym_COMMA] = ",",
  [sym_register] = "register",
  [sym_escape_sequence] = "escape_sequence",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_relocation_load_store_type] = "relocation_load_store_type",
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
  [sym_decl_value] = "decl_value",
  [sym_builtin_kw] = "builtin_kw",
  [sym_data_type_keyword] = "data_type_keyword",
  [sym_section] = "section",
  [sym_section_name] = "section_name",
  [sym_alignment] = "alignment",
  [sym_align_type] = "align_type",
  [sym_symbol_def] = "symbol_def",
  [sym_symbol_scope] = "symbol_scope",
  [sym_misc_func] = "misc_func",
  [sym_misc_func_type] = "misc_func_type",
  [sym_label] = "label",
  [sym_label_name] = "label_name",
  [sym_ins] = "ins",
  [sym_operand_args] = "operand_args",
  [sym_operand] = "operand",
  [sym_operand_ident] = "operand_ident",
  [sym_addressing] = "addressing",
  [sym_relocation_load_store] = "relocation_load_store",
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
  [anon_sym_DOT2byte] = anon_sym_DOT2byte,
  [anon_sym_DOT4byte] = anon_sym_DOT4byte,
  [anon_sym_DOT8byte] = anon_sym_DOT8byte,
  [anon_sym_DOThalf] = anon_sym_DOThalf,
  [anon_sym_DOTword] = anon_sym_DOTword,
  [anon_sym_DOTdword] = anon_sym_DOTdword,
  [anon_sym_DOTbyte] = anon_sym_DOTbyte,
  [anon_sym_DOTdtpreldword] = anon_sym_DOTdtpreldword,
  [anon_sym_DOTdtprelword] = anon_sym_DOTdtprelword,
  [anon_sym_DOTsleb128] = anon_sym_DOTsleb128,
  [anon_sym_DOTuleb128] = anon_sym_DOTuleb128,
  [anon_sym_DOTasciz] = anon_sym_DOTasciz,
  [anon_sym_DOTstring] = anon_sym_DOTstring,
  [anon_sym_DOTincbin] = anon_sym_DOTincbin,
  [anon_sym_DOTzero] = anon_sym_DOTzero,
  [anon_sym_DOTtext] = anon_sym_DOTtext,
  [anon_sym_DOTdata] = anon_sym_DOTdata,
  [anon_sym_DOTrodata] = anon_sym_DOTrodata,
  [anon_sym_DOTbss] = anon_sym_DOTbss,
  [anon_sym_DOTalign] = anon_sym_DOTalign,
  [anon_sym_DOTbalign] = anon_sym_DOTbalign,
  [anon_sym_p2align] = anon_sym_p2align,
  [anon_sym_DOTglobl] = anon_sym_DOTglobl,
  [anon_sym_DOTlocal] = anon_sym_DOTlocal,
  [anon_sym_DOTequ] = anon_sym_DOTequ,
  [anon_sym_DOToption] = anon_sym_DOToption,
  [anon_sym_DOTmacro] = anon_sym_DOTmacro,
  [anon_sym_DOTendm] = anon_sym_DOTendm,
  [anon_sym_DOTfile] = anon_sym_DOTfile,
  [anon_sym_DOTident] = anon_sym_DOTident,
  [anon_sym_DOTsize] = anon_sym_DOTsize,
  [anon_sym_DOTtype] = anon_sym_DOTtype,
  [aux_sym_label_token1] = aux_sym_label_token1,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [sym_register] = sym_register,
  [sym_escape_sequence] = sym_escape_sequence,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_relocation_load_store_type] = sym_relocation_load_store_type,
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
  [sym_decl_value] = sym_decl_value,
  [sym_builtin_kw] = sym_builtin_kw,
  [sym_data_type_keyword] = sym_data_type_keyword,
  [sym_section] = sym_section,
  [sym_section_name] = sym_section_name,
  [sym_alignment] = sym_alignment,
  [sym_align_type] = sym_align_type,
  [sym_symbol_def] = sym_symbol_def,
  [sym_symbol_scope] = sym_symbol_scope,
  [sym_misc_func] = sym_misc_func,
  [sym_misc_func_type] = sym_misc_func_type,
  [sym_label] = sym_label,
  [sym_label_name] = sym_label_name,
  [sym_ins] = sym_ins,
  [sym_operand_args] = sym_operand_args,
  [sym_operand] = sym_operand,
  [sym_operand_ident] = sym_operand_ident,
  [sym_addressing] = sym_addressing,
  [sym_relocation_load_store] = sym_relocation_load_store,
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
  [anon_sym_DOT2byte] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT4byte] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT8byte] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOThalf] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTword] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTdword] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTbyte] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTdtpreldword] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTdtprelword] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTsleb128] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTuleb128] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTasciz] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTstring] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTincbin] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTzero] = {
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
  [anon_sym_DOTrodata] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTbss] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTalign] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTbalign] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_p2align] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTglobl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTlocal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTequ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOToption] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTmacro] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTendm] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTfile] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTident] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTsize] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTtype] = {
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
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_relocation_load_store_type] = {
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
  [sym_decl_value] = {
    .visible = true,
    .named = true,
  },
  [sym_builtin_kw] = {
    .visible = true,
    .named = true,
  },
  [sym_data_type_keyword] = {
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
  [sym_alignment] = {
    .visible = true,
    .named = true,
  },
  [sym_align_type] = {
    .visible = true,
    .named = true,
  },
  [sym_symbol_def] = {
    .visible = true,
    .named = true,
  },
  [sym_symbol_scope] = {
    .visible = true,
    .named = true,
  },
  [sym_misc_func] = {
    .visible = true,
    .named = true,
  },
  [sym_misc_func_type] = {
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
  [sym_addressing] = {
    .visible = true,
    .named = true,
  },
  [sym_relocation_load_store] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(32);
      if (lookahead == '"') ADVANCE(81);
      if (lookahead == '#') ADVANCE(36);
      if (lookahead == '$') ADVANCE(5);
      if (lookahead == '%') ADVANCE(12);
      if (lookahead == '(') ADVANCE(78);
      if (lookahead == ')') ADVANCE(79);
      if (lookahead == '+') ADVANCE(85);
      if (lookahead == ',') ADVANCE(70);
      if (lookahead == '.') ADVANCE(119);
      if (lookahead == '0') ADVANCE(90);
      if (lookahead == '1') ADVANCE(91);
      if (lookahead == ':') ADVANCE(18);
      if (lookahead == ';') ADVANCE(285);
      if (lookahead == '<') ADVANCE(84);
      if (lookahead == '>') ADVANCE(86);
      if (lookahead == 'A') ADVANCE(195);
      if (lookahead == 'S') ADVANCE(113);
      if (lookahead == 'T') ADVANCE(282);
      if (lookahead == 'X') ADVANCE(116);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead == '_') ADVANCE(280);
      if (lookahead == 'a') ADVANCE(156);
      if (lookahead == 'b') ADVANCE(168);
      if (lookahead == 'e') ADVANCE(140);
      if (lookahead == 'g') ADVANCE(244);
      if (lookahead == 'j') ADVANCE(131);
      if (lookahead == 'l') ADVANCE(141);
      if (lookahead == 'o') ADVANCE(250);
      if (lookahead == 'p') ADVANCE(122);
      if (lookahead == 'r') ADVANCE(125);
      if (lookahead == 's') ADVANCE(112);
      if (lookahead == 't') ADVANCE(283);
      if (lookahead == 'x') ADVANCE(115);
      if (lookahead == 'z') ADVANCE(181);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(93);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(92);
      if (('B' <= lookahead && lookahead <= 'F') ||
          ('c' <= lookahead && lookahead <= 'f')) ADVANCE(196);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('h' <= lookahead && lookahead <= 'y')) ADVANCE(284);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(3)
      if (lookahead == '"') ADVANCE(81);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(82);
      if (lookahead != 0) ADVANCE(83);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(81);
      if (lookahead == '$') ADVANCE(5);
      if (lookahead == '%') ADVANCE(12);
      if (lookahead == '0') ADVANCE(90);
      if (lookahead == '1') ADVANCE(91);
      if (lookahead == 'S') ADVANCE(113);
      if (lookahead == 'T') ADVANCE(282);
      if (lookahead == '_') ADVANCE(280);
      if (lookahead == 'g') ADVANCE(244);
      if (lookahead == 'r') ADVANCE(125);
      if (lookahead == 's') ADVANCE(114);
      if (lookahead == 't') ADVANCE(283);
      if (lookahead == 'z') ADVANCE(181);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(195);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(116);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(93);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(92);
      if (('B' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(196);
      if (lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('h' <= lookahead && lookahead <= 'y')) ADVANCE(284);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(81);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(36);
      if (lookahead == '.') ADVANCE(119);
      if (lookahead == 'a') ADVANCE(157);
      if (lookahead == 'b') ADVANCE(180);
      if (lookahead == 'e') ADVANCE(148);
      if (lookahead == 'j') ADVANCE(131);
      if (lookahead == 'l') ADVANCE(141);
      if (lookahead == 'o') ADVANCE(250);
      if (lookahead == 'p') ADVANCE(122);
      if (lookahead == 's') ADVANCE(281);
      if (lookahead == 'x') ADVANCE(232);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 5:
      if (lookahead == '0') ADVANCE(21);
      END_STATE();
    case 6:
      if (lookahead == 'U') ADVANCE(29);
      if (lookahead == 'u') ADVANCE(25);
      if (lookahead == 'x') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(77);
      if (lookahead != 0) ADVANCE(75);
      END_STATE();
    case 7:
      if (lookahead == '_') ADVANCE(11);
      END_STATE();
    case 8:
      if (lookahead == 'c') ADVANCE(16);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(13);
      END_STATE();
    case 10:
      if (lookahead == 'h') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == 'l') ADVANCE(14);
      END_STATE();
    case 12:
      if (lookahead == 'l') ADVANCE(14);
      if (lookahead == 'p') ADVANCE(8);
      if (lookahead == 't') ADVANCE(15);
      END_STATE();
    case 13:
      if (lookahead == 'l') ADVANCE(7);
      END_STATE();
    case 14:
      if (lookahead == 'o') ADVANCE(80);
      END_STATE();
    case 15:
      if (lookahead == 'p') ADVANCE(16);
      END_STATE();
    case 16:
      if (lookahead == 'r') ADVANCE(9);
      END_STATE();
    case 17:
      if (lookahead == 'b' ||
          lookahead == 'y') ADVANCE(101);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(17);
      END_STATE();
    case 18:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(69);
      END_STATE();
    case 19:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 20:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(75);
      END_STATE();
    case 21:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(96);
      END_STATE();
    case 22:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(97);
      END_STATE();
    case 23:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(20);
      END_STATE();
    case 24:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(23);
      END_STATE();
    case 25:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(24);
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
      if (eof) ADVANCE(32);
      if (lookahead == '\n') ADVANCE(34);
      if (lookahead == '#') ADVANCE(36);
      if (lookahead == '.') ADVANCE(119);
      if (lookahead == 'a') ADVANCE(157);
      if (lookahead == 'b') ADVANCE(180);
      if (lookahead == 'e') ADVANCE(148);
      if (lookahead == 'j') ADVANCE(131);
      if (lookahead == 'l') ADVANCE(141);
      if (lookahead == 'o') ADVANCE(250);
      if (lookahead == 'p') ADVANCE(122);
      if (lookahead == 's') ADVANCE(281);
      if (lookahead == 'x') ADVANCE(232);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(30)
      if (('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 31:
      if (eof) ADVANCE(32);
      if (lookahead == '\n') ADVANCE(35);
      if (lookahead == '#') ADVANCE(36);
      if (lookahead == '(') ADVANCE(78);
      if (lookahead == ',') ADVANCE(70);
      if (lookahead == '<') ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(31)
      END_STATE();
    case 32:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_source_file_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(33);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(34);
      if (lookahead == 'a') ADVANCE(157);
      if (lookahead == 'b') ADVANCE(180);
      if (lookahead == 'e') ADVANCE(148);
      if (lookahead == 'j') ADVANCE(131);
      if (lookahead == 'l') ADVANCE(141);
      if (lookahead == 'o') ADVANCE(250);
      if (lookahead == 's') ADVANCE(281);
      if (lookahead == 'x') ADVANCE(232);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(36);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_DOT2byte);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_DOT4byte);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_DOT8byte);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_DOThalf);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_DOTword);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_DOTdword);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_DOTbyte);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_DOTdtpreldword);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_DOTdtprelword);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_DOTsleb128);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_DOTuleb128);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_DOTasciz);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_DOTstring);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_DOTincbin);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_DOTzero);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_DOTtext);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_DOTdata);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_DOTrodata);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_DOTbss);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_DOTalign);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_DOTbalign);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_p2align);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_DOTglobl);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_DOTlocal);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_DOTequ);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_DOToption);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_DOTmacro);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_DOTendm);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_DOTfile);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_DOTident);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_DOTsize);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_DOTtype);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(69);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_register);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'h') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(196);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(71);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_register);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(71);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(75);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(76);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_relocation_load_store_type);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(83);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(83);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym__decimal_literal_token1);
      if (lookahead == 'h') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(89);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(10);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym__decimal_literal_token1);
      if (lookahead == 'h') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(10);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym__decimal_literal_token2);
      if (lookahead == 'h') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(89);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(10);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym__decimal_literal_token3);
      if (lookahead == '_') ADVANCE(17);
      if (lookahead == 'b') ADVANCE(102);
      if (lookahead == 'd') ADVANCE(87);
      if (lookahead == 'h') ADVANCE(95);
      if (lookahead == 'x') ADVANCE(22);
      if (lookahead == 'y') ADVANCE(104);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(99);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(91);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(93);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(92);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(10);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym__decimal_literal_token3);
      if (lookahead == '_') ADVANCE(17);
      if (lookahead == 'b') ADVANCE(103);
      if (lookahead == 'd') ADVANCE(88);
      if (lookahead == 'h') ADVANCE(94);
      if (lookahead == 'y') ADVANCE(101);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(98);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(91);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(93);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(92);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(10);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym__decimal_literal_token3);
      if (lookahead == 'd') ADVANCE(88);
      if (lookahead == 'h') ADVANCE(94);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(98);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(92);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(10);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym__decimal_literal_token3);
      if (lookahead == 'd') ADVANCE(88);
      if (lookahead == 'h') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(93);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(10);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym__hex_literal_token1);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym__hex_literal_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(97);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym__hex_literal_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(96);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym__hex_literal_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(97);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym__octal_literal_token1);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym__octal_literal_token1);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(100);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym__octal_literal_token2);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(100);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym__binary_literal_token1);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym__binary_literal_token1);
      if (lookahead == '_') ADVANCE(106);
      if (lookahead == 'h') ADVANCE(94);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(105);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(10);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym__binary_literal_token1);
      if (lookahead == 'h') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(10);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym__binary_literal_token1);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(106);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym__binary_literal_token2);
      if (lookahead == '_') ADVANCE(106);
      if (lookahead == 'h') ADVANCE(94);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(105);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(10);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym__binary_literal_token2);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(106);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_mnemonic);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_mnemonic);
      if (lookahead == 'i') ADVANCE(111);
      if (lookahead == 'u') ADVANCE(107);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_mnemonic);
      if (lookahead == 'i') ADVANCE(107);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_mnemonic);
      if (lookahead == 'r') ADVANCE(107);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_mnemonic);
      if (lookahead == 'u') ADVANCE(107);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == '1') ADVANCE(73);
      if (lookahead == 'b' ||
          lookahead == 'h' ||
          lookahead == 'w') ADVANCE(107);
      if (lookahead == 'l') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'p') ADVANCE(71);
      if (lookahead == 'r') ADVANCE(126);
      if (lookahead == 'u') ADVANCE(142);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == '1') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(71);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == '1') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'p') ADVANCE(71);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == '1') ADVANCE(74);
      if (lookahead == '2') ADVANCE(74);
      if (lookahead == '3') ADVANCE(73);
      if (lookahead == 'o') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(71);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == '1') ADVANCE(74);
      if (lookahead == '2') ADVANCE(74);
      if (lookahead == '3') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(71);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == '1') ADVANCE(120);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == '1') ADVANCE(121);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == '2') ADVANCE(143);
      if (lookahead == '4') ADVANCE(149);
      if (lookahead == '8') ADVANCE(150);
      if (lookahead == 'a') ADVANCE(216);
      if (lookahead == 'b') ADVANCE(133);
      if (lookahead == 'd') ADVANCE(132);
      if (lookahead == 'e') ADVANCE(229);
      if (lookahead == 'f') ADVANCE(206);
      if (lookahead == 'g') ADVANCE(217);
      if (lookahead == 'h') ADVANCE(135);
      if (lookahead == 'i') ADVANCE(166);
      if (lookahead == 'l') ADVANCE(238);
      if (lookahead == 'm') ADVANCE(134);
      if (lookahead == 'o') ADVANCE(245);
      if (lookahead == 'r') ADVANCE(237);
      if (lookahead == 's') ADVANCE(198);
      if (lookahead == 't') ADVANCE(171);
      if (lookahead == 'u') ADVANCE(222);
      if (lookahead == 'w') ADVANCE(239);
      if (lookahead == 'z') ADVANCE(185);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'y')) ADVANCE(284);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == '2') ADVANCE(123);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == '2') ADVANCE(124);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == '2') ADVANCE(139);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == '8') ADVANCE(46);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == '8') ADVANCE(47);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'a') ADVANCE(71);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'a') ADVANCE(109);
      if (lookahead == 'l') ADVANCE(109);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'a') ADVANCE(192);
      if (lookahead == 'h') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(196);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'a') ADVANCE(53);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'a') ADVANCE(208);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'a') ADVANCE(54);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'a') ADVANCE(211);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'a') ADVANCE(265);
      if (lookahead == 't') ADVANCE(246);
      if (lookahead == 'w') ADVANCE(241);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'a') ADVANCE(220);
      if (lookahead == 's') ADVANCE(261);
      if (lookahead == 'y') ADVANCE(268);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'a') ADVANCE(154);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'a') ADVANCE(212);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'a') ADVANCE(214);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'a') ADVANCE(218);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'a') ADVANCE(267);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'a') ADVANCE(221);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'b') ADVANCE(194);
      if (lookahead == 'c') ADVANCE(127);
      if (lookahead == 'h') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(196);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'b') ADVANCE(111);
      if (lookahead == 'h') ADVANCE(111);
      if (lookahead == 'u') ADVANCE(197);
      if (lookahead == 'w') ADVANCE(107);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'b') ADVANCE(107);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'b') ADVANCE(275);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'b') ADVANCE(117);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'b') ADVANCE(213);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'b') ADVANCE(203);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'b') ADVANCE(118);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'b') ADVANCE(254);
      if (lookahead == 'c') ADVANCE(137);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'b') ADVANCE(276);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'b') ADVANCE(277);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'c') ADVANCE(107);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'c') ADVANCE(146);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'c') ADVANCE(200);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'c') ADVANCE(258);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'c') ADVANCE(136);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'd') ADVANCE(158);
      if (lookahead == 'h') ADVANCE(94);
      if (lookahead == 'n') ADVANCE(159);
      if (lookahead == 'u') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(72);
      if (lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(196);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'd') ADVANCE(159);
      if (lookahead == 'n') ADVANCE(159);
      if (lookahead == 'u') ADVANCE(202);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'd') ADVANCE(109);
      if (lookahead == 'h') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(196);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'd') ADVANCE(109);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'd') ADVANCE(223);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'd') ADVANCE(41);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'd') ADVANCE(42);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'd') ADVANCE(273);
      if (lookahead == 'w') ADVANCE(242);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'd') ADVANCE(45);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'd') ADVANCE(44);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'd') ADVANCE(172);
      if (lookahead == 'n') ADVANCE(152);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'd') ADVANCE(138);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'e') ADVANCE(193);
      if (lookahead == 'g') ADVANCE(169);
      if (lookahead == 'h') ADVANCE(94);
      if (lookahead == 'l') ADVANCE(262);
      if (lookahead == 'n') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(196);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('i' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'e') ADVANCE(111);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'e') ADVANCE(107);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'e') ADVANCE(274);
      if (lookahead == 'y') ADVANCE(248);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'e') ADVANCE(231);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'e') ADVANCE(43);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'e') ADVANCE(65);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'e') ADVANCE(67);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'e') ADVANCE(68);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'e') ADVANCE(37);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'e') ADVANCE(38);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'e') ADVANCE(39);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'e') ADVANCE(249);
      if (lookahead == 'g') ADVANCE(169);
      if (lookahead == 'l') ADVANCE(262);
      if (lookahead == 'n') ADVANCE(170);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'e') ADVANCE(252);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'e') ADVANCE(144);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'e') ADVANCE(129);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'e') ADVANCE(215);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'e') ADVANCE(255);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'e') ADVANCE(147);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'f') ADVANCE(40);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'g') ADVANCE(49);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'g') ADVANCE(224);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'g') ADVANCE(225);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'g') ADVANCE(228);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'h') ADVANCE(94);
      if (lookahead == 'l') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(196);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'h') ADVANCE(94);
      if (lookahead == 'q') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(196);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'h') ADVANCE(94);
      if (lookahead == 'r') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(196);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'h') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(72);
      if (lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(196);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'h') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(196);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'i') ADVANCE(107);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'i') ADVANCE(279);
      if (lookahead == 'l') ADVANCE(182);
      if (lookahead == 't') ADVANCE(257);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'i') ADVANCE(189);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'i') ADVANCE(278);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'i') ADVANCE(230);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'i') ADVANCE(247);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'i') ADVANCE(226);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'i') ADVANCE(240);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'i') ADVANCE(190);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'i') ADVANCE(219);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'i') ADVANCE(191);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'k') ADVANCE(107);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'l') ADVANCE(107);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'l') ADVANCE(109);
      if (lookahead == 't') ADVANCE(108);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'l') ADVANCE(110);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'l') ADVANCE(187);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'l') ADVANCE(59);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'l') ADVANCE(60);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'l') ADVANCE(163);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'l') ADVANCE(199);
      if (lookahead == 's') ADVANCE(153);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'l') ADVANCE(236);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'l') ADVANCE(209);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'l') ADVANCE(174);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'l') ADVANCE(205);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'l') ADVANCE(207);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'l') ADVANCE(186);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'm') ADVANCE(64);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'n') ADVANCE(56);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'n') ADVANCE(57);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'n') ADVANCE(50);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'n') ADVANCE(62);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'n') ADVANCE(58);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'n') ADVANCE(160);
      if (lookahead == 'q') ADVANCE(272);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'n') ADVANCE(188);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'n') ADVANCE(264);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'o') ADVANCE(250);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'o') ADVANCE(71);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'o') ADVANCE(51);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'o') ADVANCE(63);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'o') ADVANCE(145);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'o') ADVANCE(167);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'o') ADVANCE(155);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'o') ADVANCE(251);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'o') ADVANCE(227);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'o') ADVANCE(253);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'o') ADVANCE(256);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'o') ADVANCE(259);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'p') ADVANCE(71);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'p') ADVANCE(266);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'p') ADVANCE(260);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'p') ADVANCE(151);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'p') ADVANCE(176);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'q') ADVANCE(107);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'r') ADVANCE(109);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'r') ADVANCE(161);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'r') ADVANCE(233);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'r') ADVANCE(162);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'r') ADVANCE(183);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'r') ADVANCE(234);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'r') ADVANCE(164);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'r') ADVANCE(201);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'r') ADVANCE(235);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'r') ADVANCE(165);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'r') ADVANCE(184);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 's') ADVANCE(55);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 't') ADVANCE(111);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 't') ADVANCE(52);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 't') ADVANCE(66);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 't') ADVANCE(128);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 't') ADVANCE(204);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 't') ADVANCE(130);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 't') ADVANCE(173);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 't') ADVANCE(177);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 't') ADVANCE(178);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 't') ADVANCE(179);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'u') ADVANCE(61);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'w') ADVANCE(243);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'x') ADVANCE(263);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'y') ADVANCE(269);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'y') ADVANCE(270);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'y') ADVANCE(271);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'z') ADVANCE(48);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(284);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'z') ADVANCE(175);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(284);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'b' ||
          lookahead == 'y') ADVANCE(101);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(280);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('2' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'b' ||
          lookahead == 'h' ||
          lookahead == 'w') ADVANCE(107);
      if (lookahead == 'l') ADVANCE(210);
      if (lookahead == 'r') ADVANCE(126);
      if (lookahead == 'u') ADVANCE(142);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (('0' <= lookahead && lookahead <= '6')) ADVANCE(71);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('7' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (('0' <= lookahead && lookahead <= '6') ||
          lookahead == 'p') ADVANCE(71);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('7' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym__DELIMITER);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 33},
  [2] = {.lex_state = 30},
  [3] = {.lex_state = 30},
  [4] = {.lex_state = 4},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 31},
  [13] = {.lex_state = 31},
  [14] = {.lex_state = 31},
  [15] = {.lex_state = 31},
  [16] = {.lex_state = 31},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 31},
  [19] = {.lex_state = 31},
  [20] = {.lex_state = 31},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 31},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 31},
  [25] = {.lex_state = 31},
  [26] = {.lex_state = 31},
  [27] = {.lex_state = 31},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 31},
  [30] = {.lex_state = 31},
  [31] = {.lex_state = 31},
  [32] = {.lex_state = 31},
  [33] = {.lex_state = 31},
  [34] = {.lex_state = 31},
  [35] = {.lex_state = 31},
  [36] = {.lex_state = 31},
  [37] = {.lex_state = 31},
  [38] = {.lex_state = 31},
  [39] = {.lex_state = 31},
  [40] = {.lex_state = 31},
  [41] = {.lex_state = 31},
  [42] = {.lex_state = 31},
  [43] = {.lex_state = 31},
  [44] = {.lex_state = 31},
  [45] = {.lex_state = 31},
  [46] = {.lex_state = 19},
  [47] = {.lex_state = 31},
  [48] = {.lex_state = 31},
  [49] = {.lex_state = 31},
  [50] = {.lex_state = 31},
  [51] = {.lex_state = 31},
  [52] = {.lex_state = 31},
  [53] = {.lex_state = 31},
  [54] = {.lex_state = 31},
  [55] = {.lex_state = 31},
  [56] = {.lex_state = 31},
  [57] = {.lex_state = 31},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 31},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 19},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_DOT2byte] = ACTIONS(1),
    [anon_sym_DOT4byte] = ACTIONS(1),
    [anon_sym_DOT8byte] = ACTIONS(1),
    [anon_sym_DOThalf] = ACTIONS(1),
    [anon_sym_DOTword] = ACTIONS(1),
    [anon_sym_DOTdword] = ACTIONS(1),
    [anon_sym_DOTbyte] = ACTIONS(1),
    [anon_sym_DOTdtpreldword] = ACTIONS(1),
    [anon_sym_DOTdtprelword] = ACTIONS(1),
    [anon_sym_DOTsleb128] = ACTIONS(1),
    [anon_sym_DOTuleb128] = ACTIONS(1),
    [anon_sym_DOTasciz] = ACTIONS(1),
    [anon_sym_DOTstring] = ACTIONS(1),
    [anon_sym_DOTincbin] = ACTIONS(1),
    [anon_sym_DOTzero] = ACTIONS(1),
    [anon_sym_DOTtext] = ACTIONS(1),
    [anon_sym_DOTdata] = ACTIONS(1),
    [anon_sym_DOTrodata] = ACTIONS(1),
    [anon_sym_DOTbss] = ACTIONS(1),
    [anon_sym_DOTalign] = ACTIONS(1),
    [anon_sym_DOTbalign] = ACTIONS(1),
    [anon_sym_p2align] = ACTIONS(1),
    [anon_sym_DOTglobl] = ACTIONS(1),
    [anon_sym_DOTlocal] = ACTIONS(1),
    [anon_sym_DOTequ] = ACTIONS(1),
    [anon_sym_DOToption] = ACTIONS(1),
    [anon_sym_DOTmacro] = ACTIONS(1),
    [anon_sym_DOTendm] = ACTIONS(1),
    [anon_sym_DOTfile] = ACTIONS(1),
    [anon_sym_DOTident] = ACTIONS(1),
    [anon_sym_DOTsize] = ACTIONS(1),
    [anon_sym_DOTtype] = ACTIONS(1),
    [aux_sym_label_token1] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [sym_register] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_relocation_load_store_type] = ACTIONS(1),
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
    [sym_source_file] = STATE(67),
    [aux_sym_source_file_token1] = ACTIONS(3),
  },
  [2] = {
    [sym_directive] = STATE(44),
    [sym_decl] = STATE(47),
    [sym_builtin_kw] = STATE(8),
    [sym_data_type_keyword] = STATE(11),
    [sym_section] = STATE(33),
    [sym_section_name] = STATE(32),
    [sym_alignment] = STATE(52),
    [sym_align_type] = STATE(56),
    [sym_symbol_def] = STATE(53),
    [sym_symbol_scope] = STATE(6),
    [sym_misc_func] = STATE(50),
    [sym_misc_func_type] = STATE(49),
    [sym_label] = STATE(48),
    [sym_label_name] = STATE(65),
    [sym_ins] = STATE(42),
    [sym_identifier] = STATE(61),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_LF] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [anon_sym_DOT2byte] = ACTIONS(11),
    [anon_sym_DOT4byte] = ACTIONS(11),
    [anon_sym_DOT8byte] = ACTIONS(11),
    [anon_sym_DOThalf] = ACTIONS(11),
    [anon_sym_DOTword] = ACTIONS(11),
    [anon_sym_DOTdword] = ACTIONS(11),
    [anon_sym_DOTbyte] = ACTIONS(11),
    [anon_sym_DOTdtpreldword] = ACTIONS(11),
    [anon_sym_DOTdtprelword] = ACTIONS(11),
    [anon_sym_DOTsleb128] = ACTIONS(11),
    [anon_sym_DOTuleb128] = ACTIONS(11),
    [anon_sym_DOTasciz] = ACTIONS(11),
    [anon_sym_DOTstring] = ACTIONS(11),
    [anon_sym_DOTincbin] = ACTIONS(11),
    [anon_sym_DOTzero] = ACTIONS(11),
    [anon_sym_DOTtext] = ACTIONS(13),
    [anon_sym_DOTdata] = ACTIONS(13),
    [anon_sym_DOTrodata] = ACTIONS(13),
    [anon_sym_DOTbss] = ACTIONS(13),
    [anon_sym_DOTalign] = ACTIONS(15),
    [anon_sym_DOTbalign] = ACTIONS(15),
    [anon_sym_p2align] = ACTIONS(15),
    [anon_sym_DOTglobl] = ACTIONS(17),
    [anon_sym_DOTlocal] = ACTIONS(17),
    [anon_sym_DOTequ] = ACTIONS(17),
    [anon_sym_DOToption] = ACTIONS(19),
    [anon_sym_DOTmacro] = ACTIONS(19),
    [anon_sym_DOTendm] = ACTIONS(19),
    [anon_sym_DOTfile] = ACTIONS(19),
    [anon_sym_DOTident] = ACTIONS(19),
    [anon_sym_DOTsize] = ACTIONS(19),
    [anon_sym_DOTtype] = ACTIONS(19),
    [sym_mnemonic] = ACTIONS(21),
    [sym__IDENTIFIER] = ACTIONS(23),
  },
  [3] = {
    [sym_directive] = STATE(55),
    [sym_decl] = STATE(47),
    [sym_builtin_kw] = STATE(8),
    [sym_data_type_keyword] = STATE(11),
    [sym_section] = STATE(33),
    [sym_section_name] = STATE(32),
    [sym_alignment] = STATE(52),
    [sym_align_type] = STATE(56),
    [sym_symbol_def] = STATE(53),
    [sym_symbol_scope] = STATE(6),
    [sym_misc_func] = STATE(50),
    [sym_misc_func_type] = STATE(49),
    [sym_label] = STATE(48),
    [sym_label_name] = STATE(65),
    [sym_ins] = STATE(42),
    [sym_identifier] = STATE(61),
    [ts_builtin_sym_end] = ACTIONS(25),
    [anon_sym_LF] = ACTIONS(27),
    [sym_comment] = ACTIONS(27),
    [anon_sym_DOT2byte] = ACTIONS(11),
    [anon_sym_DOT4byte] = ACTIONS(11),
    [anon_sym_DOT8byte] = ACTIONS(11),
    [anon_sym_DOThalf] = ACTIONS(11),
    [anon_sym_DOTword] = ACTIONS(11),
    [anon_sym_DOTdword] = ACTIONS(11),
    [anon_sym_DOTbyte] = ACTIONS(11),
    [anon_sym_DOTdtpreldword] = ACTIONS(11),
    [anon_sym_DOTdtprelword] = ACTIONS(11),
    [anon_sym_DOTsleb128] = ACTIONS(11),
    [anon_sym_DOTuleb128] = ACTIONS(11),
    [anon_sym_DOTasciz] = ACTIONS(11),
    [anon_sym_DOTstring] = ACTIONS(11),
    [anon_sym_DOTincbin] = ACTIONS(11),
    [anon_sym_DOTzero] = ACTIONS(11),
    [anon_sym_DOTtext] = ACTIONS(13),
    [anon_sym_DOTdata] = ACTIONS(13),
    [anon_sym_DOTrodata] = ACTIONS(13),
    [anon_sym_DOTbss] = ACTIONS(13),
    [anon_sym_DOTalign] = ACTIONS(15),
    [anon_sym_DOTbalign] = ACTIONS(15),
    [anon_sym_p2align] = ACTIONS(15),
    [anon_sym_DOTglobl] = ACTIONS(17),
    [anon_sym_DOTlocal] = ACTIONS(17),
    [anon_sym_DOTequ] = ACTIONS(17),
    [anon_sym_DOToption] = ACTIONS(19),
    [anon_sym_DOTmacro] = ACTIONS(19),
    [anon_sym_DOTendm] = ACTIONS(19),
    [anon_sym_DOTfile] = ACTIONS(19),
    [anon_sym_DOTident] = ACTIONS(19),
    [anon_sym_DOTsize] = ACTIONS(19),
    [anon_sym_DOTtype] = ACTIONS(19),
    [sym_mnemonic] = ACTIONS(21),
    [sym__IDENTIFIER] = ACTIONS(23),
  },
  [4] = {
    [sym_directive] = STATE(25),
    [sym_decl] = STATE(47),
    [sym_builtin_kw] = STATE(8),
    [sym_data_type_keyword] = STATE(11),
    [sym_section] = STATE(33),
    [sym_section_name] = STATE(32),
    [sym_alignment] = STATE(52),
    [sym_align_type] = STATE(56),
    [sym_symbol_def] = STATE(53),
    [sym_symbol_scope] = STATE(6),
    [sym_misc_func] = STATE(50),
    [sym_misc_func_type] = STATE(49),
    [sym_label] = STATE(48),
    [sym_label_name] = STATE(65),
    [sym_ins] = STATE(42),
    [sym_identifier] = STATE(61),
    [sym_comment] = ACTIONS(29),
    [anon_sym_DOT2byte] = ACTIONS(31),
    [anon_sym_DOT4byte] = ACTIONS(31),
    [anon_sym_DOT8byte] = ACTIONS(31),
    [anon_sym_DOThalf] = ACTIONS(31),
    [anon_sym_DOTword] = ACTIONS(31),
    [anon_sym_DOTdword] = ACTIONS(31),
    [anon_sym_DOTbyte] = ACTIONS(31),
    [anon_sym_DOTdtpreldword] = ACTIONS(31),
    [anon_sym_DOTdtprelword] = ACTIONS(31),
    [anon_sym_DOTsleb128] = ACTIONS(31),
    [anon_sym_DOTuleb128] = ACTIONS(31),
    [anon_sym_DOTasciz] = ACTIONS(31),
    [anon_sym_DOTstring] = ACTIONS(31),
    [anon_sym_DOTincbin] = ACTIONS(31),
    [anon_sym_DOTzero] = ACTIONS(31),
    [anon_sym_DOTtext] = ACTIONS(33),
    [anon_sym_DOTdata] = ACTIONS(33),
    [anon_sym_DOTrodata] = ACTIONS(33),
    [anon_sym_DOTbss] = ACTIONS(33),
    [anon_sym_DOTalign] = ACTIONS(35),
    [anon_sym_DOTbalign] = ACTIONS(35),
    [anon_sym_p2align] = ACTIONS(35),
    [anon_sym_DOTglobl] = ACTIONS(37),
    [anon_sym_DOTlocal] = ACTIONS(37),
    [anon_sym_DOTequ] = ACTIONS(37),
    [anon_sym_DOToption] = ACTIONS(39),
    [anon_sym_DOTmacro] = ACTIONS(39),
    [anon_sym_DOTendm] = ACTIONS(39),
    [anon_sym_DOTfile] = ACTIONS(39),
    [anon_sym_DOTident] = ACTIONS(39),
    [anon_sym_DOTsize] = ACTIONS(39),
    [anon_sym_DOTtype] = ACTIONS(39),
    [sym_mnemonic] = ACTIONS(41),
    [sym__IDENTIFIER] = ACTIONS(23),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 12,
    ACTIONS(43), 1,
      sym_register,
    ACTIONS(45), 1,
      sym_relocation_load_store_type,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    ACTIONS(55), 1,
      sym__IDENTIFIER,
    STATE(12), 1,
      sym__decimal_literal,
    STATE(14), 1,
      sym_operand,
    STATE(35), 1,
      sym_operand_args,
    ACTIONS(49), 3,
      aux_sym__decimal_literal_token1,
      aux_sym__decimal_literal_token2,
      aux_sym__decimal_literal_token3,
    ACTIONS(53), 3,
      aux_sym__hex_literal_token2,
      aux_sym__hex_literal_token3,
      aux_sym__octal_literal_token2,
    STATE(13), 3,
      sym__hex_literal,
      sym__octal_literal,
      sym__binary_literal,
    ACTIONS(51), 4,
      aux_sym__hex_literal_token1,
      aux_sym__octal_literal_token1,
      aux_sym__binary_literal_token1,
      aux_sym__binary_literal_token2,
    STATE(30), 5,
      sym_operand_ident,
      sym_addressing,
      sym_relocation_load_store,
      sym_string_literal,
      sym_integer_literal,
  [50] = 12,
    ACTIONS(43), 1,
      sym_register,
    ACTIONS(45), 1,
      sym_relocation_load_store_type,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    ACTIONS(55), 1,
      sym__IDENTIFIER,
    STATE(12), 1,
      sym__decimal_literal,
    STATE(14), 1,
      sym_operand,
    STATE(41), 1,
      sym_operand_args,
    ACTIONS(49), 3,
      aux_sym__decimal_literal_token1,
      aux_sym__decimal_literal_token2,
      aux_sym__decimal_literal_token3,
    ACTIONS(53), 3,
      aux_sym__hex_literal_token2,
      aux_sym__hex_literal_token3,
      aux_sym__octal_literal_token2,
    STATE(13), 3,
      sym__hex_literal,
      sym__octal_literal,
      sym__binary_literal,
    ACTIONS(51), 4,
      aux_sym__hex_literal_token1,
      aux_sym__octal_literal_token1,
      aux_sym__binary_literal_token1,
      aux_sym__binary_literal_token2,
    STATE(30), 5,
      sym_operand_ident,
      sym_addressing,
      sym_relocation_load_store,
      sym_string_literal,
      sym_integer_literal,
  [100] = 11,
    ACTIONS(43), 1,
      sym_register,
    ACTIONS(45), 1,
      sym_relocation_load_store_type,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    ACTIONS(55), 1,
      sym__IDENTIFIER,
    STATE(12), 1,
      sym__decimal_literal,
    STATE(22), 1,
      sym_operand,
    ACTIONS(49), 3,
      aux_sym__decimal_literal_token1,
      aux_sym__decimal_literal_token2,
      aux_sym__decimal_literal_token3,
    ACTIONS(53), 3,
      aux_sym__hex_literal_token2,
      aux_sym__hex_literal_token3,
      aux_sym__octal_literal_token2,
    STATE(13), 3,
      sym__hex_literal,
      sym__octal_literal,
      sym__binary_literal,
    ACTIONS(51), 4,
      aux_sym__hex_literal_token1,
      aux_sym__octal_literal_token1,
      aux_sym__binary_literal_token1,
      aux_sym__binary_literal_token2,
    STATE(30), 5,
      sym_operand_ident,
      sym_addressing,
      sym_relocation_load_store,
      sym_string_literal,
      sym_integer_literal,
  [147] = 6,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    STATE(39), 1,
      sym_decl_value,
    STATE(40), 2,
      sym_string_literal,
      sym_integer_literal,
    ACTIONS(53), 3,
      aux_sym__hex_literal_token2,
      aux_sym__hex_literal_token3,
      aux_sym__octal_literal_token2,
    STATE(13), 4,
      sym__decimal_literal,
      sym__hex_literal,
      sym__octal_literal,
      sym__binary_literal,
    ACTIONS(51), 7,
      aux_sym__decimal_literal_token1,
      aux_sym__decimal_literal_token2,
      aux_sym__decimal_literal_token3,
      aux_sym__hex_literal_token1,
      aux_sym__octal_literal_token1,
      aux_sym__binary_literal_token1,
      aux_sym__binary_literal_token2,
  [178] = 2,
    ACTIONS(59), 5,
      sym_relocation_load_store_type,
      anon_sym_DQUOTE,
      aux_sym__hex_literal_token2,
      aux_sym__hex_literal_token3,
      aux_sym__octal_literal_token2,
    ACTIONS(57), 9,
      sym_register,
      aux_sym__decimal_literal_token1,
      aux_sym__decimal_literal_token2,
      aux_sym__decimal_literal_token3,
      aux_sym__hex_literal_token1,
      aux_sym__octal_literal_token1,
      aux_sym__binary_literal_token1,
      aux_sym__binary_literal_token2,
      sym__IDENTIFIER,
  [197] = 2,
    ACTIONS(61), 4,
      anon_sym_DQUOTE,
      aux_sym__hex_literal_token2,
      aux_sym__hex_literal_token3,
      aux_sym__octal_literal_token2,
    ACTIONS(63), 7,
      aux_sym__decimal_literal_token1,
      aux_sym__decimal_literal_token2,
      aux_sym__decimal_literal_token3,
      aux_sym__hex_literal_token1,
      aux_sym__octal_literal_token1,
      aux_sym__binary_literal_token1,
      aux_sym__binary_literal_token2,
  [213] = 2,
    ACTIONS(65), 4,
      anon_sym_DQUOTE,
      aux_sym__hex_literal_token2,
      aux_sym__hex_literal_token3,
      aux_sym__octal_literal_token2,
    ACTIONS(67), 7,
      aux_sym__decimal_literal_token1,
      aux_sym__decimal_literal_token2,
      aux_sym__decimal_literal_token3,
      aux_sym__hex_literal_token1,
      aux_sym__octal_literal_token1,
      aux_sym__binary_literal_token1,
      aux_sym__binary_literal_token2,
  [229] = 5,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      anon_sym_LT,
    STATE(19), 1,
      sym_literal_offset,
    ACTIONS(69), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(71), 2,
      sym_comment,
      anon_sym_COMMA,
  [247] = 4,
    ACTIONS(75), 1,
      anon_sym_LT,
    STATE(19), 1,
      sym_literal_offset,
    ACTIONS(69), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(71), 2,
      sym_comment,
      anon_sym_COMMA,
  [262] = 4,
    ACTIONS(79), 1,
      sym_comment,
    ACTIONS(81), 1,
      anon_sym_COMMA,
    STATE(16), 1,
      aux_sym_operand_args_repeat1,
    ACTIONS(77), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [276] = 4,
    ACTIONS(85), 1,
      sym_comment,
    ACTIONS(87), 1,
      anon_sym_COMMA,
    STATE(15), 1,
      aux_sym_operand_args_repeat1,
    ACTIONS(83), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [290] = 4,
    ACTIONS(81), 1,
      anon_sym_COMMA,
    ACTIONS(92), 1,
      sym_comment,
    STATE(15), 1,
      aux_sym_operand_args_repeat1,
    ACTIONS(90), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [304] = 4,
    ACTIONS(94), 1,
      sym_escape_sequence,
    ACTIONS(97), 1,
      anon_sym_DQUOTE,
    ACTIONS(99), 1,
      aux_sym_string_literal_token1,
    STATE(17), 1,
      aux_sym_string_literal_repeat1,
  [317] = 2,
    ACTIONS(102), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(104), 2,
      sym_comment,
      anon_sym_COMMA,
  [326] = 2,
    ACTIONS(106), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(108), 2,
      sym_comment,
      anon_sym_COMMA,
  [335] = 2,
    ACTIONS(110), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(112), 2,
      sym_comment,
      anon_sym_COMMA,
  [344] = 4,
    ACTIONS(114), 1,
      sym_escape_sequence,
    ACTIONS(116), 1,
      anon_sym_DQUOTE,
    ACTIONS(118), 1,
      aux_sym_string_literal_token1,
    STATE(23), 1,
      aux_sym_string_literal_repeat1,
  [357] = 2,
    ACTIONS(83), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(85), 2,
      sym_comment,
      anon_sym_COMMA,
  [366] = 4,
    ACTIONS(120), 1,
      sym_escape_sequence,
    ACTIONS(122), 1,
      anon_sym_DQUOTE,
    ACTIONS(124), 1,
      aux_sym_string_literal_token1,
    STATE(17), 1,
      aux_sym_string_literal_repeat1,
  [379] = 2,
    ACTIONS(126), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(128), 2,
      sym_comment,
      anon_sym_COMMA,
  [388] = 4,
    ACTIONS(130), 1,
      ts_builtin_sym_end,
    ACTIONS(132), 1,
      anon_sym_LF,
    ACTIONS(134), 1,
      sym_comment,
    STATE(51), 1,
      aux_sym_source_file_repeat1,
  [401] = 2,
    ACTIONS(136), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(138), 2,
      sym_comment,
      anon_sym_COMMA,
  [410] = 2,
    ACTIONS(140), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(142), 2,
      sym_comment,
      anon_sym_COMMA,
  [419] = 3,
    ACTIONS(144), 1,
      aux_sym__hex_literal_token1,
    STATE(68), 1,
      sym__hex_literal,
    ACTIONS(146), 2,
      aux_sym__hex_literal_token2,
      aux_sym__hex_literal_token3,
  [430] = 2,
    ACTIONS(148), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(150), 2,
      sym_comment,
      anon_sym_COMMA,
  [439] = 2,
    ACTIONS(152), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(154), 2,
      sym_comment,
      anon_sym_COMMA,
  [448] = 2,
    ACTIONS(156), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(158), 2,
      sym_comment,
      anon_sym_COMMA,
  [457] = 2,
    ACTIONS(162), 1,
      sym_comment,
    ACTIONS(160), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [465] = 2,
    ACTIONS(166), 1,
      sym_comment,
    ACTIONS(164), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [473] = 3,
    ACTIONS(130), 1,
      ts_builtin_sym_end,
    ACTIONS(132), 1,
      anon_sym_LF,
    STATE(51), 1,
      aux_sym_source_file_repeat1,
  [483] = 2,
    ACTIONS(170), 1,
      sym_comment,
    ACTIONS(168), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [491] = 2,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(172), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [499] = 2,
    ACTIONS(178), 1,
      sym_comment,
    ACTIONS(176), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [507] = 3,
    ACTIONS(132), 1,
      anon_sym_LF,
    ACTIONS(180), 1,
      ts_builtin_sym_end,
    STATE(54), 1,
      aux_sym_source_file_repeat1,
  [517] = 2,
    ACTIONS(184), 1,
      sym_comment,
    ACTIONS(182), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [525] = 2,
    ACTIONS(188), 1,
      sym_comment,
    ACTIONS(186), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [533] = 2,
    ACTIONS(192), 1,
      sym_comment,
    ACTIONS(190), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [541] = 2,
    ACTIONS(166), 1,
      sym_comment,
    ACTIONS(164), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [549] = 2,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(194), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [557] = 2,
    ACTIONS(200), 1,
      sym_comment,
    ACTIONS(198), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [565] = 3,
    ACTIONS(198), 1,
      ts_builtin_sym_end,
    ACTIONS(202), 1,
      anon_sym_LF,
    STATE(45), 1,
      aux_sym_source_file_repeat1,
  [575] = 3,
    ACTIONS(205), 1,
      sym__IDENTIFIER,
    STATE(61), 1,
      sym_identifier,
    STATE(62), 1,
      sym_label_name,
  [585] = 2,
    ACTIONS(166), 1,
      sym_comment,
    ACTIONS(164), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [593] = 2,
    ACTIONS(166), 1,
      sym_comment,
    ACTIONS(164), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [601] = 2,
    ACTIONS(209), 1,
      sym_comment,
    ACTIONS(207), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [609] = 2,
    ACTIONS(166), 1,
      sym_comment,
    ACTIONS(164), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [617] = 3,
    ACTIONS(132), 1,
      anon_sym_LF,
    ACTIONS(180), 1,
      ts_builtin_sym_end,
    STATE(45), 1,
      aux_sym_source_file_repeat1,
  [627] = 2,
    ACTIONS(166), 1,
      sym_comment,
    ACTIONS(164), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [635] = 2,
    ACTIONS(166), 1,
      sym_comment,
    ACTIONS(164), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [643] = 3,
    ACTIONS(132), 1,
      anon_sym_LF,
    ACTIONS(211), 1,
      ts_builtin_sym_end,
    STATE(45), 1,
      aux_sym_source_file_repeat1,
  [653] = 2,
    ACTIONS(215), 1,
      sym_comment,
    ACTIONS(213), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [661] = 2,
    ACTIONS(219), 1,
      sym_comment,
    ACTIONS(217), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [669] = 1,
    ACTIONS(221), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [674] = 2,
    ACTIONS(223), 1,
      anon_sym_PLUS,
    ACTIONS(225), 1,
      anon_sym_GT,
  [681] = 1,
    ACTIONS(227), 2,
      aux_sym_label_token1,
      anon_sym_RPAREN,
  [686] = 1,
    ACTIONS(198), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [691] = 1,
    ACTIONS(229), 2,
      aux_sym_label_token1,
      anon_sym_RPAREN,
  [696] = 1,
    ACTIONS(231), 1,
      anon_sym_RPAREN,
  [700] = 1,
    ACTIONS(233), 1,
      sym__IDENTIFIER,
  [704] = 1,
    ACTIONS(235), 1,
      sym_register,
  [708] = 1,
    ACTIONS(237), 1,
      aux_sym_label_token1,
  [712] = 1,
    ACTIONS(239), 1,
      anon_sym_RPAREN,
  [716] = 1,
    ACTIONS(241), 1,
      ts_builtin_sym_end,
  [720] = 1,
    ACTIONS(243), 1,
      anon_sym_GT,
  [724] = 1,
    ACTIONS(245), 1,
      anon_sym_LPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(5)] = 0,
  [SMALL_STATE(6)] = 50,
  [SMALL_STATE(7)] = 100,
  [SMALL_STATE(8)] = 147,
  [SMALL_STATE(9)] = 178,
  [SMALL_STATE(10)] = 197,
  [SMALL_STATE(11)] = 213,
  [SMALL_STATE(12)] = 229,
  [SMALL_STATE(13)] = 247,
  [SMALL_STATE(14)] = 262,
  [SMALL_STATE(15)] = 276,
  [SMALL_STATE(16)] = 290,
  [SMALL_STATE(17)] = 304,
  [SMALL_STATE(18)] = 317,
  [SMALL_STATE(19)] = 326,
  [SMALL_STATE(20)] = 335,
  [SMALL_STATE(21)] = 344,
  [SMALL_STATE(22)] = 357,
  [SMALL_STATE(23)] = 366,
  [SMALL_STATE(24)] = 379,
  [SMALL_STATE(25)] = 388,
  [SMALL_STATE(26)] = 401,
  [SMALL_STATE(27)] = 410,
  [SMALL_STATE(28)] = 419,
  [SMALL_STATE(29)] = 430,
  [SMALL_STATE(30)] = 439,
  [SMALL_STATE(31)] = 448,
  [SMALL_STATE(32)] = 457,
  [SMALL_STATE(33)] = 465,
  [SMALL_STATE(34)] = 473,
  [SMALL_STATE(35)] = 483,
  [SMALL_STATE(36)] = 491,
  [SMALL_STATE(37)] = 499,
  [SMALL_STATE(38)] = 507,
  [SMALL_STATE(39)] = 517,
  [SMALL_STATE(40)] = 525,
  [SMALL_STATE(41)] = 533,
  [SMALL_STATE(42)] = 541,
  [SMALL_STATE(43)] = 549,
  [SMALL_STATE(44)] = 557,
  [SMALL_STATE(45)] = 565,
  [SMALL_STATE(46)] = 575,
  [SMALL_STATE(47)] = 585,
  [SMALL_STATE(48)] = 593,
  [SMALL_STATE(49)] = 601,
  [SMALL_STATE(50)] = 609,
  [SMALL_STATE(51)] = 617,
  [SMALL_STATE(52)] = 627,
  [SMALL_STATE(53)] = 635,
  [SMALL_STATE(54)] = 643,
  [SMALL_STATE(55)] = 653,
  [SMALL_STATE(56)] = 661,
  [SMALL_STATE(57)] = 669,
  [SMALL_STATE(58)] = 674,
  [SMALL_STATE(59)] = 681,
  [SMALL_STATE(60)] = 686,
  [SMALL_STATE(61)] = 691,
  [SMALL_STATE(62)] = 696,
  [SMALL_STATE(63)] = 700,
  [SMALL_STATE(64)] = 704,
  [SMALL_STATE(65)] = 708,
  [SMALL_STATE(66)] = 712,
  [SMALL_STATE(67)] = 716,
  [SMALL_STATE(68)] = 720,
  [SMALL_STATE(69)] = 724,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [7] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 2),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 2),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol_scope, 1),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol_scope, 1),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type_keyword, 1),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_data_type_keyword, 1),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin_kw, 1),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_builtin_kw, 1),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_literal, 1),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_literal, 1),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operand_args, 1),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operand_args, 1),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_operand_args_repeat1, 2),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_operand_args_repeat1, 2),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_operand_args_repeat1, 2), SHIFT_REPEAT(7),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operand_args, 2),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operand_args, 2),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(17),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(17),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_literal, 2),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_literal, 2),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_offset, 5),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_offset, 5),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 2),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relocation_load_store, 4),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relocation_load_store, 4),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_addressing, 4),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_addressing, 4),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operand_ident, 1),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operand_ident, 1),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operand, 1),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operand, 1),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_offset, 3),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_offset, 3),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 1),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section, 1),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 1),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 1),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ins, 2),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ins, 2),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_name, 1),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section_name, 1),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_align_type, 1),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_align_type, 1),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl, 2),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl, 2),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_value, 1),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_value, 1),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol_def, 2),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol_def, 2),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_misc_func_type, 1),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_misc_func_type, 1),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [200] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [202] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_misc_func, 1),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_misc_func, 1),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 4),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 3),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 3),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alignment, 1),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alignment, 1),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 3),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_name, 1),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [241] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
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
