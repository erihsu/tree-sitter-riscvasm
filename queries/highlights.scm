(string_literal) @string
(section_name) @string
(identifier) @string

(integer_literal) @constant.builtin

(register) @constant.builtin

(comment) @comment

".text" @keyword
".data" @keyword
".wodata" @keyword
(builtin_kw) @keyword
(mnemonic) @keyword

(operand_ident) @property
(section_name) @property
(identifier) @property

(literal_offset) @comment

":" @punctuation.delimiter

"[" @punctuation.bracket
"]" @punctuation.bracket
"<" @punctuation.bracket
">" @punctuation.bracket
"(" @punctuation.bracket
")" @punctuation.bracket

(label_name) @label