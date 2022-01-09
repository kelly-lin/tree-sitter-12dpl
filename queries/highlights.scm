"break" @keyword
"case" @keyword
"continue" @keyword
"default" @keyword
"else" @keyword
"for" @keyword
"if" @keyword
"return" @keyword
"switch" @keyword
"while" @keyword

"#define" @keyword
"#include" @keyword

"--" @operator
"-" @operator
"-=" @operator
"=" @operator
"!=" @operator
"*" @operator
"&" @operator
"&&" @operator
"+" @operator
"++" @operator
"+=" @operator
"<" @operator
"==" @operator
">" @operator
"||" @operator

";" @delimiter

(string_literal) @string
(system_lib_string) @string

(number_literal) @number

(call_expression
  function: (identifier) @function)
(function_declarator
  declarator: (identifier) @function)

(statement_identifier) @label
(primitive_type) @type

(identifier) @variable

(comment) @comment

