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

    comment: ($) => /[#]([^\\n]*)/,
    directive: ($) =>
      choice(
        prec.left(12, $.ins),
        // prec.left(11, $.shell_cmd),
        // prec.left(10, $.objdump_file_format),
        // prec.left(9, $.objdump_disas_of_section),
        // prec.left(8, $.objdump_section_label),
        // prec.left(7, $.objdump_offset_label),
        prec.left(4, $.section),
        // prec.left(5, $.data_section),
        // prec.left(4, $.code_section),
        prec.left(3, $.builtin),
        prec.left(1, $.label),
      ),

    builtin: ($) => seq($.builtin_kw, $.operand_args),
    builtin_kw: ($) => choice("db", "dw", "dd", "dq"),

    section: ($) => seq($.section_type, $._NEWLINE),
    section_type: ($) => choice(".text",".data",".wodata"),
    // extern: ($) => seq("extern", $.identifier),
    // code_section: ($) => seq(".text", $.identifier),

    // shell_cmd: ($) => seq($.shell_prompt, /[^\n]*/),
    // shell_prompt: ($) => "$",

    // objdump_disas_of_section: ($) =>
    //   seq("Disassembly of section ", $.section_name, ":"),

    // objdump_file_format: ($) => /[a-zA-Z0-9/.@_-]+:[\s]+file format [^\n]+/,

    // objdump_section_label: ($) =>
    //   seq($.objdump_addr, "<", $.identifier, ">", ":"),
    objdump_addr: ($) => prec(0, /[0-9a-fA-F]+/),

    // objdump_offset_label: ($) =>
    //   prec.left(
    //     0,
    //     seq($.objdump_addr, ":", $.objdump_machine_code_bytes, optional($.ins)),
    //   ),
    objdump_machine_code_bytes: ($) => repeat1(/[0-9a-fA-F]{2}/),

    label: ($) =>
      prec.left(0, seq($.label_name, /:[\s]+/, optional($.directive))),
    label_name: ($) => $.identifier,
    ins: ($) => prec.left(0, seq($.mnemonic, optional($.operand_args))),

    operand_args: ($) => seq($.operand, repeat(seq(" ", $.operand))),

    operand: ($) =>
      seq(
        choice(
          $.register,
          // $.effective_addr,
          $.string_literal,
          $.integer_literal,
          $.operand_ident,
        ),
      ),

    register: ($) =>
      token(
        choice(
          /[xX][0-31]/,
          /[t][0-6]/,
          /[a][0-7]/,
          /[s][0-11]/,
          "zero",
          "ra",
          "sp",
          "gp",
          "tp",
        ),
      ),

    operand_ident: ($) => $._IDENTIFIER,

    // effective_addr: ($) =>
    //   seq(
    //     "[",
    //     repeat1(
    //       choice(
    //         $.segment_prefix,
    //         $.register,
    //         $.integer_literal,
    //         "(",
    //         ")",
    //         "*",
    //         "+",
    //         "-",
    //         $._IDENTIFIER,
    //       ),
    //     ),
    //     "]",
    //   ),

    // segment_prefix: ($) => seq($.segment, ":"),

    // segment: ($) => choice("cs", "ds", "es", "fs", "gs", "ss"),

    // shamelessly stolen from <https://github.com/tree-sitter/tree-sitter-c/>
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
    section_name: ($) => /[.][A-Za-z0-9.@_-]+/,
    identifier: ($) => $._IDENTIFIER,
    _IDENTIFIER: ($) => token(prec(-1, /[A-Za-z.@_][A-Za-z0-9.@_$-]*/)),
  },
});
