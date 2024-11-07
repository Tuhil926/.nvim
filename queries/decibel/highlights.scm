;; comments
(comment_line) @comment
(comment_block) @comment

;; types and keywords
(type) @type
(bool_literal) @boolean
(control_keyword) @keyword
(keyword) @keyword
(inbuilt_function) @function.builtin

;; variables and constants
(identifier) @variable
(constant) @number

;; strings
(string) @string

;; operators
(operator) @operator

;; punctuation
(punctuation) @punctuation.delimiter

