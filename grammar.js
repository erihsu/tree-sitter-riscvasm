// reference: https://michaeljclark.github.io/asm.html

module.exports = grammar({
  name: "riscvasm",

  rules: {
    source_file: ($) =>
      seq(
        /\s*/,
        choice(seq($.directive, optional($.comment)), $.comment),
        repeat(
          seq(
            "\n",
            optional(choice(seq($.directive, optional($.comment)), $.comment)),
          ),
        ),
      ),

    comment: ($) => /[#]([^\n]*)/,
    directive: ($) =>
      choice(
        prec.left(7, $.ins), // instruction
        prec.left(6, $.decl), // variable declare
        prec.left(5,$.alignment), // alignment
        prec.left(4,$.symbol_def),
        prec.left(3,$.misc_func), // misc function
        prec.left(2, $.section),
        prec.left(1, $.label),
      ),

    decl: ($) => prec.left(0,seq($.identifier,$.builtin_kw,$.integer_literal)),

    builtin_kw: ($) =>
      token(
        prec(
          1,
          /dword|word|half|long/,
        ),
      ),

    section: ($) => prec.left(0,seq($.section_name)), // section selection
    section_name: ($) => choice(".text",".data",".rodata",".bss"),

    alignment: ($) => prec.left(0,seq($.align_type)), // alignment selection
    align_type: ($) => choice(".align",".balign","p2align"),

    symbol_def: ($) => prec.left(0,seq($.symbol_scope)), // symbol definition
    symbol_scope: ($) => choice(".globl",".local",".equ"),

    misc_func: ($) => prec.left(0,seq($.misc_func_type)), // symbol definition
    misc_func_type: ($) => choice(".option",".macro",".endm",".file",".ident",".size",".type"),

    label: ($) =>
      prec.left(0, seq($.label_name, /:[\s]+/, optional($.directive))),
    label_name: ($) => $.identifier,
    ins: ($) => prec.left(0, seq($.mnemonic, $.operand_args)), // target should be register ,all instruction has args

    operand_args: ($) => seq($.operand, repeat(seq(",", $.operand))),

    operand: ($) =>
      seq(
        choice(
          $.register,
          $.string_literal,
          $.integer_literal,
          $.operand_ident,
          $.addressing,
        ),
      ),

    register: ($) =>
      token(
        choice(
          /[xX][0-9]/,
          /[xX]1[0-9]/,
          /[xX]2[0-9]/,
          /[xX]3[0-1]/,
          /[tT][0-6]/,
          /[aA][0-7]/,
          /[sS][0-9]/,
          /[sS]1[0-1]/,
          "zero", // alias
          "ra",
          "sp",
          "gp",
          "tp",
        ),
      ),

    operand_ident: ($) => $._IDENTIFIER,

    // copy from tree-sitter-x86asm project
    escape_sequence: ($) =>
      token(
        prec(
          1,
          seq(
            "\\",
            choice(
              /[^xuU]/,
              /\d{2,3}/,
              /x[0-9a-fA-F]{2,}/,
              /u[0-9a-fA-F]{4}/,
              /U[0-9a-fA-F]{8}/,
            ),
          ),
        ),
      ),

    addressing: ($) => seq($._decimal_literal,'(',$.register,')'),

    string_literal: ($) =>
      seq(
        '"',
        repeat(
          choice(token.immediate(prec(1, /[^\\"\n]+/)), $.escape_sequence),
        ),
        '"',
      ),

    integer_literal: ($) =>
      seq(
        choice(
          $._decimal_literal,
          $._octal_literal,
          $._hex_literal,
          $._binary_literal,
        ),
        optional($.literal_offset),
      ),

    literal_offset: ($) =>
      seq("<", $._IDENTIFIER, optional(seq("+", $._hex_literal)), ">"),

    _decimal_literal: ($) => choice(/[0-9]+d/, /0d[0-9]+/, /[0-9]+/),

    _hex_literal: ($) =>
      choice(/[0-9a-fA-F]+h/, /\$0[0-9a-fA-F]+/, /0[xh][0-9a-fA-F]+/),

    _octal_literal: ($) => choice(/[0-7]+[qo]/, /0[oq][0-7]+/),

    _binary_literal: ($) => choice(/[01_]+[by]/, /0[by][01_]+/),

    _NEWLINE: ($) => seq(optional($.comment), choice("\n", "\r\n")),

    mnemonic: ($) =>
      token(
        prec(
          1,
          /add|sub|xor|or|and|sll|srl|sra|slt|sltu|addi|xori|ori|andi|slli|srli|srai|slti|sltiu|lb|lh|lw|lbu|lhu|sb|sh|sw|beq|bne|blt|bge|bltu|bgeu|jal|jalr|lui|auipc|ecall|ebreak/,
        ),
      ),
    identifier: ($) => $._IDENTIFIER,
    _IDENTIFIER: ($) => token(prec(-1, /[A-Za-z.@_][A-Za-z0-9.@_$-]*/)),

    _DELIMITER: ($) => token(";"),
  },
});
