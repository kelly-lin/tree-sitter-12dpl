[
  "break"
  "case"
  "continue"
  "default"
  "else"
  "for"
  "if"
  "return"
  "switch"
  "while"
] @keyword

[
 "#define" 
 "#include" 
] @keyword

[
  "--" 
  "-" 
  "-=" 
  "=" 
  "!=" 
  "*" 
  "&" 
  "&&" 
  "+" 
  "++" 
  "+=" 
  "<" 
  "==" 
  ">" 
  "||" 
] @operator

";" @delimiter

;; Literals
(string_literal) @string
(system_lib_string) @string
(number_literal) @number

;; Preprocessors
(preproc_def (identifier) @constant)

;; Functions
(call_expression
  function: (identifier) @function)

(function_definition
  type: (primitive_type) 
  declarator: (function_declarator
    declarator: (identifier) @function))

;; Parameters
(parameter_declaration
    type: (primitive_type)
    declarator: (identifier) @parameter)

(statement_identifier) @label

(primitive_type) @type

(comment) @comment

