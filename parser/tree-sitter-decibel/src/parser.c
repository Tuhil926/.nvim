#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 26
#define LARGE_STATE_COUNT 16
#define SYMBOL_COUNT 109
#define ALIAS_COUNT 0
#define TOKEN_COUNT 93
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  sym_comment_line = 1,
  anon_sym_SLASH_STAR = 2,
  aux_sym_comment_block_token1 = 3,
  aux_sym_comment_block_token2 = 4,
  anon_sym_STAR_SLASH = 5,
  anon_sym_long = 6,
  anon_sym_int = 7,
  anon_sym_float = 8,
  anon_sym_string = 9,
  anon_sym_audio = 10,
  anon_sym_bool = 11,
  anon_sym_true = 12,
  anon_sym_false = 13,
  anon_sym_load = 14,
  anon_sym_save = 15,
  anon_sym_play = 16,
  anon_sym_if = 17,
  anon_sym_or = 18,
  anon_sym_otherwise = 19,
  anon_sym_loop = 20,
  anon_sym_over = 21,
  anon_sym_until = 22,
  anon_sym_to = 23,
  anon_sym_continue = 24,
  anon_sym_break = 25,
  anon_sym_return = 26,
  anon_sym_main = 27,
  anon_sym_read = 28,
  anon_sym_print = 29,
  anon_sym_import = 30,
  anon_sym_const = 31,
  anon_sym_HIGHPASS = 32,
  anon_sym_LOWPASS = 33,
  anon_sym_EQ = 34,
  anon_sym_SIN = 35,
  anon_sym_COS = 36,
  anon_sym_EXP_DECAY = 37,
  anon_sym_LIN_DECAY = 38,
  anon_sym_SQUARE = 39,
  anon_sym_SAW = 40,
  anon_sym_TRIANGLE = 41,
  anon_sym_PAN = 42,
  sym_identifier = 43,
  sym_constant = 44,
  anon_sym_SQUOTE = 45,
  aux_sym_string_token1 = 46,
  aux_sym_string_token2 = 47,
  anon_sym_DQUOTE = 48,
  aux_sym_string_token3 = 49,
  anon_sym_TILDE = 50,
  anon_sym_BANG = 51,
  anon_sym_CARET = 52,
  anon_sym_AMP = 53,
  anon_sym_STAR = 54,
  anon_sym_SLASH = 55,
  anon_sym_PERCENT = 56,
  anon_sym_GT_GT = 57,
  anon_sym_LT_LT = 58,
  anon_sym_PLUS = 59,
  anon_sym_DASH = 60,
  anon_sym_PIPE = 61,
  anon_sym_LT = 62,
  anon_sym_LT_EQ = 63,
  anon_sym_GT = 64,
  anon_sym_GT_EQ = 65,
  anon_sym_EQ_EQ = 66,
  anon_sym_BANG_EQ = 67,
  anon_sym_AMP_AMP = 68,
  anon_sym_PIPE_PIPE = 69,
  anon_sym_EQ2 = 70,
  anon_sym_CARET_EQ = 71,
  anon_sym_AMP_EQ = 72,
  anon_sym_STAR_EQ = 73,
  anon_sym_SLASH_EQ = 74,
  anon_sym_PERCENT_EQ = 75,
  anon_sym_PLUS_EQ = 76,
  anon_sym_DASH_EQ = 77,
  anon_sym_PIPE_EQ = 78,
  anon_sym_DASH_GT = 79,
  anon_sym_LT_DASH = 80,
  anon_sym_AT = 81,
  anon_sym__ = 82,
  anon_sym_EQ_GT = 83,
  anon_sym_LBRACE = 84,
  anon_sym_RBRACE = 85,
  anon_sym_LPAREN = 86,
  anon_sym_RPAREN = 87,
  anon_sym_LBRACK = 88,
  anon_sym_RBRACK = 89,
  anon_sym_SEMI = 90,
  anon_sym_COMMA = 91,
  anon_sym_DOT = 92,
  sym_source_file = 93,
  sym__statement = 94,
  sym_comment = 95,
  sym_comment_block = 96,
  sym_type = 97,
  sym_bool_literal = 98,
  sym_control_keyword = 99,
  sym_keyword = 100,
  sym_inbuilt_function = 101,
  sym_string = 102,
  sym_operator = 103,
  sym_punctuation = 104,
  aux_sym_source_file_repeat1 = 105,
  aux_sym_comment_block_repeat1 = 106,
  aux_sym_string_repeat1 = 107,
  aux_sym_string_repeat2 = 108,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment_line] = "comment_line",
  [anon_sym_SLASH_STAR] = "/*",
  [aux_sym_comment_block_token1] = "comment_block_token1",
  [aux_sym_comment_block_token2] = "comment_block_token2",
  [anon_sym_STAR_SLASH] = "*/",
  [anon_sym_long] = "long",
  [anon_sym_int] = "int",
  [anon_sym_float] = "float",
  [anon_sym_string] = "string",
  [anon_sym_audio] = "audio",
  [anon_sym_bool] = "bool",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_load] = "load",
  [anon_sym_save] = "save",
  [anon_sym_play] = "play",
  [anon_sym_if] = "if",
  [anon_sym_or] = "or",
  [anon_sym_otherwise] = "otherwise",
  [anon_sym_loop] = "loop",
  [anon_sym_over] = "over",
  [anon_sym_until] = "until",
  [anon_sym_to] = "to",
  [anon_sym_continue] = "continue",
  [anon_sym_break] = "break",
  [anon_sym_return] = "return",
  [anon_sym_main] = "main",
  [anon_sym_read] = "read",
  [anon_sym_print] = "print",
  [anon_sym_import] = "import",
  [anon_sym_const] = "const",
  [anon_sym_HIGHPASS] = "HIGHPASS",
  [anon_sym_LOWPASS] = "LOWPASS",
  [anon_sym_EQ] = "EQ",
  [anon_sym_SIN] = "SIN",
  [anon_sym_COS] = "COS",
  [anon_sym_EXP_DECAY] = "EXP_DECAY",
  [anon_sym_LIN_DECAY] = "LIN_DECAY",
  [anon_sym_SQUARE] = "SQUARE",
  [anon_sym_SAW] = "SAW",
  [anon_sym_TRIANGLE] = "TRIANGLE",
  [anon_sym_PAN] = "PAN",
  [sym_identifier] = "identifier",
  [sym_constant] = "constant",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_string_token1] = "string_token1",
  [aux_sym_string_token2] = "string_token2",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token3] = "string_token3",
  [anon_sym_TILDE] = "~",
  [anon_sym_BANG] = "!",
  [anon_sym_CARET] = "^",
  [anon_sym_AMP] = "&",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_PERCENT] = "%",
  [anon_sym_GT_GT] = ">>",
  [anon_sym_LT_LT] = "<<",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_PIPE] = "|",
  [anon_sym_LT] = "<",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT] = ">",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_PIPE_PIPE] = "||",
  [anon_sym_EQ2] = "=",
  [anon_sym_CARET_EQ] = "^=",
  [anon_sym_AMP_EQ] = "&=",
  [anon_sym_STAR_EQ] = "*=",
  [anon_sym_SLASH_EQ] = "/=",
  [anon_sym_PERCENT_EQ] = "%=",
  [anon_sym_PLUS_EQ] = "+=",
  [anon_sym_DASH_EQ] = "-=",
  [anon_sym_PIPE_EQ] = "|=",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_LT_DASH] = "<-",
  [anon_sym_AT] = "@",
  [anon_sym__] = "_",
  [anon_sym_EQ_GT] = "=>",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_SEMI] = ";",
  [anon_sym_COMMA] = ",",
  [anon_sym_DOT] = ".",
  [sym_source_file] = "source_file",
  [sym__statement] = "_statement",
  [sym_comment] = "comment",
  [sym_comment_block] = "comment_block",
  [sym_type] = "type",
  [sym_bool_literal] = "bool_literal",
  [sym_control_keyword] = "control_keyword",
  [sym_keyword] = "keyword",
  [sym_inbuilt_function] = "inbuilt_function",
  [sym_string] = "string",
  [sym_operator] = "operator",
  [sym_punctuation] = "punctuation",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_comment_block_repeat1] = "comment_block_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_string_repeat2] = "string_repeat2",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_comment_line] = sym_comment_line,
  [anon_sym_SLASH_STAR] = anon_sym_SLASH_STAR,
  [aux_sym_comment_block_token1] = aux_sym_comment_block_token1,
  [aux_sym_comment_block_token2] = aux_sym_comment_block_token2,
  [anon_sym_STAR_SLASH] = anon_sym_STAR_SLASH,
  [anon_sym_long] = anon_sym_long,
  [anon_sym_int] = anon_sym_int,
  [anon_sym_float] = anon_sym_float,
  [anon_sym_string] = anon_sym_string,
  [anon_sym_audio] = anon_sym_audio,
  [anon_sym_bool] = anon_sym_bool,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_load] = anon_sym_load,
  [anon_sym_save] = anon_sym_save,
  [anon_sym_play] = anon_sym_play,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_or] = anon_sym_or,
  [anon_sym_otherwise] = anon_sym_otherwise,
  [anon_sym_loop] = anon_sym_loop,
  [anon_sym_over] = anon_sym_over,
  [anon_sym_until] = anon_sym_until,
  [anon_sym_to] = anon_sym_to,
  [anon_sym_continue] = anon_sym_continue,
  [anon_sym_break] = anon_sym_break,
  [anon_sym_return] = anon_sym_return,
  [anon_sym_main] = anon_sym_main,
  [anon_sym_read] = anon_sym_read,
  [anon_sym_print] = anon_sym_print,
  [anon_sym_import] = anon_sym_import,
  [anon_sym_const] = anon_sym_const,
  [anon_sym_HIGHPASS] = anon_sym_HIGHPASS,
  [anon_sym_LOWPASS] = anon_sym_LOWPASS,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_SIN] = anon_sym_SIN,
  [anon_sym_COS] = anon_sym_COS,
  [anon_sym_EXP_DECAY] = anon_sym_EXP_DECAY,
  [anon_sym_LIN_DECAY] = anon_sym_LIN_DECAY,
  [anon_sym_SQUARE] = anon_sym_SQUARE,
  [anon_sym_SAW] = anon_sym_SAW,
  [anon_sym_TRIANGLE] = anon_sym_TRIANGLE,
  [anon_sym_PAN] = anon_sym_PAN,
  [sym_identifier] = sym_identifier,
  [sym_constant] = sym_constant,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [aux_sym_string_token2] = aux_sym_string_token2,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token3] = aux_sym_string_token3,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_GT_GT] = anon_sym_GT_GT,
  [anon_sym_LT_LT] = anon_sym_LT_LT,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_AMP_AMP] = anon_sym_AMP_AMP,
  [anon_sym_PIPE_PIPE] = anon_sym_PIPE_PIPE,
  [anon_sym_EQ2] = anon_sym_EQ2,
  [anon_sym_CARET_EQ] = anon_sym_CARET_EQ,
  [anon_sym_AMP_EQ] = anon_sym_AMP_EQ,
  [anon_sym_STAR_EQ] = anon_sym_STAR_EQ,
  [anon_sym_SLASH_EQ] = anon_sym_SLASH_EQ,
  [anon_sym_PERCENT_EQ] = anon_sym_PERCENT_EQ,
  [anon_sym_PLUS_EQ] = anon_sym_PLUS_EQ,
  [anon_sym_DASH_EQ] = anon_sym_DASH_EQ,
  [anon_sym_PIPE_EQ] = anon_sym_PIPE_EQ,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_LT_DASH] = anon_sym_LT_DASH,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym__] = anon_sym__,
  [anon_sym_EQ_GT] = anon_sym_EQ_GT,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_DOT] = anon_sym_DOT,
  [sym_source_file] = sym_source_file,
  [sym__statement] = sym__statement,
  [sym_comment] = sym_comment,
  [sym_comment_block] = sym_comment_block,
  [sym_type] = sym_type,
  [sym_bool_literal] = sym_bool_literal,
  [sym_control_keyword] = sym_control_keyword,
  [sym_keyword] = sym_keyword,
  [sym_inbuilt_function] = sym_inbuilt_function,
  [sym_string] = sym_string,
  [sym_operator] = sym_operator,
  [sym_punctuation] = sym_punctuation,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_comment_block_repeat1] = aux_sym_comment_block_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [aux_sym_string_repeat2] = aux_sym_string_repeat2,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_comment_line] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_STAR] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_block_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_comment_block_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_STAR_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_long] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_float] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_string] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_audio] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bool] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_load] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_save] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_play] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_or] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_otherwise] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_loop] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_over] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_until] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_to] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_continue] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_break] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_return] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_main] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_read] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_print] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_import] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_const] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_HIGHPASS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LOWPASS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SIN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EXP_DECAY] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LIN_DECAY] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUARE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SAW] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TRIANGLE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PAN] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_constant] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token3] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym__] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_comment_block] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym_bool_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_control_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_inbuilt_function] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_punctuation] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_comment_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat2] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(8);
      ADVANCE_MAP(
        '!', 185,
        '"', 181,
        '%', 190,
        '&', 187,
        '\'', 177,
        '(', 220,
        ')', 221,
        '*', 188,
        '+', 193,
        ',', 225,
        '-', 194,
        '.', 226,
        '/', 189,
        ';', 224,
        '<', 196,
        '=', 204,
        '>', 198,
        '@', 215,
        'C', 79,
        'E', 83,
        'H', 71,
        'L', 72,
        'P', 55,
        'S', 56,
        'T', 84,
        '[', 222,
        '\\', 7,
        ']', 223,
        '^', 186,
        '_', 216,
        'a', 166,
        'b', 146,
        'c', 144,
        'f', 98,
        'i', 118,
        'l', 141,
        'm', 99,
        'o', 151,
        'p', 133,
        'r', 114,
        's', 100,
        't', 142,
        'u', 137,
        '{', 218,
        '|', 195,
        '}', 219,
        '~', 184,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(175);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(181);
      if (lookahead == '\\') ADVANCE(7);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(183);
      if (lookahead != 0) ADVANCE(182);
      END_STATE();
    case 2:
      if (lookahead == '\'') ADVANCE(177);
      if (lookahead == '\\') ADVANCE(7);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(179);
      if (lookahead != 0) ADVANCE(178);
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(12);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 4:
      if (lookahead == '/') ADVANCE(14);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 5:
      if (lookahead == 's') ADVANCE(174);
      END_STATE();
    case 6:
      if (lookahead == 'z') ADVANCE(174);
      END_STATE();
    case 7:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(180);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_comment_line);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(9);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(aux_sym_comment_block_token1);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(aux_sym_comment_block_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '*') ADVANCE(11);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(aux_sym_comment_block_token2);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_STAR_SLASH);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_long);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_int);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_float);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_string);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_audio);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_bool);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_load);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_save);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_play);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_if);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_or);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_otherwise);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_loop);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_over);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_until);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_to);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_continue);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_break);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_return);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_main);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_read);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_print);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_import);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_const);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_HIGHPASS);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_LOWPASS);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_SIN);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_COS);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_EXP_DECAY);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_LIN_DECAY);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_SQUARE);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_SAW);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_TRIANGLE);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_PAN);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(92);
      if (lookahead == 'I') ADVANCE(76);
      if (lookahead == 'Q') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'H') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(78);
      if (lookahead == 'O') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'Q') ADVANCE(43);
      if (lookahead == 'X') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'W') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'W') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'Y') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'Y') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(130);
      if (lookahead == 'l') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(170);
      if (lookahead == 't') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(106);
      if (lookahead == 'n') ADVANCE(119);
      if (lookahead == 'o') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(107);
      if (lookahead == 't') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(26);
      if (lookahead == 'm') ADVANCE(150);
      if (lookahead == 'n') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'k') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(101);
      if (lookahead == 'r') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(32);
      if (lookahead == 'r') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(145);
      if (lookahead == 'r') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(27);
      if (lookahead == 't') ADVANCE(121);
      if (lookahead == 'v') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(161);
      if (lookahead == 't') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'w') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_constant);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_constant);
      if (lookahead == '.') ADVANCE(176);
      if (lookahead == 'h') ADVANCE(6);
      if (lookahead == 'm') ADVANCE(5);
      if (lookahead == 's') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(175);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_constant);
      if (lookahead == 'h') ADVANCE(6);
      if (lookahead == 'm') ADVANCE(5);
      if (lookahead == 's') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(176);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(179);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(178);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_string_token2);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_string_token3);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(183);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(182);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(201);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_CARET);
      if (lookahead == '=') ADVANCE(205);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(202);
      if (lookahead == '=') ADVANCE(206);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '=') ADVANCE(207);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(10);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == '=') ADVANCE(208);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == '=') ADVANCE(209);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '=') ADVANCE(210);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '=') ADVANCE(211);
      if (lookahead == '>') ADVANCE(213);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '=') ADVANCE(212);
      if (lookahead == '|') ADVANCE(203);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '-') ADVANCE(214);
      if (lookahead == '<') ADVANCE(192);
      if (lookahead == '=') ADVANCE(197);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(199);
      if (lookahead == '>') ADVANCE(191);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_EQ2);
      if (lookahead == '=') ADVANCE(200);
      if (lookahead == '>') ADVANCE(217);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_CARET_EQ);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_AMP_EQ);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_SLASH_EQ);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_PERCENT_EQ);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_LT_DASH);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(176);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment_line] = ACTIONS(1),
    [anon_sym_SLASH_STAR] = ACTIONS(1),
    [anon_sym_long] = ACTIONS(1),
    [anon_sym_int] = ACTIONS(1),
    [anon_sym_float] = ACTIONS(1),
    [anon_sym_string] = ACTIONS(1),
    [anon_sym_audio] = ACTIONS(1),
    [anon_sym_bool] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_load] = ACTIONS(1),
    [anon_sym_save] = ACTIONS(1),
    [anon_sym_play] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
    [anon_sym_otherwise] = ACTIONS(1),
    [anon_sym_loop] = ACTIONS(1),
    [anon_sym_over] = ACTIONS(1),
    [anon_sym_until] = ACTIONS(1),
    [anon_sym_to] = ACTIONS(1),
    [anon_sym_continue] = ACTIONS(1),
    [anon_sym_break] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [anon_sym_main] = ACTIONS(1),
    [anon_sym_read] = ACTIONS(1),
    [anon_sym_print] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
    [anon_sym_const] = ACTIONS(1),
    [anon_sym_HIGHPASS] = ACTIONS(1),
    [anon_sym_LOWPASS] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_SIN] = ACTIONS(1),
    [anon_sym_COS] = ACTIONS(1),
    [anon_sym_EXP_DECAY] = ACTIONS(1),
    [anon_sym_LIN_DECAY] = ACTIONS(1),
    [anon_sym_SQUARE] = ACTIONS(1),
    [anon_sym_SAW] = ACTIONS(1),
    [anon_sym_TRIANGLE] = ACTIONS(1),
    [anon_sym_PAN] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_constant] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [aux_sym_string_token2] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_GT_GT] = ACTIONS(1),
    [anon_sym_LT_LT] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_EQ2] = ACTIONS(1),
    [anon_sym_CARET_EQ] = ACTIONS(1),
    [anon_sym_AMP_EQ] = ACTIONS(1),
    [anon_sym_STAR_EQ] = ACTIONS(1),
    [anon_sym_SLASH_EQ] = ACTIONS(1),
    [anon_sym_PERCENT_EQ] = ACTIONS(1),
    [anon_sym_PLUS_EQ] = ACTIONS(1),
    [anon_sym_DASH_EQ] = ACTIONS(1),
    [anon_sym_PIPE_EQ] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_LT_DASH] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym__] = ACTIONS(1),
    [anon_sym_EQ_GT] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(25),
    [sym__statement] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_comment_block] = STATE(4),
    [sym_type] = STATE(2),
    [sym_bool_literal] = STATE(2),
    [sym_control_keyword] = STATE(2),
    [sym_keyword] = STATE(2),
    [sym_inbuilt_function] = STATE(2),
    [sym_string] = STATE(2),
    [sym_operator] = STATE(2),
    [sym_punctuation] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_comment_line] = ACTIONS(5),
    [anon_sym_SLASH_STAR] = ACTIONS(7),
    [anon_sym_long] = ACTIONS(9),
    [anon_sym_int] = ACTIONS(9),
    [anon_sym_float] = ACTIONS(9),
    [anon_sym_string] = ACTIONS(9),
    [anon_sym_audio] = ACTIONS(9),
    [anon_sym_bool] = ACTIONS(9),
    [anon_sym_true] = ACTIONS(11),
    [anon_sym_false] = ACTIONS(11),
    [anon_sym_load] = ACTIONS(13),
    [anon_sym_save] = ACTIONS(13),
    [anon_sym_play] = ACTIONS(13),
    [anon_sym_if] = ACTIONS(13),
    [anon_sym_or] = ACTIONS(13),
    [anon_sym_otherwise] = ACTIONS(13),
    [anon_sym_loop] = ACTIONS(13),
    [anon_sym_over] = ACTIONS(13),
    [anon_sym_until] = ACTIONS(13),
    [anon_sym_to] = ACTIONS(13),
    [anon_sym_continue] = ACTIONS(13),
    [anon_sym_break] = ACTIONS(13),
    [anon_sym_return] = ACTIONS(13),
    [anon_sym_main] = ACTIONS(13),
    [anon_sym_read] = ACTIONS(13),
    [anon_sym_print] = ACTIONS(13),
    [anon_sym_import] = ACTIONS(15),
    [anon_sym_const] = ACTIONS(15),
    [anon_sym_HIGHPASS] = ACTIONS(17),
    [anon_sym_LOWPASS] = ACTIONS(17),
    [anon_sym_EQ] = ACTIONS(17),
    [anon_sym_SIN] = ACTIONS(17),
    [anon_sym_COS] = ACTIONS(17),
    [anon_sym_EXP_DECAY] = ACTIONS(17),
    [anon_sym_LIN_DECAY] = ACTIONS(17),
    [anon_sym_SQUARE] = ACTIONS(17),
    [anon_sym_SAW] = ACTIONS(17),
    [anon_sym_TRIANGLE] = ACTIONS(17),
    [anon_sym_PAN] = ACTIONS(17),
    [sym_identifier] = ACTIONS(19),
    [sym_constant] = ACTIONS(21),
    [anon_sym_SQUOTE] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_TILDE] = ACTIONS(27),
    [anon_sym_BANG] = ACTIONS(29),
    [anon_sym_CARET] = ACTIONS(29),
    [anon_sym_AMP] = ACTIONS(29),
    [anon_sym_STAR] = ACTIONS(29),
    [anon_sym_SLASH] = ACTIONS(29),
    [anon_sym_PERCENT] = ACTIONS(29),
    [anon_sym_GT_GT] = ACTIONS(27),
    [anon_sym_LT_LT] = ACTIONS(27),
    [anon_sym_PLUS] = ACTIONS(29),
    [anon_sym_DASH] = ACTIONS(29),
    [anon_sym_PIPE] = ACTIONS(29),
    [anon_sym_LT] = ACTIONS(29),
    [anon_sym_LT_EQ] = ACTIONS(27),
    [anon_sym_GT] = ACTIONS(29),
    [anon_sym_GT_EQ] = ACTIONS(27),
    [anon_sym_EQ_EQ] = ACTIONS(27),
    [anon_sym_BANG_EQ] = ACTIONS(27),
    [anon_sym_AMP_AMP] = ACTIONS(27),
    [anon_sym_PIPE_PIPE] = ACTIONS(27),
    [anon_sym_EQ2] = ACTIONS(29),
    [anon_sym_CARET_EQ] = ACTIONS(27),
    [anon_sym_AMP_EQ] = ACTIONS(27),
    [anon_sym_STAR_EQ] = ACTIONS(27),
    [anon_sym_SLASH_EQ] = ACTIONS(27),
    [anon_sym_PERCENT_EQ] = ACTIONS(27),
    [anon_sym_PLUS_EQ] = ACTIONS(27),
    [anon_sym_DASH_EQ] = ACTIONS(27),
    [anon_sym_PIPE_EQ] = ACTIONS(27),
    [anon_sym_DASH_GT] = ACTIONS(27),
    [anon_sym_LT_DASH] = ACTIONS(27),
    [anon_sym_AT] = ACTIONS(27),
    [anon_sym__] = ACTIONS(27),
    [anon_sym_EQ_GT] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_RBRACE] = ACTIONS(31),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_RPAREN] = ACTIONS(31),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_RBRACK] = ACTIONS(31),
    [anon_sym_SEMI] = ACTIONS(31),
    [anon_sym_COMMA] = ACTIONS(31),
    [anon_sym_DOT] = ACTIONS(33),
  },
  [2] = {
    [sym__statement] = STATE(3),
    [sym_comment] = STATE(3),
    [sym_comment_block] = STATE(4),
    [sym_type] = STATE(3),
    [sym_bool_literal] = STATE(3),
    [sym_control_keyword] = STATE(3),
    [sym_keyword] = STATE(3),
    [sym_inbuilt_function] = STATE(3),
    [sym_string] = STATE(3),
    [sym_operator] = STATE(3),
    [sym_punctuation] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(35),
    [sym_comment_line] = ACTIONS(5),
    [anon_sym_SLASH_STAR] = ACTIONS(7),
    [anon_sym_long] = ACTIONS(9),
    [anon_sym_int] = ACTIONS(9),
    [anon_sym_float] = ACTIONS(9),
    [anon_sym_string] = ACTIONS(9),
    [anon_sym_audio] = ACTIONS(9),
    [anon_sym_bool] = ACTIONS(9),
    [anon_sym_true] = ACTIONS(11),
    [anon_sym_false] = ACTIONS(11),
    [anon_sym_load] = ACTIONS(13),
    [anon_sym_save] = ACTIONS(13),
    [anon_sym_play] = ACTIONS(13),
    [anon_sym_if] = ACTIONS(13),
    [anon_sym_or] = ACTIONS(13),
    [anon_sym_otherwise] = ACTIONS(13),
    [anon_sym_loop] = ACTIONS(13),
    [anon_sym_over] = ACTIONS(13),
    [anon_sym_until] = ACTIONS(13),
    [anon_sym_to] = ACTIONS(13),
    [anon_sym_continue] = ACTIONS(13),
    [anon_sym_break] = ACTIONS(13),
    [anon_sym_return] = ACTIONS(13),
    [anon_sym_main] = ACTIONS(13),
    [anon_sym_read] = ACTIONS(13),
    [anon_sym_print] = ACTIONS(13),
    [anon_sym_import] = ACTIONS(15),
    [anon_sym_const] = ACTIONS(15),
    [anon_sym_HIGHPASS] = ACTIONS(17),
    [anon_sym_LOWPASS] = ACTIONS(17),
    [anon_sym_EQ] = ACTIONS(17),
    [anon_sym_SIN] = ACTIONS(17),
    [anon_sym_COS] = ACTIONS(17),
    [anon_sym_EXP_DECAY] = ACTIONS(17),
    [anon_sym_LIN_DECAY] = ACTIONS(17),
    [anon_sym_SQUARE] = ACTIONS(17),
    [anon_sym_SAW] = ACTIONS(17),
    [anon_sym_TRIANGLE] = ACTIONS(17),
    [anon_sym_PAN] = ACTIONS(17),
    [sym_identifier] = ACTIONS(37),
    [sym_constant] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_TILDE] = ACTIONS(27),
    [anon_sym_BANG] = ACTIONS(29),
    [anon_sym_CARET] = ACTIONS(29),
    [anon_sym_AMP] = ACTIONS(29),
    [anon_sym_STAR] = ACTIONS(29),
    [anon_sym_SLASH] = ACTIONS(29),
    [anon_sym_PERCENT] = ACTIONS(29),
    [anon_sym_GT_GT] = ACTIONS(27),
    [anon_sym_LT_LT] = ACTIONS(27),
    [anon_sym_PLUS] = ACTIONS(29),
    [anon_sym_DASH] = ACTIONS(29),
    [anon_sym_PIPE] = ACTIONS(29),
    [anon_sym_LT] = ACTIONS(29),
    [anon_sym_LT_EQ] = ACTIONS(27),
    [anon_sym_GT] = ACTIONS(29),
    [anon_sym_GT_EQ] = ACTIONS(27),
    [anon_sym_EQ_EQ] = ACTIONS(27),
    [anon_sym_BANG_EQ] = ACTIONS(27),
    [anon_sym_AMP_AMP] = ACTIONS(27),
    [anon_sym_PIPE_PIPE] = ACTIONS(27),
    [anon_sym_EQ2] = ACTIONS(29),
    [anon_sym_CARET_EQ] = ACTIONS(27),
    [anon_sym_AMP_EQ] = ACTIONS(27),
    [anon_sym_STAR_EQ] = ACTIONS(27),
    [anon_sym_SLASH_EQ] = ACTIONS(27),
    [anon_sym_PERCENT_EQ] = ACTIONS(27),
    [anon_sym_PLUS_EQ] = ACTIONS(27),
    [anon_sym_DASH_EQ] = ACTIONS(27),
    [anon_sym_PIPE_EQ] = ACTIONS(27),
    [anon_sym_DASH_GT] = ACTIONS(27),
    [anon_sym_LT_DASH] = ACTIONS(27),
    [anon_sym_AT] = ACTIONS(27),
    [anon_sym__] = ACTIONS(27),
    [anon_sym_EQ_GT] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_RBRACE] = ACTIONS(31),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_RPAREN] = ACTIONS(31),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_RBRACK] = ACTIONS(31),
    [anon_sym_SEMI] = ACTIONS(31),
    [anon_sym_COMMA] = ACTIONS(31),
    [anon_sym_DOT] = ACTIONS(33),
  },
  [3] = {
    [sym__statement] = STATE(3),
    [sym_comment] = STATE(3),
    [sym_comment_block] = STATE(4),
    [sym_type] = STATE(3),
    [sym_bool_literal] = STATE(3),
    [sym_control_keyword] = STATE(3),
    [sym_keyword] = STATE(3),
    [sym_inbuilt_function] = STATE(3),
    [sym_string] = STATE(3),
    [sym_operator] = STATE(3),
    [sym_punctuation] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(41),
    [sym_comment_line] = ACTIONS(43),
    [anon_sym_SLASH_STAR] = ACTIONS(46),
    [anon_sym_long] = ACTIONS(49),
    [anon_sym_int] = ACTIONS(49),
    [anon_sym_float] = ACTIONS(49),
    [anon_sym_string] = ACTIONS(49),
    [anon_sym_audio] = ACTIONS(49),
    [anon_sym_bool] = ACTIONS(49),
    [anon_sym_true] = ACTIONS(52),
    [anon_sym_false] = ACTIONS(52),
    [anon_sym_load] = ACTIONS(55),
    [anon_sym_save] = ACTIONS(55),
    [anon_sym_play] = ACTIONS(55),
    [anon_sym_if] = ACTIONS(55),
    [anon_sym_or] = ACTIONS(55),
    [anon_sym_otherwise] = ACTIONS(55),
    [anon_sym_loop] = ACTIONS(55),
    [anon_sym_over] = ACTIONS(55),
    [anon_sym_until] = ACTIONS(55),
    [anon_sym_to] = ACTIONS(55),
    [anon_sym_continue] = ACTIONS(55),
    [anon_sym_break] = ACTIONS(55),
    [anon_sym_return] = ACTIONS(55),
    [anon_sym_main] = ACTIONS(55),
    [anon_sym_read] = ACTIONS(55),
    [anon_sym_print] = ACTIONS(55),
    [anon_sym_import] = ACTIONS(58),
    [anon_sym_const] = ACTIONS(58),
    [anon_sym_HIGHPASS] = ACTIONS(61),
    [anon_sym_LOWPASS] = ACTIONS(61),
    [anon_sym_EQ] = ACTIONS(61),
    [anon_sym_SIN] = ACTIONS(61),
    [anon_sym_COS] = ACTIONS(61),
    [anon_sym_EXP_DECAY] = ACTIONS(61),
    [anon_sym_LIN_DECAY] = ACTIONS(61),
    [anon_sym_SQUARE] = ACTIONS(61),
    [anon_sym_SAW] = ACTIONS(61),
    [anon_sym_TRIANGLE] = ACTIONS(61),
    [anon_sym_PAN] = ACTIONS(61),
    [sym_identifier] = ACTIONS(64),
    [sym_constant] = ACTIONS(67),
    [anon_sym_SQUOTE] = ACTIONS(70),
    [anon_sym_DQUOTE] = ACTIONS(73),
    [anon_sym_TILDE] = ACTIONS(76),
    [anon_sym_BANG] = ACTIONS(79),
    [anon_sym_CARET] = ACTIONS(79),
    [anon_sym_AMP] = ACTIONS(79),
    [anon_sym_STAR] = ACTIONS(79),
    [anon_sym_SLASH] = ACTIONS(79),
    [anon_sym_PERCENT] = ACTIONS(79),
    [anon_sym_GT_GT] = ACTIONS(76),
    [anon_sym_LT_LT] = ACTIONS(76),
    [anon_sym_PLUS] = ACTIONS(79),
    [anon_sym_DASH] = ACTIONS(79),
    [anon_sym_PIPE] = ACTIONS(79),
    [anon_sym_LT] = ACTIONS(79),
    [anon_sym_LT_EQ] = ACTIONS(76),
    [anon_sym_GT] = ACTIONS(79),
    [anon_sym_GT_EQ] = ACTIONS(76),
    [anon_sym_EQ_EQ] = ACTIONS(76),
    [anon_sym_BANG_EQ] = ACTIONS(76),
    [anon_sym_AMP_AMP] = ACTIONS(76),
    [anon_sym_PIPE_PIPE] = ACTIONS(76),
    [anon_sym_EQ2] = ACTIONS(79),
    [anon_sym_CARET_EQ] = ACTIONS(76),
    [anon_sym_AMP_EQ] = ACTIONS(76),
    [anon_sym_STAR_EQ] = ACTIONS(76),
    [anon_sym_SLASH_EQ] = ACTIONS(76),
    [anon_sym_PERCENT_EQ] = ACTIONS(76),
    [anon_sym_PLUS_EQ] = ACTIONS(76),
    [anon_sym_DASH_EQ] = ACTIONS(76),
    [anon_sym_PIPE_EQ] = ACTIONS(76),
    [anon_sym_DASH_GT] = ACTIONS(76),
    [anon_sym_LT_DASH] = ACTIONS(76),
    [anon_sym_AT] = ACTIONS(76),
    [anon_sym__] = ACTIONS(76),
    [anon_sym_EQ_GT] = ACTIONS(76),
    [anon_sym_LBRACE] = ACTIONS(82),
    [anon_sym_RBRACE] = ACTIONS(82),
    [anon_sym_LPAREN] = ACTIONS(82),
    [anon_sym_RPAREN] = ACTIONS(82),
    [anon_sym_LBRACK] = ACTIONS(82),
    [anon_sym_RBRACK] = ACTIONS(82),
    [anon_sym_SEMI] = ACTIONS(82),
    [anon_sym_COMMA] = ACTIONS(82),
    [anon_sym_DOT] = ACTIONS(85),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(88),
    [sym_comment_line] = ACTIONS(88),
    [anon_sym_SLASH_STAR] = ACTIONS(88),
    [anon_sym_long] = ACTIONS(90),
    [anon_sym_int] = ACTIONS(90),
    [anon_sym_float] = ACTIONS(90),
    [anon_sym_string] = ACTIONS(90),
    [anon_sym_audio] = ACTIONS(90),
    [anon_sym_bool] = ACTIONS(90),
    [anon_sym_true] = ACTIONS(90),
    [anon_sym_false] = ACTIONS(90),
    [anon_sym_load] = ACTIONS(90),
    [anon_sym_save] = ACTIONS(90),
    [anon_sym_play] = ACTIONS(90),
    [anon_sym_if] = ACTIONS(90),
    [anon_sym_or] = ACTIONS(90),
    [anon_sym_otherwise] = ACTIONS(90),
    [anon_sym_loop] = ACTIONS(90),
    [anon_sym_over] = ACTIONS(90),
    [anon_sym_until] = ACTIONS(90),
    [anon_sym_to] = ACTIONS(90),
    [anon_sym_continue] = ACTIONS(90),
    [anon_sym_break] = ACTIONS(90),
    [anon_sym_return] = ACTIONS(90),
    [anon_sym_main] = ACTIONS(90),
    [anon_sym_read] = ACTIONS(90),
    [anon_sym_print] = ACTIONS(90),
    [anon_sym_import] = ACTIONS(90),
    [anon_sym_const] = ACTIONS(90),
    [anon_sym_HIGHPASS] = ACTIONS(90),
    [anon_sym_LOWPASS] = ACTIONS(90),
    [anon_sym_EQ] = ACTIONS(90),
    [anon_sym_SIN] = ACTIONS(90),
    [anon_sym_COS] = ACTIONS(90),
    [anon_sym_EXP_DECAY] = ACTIONS(90),
    [anon_sym_LIN_DECAY] = ACTIONS(90),
    [anon_sym_SQUARE] = ACTIONS(90),
    [anon_sym_SAW] = ACTIONS(90),
    [anon_sym_TRIANGLE] = ACTIONS(90),
    [anon_sym_PAN] = ACTIONS(90),
    [sym_identifier] = ACTIONS(90),
    [sym_constant] = ACTIONS(88),
    [anon_sym_SQUOTE] = ACTIONS(88),
    [anon_sym_DQUOTE] = ACTIONS(88),
    [anon_sym_TILDE] = ACTIONS(88),
    [anon_sym_BANG] = ACTIONS(90),
    [anon_sym_CARET] = ACTIONS(90),
    [anon_sym_AMP] = ACTIONS(90),
    [anon_sym_STAR] = ACTIONS(90),
    [anon_sym_SLASH] = ACTIONS(90),
    [anon_sym_PERCENT] = ACTIONS(90),
    [anon_sym_GT_GT] = ACTIONS(88),
    [anon_sym_LT_LT] = ACTIONS(88),
    [anon_sym_PLUS] = ACTIONS(90),
    [anon_sym_DASH] = ACTIONS(90),
    [anon_sym_PIPE] = ACTIONS(90),
    [anon_sym_LT] = ACTIONS(90),
    [anon_sym_LT_EQ] = ACTIONS(88),
    [anon_sym_GT] = ACTIONS(90),
    [anon_sym_GT_EQ] = ACTIONS(88),
    [anon_sym_EQ_EQ] = ACTIONS(88),
    [anon_sym_BANG_EQ] = ACTIONS(88),
    [anon_sym_AMP_AMP] = ACTIONS(88),
    [anon_sym_PIPE_PIPE] = ACTIONS(88),
    [anon_sym_EQ2] = ACTIONS(90),
    [anon_sym_CARET_EQ] = ACTIONS(88),
    [anon_sym_AMP_EQ] = ACTIONS(88),
    [anon_sym_STAR_EQ] = ACTIONS(88),
    [anon_sym_SLASH_EQ] = ACTIONS(88),
    [anon_sym_PERCENT_EQ] = ACTIONS(88),
    [anon_sym_PLUS_EQ] = ACTIONS(88),
    [anon_sym_DASH_EQ] = ACTIONS(88),
    [anon_sym_PIPE_EQ] = ACTIONS(88),
    [anon_sym_DASH_GT] = ACTIONS(88),
    [anon_sym_LT_DASH] = ACTIONS(88),
    [anon_sym_AT] = ACTIONS(88),
    [anon_sym__] = ACTIONS(88),
    [anon_sym_EQ_GT] = ACTIONS(88),
    [anon_sym_LBRACE] = ACTIONS(88),
    [anon_sym_RBRACE] = ACTIONS(88),
    [anon_sym_LPAREN] = ACTIONS(88),
    [anon_sym_RPAREN] = ACTIONS(88),
    [anon_sym_LBRACK] = ACTIONS(88),
    [anon_sym_RBRACK] = ACTIONS(88),
    [anon_sym_SEMI] = ACTIONS(88),
    [anon_sym_COMMA] = ACTIONS(88),
    [anon_sym_DOT] = ACTIONS(90),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(92),
    [sym_comment_line] = ACTIONS(92),
    [anon_sym_SLASH_STAR] = ACTIONS(92),
    [anon_sym_long] = ACTIONS(94),
    [anon_sym_int] = ACTIONS(94),
    [anon_sym_float] = ACTIONS(94),
    [anon_sym_string] = ACTIONS(94),
    [anon_sym_audio] = ACTIONS(94),
    [anon_sym_bool] = ACTIONS(94),
    [anon_sym_true] = ACTIONS(94),
    [anon_sym_false] = ACTIONS(94),
    [anon_sym_load] = ACTIONS(94),
    [anon_sym_save] = ACTIONS(94),
    [anon_sym_play] = ACTIONS(94),
    [anon_sym_if] = ACTIONS(94),
    [anon_sym_or] = ACTIONS(94),
    [anon_sym_otherwise] = ACTIONS(94),
    [anon_sym_loop] = ACTIONS(94),
    [anon_sym_over] = ACTIONS(94),
    [anon_sym_until] = ACTIONS(94),
    [anon_sym_to] = ACTIONS(94),
    [anon_sym_continue] = ACTIONS(94),
    [anon_sym_break] = ACTIONS(94),
    [anon_sym_return] = ACTIONS(94),
    [anon_sym_main] = ACTIONS(94),
    [anon_sym_read] = ACTIONS(94),
    [anon_sym_print] = ACTIONS(94),
    [anon_sym_import] = ACTIONS(94),
    [anon_sym_const] = ACTIONS(94),
    [anon_sym_HIGHPASS] = ACTIONS(94),
    [anon_sym_LOWPASS] = ACTIONS(94),
    [anon_sym_EQ] = ACTIONS(94),
    [anon_sym_SIN] = ACTIONS(94),
    [anon_sym_COS] = ACTIONS(94),
    [anon_sym_EXP_DECAY] = ACTIONS(94),
    [anon_sym_LIN_DECAY] = ACTIONS(94),
    [anon_sym_SQUARE] = ACTIONS(94),
    [anon_sym_SAW] = ACTIONS(94),
    [anon_sym_TRIANGLE] = ACTIONS(94),
    [anon_sym_PAN] = ACTIONS(94),
    [sym_identifier] = ACTIONS(94),
    [sym_constant] = ACTIONS(92),
    [anon_sym_SQUOTE] = ACTIONS(92),
    [anon_sym_DQUOTE] = ACTIONS(92),
    [anon_sym_TILDE] = ACTIONS(92),
    [anon_sym_BANG] = ACTIONS(94),
    [anon_sym_CARET] = ACTIONS(94),
    [anon_sym_AMP] = ACTIONS(94),
    [anon_sym_STAR] = ACTIONS(94),
    [anon_sym_SLASH] = ACTIONS(94),
    [anon_sym_PERCENT] = ACTIONS(94),
    [anon_sym_GT_GT] = ACTIONS(92),
    [anon_sym_LT_LT] = ACTIONS(92),
    [anon_sym_PLUS] = ACTIONS(94),
    [anon_sym_DASH] = ACTIONS(94),
    [anon_sym_PIPE] = ACTIONS(94),
    [anon_sym_LT] = ACTIONS(94),
    [anon_sym_LT_EQ] = ACTIONS(92),
    [anon_sym_GT] = ACTIONS(94),
    [anon_sym_GT_EQ] = ACTIONS(92),
    [anon_sym_EQ_EQ] = ACTIONS(92),
    [anon_sym_BANG_EQ] = ACTIONS(92),
    [anon_sym_AMP_AMP] = ACTIONS(92),
    [anon_sym_PIPE_PIPE] = ACTIONS(92),
    [anon_sym_EQ2] = ACTIONS(94),
    [anon_sym_CARET_EQ] = ACTIONS(92),
    [anon_sym_AMP_EQ] = ACTIONS(92),
    [anon_sym_STAR_EQ] = ACTIONS(92),
    [anon_sym_SLASH_EQ] = ACTIONS(92),
    [anon_sym_PERCENT_EQ] = ACTIONS(92),
    [anon_sym_PLUS_EQ] = ACTIONS(92),
    [anon_sym_DASH_EQ] = ACTIONS(92),
    [anon_sym_PIPE_EQ] = ACTIONS(92),
    [anon_sym_DASH_GT] = ACTIONS(92),
    [anon_sym_LT_DASH] = ACTIONS(92),
    [anon_sym_AT] = ACTIONS(92),
    [anon_sym__] = ACTIONS(92),
    [anon_sym_EQ_GT] = ACTIONS(92),
    [anon_sym_LBRACE] = ACTIONS(92),
    [anon_sym_RBRACE] = ACTIONS(92),
    [anon_sym_LPAREN] = ACTIONS(92),
    [anon_sym_RPAREN] = ACTIONS(92),
    [anon_sym_LBRACK] = ACTIONS(92),
    [anon_sym_RBRACK] = ACTIONS(92),
    [anon_sym_SEMI] = ACTIONS(92),
    [anon_sym_COMMA] = ACTIONS(92),
    [anon_sym_DOT] = ACTIONS(94),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(96),
    [sym_comment_line] = ACTIONS(96),
    [anon_sym_SLASH_STAR] = ACTIONS(96),
    [anon_sym_long] = ACTIONS(98),
    [anon_sym_int] = ACTIONS(98),
    [anon_sym_float] = ACTIONS(98),
    [anon_sym_string] = ACTIONS(98),
    [anon_sym_audio] = ACTIONS(98),
    [anon_sym_bool] = ACTIONS(98),
    [anon_sym_true] = ACTIONS(98),
    [anon_sym_false] = ACTIONS(98),
    [anon_sym_load] = ACTIONS(98),
    [anon_sym_save] = ACTIONS(98),
    [anon_sym_play] = ACTIONS(98),
    [anon_sym_if] = ACTIONS(98),
    [anon_sym_or] = ACTIONS(98),
    [anon_sym_otherwise] = ACTIONS(98),
    [anon_sym_loop] = ACTIONS(98),
    [anon_sym_over] = ACTIONS(98),
    [anon_sym_until] = ACTIONS(98),
    [anon_sym_to] = ACTIONS(98),
    [anon_sym_continue] = ACTIONS(98),
    [anon_sym_break] = ACTIONS(98),
    [anon_sym_return] = ACTIONS(98),
    [anon_sym_main] = ACTIONS(98),
    [anon_sym_read] = ACTIONS(98),
    [anon_sym_print] = ACTIONS(98),
    [anon_sym_import] = ACTIONS(98),
    [anon_sym_const] = ACTIONS(98),
    [anon_sym_HIGHPASS] = ACTIONS(98),
    [anon_sym_LOWPASS] = ACTIONS(98),
    [anon_sym_EQ] = ACTIONS(98),
    [anon_sym_SIN] = ACTIONS(98),
    [anon_sym_COS] = ACTIONS(98),
    [anon_sym_EXP_DECAY] = ACTIONS(98),
    [anon_sym_LIN_DECAY] = ACTIONS(98),
    [anon_sym_SQUARE] = ACTIONS(98),
    [anon_sym_SAW] = ACTIONS(98),
    [anon_sym_TRIANGLE] = ACTIONS(98),
    [anon_sym_PAN] = ACTIONS(98),
    [sym_identifier] = ACTIONS(98),
    [sym_constant] = ACTIONS(96),
    [anon_sym_SQUOTE] = ACTIONS(96),
    [anon_sym_DQUOTE] = ACTIONS(96),
    [anon_sym_TILDE] = ACTIONS(96),
    [anon_sym_BANG] = ACTIONS(98),
    [anon_sym_CARET] = ACTIONS(98),
    [anon_sym_AMP] = ACTIONS(98),
    [anon_sym_STAR] = ACTIONS(98),
    [anon_sym_SLASH] = ACTIONS(98),
    [anon_sym_PERCENT] = ACTIONS(98),
    [anon_sym_GT_GT] = ACTIONS(96),
    [anon_sym_LT_LT] = ACTIONS(96),
    [anon_sym_PLUS] = ACTIONS(98),
    [anon_sym_DASH] = ACTIONS(98),
    [anon_sym_PIPE] = ACTIONS(98),
    [anon_sym_LT] = ACTIONS(98),
    [anon_sym_LT_EQ] = ACTIONS(96),
    [anon_sym_GT] = ACTIONS(98),
    [anon_sym_GT_EQ] = ACTIONS(96),
    [anon_sym_EQ_EQ] = ACTIONS(96),
    [anon_sym_BANG_EQ] = ACTIONS(96),
    [anon_sym_AMP_AMP] = ACTIONS(96),
    [anon_sym_PIPE_PIPE] = ACTIONS(96),
    [anon_sym_EQ2] = ACTIONS(98),
    [anon_sym_CARET_EQ] = ACTIONS(96),
    [anon_sym_AMP_EQ] = ACTIONS(96),
    [anon_sym_STAR_EQ] = ACTIONS(96),
    [anon_sym_SLASH_EQ] = ACTIONS(96),
    [anon_sym_PERCENT_EQ] = ACTIONS(96),
    [anon_sym_PLUS_EQ] = ACTIONS(96),
    [anon_sym_DASH_EQ] = ACTIONS(96),
    [anon_sym_PIPE_EQ] = ACTIONS(96),
    [anon_sym_DASH_GT] = ACTIONS(96),
    [anon_sym_LT_DASH] = ACTIONS(96),
    [anon_sym_AT] = ACTIONS(96),
    [anon_sym__] = ACTIONS(96),
    [anon_sym_EQ_GT] = ACTIONS(96),
    [anon_sym_LBRACE] = ACTIONS(96),
    [anon_sym_RBRACE] = ACTIONS(96),
    [anon_sym_LPAREN] = ACTIONS(96),
    [anon_sym_RPAREN] = ACTIONS(96),
    [anon_sym_LBRACK] = ACTIONS(96),
    [anon_sym_RBRACK] = ACTIONS(96),
    [anon_sym_SEMI] = ACTIONS(96),
    [anon_sym_COMMA] = ACTIONS(96),
    [anon_sym_DOT] = ACTIONS(98),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(100),
    [sym_comment_line] = ACTIONS(100),
    [anon_sym_SLASH_STAR] = ACTIONS(100),
    [anon_sym_long] = ACTIONS(102),
    [anon_sym_int] = ACTIONS(102),
    [anon_sym_float] = ACTIONS(102),
    [anon_sym_string] = ACTIONS(102),
    [anon_sym_audio] = ACTIONS(102),
    [anon_sym_bool] = ACTIONS(102),
    [anon_sym_true] = ACTIONS(102),
    [anon_sym_false] = ACTIONS(102),
    [anon_sym_load] = ACTIONS(102),
    [anon_sym_save] = ACTIONS(102),
    [anon_sym_play] = ACTIONS(102),
    [anon_sym_if] = ACTIONS(102),
    [anon_sym_or] = ACTIONS(102),
    [anon_sym_otherwise] = ACTIONS(102),
    [anon_sym_loop] = ACTIONS(102),
    [anon_sym_over] = ACTIONS(102),
    [anon_sym_until] = ACTIONS(102),
    [anon_sym_to] = ACTIONS(102),
    [anon_sym_continue] = ACTIONS(102),
    [anon_sym_break] = ACTIONS(102),
    [anon_sym_return] = ACTIONS(102),
    [anon_sym_main] = ACTIONS(102),
    [anon_sym_read] = ACTIONS(102),
    [anon_sym_print] = ACTIONS(102),
    [anon_sym_import] = ACTIONS(102),
    [anon_sym_const] = ACTIONS(102),
    [anon_sym_HIGHPASS] = ACTIONS(102),
    [anon_sym_LOWPASS] = ACTIONS(102),
    [anon_sym_EQ] = ACTIONS(102),
    [anon_sym_SIN] = ACTIONS(102),
    [anon_sym_COS] = ACTIONS(102),
    [anon_sym_EXP_DECAY] = ACTIONS(102),
    [anon_sym_LIN_DECAY] = ACTIONS(102),
    [anon_sym_SQUARE] = ACTIONS(102),
    [anon_sym_SAW] = ACTIONS(102),
    [anon_sym_TRIANGLE] = ACTIONS(102),
    [anon_sym_PAN] = ACTIONS(102),
    [sym_identifier] = ACTIONS(102),
    [sym_constant] = ACTIONS(100),
    [anon_sym_SQUOTE] = ACTIONS(100),
    [anon_sym_DQUOTE] = ACTIONS(100),
    [anon_sym_TILDE] = ACTIONS(100),
    [anon_sym_BANG] = ACTIONS(102),
    [anon_sym_CARET] = ACTIONS(102),
    [anon_sym_AMP] = ACTIONS(102),
    [anon_sym_STAR] = ACTIONS(102),
    [anon_sym_SLASH] = ACTIONS(102),
    [anon_sym_PERCENT] = ACTIONS(102),
    [anon_sym_GT_GT] = ACTIONS(100),
    [anon_sym_LT_LT] = ACTIONS(100),
    [anon_sym_PLUS] = ACTIONS(102),
    [anon_sym_DASH] = ACTIONS(102),
    [anon_sym_PIPE] = ACTIONS(102),
    [anon_sym_LT] = ACTIONS(102),
    [anon_sym_LT_EQ] = ACTIONS(100),
    [anon_sym_GT] = ACTIONS(102),
    [anon_sym_GT_EQ] = ACTIONS(100),
    [anon_sym_EQ_EQ] = ACTIONS(100),
    [anon_sym_BANG_EQ] = ACTIONS(100),
    [anon_sym_AMP_AMP] = ACTIONS(100),
    [anon_sym_PIPE_PIPE] = ACTIONS(100),
    [anon_sym_EQ2] = ACTIONS(102),
    [anon_sym_CARET_EQ] = ACTIONS(100),
    [anon_sym_AMP_EQ] = ACTIONS(100),
    [anon_sym_STAR_EQ] = ACTIONS(100),
    [anon_sym_SLASH_EQ] = ACTIONS(100),
    [anon_sym_PERCENT_EQ] = ACTIONS(100),
    [anon_sym_PLUS_EQ] = ACTIONS(100),
    [anon_sym_DASH_EQ] = ACTIONS(100),
    [anon_sym_PIPE_EQ] = ACTIONS(100),
    [anon_sym_DASH_GT] = ACTIONS(100),
    [anon_sym_LT_DASH] = ACTIONS(100),
    [anon_sym_AT] = ACTIONS(100),
    [anon_sym__] = ACTIONS(100),
    [anon_sym_EQ_GT] = ACTIONS(100),
    [anon_sym_LBRACE] = ACTIONS(100),
    [anon_sym_RBRACE] = ACTIONS(100),
    [anon_sym_LPAREN] = ACTIONS(100),
    [anon_sym_RPAREN] = ACTIONS(100),
    [anon_sym_LBRACK] = ACTIONS(100),
    [anon_sym_RBRACK] = ACTIONS(100),
    [anon_sym_SEMI] = ACTIONS(100),
    [anon_sym_COMMA] = ACTIONS(100),
    [anon_sym_DOT] = ACTIONS(102),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(104),
    [sym_comment_line] = ACTIONS(104),
    [anon_sym_SLASH_STAR] = ACTIONS(104),
    [anon_sym_long] = ACTIONS(106),
    [anon_sym_int] = ACTIONS(106),
    [anon_sym_float] = ACTIONS(106),
    [anon_sym_string] = ACTIONS(106),
    [anon_sym_audio] = ACTIONS(106),
    [anon_sym_bool] = ACTIONS(106),
    [anon_sym_true] = ACTIONS(106),
    [anon_sym_false] = ACTIONS(106),
    [anon_sym_load] = ACTIONS(106),
    [anon_sym_save] = ACTIONS(106),
    [anon_sym_play] = ACTIONS(106),
    [anon_sym_if] = ACTIONS(106),
    [anon_sym_or] = ACTIONS(106),
    [anon_sym_otherwise] = ACTIONS(106),
    [anon_sym_loop] = ACTIONS(106),
    [anon_sym_over] = ACTIONS(106),
    [anon_sym_until] = ACTIONS(106),
    [anon_sym_to] = ACTIONS(106),
    [anon_sym_continue] = ACTIONS(106),
    [anon_sym_break] = ACTIONS(106),
    [anon_sym_return] = ACTIONS(106),
    [anon_sym_main] = ACTIONS(106),
    [anon_sym_read] = ACTIONS(106),
    [anon_sym_print] = ACTIONS(106),
    [anon_sym_import] = ACTIONS(106),
    [anon_sym_const] = ACTIONS(106),
    [anon_sym_HIGHPASS] = ACTIONS(106),
    [anon_sym_LOWPASS] = ACTIONS(106),
    [anon_sym_EQ] = ACTIONS(106),
    [anon_sym_SIN] = ACTIONS(106),
    [anon_sym_COS] = ACTIONS(106),
    [anon_sym_EXP_DECAY] = ACTIONS(106),
    [anon_sym_LIN_DECAY] = ACTIONS(106),
    [anon_sym_SQUARE] = ACTIONS(106),
    [anon_sym_SAW] = ACTIONS(106),
    [anon_sym_TRIANGLE] = ACTIONS(106),
    [anon_sym_PAN] = ACTIONS(106),
    [sym_identifier] = ACTIONS(106),
    [sym_constant] = ACTIONS(104),
    [anon_sym_SQUOTE] = ACTIONS(104),
    [anon_sym_DQUOTE] = ACTIONS(104),
    [anon_sym_TILDE] = ACTIONS(104),
    [anon_sym_BANG] = ACTIONS(106),
    [anon_sym_CARET] = ACTIONS(106),
    [anon_sym_AMP] = ACTIONS(106),
    [anon_sym_STAR] = ACTIONS(106),
    [anon_sym_SLASH] = ACTIONS(106),
    [anon_sym_PERCENT] = ACTIONS(106),
    [anon_sym_GT_GT] = ACTIONS(104),
    [anon_sym_LT_LT] = ACTIONS(104),
    [anon_sym_PLUS] = ACTIONS(106),
    [anon_sym_DASH] = ACTIONS(106),
    [anon_sym_PIPE] = ACTIONS(106),
    [anon_sym_LT] = ACTIONS(106),
    [anon_sym_LT_EQ] = ACTIONS(104),
    [anon_sym_GT] = ACTIONS(106),
    [anon_sym_GT_EQ] = ACTIONS(104),
    [anon_sym_EQ_EQ] = ACTIONS(104),
    [anon_sym_BANG_EQ] = ACTIONS(104),
    [anon_sym_AMP_AMP] = ACTIONS(104),
    [anon_sym_PIPE_PIPE] = ACTIONS(104),
    [anon_sym_EQ2] = ACTIONS(106),
    [anon_sym_CARET_EQ] = ACTIONS(104),
    [anon_sym_AMP_EQ] = ACTIONS(104),
    [anon_sym_STAR_EQ] = ACTIONS(104),
    [anon_sym_SLASH_EQ] = ACTIONS(104),
    [anon_sym_PERCENT_EQ] = ACTIONS(104),
    [anon_sym_PLUS_EQ] = ACTIONS(104),
    [anon_sym_DASH_EQ] = ACTIONS(104),
    [anon_sym_PIPE_EQ] = ACTIONS(104),
    [anon_sym_DASH_GT] = ACTIONS(104),
    [anon_sym_LT_DASH] = ACTIONS(104),
    [anon_sym_AT] = ACTIONS(104),
    [anon_sym__] = ACTIONS(104),
    [anon_sym_EQ_GT] = ACTIONS(104),
    [anon_sym_LBRACE] = ACTIONS(104),
    [anon_sym_RBRACE] = ACTIONS(104),
    [anon_sym_LPAREN] = ACTIONS(104),
    [anon_sym_RPAREN] = ACTIONS(104),
    [anon_sym_LBRACK] = ACTIONS(104),
    [anon_sym_RBRACK] = ACTIONS(104),
    [anon_sym_SEMI] = ACTIONS(104),
    [anon_sym_COMMA] = ACTIONS(104),
    [anon_sym_DOT] = ACTIONS(106),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(108),
    [sym_comment_line] = ACTIONS(108),
    [anon_sym_SLASH_STAR] = ACTIONS(108),
    [anon_sym_long] = ACTIONS(110),
    [anon_sym_int] = ACTIONS(110),
    [anon_sym_float] = ACTIONS(110),
    [anon_sym_string] = ACTIONS(110),
    [anon_sym_audio] = ACTIONS(110),
    [anon_sym_bool] = ACTIONS(110),
    [anon_sym_true] = ACTIONS(110),
    [anon_sym_false] = ACTIONS(110),
    [anon_sym_load] = ACTIONS(110),
    [anon_sym_save] = ACTIONS(110),
    [anon_sym_play] = ACTIONS(110),
    [anon_sym_if] = ACTIONS(110),
    [anon_sym_or] = ACTIONS(110),
    [anon_sym_otherwise] = ACTIONS(110),
    [anon_sym_loop] = ACTIONS(110),
    [anon_sym_over] = ACTIONS(110),
    [anon_sym_until] = ACTIONS(110),
    [anon_sym_to] = ACTIONS(110),
    [anon_sym_continue] = ACTIONS(110),
    [anon_sym_break] = ACTIONS(110),
    [anon_sym_return] = ACTIONS(110),
    [anon_sym_main] = ACTIONS(110),
    [anon_sym_read] = ACTIONS(110),
    [anon_sym_print] = ACTIONS(110),
    [anon_sym_import] = ACTIONS(110),
    [anon_sym_const] = ACTIONS(110),
    [anon_sym_HIGHPASS] = ACTIONS(110),
    [anon_sym_LOWPASS] = ACTIONS(110),
    [anon_sym_EQ] = ACTIONS(110),
    [anon_sym_SIN] = ACTIONS(110),
    [anon_sym_COS] = ACTIONS(110),
    [anon_sym_EXP_DECAY] = ACTIONS(110),
    [anon_sym_LIN_DECAY] = ACTIONS(110),
    [anon_sym_SQUARE] = ACTIONS(110),
    [anon_sym_SAW] = ACTIONS(110),
    [anon_sym_TRIANGLE] = ACTIONS(110),
    [anon_sym_PAN] = ACTIONS(110),
    [sym_identifier] = ACTIONS(110),
    [sym_constant] = ACTIONS(108),
    [anon_sym_SQUOTE] = ACTIONS(108),
    [anon_sym_DQUOTE] = ACTIONS(108),
    [anon_sym_TILDE] = ACTIONS(108),
    [anon_sym_BANG] = ACTIONS(110),
    [anon_sym_CARET] = ACTIONS(110),
    [anon_sym_AMP] = ACTIONS(110),
    [anon_sym_STAR] = ACTIONS(110),
    [anon_sym_SLASH] = ACTIONS(110),
    [anon_sym_PERCENT] = ACTIONS(110),
    [anon_sym_GT_GT] = ACTIONS(108),
    [anon_sym_LT_LT] = ACTIONS(108),
    [anon_sym_PLUS] = ACTIONS(110),
    [anon_sym_DASH] = ACTIONS(110),
    [anon_sym_PIPE] = ACTIONS(110),
    [anon_sym_LT] = ACTIONS(110),
    [anon_sym_LT_EQ] = ACTIONS(108),
    [anon_sym_GT] = ACTIONS(110),
    [anon_sym_GT_EQ] = ACTIONS(108),
    [anon_sym_EQ_EQ] = ACTIONS(108),
    [anon_sym_BANG_EQ] = ACTIONS(108),
    [anon_sym_AMP_AMP] = ACTIONS(108),
    [anon_sym_PIPE_PIPE] = ACTIONS(108),
    [anon_sym_EQ2] = ACTIONS(110),
    [anon_sym_CARET_EQ] = ACTIONS(108),
    [anon_sym_AMP_EQ] = ACTIONS(108),
    [anon_sym_STAR_EQ] = ACTIONS(108),
    [anon_sym_SLASH_EQ] = ACTIONS(108),
    [anon_sym_PERCENT_EQ] = ACTIONS(108),
    [anon_sym_PLUS_EQ] = ACTIONS(108),
    [anon_sym_DASH_EQ] = ACTIONS(108),
    [anon_sym_PIPE_EQ] = ACTIONS(108),
    [anon_sym_DASH_GT] = ACTIONS(108),
    [anon_sym_LT_DASH] = ACTIONS(108),
    [anon_sym_AT] = ACTIONS(108),
    [anon_sym__] = ACTIONS(108),
    [anon_sym_EQ_GT] = ACTIONS(108),
    [anon_sym_LBRACE] = ACTIONS(108),
    [anon_sym_RBRACE] = ACTIONS(108),
    [anon_sym_LPAREN] = ACTIONS(108),
    [anon_sym_RPAREN] = ACTIONS(108),
    [anon_sym_LBRACK] = ACTIONS(108),
    [anon_sym_RBRACK] = ACTIONS(108),
    [anon_sym_SEMI] = ACTIONS(108),
    [anon_sym_COMMA] = ACTIONS(108),
    [anon_sym_DOT] = ACTIONS(110),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(112),
    [sym_comment_line] = ACTIONS(112),
    [anon_sym_SLASH_STAR] = ACTIONS(112),
    [anon_sym_long] = ACTIONS(114),
    [anon_sym_int] = ACTIONS(114),
    [anon_sym_float] = ACTIONS(114),
    [anon_sym_string] = ACTIONS(114),
    [anon_sym_audio] = ACTIONS(114),
    [anon_sym_bool] = ACTIONS(114),
    [anon_sym_true] = ACTIONS(114),
    [anon_sym_false] = ACTIONS(114),
    [anon_sym_load] = ACTIONS(114),
    [anon_sym_save] = ACTIONS(114),
    [anon_sym_play] = ACTIONS(114),
    [anon_sym_if] = ACTIONS(114),
    [anon_sym_or] = ACTIONS(114),
    [anon_sym_otherwise] = ACTIONS(114),
    [anon_sym_loop] = ACTIONS(114),
    [anon_sym_over] = ACTIONS(114),
    [anon_sym_until] = ACTIONS(114),
    [anon_sym_to] = ACTIONS(114),
    [anon_sym_continue] = ACTIONS(114),
    [anon_sym_break] = ACTIONS(114),
    [anon_sym_return] = ACTIONS(114),
    [anon_sym_main] = ACTIONS(114),
    [anon_sym_read] = ACTIONS(114),
    [anon_sym_print] = ACTIONS(114),
    [anon_sym_import] = ACTIONS(114),
    [anon_sym_const] = ACTIONS(114),
    [anon_sym_HIGHPASS] = ACTIONS(114),
    [anon_sym_LOWPASS] = ACTIONS(114),
    [anon_sym_EQ] = ACTIONS(114),
    [anon_sym_SIN] = ACTIONS(114),
    [anon_sym_COS] = ACTIONS(114),
    [anon_sym_EXP_DECAY] = ACTIONS(114),
    [anon_sym_LIN_DECAY] = ACTIONS(114),
    [anon_sym_SQUARE] = ACTIONS(114),
    [anon_sym_SAW] = ACTIONS(114),
    [anon_sym_TRIANGLE] = ACTIONS(114),
    [anon_sym_PAN] = ACTIONS(114),
    [sym_identifier] = ACTIONS(114),
    [sym_constant] = ACTIONS(112),
    [anon_sym_SQUOTE] = ACTIONS(112),
    [anon_sym_DQUOTE] = ACTIONS(112),
    [anon_sym_TILDE] = ACTIONS(112),
    [anon_sym_BANG] = ACTIONS(114),
    [anon_sym_CARET] = ACTIONS(114),
    [anon_sym_AMP] = ACTIONS(114),
    [anon_sym_STAR] = ACTIONS(114),
    [anon_sym_SLASH] = ACTIONS(114),
    [anon_sym_PERCENT] = ACTIONS(114),
    [anon_sym_GT_GT] = ACTIONS(112),
    [anon_sym_LT_LT] = ACTIONS(112),
    [anon_sym_PLUS] = ACTIONS(114),
    [anon_sym_DASH] = ACTIONS(114),
    [anon_sym_PIPE] = ACTIONS(114),
    [anon_sym_LT] = ACTIONS(114),
    [anon_sym_LT_EQ] = ACTIONS(112),
    [anon_sym_GT] = ACTIONS(114),
    [anon_sym_GT_EQ] = ACTIONS(112),
    [anon_sym_EQ_EQ] = ACTIONS(112),
    [anon_sym_BANG_EQ] = ACTIONS(112),
    [anon_sym_AMP_AMP] = ACTIONS(112),
    [anon_sym_PIPE_PIPE] = ACTIONS(112),
    [anon_sym_EQ2] = ACTIONS(114),
    [anon_sym_CARET_EQ] = ACTIONS(112),
    [anon_sym_AMP_EQ] = ACTIONS(112),
    [anon_sym_STAR_EQ] = ACTIONS(112),
    [anon_sym_SLASH_EQ] = ACTIONS(112),
    [anon_sym_PERCENT_EQ] = ACTIONS(112),
    [anon_sym_PLUS_EQ] = ACTIONS(112),
    [anon_sym_DASH_EQ] = ACTIONS(112),
    [anon_sym_PIPE_EQ] = ACTIONS(112),
    [anon_sym_DASH_GT] = ACTIONS(112),
    [anon_sym_LT_DASH] = ACTIONS(112),
    [anon_sym_AT] = ACTIONS(112),
    [anon_sym__] = ACTIONS(112),
    [anon_sym_EQ_GT] = ACTIONS(112),
    [anon_sym_LBRACE] = ACTIONS(112),
    [anon_sym_RBRACE] = ACTIONS(112),
    [anon_sym_LPAREN] = ACTIONS(112),
    [anon_sym_RPAREN] = ACTIONS(112),
    [anon_sym_LBRACK] = ACTIONS(112),
    [anon_sym_RBRACK] = ACTIONS(112),
    [anon_sym_SEMI] = ACTIONS(112),
    [anon_sym_COMMA] = ACTIONS(112),
    [anon_sym_DOT] = ACTIONS(114),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(116),
    [sym_comment_line] = ACTIONS(116),
    [anon_sym_SLASH_STAR] = ACTIONS(116),
    [anon_sym_long] = ACTIONS(118),
    [anon_sym_int] = ACTIONS(118),
    [anon_sym_float] = ACTIONS(118),
    [anon_sym_string] = ACTIONS(118),
    [anon_sym_audio] = ACTIONS(118),
    [anon_sym_bool] = ACTIONS(118),
    [anon_sym_true] = ACTIONS(118),
    [anon_sym_false] = ACTIONS(118),
    [anon_sym_load] = ACTIONS(118),
    [anon_sym_save] = ACTIONS(118),
    [anon_sym_play] = ACTIONS(118),
    [anon_sym_if] = ACTIONS(118),
    [anon_sym_or] = ACTIONS(118),
    [anon_sym_otherwise] = ACTIONS(118),
    [anon_sym_loop] = ACTIONS(118),
    [anon_sym_over] = ACTIONS(118),
    [anon_sym_until] = ACTIONS(118),
    [anon_sym_to] = ACTIONS(118),
    [anon_sym_continue] = ACTIONS(118),
    [anon_sym_break] = ACTIONS(118),
    [anon_sym_return] = ACTIONS(118),
    [anon_sym_main] = ACTIONS(118),
    [anon_sym_read] = ACTIONS(118),
    [anon_sym_print] = ACTIONS(118),
    [anon_sym_import] = ACTIONS(118),
    [anon_sym_const] = ACTIONS(118),
    [anon_sym_HIGHPASS] = ACTIONS(118),
    [anon_sym_LOWPASS] = ACTIONS(118),
    [anon_sym_EQ] = ACTIONS(118),
    [anon_sym_SIN] = ACTIONS(118),
    [anon_sym_COS] = ACTIONS(118),
    [anon_sym_EXP_DECAY] = ACTIONS(118),
    [anon_sym_LIN_DECAY] = ACTIONS(118),
    [anon_sym_SQUARE] = ACTIONS(118),
    [anon_sym_SAW] = ACTIONS(118),
    [anon_sym_TRIANGLE] = ACTIONS(118),
    [anon_sym_PAN] = ACTIONS(118),
    [sym_identifier] = ACTIONS(118),
    [sym_constant] = ACTIONS(116),
    [anon_sym_SQUOTE] = ACTIONS(116),
    [anon_sym_DQUOTE] = ACTIONS(116),
    [anon_sym_TILDE] = ACTIONS(116),
    [anon_sym_BANG] = ACTIONS(118),
    [anon_sym_CARET] = ACTIONS(118),
    [anon_sym_AMP] = ACTIONS(118),
    [anon_sym_STAR] = ACTIONS(118),
    [anon_sym_SLASH] = ACTIONS(118),
    [anon_sym_PERCENT] = ACTIONS(118),
    [anon_sym_GT_GT] = ACTIONS(116),
    [anon_sym_LT_LT] = ACTIONS(116),
    [anon_sym_PLUS] = ACTIONS(118),
    [anon_sym_DASH] = ACTIONS(118),
    [anon_sym_PIPE] = ACTIONS(118),
    [anon_sym_LT] = ACTIONS(118),
    [anon_sym_LT_EQ] = ACTIONS(116),
    [anon_sym_GT] = ACTIONS(118),
    [anon_sym_GT_EQ] = ACTIONS(116),
    [anon_sym_EQ_EQ] = ACTIONS(116),
    [anon_sym_BANG_EQ] = ACTIONS(116),
    [anon_sym_AMP_AMP] = ACTIONS(116),
    [anon_sym_PIPE_PIPE] = ACTIONS(116),
    [anon_sym_EQ2] = ACTIONS(118),
    [anon_sym_CARET_EQ] = ACTIONS(116),
    [anon_sym_AMP_EQ] = ACTIONS(116),
    [anon_sym_STAR_EQ] = ACTIONS(116),
    [anon_sym_SLASH_EQ] = ACTIONS(116),
    [anon_sym_PERCENT_EQ] = ACTIONS(116),
    [anon_sym_PLUS_EQ] = ACTIONS(116),
    [anon_sym_DASH_EQ] = ACTIONS(116),
    [anon_sym_PIPE_EQ] = ACTIONS(116),
    [anon_sym_DASH_GT] = ACTIONS(116),
    [anon_sym_LT_DASH] = ACTIONS(116),
    [anon_sym_AT] = ACTIONS(116),
    [anon_sym__] = ACTIONS(116),
    [anon_sym_EQ_GT] = ACTIONS(116),
    [anon_sym_LBRACE] = ACTIONS(116),
    [anon_sym_RBRACE] = ACTIONS(116),
    [anon_sym_LPAREN] = ACTIONS(116),
    [anon_sym_RPAREN] = ACTIONS(116),
    [anon_sym_LBRACK] = ACTIONS(116),
    [anon_sym_RBRACK] = ACTIONS(116),
    [anon_sym_SEMI] = ACTIONS(116),
    [anon_sym_COMMA] = ACTIONS(116),
    [anon_sym_DOT] = ACTIONS(118),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(120),
    [sym_comment_line] = ACTIONS(120),
    [anon_sym_SLASH_STAR] = ACTIONS(120),
    [anon_sym_long] = ACTIONS(122),
    [anon_sym_int] = ACTIONS(122),
    [anon_sym_float] = ACTIONS(122),
    [anon_sym_string] = ACTIONS(122),
    [anon_sym_audio] = ACTIONS(122),
    [anon_sym_bool] = ACTIONS(122),
    [anon_sym_true] = ACTIONS(122),
    [anon_sym_false] = ACTIONS(122),
    [anon_sym_load] = ACTIONS(122),
    [anon_sym_save] = ACTIONS(122),
    [anon_sym_play] = ACTIONS(122),
    [anon_sym_if] = ACTIONS(122),
    [anon_sym_or] = ACTIONS(122),
    [anon_sym_otherwise] = ACTIONS(122),
    [anon_sym_loop] = ACTIONS(122),
    [anon_sym_over] = ACTIONS(122),
    [anon_sym_until] = ACTIONS(122),
    [anon_sym_to] = ACTIONS(122),
    [anon_sym_continue] = ACTIONS(122),
    [anon_sym_break] = ACTIONS(122),
    [anon_sym_return] = ACTIONS(122),
    [anon_sym_main] = ACTIONS(122),
    [anon_sym_read] = ACTIONS(122),
    [anon_sym_print] = ACTIONS(122),
    [anon_sym_import] = ACTIONS(122),
    [anon_sym_const] = ACTIONS(122),
    [anon_sym_HIGHPASS] = ACTIONS(122),
    [anon_sym_LOWPASS] = ACTIONS(122),
    [anon_sym_EQ] = ACTIONS(122),
    [anon_sym_SIN] = ACTIONS(122),
    [anon_sym_COS] = ACTIONS(122),
    [anon_sym_EXP_DECAY] = ACTIONS(122),
    [anon_sym_LIN_DECAY] = ACTIONS(122),
    [anon_sym_SQUARE] = ACTIONS(122),
    [anon_sym_SAW] = ACTIONS(122),
    [anon_sym_TRIANGLE] = ACTIONS(122),
    [anon_sym_PAN] = ACTIONS(122),
    [sym_identifier] = ACTIONS(122),
    [sym_constant] = ACTIONS(120),
    [anon_sym_SQUOTE] = ACTIONS(120),
    [anon_sym_DQUOTE] = ACTIONS(120),
    [anon_sym_TILDE] = ACTIONS(120),
    [anon_sym_BANG] = ACTIONS(122),
    [anon_sym_CARET] = ACTIONS(122),
    [anon_sym_AMP] = ACTIONS(122),
    [anon_sym_STAR] = ACTIONS(122),
    [anon_sym_SLASH] = ACTIONS(122),
    [anon_sym_PERCENT] = ACTIONS(122),
    [anon_sym_GT_GT] = ACTIONS(120),
    [anon_sym_LT_LT] = ACTIONS(120),
    [anon_sym_PLUS] = ACTIONS(122),
    [anon_sym_DASH] = ACTIONS(122),
    [anon_sym_PIPE] = ACTIONS(122),
    [anon_sym_LT] = ACTIONS(122),
    [anon_sym_LT_EQ] = ACTIONS(120),
    [anon_sym_GT] = ACTIONS(122),
    [anon_sym_GT_EQ] = ACTIONS(120),
    [anon_sym_EQ_EQ] = ACTIONS(120),
    [anon_sym_BANG_EQ] = ACTIONS(120),
    [anon_sym_AMP_AMP] = ACTIONS(120),
    [anon_sym_PIPE_PIPE] = ACTIONS(120),
    [anon_sym_EQ2] = ACTIONS(122),
    [anon_sym_CARET_EQ] = ACTIONS(120),
    [anon_sym_AMP_EQ] = ACTIONS(120),
    [anon_sym_STAR_EQ] = ACTIONS(120),
    [anon_sym_SLASH_EQ] = ACTIONS(120),
    [anon_sym_PERCENT_EQ] = ACTIONS(120),
    [anon_sym_PLUS_EQ] = ACTIONS(120),
    [anon_sym_DASH_EQ] = ACTIONS(120),
    [anon_sym_PIPE_EQ] = ACTIONS(120),
    [anon_sym_DASH_GT] = ACTIONS(120),
    [anon_sym_LT_DASH] = ACTIONS(120),
    [anon_sym_AT] = ACTIONS(120),
    [anon_sym__] = ACTIONS(120),
    [anon_sym_EQ_GT] = ACTIONS(120),
    [anon_sym_LBRACE] = ACTIONS(120),
    [anon_sym_RBRACE] = ACTIONS(120),
    [anon_sym_LPAREN] = ACTIONS(120),
    [anon_sym_RPAREN] = ACTIONS(120),
    [anon_sym_LBRACK] = ACTIONS(120),
    [anon_sym_RBRACK] = ACTIONS(120),
    [anon_sym_SEMI] = ACTIONS(120),
    [anon_sym_COMMA] = ACTIONS(120),
    [anon_sym_DOT] = ACTIONS(122),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(124),
    [sym_comment_line] = ACTIONS(124),
    [anon_sym_SLASH_STAR] = ACTIONS(124),
    [anon_sym_long] = ACTIONS(126),
    [anon_sym_int] = ACTIONS(126),
    [anon_sym_float] = ACTIONS(126),
    [anon_sym_string] = ACTIONS(126),
    [anon_sym_audio] = ACTIONS(126),
    [anon_sym_bool] = ACTIONS(126),
    [anon_sym_true] = ACTIONS(126),
    [anon_sym_false] = ACTIONS(126),
    [anon_sym_load] = ACTIONS(126),
    [anon_sym_save] = ACTIONS(126),
    [anon_sym_play] = ACTIONS(126),
    [anon_sym_if] = ACTIONS(126),
    [anon_sym_or] = ACTIONS(126),
    [anon_sym_otherwise] = ACTIONS(126),
    [anon_sym_loop] = ACTIONS(126),
    [anon_sym_over] = ACTIONS(126),
    [anon_sym_until] = ACTIONS(126),
    [anon_sym_to] = ACTIONS(126),
    [anon_sym_continue] = ACTIONS(126),
    [anon_sym_break] = ACTIONS(126),
    [anon_sym_return] = ACTIONS(126),
    [anon_sym_main] = ACTIONS(126),
    [anon_sym_read] = ACTIONS(126),
    [anon_sym_print] = ACTIONS(126),
    [anon_sym_import] = ACTIONS(126),
    [anon_sym_const] = ACTIONS(126),
    [anon_sym_HIGHPASS] = ACTIONS(126),
    [anon_sym_LOWPASS] = ACTIONS(126),
    [anon_sym_EQ] = ACTIONS(126),
    [anon_sym_SIN] = ACTIONS(126),
    [anon_sym_COS] = ACTIONS(126),
    [anon_sym_EXP_DECAY] = ACTIONS(126),
    [anon_sym_LIN_DECAY] = ACTIONS(126),
    [anon_sym_SQUARE] = ACTIONS(126),
    [anon_sym_SAW] = ACTIONS(126),
    [anon_sym_TRIANGLE] = ACTIONS(126),
    [anon_sym_PAN] = ACTIONS(126),
    [sym_identifier] = ACTIONS(126),
    [sym_constant] = ACTIONS(124),
    [anon_sym_SQUOTE] = ACTIONS(124),
    [anon_sym_DQUOTE] = ACTIONS(124),
    [anon_sym_TILDE] = ACTIONS(124),
    [anon_sym_BANG] = ACTIONS(126),
    [anon_sym_CARET] = ACTIONS(126),
    [anon_sym_AMP] = ACTIONS(126),
    [anon_sym_STAR] = ACTIONS(126),
    [anon_sym_SLASH] = ACTIONS(126),
    [anon_sym_PERCENT] = ACTIONS(126),
    [anon_sym_GT_GT] = ACTIONS(124),
    [anon_sym_LT_LT] = ACTIONS(124),
    [anon_sym_PLUS] = ACTIONS(126),
    [anon_sym_DASH] = ACTIONS(126),
    [anon_sym_PIPE] = ACTIONS(126),
    [anon_sym_LT] = ACTIONS(126),
    [anon_sym_LT_EQ] = ACTIONS(124),
    [anon_sym_GT] = ACTIONS(126),
    [anon_sym_GT_EQ] = ACTIONS(124),
    [anon_sym_EQ_EQ] = ACTIONS(124),
    [anon_sym_BANG_EQ] = ACTIONS(124),
    [anon_sym_AMP_AMP] = ACTIONS(124),
    [anon_sym_PIPE_PIPE] = ACTIONS(124),
    [anon_sym_EQ2] = ACTIONS(126),
    [anon_sym_CARET_EQ] = ACTIONS(124),
    [anon_sym_AMP_EQ] = ACTIONS(124),
    [anon_sym_STAR_EQ] = ACTIONS(124),
    [anon_sym_SLASH_EQ] = ACTIONS(124),
    [anon_sym_PERCENT_EQ] = ACTIONS(124),
    [anon_sym_PLUS_EQ] = ACTIONS(124),
    [anon_sym_DASH_EQ] = ACTIONS(124),
    [anon_sym_PIPE_EQ] = ACTIONS(124),
    [anon_sym_DASH_GT] = ACTIONS(124),
    [anon_sym_LT_DASH] = ACTIONS(124),
    [anon_sym_AT] = ACTIONS(124),
    [anon_sym__] = ACTIONS(124),
    [anon_sym_EQ_GT] = ACTIONS(124),
    [anon_sym_LBRACE] = ACTIONS(124),
    [anon_sym_RBRACE] = ACTIONS(124),
    [anon_sym_LPAREN] = ACTIONS(124),
    [anon_sym_RPAREN] = ACTIONS(124),
    [anon_sym_LBRACK] = ACTIONS(124),
    [anon_sym_RBRACK] = ACTIONS(124),
    [anon_sym_SEMI] = ACTIONS(124),
    [anon_sym_COMMA] = ACTIONS(124),
    [anon_sym_DOT] = ACTIONS(126),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(128),
    [sym_comment_line] = ACTIONS(128),
    [anon_sym_SLASH_STAR] = ACTIONS(128),
    [anon_sym_long] = ACTIONS(130),
    [anon_sym_int] = ACTIONS(130),
    [anon_sym_float] = ACTIONS(130),
    [anon_sym_string] = ACTIONS(130),
    [anon_sym_audio] = ACTIONS(130),
    [anon_sym_bool] = ACTIONS(130),
    [anon_sym_true] = ACTIONS(130),
    [anon_sym_false] = ACTIONS(130),
    [anon_sym_load] = ACTIONS(130),
    [anon_sym_save] = ACTIONS(130),
    [anon_sym_play] = ACTIONS(130),
    [anon_sym_if] = ACTIONS(130),
    [anon_sym_or] = ACTIONS(130),
    [anon_sym_otherwise] = ACTIONS(130),
    [anon_sym_loop] = ACTIONS(130),
    [anon_sym_over] = ACTIONS(130),
    [anon_sym_until] = ACTIONS(130),
    [anon_sym_to] = ACTIONS(130),
    [anon_sym_continue] = ACTIONS(130),
    [anon_sym_break] = ACTIONS(130),
    [anon_sym_return] = ACTIONS(130),
    [anon_sym_main] = ACTIONS(130),
    [anon_sym_read] = ACTIONS(130),
    [anon_sym_print] = ACTIONS(130),
    [anon_sym_import] = ACTIONS(130),
    [anon_sym_const] = ACTIONS(130),
    [anon_sym_HIGHPASS] = ACTIONS(130),
    [anon_sym_LOWPASS] = ACTIONS(130),
    [anon_sym_EQ] = ACTIONS(130),
    [anon_sym_SIN] = ACTIONS(130),
    [anon_sym_COS] = ACTIONS(130),
    [anon_sym_EXP_DECAY] = ACTIONS(130),
    [anon_sym_LIN_DECAY] = ACTIONS(130),
    [anon_sym_SQUARE] = ACTIONS(130),
    [anon_sym_SAW] = ACTIONS(130),
    [anon_sym_TRIANGLE] = ACTIONS(130),
    [anon_sym_PAN] = ACTIONS(130),
    [sym_identifier] = ACTIONS(130),
    [sym_constant] = ACTIONS(128),
    [anon_sym_SQUOTE] = ACTIONS(128),
    [anon_sym_DQUOTE] = ACTIONS(128),
    [anon_sym_TILDE] = ACTIONS(128),
    [anon_sym_BANG] = ACTIONS(130),
    [anon_sym_CARET] = ACTIONS(130),
    [anon_sym_AMP] = ACTIONS(130),
    [anon_sym_STAR] = ACTIONS(130),
    [anon_sym_SLASH] = ACTIONS(130),
    [anon_sym_PERCENT] = ACTIONS(130),
    [anon_sym_GT_GT] = ACTIONS(128),
    [anon_sym_LT_LT] = ACTIONS(128),
    [anon_sym_PLUS] = ACTIONS(130),
    [anon_sym_DASH] = ACTIONS(130),
    [anon_sym_PIPE] = ACTIONS(130),
    [anon_sym_LT] = ACTIONS(130),
    [anon_sym_LT_EQ] = ACTIONS(128),
    [anon_sym_GT] = ACTIONS(130),
    [anon_sym_GT_EQ] = ACTIONS(128),
    [anon_sym_EQ_EQ] = ACTIONS(128),
    [anon_sym_BANG_EQ] = ACTIONS(128),
    [anon_sym_AMP_AMP] = ACTIONS(128),
    [anon_sym_PIPE_PIPE] = ACTIONS(128),
    [anon_sym_EQ2] = ACTIONS(130),
    [anon_sym_CARET_EQ] = ACTIONS(128),
    [anon_sym_AMP_EQ] = ACTIONS(128),
    [anon_sym_STAR_EQ] = ACTIONS(128),
    [anon_sym_SLASH_EQ] = ACTIONS(128),
    [anon_sym_PERCENT_EQ] = ACTIONS(128),
    [anon_sym_PLUS_EQ] = ACTIONS(128),
    [anon_sym_DASH_EQ] = ACTIONS(128),
    [anon_sym_PIPE_EQ] = ACTIONS(128),
    [anon_sym_DASH_GT] = ACTIONS(128),
    [anon_sym_LT_DASH] = ACTIONS(128),
    [anon_sym_AT] = ACTIONS(128),
    [anon_sym__] = ACTIONS(128),
    [anon_sym_EQ_GT] = ACTIONS(128),
    [anon_sym_LBRACE] = ACTIONS(128),
    [anon_sym_RBRACE] = ACTIONS(128),
    [anon_sym_LPAREN] = ACTIONS(128),
    [anon_sym_RPAREN] = ACTIONS(128),
    [anon_sym_LBRACK] = ACTIONS(128),
    [anon_sym_RBRACK] = ACTIONS(128),
    [anon_sym_SEMI] = ACTIONS(128),
    [anon_sym_COMMA] = ACTIONS(128),
    [anon_sym_DOT] = ACTIONS(130),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(132),
    [sym_comment_line] = ACTIONS(132),
    [anon_sym_SLASH_STAR] = ACTIONS(132),
    [anon_sym_long] = ACTIONS(134),
    [anon_sym_int] = ACTIONS(134),
    [anon_sym_float] = ACTIONS(134),
    [anon_sym_string] = ACTIONS(134),
    [anon_sym_audio] = ACTIONS(134),
    [anon_sym_bool] = ACTIONS(134),
    [anon_sym_true] = ACTIONS(134),
    [anon_sym_false] = ACTIONS(134),
    [anon_sym_load] = ACTIONS(134),
    [anon_sym_save] = ACTIONS(134),
    [anon_sym_play] = ACTIONS(134),
    [anon_sym_if] = ACTIONS(134),
    [anon_sym_or] = ACTIONS(134),
    [anon_sym_otherwise] = ACTIONS(134),
    [anon_sym_loop] = ACTIONS(134),
    [anon_sym_over] = ACTIONS(134),
    [anon_sym_until] = ACTIONS(134),
    [anon_sym_to] = ACTIONS(134),
    [anon_sym_continue] = ACTIONS(134),
    [anon_sym_break] = ACTIONS(134),
    [anon_sym_return] = ACTIONS(134),
    [anon_sym_main] = ACTIONS(134),
    [anon_sym_read] = ACTIONS(134),
    [anon_sym_print] = ACTIONS(134),
    [anon_sym_import] = ACTIONS(134),
    [anon_sym_const] = ACTIONS(134),
    [anon_sym_HIGHPASS] = ACTIONS(134),
    [anon_sym_LOWPASS] = ACTIONS(134),
    [anon_sym_EQ] = ACTIONS(134),
    [anon_sym_SIN] = ACTIONS(134),
    [anon_sym_COS] = ACTIONS(134),
    [anon_sym_EXP_DECAY] = ACTIONS(134),
    [anon_sym_LIN_DECAY] = ACTIONS(134),
    [anon_sym_SQUARE] = ACTIONS(134),
    [anon_sym_SAW] = ACTIONS(134),
    [anon_sym_TRIANGLE] = ACTIONS(134),
    [anon_sym_PAN] = ACTIONS(134),
    [sym_identifier] = ACTIONS(134),
    [sym_constant] = ACTIONS(132),
    [anon_sym_SQUOTE] = ACTIONS(132),
    [anon_sym_DQUOTE] = ACTIONS(132),
    [anon_sym_TILDE] = ACTIONS(132),
    [anon_sym_BANG] = ACTIONS(134),
    [anon_sym_CARET] = ACTIONS(134),
    [anon_sym_AMP] = ACTIONS(134),
    [anon_sym_STAR] = ACTIONS(134),
    [anon_sym_SLASH] = ACTIONS(134),
    [anon_sym_PERCENT] = ACTIONS(134),
    [anon_sym_GT_GT] = ACTIONS(132),
    [anon_sym_LT_LT] = ACTIONS(132),
    [anon_sym_PLUS] = ACTIONS(134),
    [anon_sym_DASH] = ACTIONS(134),
    [anon_sym_PIPE] = ACTIONS(134),
    [anon_sym_LT] = ACTIONS(134),
    [anon_sym_LT_EQ] = ACTIONS(132),
    [anon_sym_GT] = ACTIONS(134),
    [anon_sym_GT_EQ] = ACTIONS(132),
    [anon_sym_EQ_EQ] = ACTIONS(132),
    [anon_sym_BANG_EQ] = ACTIONS(132),
    [anon_sym_AMP_AMP] = ACTIONS(132),
    [anon_sym_PIPE_PIPE] = ACTIONS(132),
    [anon_sym_EQ2] = ACTIONS(134),
    [anon_sym_CARET_EQ] = ACTIONS(132),
    [anon_sym_AMP_EQ] = ACTIONS(132),
    [anon_sym_STAR_EQ] = ACTIONS(132),
    [anon_sym_SLASH_EQ] = ACTIONS(132),
    [anon_sym_PERCENT_EQ] = ACTIONS(132),
    [anon_sym_PLUS_EQ] = ACTIONS(132),
    [anon_sym_DASH_EQ] = ACTIONS(132),
    [anon_sym_PIPE_EQ] = ACTIONS(132),
    [anon_sym_DASH_GT] = ACTIONS(132),
    [anon_sym_LT_DASH] = ACTIONS(132),
    [anon_sym_AT] = ACTIONS(132),
    [anon_sym__] = ACTIONS(132),
    [anon_sym_EQ_GT] = ACTIONS(132),
    [anon_sym_LBRACE] = ACTIONS(132),
    [anon_sym_RBRACE] = ACTIONS(132),
    [anon_sym_LPAREN] = ACTIONS(132),
    [anon_sym_RPAREN] = ACTIONS(132),
    [anon_sym_LBRACK] = ACTIONS(132),
    [anon_sym_RBRACK] = ACTIONS(132),
    [anon_sym_SEMI] = ACTIONS(132),
    [anon_sym_COMMA] = ACTIONS(132),
    [anon_sym_DOT] = ACTIONS(134),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(136), 1,
      anon_sym_SQUOTE,
    ACTIONS(138), 1,
      aux_sym_string_token1,
    ACTIONS(140), 1,
      aux_sym_string_token2,
    STATE(20), 1,
      aux_sym_string_repeat1,
  [13] = 4,
    ACTIONS(142), 1,
      aux_sym_comment_block_token1,
    ACTIONS(144), 1,
      aux_sym_comment_block_token2,
    ACTIONS(146), 1,
      anon_sym_STAR_SLASH,
    STATE(21), 1,
      aux_sym_comment_block_repeat1,
  [26] = 4,
    ACTIONS(136), 1,
      anon_sym_DQUOTE,
    ACTIONS(148), 1,
      aux_sym_string_token2,
    ACTIONS(150), 1,
      aux_sym_string_token3,
    STATE(23), 1,
      aux_sym_string_repeat2,
  [39] = 4,
    ACTIONS(152), 1,
      aux_sym_string_token2,
    ACTIONS(155), 1,
      anon_sym_DQUOTE,
    ACTIONS(157), 1,
      aux_sym_string_token3,
    STATE(19), 1,
      aux_sym_string_repeat2,
  [52] = 4,
    ACTIONS(160), 1,
      anon_sym_SQUOTE,
    ACTIONS(162), 1,
      aux_sym_string_token1,
    ACTIONS(164), 1,
      aux_sym_string_token2,
    STATE(24), 1,
      aux_sym_string_repeat1,
  [65] = 4,
    ACTIONS(166), 1,
      aux_sym_comment_block_token1,
    ACTIONS(168), 1,
      aux_sym_comment_block_token2,
    ACTIONS(170), 1,
      anon_sym_STAR_SLASH,
    STATE(22), 1,
      aux_sym_comment_block_repeat1,
  [78] = 4,
    ACTIONS(172), 1,
      aux_sym_comment_block_token1,
    ACTIONS(175), 1,
      aux_sym_comment_block_token2,
    ACTIONS(178), 1,
      anon_sym_STAR_SLASH,
    STATE(22), 1,
      aux_sym_comment_block_repeat1,
  [91] = 4,
    ACTIONS(160), 1,
      anon_sym_DQUOTE,
    ACTIONS(180), 1,
      aux_sym_string_token2,
    ACTIONS(182), 1,
      aux_sym_string_token3,
    STATE(19), 1,
      aux_sym_string_repeat2,
  [104] = 4,
    ACTIONS(184), 1,
      anon_sym_SQUOTE,
    ACTIONS(186), 1,
      aux_sym_string_token1,
    ACTIONS(189), 1,
      aux_sym_string_token2,
    STATE(24), 1,
      aux_sym_string_repeat1,
  [117] = 1,
    ACTIONS(192), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(16)] = 0,
  [SMALL_STATE(17)] = 13,
  [SMALL_STATE(18)] = 26,
  [SMALL_STATE(19)] = 39,
  [SMALL_STATE(20)] = 52,
  [SMALL_STATE(21)] = 65,
  [SMALL_STATE(22)] = 78,
  [SMALL_STATE(23)] = 91,
  [SMALL_STATE(24)] = 104,
  [SMALL_STATE(25)] = 117,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1, 0, 0),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1, 0, 0),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword, 1, 0, 0),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword, 1, 0, 0),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1, 0, 0),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 1, 0, 0),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool_literal, 1, 0, 0),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool_literal, 1, 0, 0),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_control_keyword, 1, 0, 0),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_control_keyword, 1, 0, 0),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inbuilt_function, 1, 0, 0),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inbuilt_function, 1, 0, 0),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator, 1, 0, 0),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operator, 1, 0, 0),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_punctuation, 1, 0, 0),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_punctuation, 1, 0, 0),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2, 0, 0),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2, 0, 0),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment_block, 2, 0, 0),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment_block, 2, 0, 0),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment_block, 3, 0, 0),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment_block, 3, 0, 0),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3, 0, 0),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [152] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat2, 2, 0, 0), SHIFT_REPEAT(19),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat2, 2, 0, 0),
  [157] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat2, 2, 0, 0), SHIFT_REPEAT(19),
  [160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [172] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comment_block_repeat1, 2, 0, 0), SHIFT_REPEAT(22),
  [175] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comment_block_repeat1, 2, 0, 0), SHIFT_REPEAT(22),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_comment_block_repeat1, 2, 0, 0),
  [180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0),
  [186] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(24),
  [189] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(24),
  [192] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_decibel(void) {
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
