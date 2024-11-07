#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 25
#define LARGE_STATE_COUNT 15
#define SYMBOL_COUNT 109
#define ALIAS_COUNT 0
#define TOKEN_COUNT 94
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
  anon_sym_COLON = 93,
  sym_source_file = 94,
  sym__statement = 95,
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
  [anon_sym_COLON] = ":",
  [sym_source_file] = "source_file",
  [sym__statement] = "_statement",
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
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_source_file] = sym_source_file,
  [sym__statement] = sym__statement,
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
  [anon_sym_COLON] = {
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
        ':', 227,
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
    case 227:
      ACCEPT_TOKEN(anon_sym_COLON);
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
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 0},
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
    [anon_sym_COLON] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(24),
    [sym__statement] = STATE(2),
    [sym_comment_block] = STATE(2),
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
    [sym_constant] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [anon_sym_DQUOTE] = ACTIONS(23),
    [anon_sym_TILDE] = ACTIONS(25),
    [anon_sym_BANG] = ACTIONS(27),
    [anon_sym_CARET] = ACTIONS(27),
    [anon_sym_AMP] = ACTIONS(27),
    [anon_sym_STAR] = ACTIONS(27),
    [anon_sym_SLASH] = ACTIONS(27),
    [anon_sym_PERCENT] = ACTIONS(27),
    [anon_sym_GT_GT] = ACTIONS(25),
    [anon_sym_LT_LT] = ACTIONS(25),
    [anon_sym_PLUS] = ACTIONS(27),
    [anon_sym_DASH] = ACTIONS(27),
    [anon_sym_PIPE] = ACTIONS(27),
    [anon_sym_LT] = ACTIONS(27),
    [anon_sym_LT_EQ] = ACTIONS(25),
    [anon_sym_GT] = ACTIONS(27),
    [anon_sym_GT_EQ] = ACTIONS(25),
    [anon_sym_EQ_EQ] = ACTIONS(25),
    [anon_sym_BANG_EQ] = ACTIONS(25),
    [anon_sym_AMP_AMP] = ACTIONS(25),
    [anon_sym_PIPE_PIPE] = ACTIONS(25),
    [anon_sym_EQ2] = ACTIONS(27),
    [anon_sym_CARET_EQ] = ACTIONS(25),
    [anon_sym_AMP_EQ] = ACTIONS(25),
    [anon_sym_STAR_EQ] = ACTIONS(25),
    [anon_sym_SLASH_EQ] = ACTIONS(25),
    [anon_sym_PERCENT_EQ] = ACTIONS(25),
    [anon_sym_PLUS_EQ] = ACTIONS(25),
    [anon_sym_DASH_EQ] = ACTIONS(25),
    [anon_sym_PIPE_EQ] = ACTIONS(25),
    [anon_sym_DASH_GT] = ACTIONS(25),
    [anon_sym_LT_DASH] = ACTIONS(25),
    [anon_sym_AT] = ACTIONS(25),
    [anon_sym__] = ACTIONS(25),
    [anon_sym_EQ_GT] = ACTIONS(25),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_RBRACE] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_RPAREN] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_RBRACK] = ACTIONS(29),
    [anon_sym_SEMI] = ACTIONS(29),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_DOT] = ACTIONS(31),
    [anon_sym_COLON] = ACTIONS(29),
  },
  [2] = {
    [sym__statement] = STATE(3),
    [sym_comment_block] = STATE(3),
    [sym_type] = STATE(3),
    [sym_bool_literal] = STATE(3),
    [sym_control_keyword] = STATE(3),
    [sym_keyword] = STATE(3),
    [sym_inbuilt_function] = STATE(3),
    [sym_string] = STATE(3),
    [sym_operator] = STATE(3),
    [sym_punctuation] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(33),
    [sym_comment_line] = ACTIONS(35),
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
    [sym_constant] = ACTIONS(35),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [anon_sym_DQUOTE] = ACTIONS(23),
    [anon_sym_TILDE] = ACTIONS(25),
    [anon_sym_BANG] = ACTIONS(27),
    [anon_sym_CARET] = ACTIONS(27),
    [anon_sym_AMP] = ACTIONS(27),
    [anon_sym_STAR] = ACTIONS(27),
    [anon_sym_SLASH] = ACTIONS(27),
    [anon_sym_PERCENT] = ACTIONS(27),
    [anon_sym_GT_GT] = ACTIONS(25),
    [anon_sym_LT_LT] = ACTIONS(25),
    [anon_sym_PLUS] = ACTIONS(27),
    [anon_sym_DASH] = ACTIONS(27),
    [anon_sym_PIPE] = ACTIONS(27),
    [anon_sym_LT] = ACTIONS(27),
    [anon_sym_LT_EQ] = ACTIONS(25),
    [anon_sym_GT] = ACTIONS(27),
    [anon_sym_GT_EQ] = ACTIONS(25),
    [anon_sym_EQ_EQ] = ACTIONS(25),
    [anon_sym_BANG_EQ] = ACTIONS(25),
    [anon_sym_AMP_AMP] = ACTIONS(25),
    [anon_sym_PIPE_PIPE] = ACTIONS(25),
    [anon_sym_EQ2] = ACTIONS(27),
    [anon_sym_CARET_EQ] = ACTIONS(25),
    [anon_sym_AMP_EQ] = ACTIONS(25),
    [anon_sym_STAR_EQ] = ACTIONS(25),
    [anon_sym_SLASH_EQ] = ACTIONS(25),
    [anon_sym_PERCENT_EQ] = ACTIONS(25),
    [anon_sym_PLUS_EQ] = ACTIONS(25),
    [anon_sym_DASH_EQ] = ACTIONS(25),
    [anon_sym_PIPE_EQ] = ACTIONS(25),
    [anon_sym_DASH_GT] = ACTIONS(25),
    [anon_sym_LT_DASH] = ACTIONS(25),
    [anon_sym_AT] = ACTIONS(25),
    [anon_sym__] = ACTIONS(25),
    [anon_sym_EQ_GT] = ACTIONS(25),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_RBRACE] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_RPAREN] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_RBRACK] = ACTIONS(29),
    [anon_sym_SEMI] = ACTIONS(29),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_DOT] = ACTIONS(31),
    [anon_sym_COLON] = ACTIONS(29),
  },
  [3] = {
    [sym__statement] = STATE(3),
    [sym_comment_block] = STATE(3),
    [sym_type] = STATE(3),
    [sym_bool_literal] = STATE(3),
    [sym_control_keyword] = STATE(3),
    [sym_keyword] = STATE(3),
    [sym_inbuilt_function] = STATE(3),
    [sym_string] = STATE(3),
    [sym_operator] = STATE(3),
    [sym_punctuation] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(39),
    [sym_comment_line] = ACTIONS(41),
    [anon_sym_SLASH_STAR] = ACTIONS(44),
    [anon_sym_long] = ACTIONS(47),
    [anon_sym_int] = ACTIONS(47),
    [anon_sym_float] = ACTIONS(47),
    [anon_sym_string] = ACTIONS(47),
    [anon_sym_audio] = ACTIONS(47),
    [anon_sym_bool] = ACTIONS(47),
    [anon_sym_true] = ACTIONS(50),
    [anon_sym_false] = ACTIONS(50),
    [anon_sym_load] = ACTIONS(53),
    [anon_sym_save] = ACTIONS(53),
    [anon_sym_play] = ACTIONS(53),
    [anon_sym_if] = ACTIONS(53),
    [anon_sym_or] = ACTIONS(53),
    [anon_sym_otherwise] = ACTIONS(53),
    [anon_sym_loop] = ACTIONS(53),
    [anon_sym_over] = ACTIONS(53),
    [anon_sym_until] = ACTIONS(53),
    [anon_sym_to] = ACTIONS(53),
    [anon_sym_continue] = ACTIONS(53),
    [anon_sym_break] = ACTIONS(53),
    [anon_sym_return] = ACTIONS(53),
    [anon_sym_main] = ACTIONS(53),
    [anon_sym_read] = ACTIONS(53),
    [anon_sym_print] = ACTIONS(53),
    [anon_sym_import] = ACTIONS(56),
    [anon_sym_const] = ACTIONS(56),
    [anon_sym_HIGHPASS] = ACTIONS(59),
    [anon_sym_LOWPASS] = ACTIONS(59),
    [anon_sym_EQ] = ACTIONS(59),
    [anon_sym_SIN] = ACTIONS(59),
    [anon_sym_COS] = ACTIONS(59),
    [anon_sym_EXP_DECAY] = ACTIONS(59),
    [anon_sym_LIN_DECAY] = ACTIONS(59),
    [anon_sym_SQUARE] = ACTIONS(59),
    [anon_sym_SAW] = ACTIONS(59),
    [anon_sym_TRIANGLE] = ACTIONS(59),
    [anon_sym_PAN] = ACTIONS(59),
    [sym_identifier] = ACTIONS(62),
    [sym_constant] = ACTIONS(41),
    [anon_sym_SQUOTE] = ACTIONS(65),
    [anon_sym_DQUOTE] = ACTIONS(68),
    [anon_sym_TILDE] = ACTIONS(71),
    [anon_sym_BANG] = ACTIONS(74),
    [anon_sym_CARET] = ACTIONS(74),
    [anon_sym_AMP] = ACTIONS(74),
    [anon_sym_STAR] = ACTIONS(74),
    [anon_sym_SLASH] = ACTIONS(74),
    [anon_sym_PERCENT] = ACTIONS(74),
    [anon_sym_GT_GT] = ACTIONS(71),
    [anon_sym_LT_LT] = ACTIONS(71),
    [anon_sym_PLUS] = ACTIONS(74),
    [anon_sym_DASH] = ACTIONS(74),
    [anon_sym_PIPE] = ACTIONS(74),
    [anon_sym_LT] = ACTIONS(74),
    [anon_sym_LT_EQ] = ACTIONS(71),
    [anon_sym_GT] = ACTIONS(74),
    [anon_sym_GT_EQ] = ACTIONS(71),
    [anon_sym_EQ_EQ] = ACTIONS(71),
    [anon_sym_BANG_EQ] = ACTIONS(71),
    [anon_sym_AMP_AMP] = ACTIONS(71),
    [anon_sym_PIPE_PIPE] = ACTIONS(71),
    [anon_sym_EQ2] = ACTIONS(74),
    [anon_sym_CARET_EQ] = ACTIONS(71),
    [anon_sym_AMP_EQ] = ACTIONS(71),
    [anon_sym_STAR_EQ] = ACTIONS(71),
    [anon_sym_SLASH_EQ] = ACTIONS(71),
    [anon_sym_PERCENT_EQ] = ACTIONS(71),
    [anon_sym_PLUS_EQ] = ACTIONS(71),
    [anon_sym_DASH_EQ] = ACTIONS(71),
    [anon_sym_PIPE_EQ] = ACTIONS(71),
    [anon_sym_DASH_GT] = ACTIONS(71),
    [anon_sym_LT_DASH] = ACTIONS(71),
    [anon_sym_AT] = ACTIONS(71),
    [anon_sym__] = ACTIONS(71),
    [anon_sym_EQ_GT] = ACTIONS(71),
    [anon_sym_LBRACE] = ACTIONS(77),
    [anon_sym_RBRACE] = ACTIONS(77),
    [anon_sym_LPAREN] = ACTIONS(77),
    [anon_sym_RPAREN] = ACTIONS(77),
    [anon_sym_LBRACK] = ACTIONS(77),
    [anon_sym_RBRACK] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(77),
    [anon_sym_COMMA] = ACTIONS(77),
    [anon_sym_DOT] = ACTIONS(80),
    [anon_sym_COLON] = ACTIONS(77),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(83),
    [sym_comment_line] = ACTIONS(83),
    [anon_sym_SLASH_STAR] = ACTIONS(83),
    [anon_sym_long] = ACTIONS(85),
    [anon_sym_int] = ACTIONS(85),
    [anon_sym_float] = ACTIONS(85),
    [anon_sym_string] = ACTIONS(85),
    [anon_sym_audio] = ACTIONS(85),
    [anon_sym_bool] = ACTIONS(85),
    [anon_sym_true] = ACTIONS(85),
    [anon_sym_false] = ACTIONS(85),
    [anon_sym_load] = ACTIONS(85),
    [anon_sym_save] = ACTIONS(85),
    [anon_sym_play] = ACTIONS(85),
    [anon_sym_if] = ACTIONS(85),
    [anon_sym_or] = ACTIONS(85),
    [anon_sym_otherwise] = ACTIONS(85),
    [anon_sym_loop] = ACTIONS(85),
    [anon_sym_over] = ACTIONS(85),
    [anon_sym_until] = ACTIONS(85),
    [anon_sym_to] = ACTIONS(85),
    [anon_sym_continue] = ACTIONS(85),
    [anon_sym_break] = ACTIONS(85),
    [anon_sym_return] = ACTIONS(85),
    [anon_sym_main] = ACTIONS(85),
    [anon_sym_read] = ACTIONS(85),
    [anon_sym_print] = ACTIONS(85),
    [anon_sym_import] = ACTIONS(85),
    [anon_sym_const] = ACTIONS(85),
    [anon_sym_HIGHPASS] = ACTIONS(85),
    [anon_sym_LOWPASS] = ACTIONS(85),
    [anon_sym_EQ] = ACTIONS(85),
    [anon_sym_SIN] = ACTIONS(85),
    [anon_sym_COS] = ACTIONS(85),
    [anon_sym_EXP_DECAY] = ACTIONS(85),
    [anon_sym_LIN_DECAY] = ACTIONS(85),
    [anon_sym_SQUARE] = ACTIONS(85),
    [anon_sym_SAW] = ACTIONS(85),
    [anon_sym_TRIANGLE] = ACTIONS(85),
    [anon_sym_PAN] = ACTIONS(85),
    [sym_identifier] = ACTIONS(85),
    [sym_constant] = ACTIONS(83),
    [anon_sym_SQUOTE] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(83),
    [anon_sym_TILDE] = ACTIONS(83),
    [anon_sym_BANG] = ACTIONS(85),
    [anon_sym_CARET] = ACTIONS(85),
    [anon_sym_AMP] = ACTIONS(85),
    [anon_sym_STAR] = ACTIONS(85),
    [anon_sym_SLASH] = ACTIONS(85),
    [anon_sym_PERCENT] = ACTIONS(85),
    [anon_sym_GT_GT] = ACTIONS(83),
    [anon_sym_LT_LT] = ACTIONS(83),
    [anon_sym_PLUS] = ACTIONS(85),
    [anon_sym_DASH] = ACTIONS(85),
    [anon_sym_PIPE] = ACTIONS(85),
    [anon_sym_LT] = ACTIONS(85),
    [anon_sym_LT_EQ] = ACTIONS(83),
    [anon_sym_GT] = ACTIONS(85),
    [anon_sym_GT_EQ] = ACTIONS(83),
    [anon_sym_EQ_EQ] = ACTIONS(83),
    [anon_sym_BANG_EQ] = ACTIONS(83),
    [anon_sym_AMP_AMP] = ACTIONS(83),
    [anon_sym_PIPE_PIPE] = ACTIONS(83),
    [anon_sym_EQ2] = ACTIONS(85),
    [anon_sym_CARET_EQ] = ACTIONS(83),
    [anon_sym_AMP_EQ] = ACTIONS(83),
    [anon_sym_STAR_EQ] = ACTIONS(83),
    [anon_sym_SLASH_EQ] = ACTIONS(83),
    [anon_sym_PERCENT_EQ] = ACTIONS(83),
    [anon_sym_PLUS_EQ] = ACTIONS(83),
    [anon_sym_DASH_EQ] = ACTIONS(83),
    [anon_sym_PIPE_EQ] = ACTIONS(83),
    [anon_sym_DASH_GT] = ACTIONS(83),
    [anon_sym_LT_DASH] = ACTIONS(83),
    [anon_sym_AT] = ACTIONS(83),
    [anon_sym__] = ACTIONS(83),
    [anon_sym_EQ_GT] = ACTIONS(83),
    [anon_sym_LBRACE] = ACTIONS(83),
    [anon_sym_RBRACE] = ACTIONS(83),
    [anon_sym_LPAREN] = ACTIONS(83),
    [anon_sym_RPAREN] = ACTIONS(83),
    [anon_sym_LBRACK] = ACTIONS(83),
    [anon_sym_RBRACK] = ACTIONS(83),
    [anon_sym_SEMI] = ACTIONS(83),
    [anon_sym_COMMA] = ACTIONS(83),
    [anon_sym_DOT] = ACTIONS(85),
    [anon_sym_COLON] = ACTIONS(83),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(87),
    [sym_comment_line] = ACTIONS(87),
    [anon_sym_SLASH_STAR] = ACTIONS(87),
    [anon_sym_long] = ACTIONS(89),
    [anon_sym_int] = ACTIONS(89),
    [anon_sym_float] = ACTIONS(89),
    [anon_sym_string] = ACTIONS(89),
    [anon_sym_audio] = ACTIONS(89),
    [anon_sym_bool] = ACTIONS(89),
    [anon_sym_true] = ACTIONS(89),
    [anon_sym_false] = ACTIONS(89),
    [anon_sym_load] = ACTIONS(89),
    [anon_sym_save] = ACTIONS(89),
    [anon_sym_play] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(89),
    [anon_sym_or] = ACTIONS(89),
    [anon_sym_otherwise] = ACTIONS(89),
    [anon_sym_loop] = ACTIONS(89),
    [anon_sym_over] = ACTIONS(89),
    [anon_sym_until] = ACTIONS(89),
    [anon_sym_to] = ACTIONS(89),
    [anon_sym_continue] = ACTIONS(89),
    [anon_sym_break] = ACTIONS(89),
    [anon_sym_return] = ACTIONS(89),
    [anon_sym_main] = ACTIONS(89),
    [anon_sym_read] = ACTIONS(89),
    [anon_sym_print] = ACTIONS(89),
    [anon_sym_import] = ACTIONS(89),
    [anon_sym_const] = ACTIONS(89),
    [anon_sym_HIGHPASS] = ACTIONS(89),
    [anon_sym_LOWPASS] = ACTIONS(89),
    [anon_sym_EQ] = ACTIONS(89),
    [anon_sym_SIN] = ACTIONS(89),
    [anon_sym_COS] = ACTIONS(89),
    [anon_sym_EXP_DECAY] = ACTIONS(89),
    [anon_sym_LIN_DECAY] = ACTIONS(89),
    [anon_sym_SQUARE] = ACTIONS(89),
    [anon_sym_SAW] = ACTIONS(89),
    [anon_sym_TRIANGLE] = ACTIONS(89),
    [anon_sym_PAN] = ACTIONS(89),
    [sym_identifier] = ACTIONS(89),
    [sym_constant] = ACTIONS(87),
    [anon_sym_SQUOTE] = ACTIONS(87),
    [anon_sym_DQUOTE] = ACTIONS(87),
    [anon_sym_TILDE] = ACTIONS(87),
    [anon_sym_BANG] = ACTIONS(89),
    [anon_sym_CARET] = ACTIONS(89),
    [anon_sym_AMP] = ACTIONS(89),
    [anon_sym_STAR] = ACTIONS(89),
    [anon_sym_SLASH] = ACTIONS(89),
    [anon_sym_PERCENT] = ACTIONS(89),
    [anon_sym_GT_GT] = ACTIONS(87),
    [anon_sym_LT_LT] = ACTIONS(87),
    [anon_sym_PLUS] = ACTIONS(89),
    [anon_sym_DASH] = ACTIONS(89),
    [anon_sym_PIPE] = ACTIONS(89),
    [anon_sym_LT] = ACTIONS(89),
    [anon_sym_LT_EQ] = ACTIONS(87),
    [anon_sym_GT] = ACTIONS(89),
    [anon_sym_GT_EQ] = ACTIONS(87),
    [anon_sym_EQ_EQ] = ACTIONS(87),
    [anon_sym_BANG_EQ] = ACTIONS(87),
    [anon_sym_AMP_AMP] = ACTIONS(87),
    [anon_sym_PIPE_PIPE] = ACTIONS(87),
    [anon_sym_EQ2] = ACTIONS(89),
    [anon_sym_CARET_EQ] = ACTIONS(87),
    [anon_sym_AMP_EQ] = ACTIONS(87),
    [anon_sym_STAR_EQ] = ACTIONS(87),
    [anon_sym_SLASH_EQ] = ACTIONS(87),
    [anon_sym_PERCENT_EQ] = ACTIONS(87),
    [anon_sym_PLUS_EQ] = ACTIONS(87),
    [anon_sym_DASH_EQ] = ACTIONS(87),
    [anon_sym_PIPE_EQ] = ACTIONS(87),
    [anon_sym_DASH_GT] = ACTIONS(87),
    [anon_sym_LT_DASH] = ACTIONS(87),
    [anon_sym_AT] = ACTIONS(87),
    [anon_sym__] = ACTIONS(87),
    [anon_sym_EQ_GT] = ACTIONS(87),
    [anon_sym_LBRACE] = ACTIONS(87),
    [anon_sym_RBRACE] = ACTIONS(87),
    [anon_sym_LPAREN] = ACTIONS(87),
    [anon_sym_RPAREN] = ACTIONS(87),
    [anon_sym_LBRACK] = ACTIONS(87),
    [anon_sym_RBRACK] = ACTIONS(87),
    [anon_sym_SEMI] = ACTIONS(87),
    [anon_sym_COMMA] = ACTIONS(87),
    [anon_sym_DOT] = ACTIONS(89),
    [anon_sym_COLON] = ACTIONS(87),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(91),
    [sym_comment_line] = ACTIONS(91),
    [anon_sym_SLASH_STAR] = ACTIONS(91),
    [anon_sym_long] = ACTIONS(93),
    [anon_sym_int] = ACTIONS(93),
    [anon_sym_float] = ACTIONS(93),
    [anon_sym_string] = ACTIONS(93),
    [anon_sym_audio] = ACTIONS(93),
    [anon_sym_bool] = ACTIONS(93),
    [anon_sym_true] = ACTIONS(93),
    [anon_sym_false] = ACTIONS(93),
    [anon_sym_load] = ACTIONS(93),
    [anon_sym_save] = ACTIONS(93),
    [anon_sym_play] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(93),
    [anon_sym_or] = ACTIONS(93),
    [anon_sym_otherwise] = ACTIONS(93),
    [anon_sym_loop] = ACTIONS(93),
    [anon_sym_over] = ACTIONS(93),
    [anon_sym_until] = ACTIONS(93),
    [anon_sym_to] = ACTIONS(93),
    [anon_sym_continue] = ACTIONS(93),
    [anon_sym_break] = ACTIONS(93),
    [anon_sym_return] = ACTIONS(93),
    [anon_sym_main] = ACTIONS(93),
    [anon_sym_read] = ACTIONS(93),
    [anon_sym_print] = ACTIONS(93),
    [anon_sym_import] = ACTIONS(93),
    [anon_sym_const] = ACTIONS(93),
    [anon_sym_HIGHPASS] = ACTIONS(93),
    [anon_sym_LOWPASS] = ACTIONS(93),
    [anon_sym_EQ] = ACTIONS(93),
    [anon_sym_SIN] = ACTIONS(93),
    [anon_sym_COS] = ACTIONS(93),
    [anon_sym_EXP_DECAY] = ACTIONS(93),
    [anon_sym_LIN_DECAY] = ACTIONS(93),
    [anon_sym_SQUARE] = ACTIONS(93),
    [anon_sym_SAW] = ACTIONS(93),
    [anon_sym_TRIANGLE] = ACTIONS(93),
    [anon_sym_PAN] = ACTIONS(93),
    [sym_identifier] = ACTIONS(93),
    [sym_constant] = ACTIONS(91),
    [anon_sym_SQUOTE] = ACTIONS(91),
    [anon_sym_DQUOTE] = ACTIONS(91),
    [anon_sym_TILDE] = ACTIONS(91),
    [anon_sym_BANG] = ACTIONS(93),
    [anon_sym_CARET] = ACTIONS(93),
    [anon_sym_AMP] = ACTIONS(93),
    [anon_sym_STAR] = ACTIONS(93),
    [anon_sym_SLASH] = ACTIONS(93),
    [anon_sym_PERCENT] = ACTIONS(93),
    [anon_sym_GT_GT] = ACTIONS(91),
    [anon_sym_LT_LT] = ACTIONS(91),
    [anon_sym_PLUS] = ACTIONS(93),
    [anon_sym_DASH] = ACTIONS(93),
    [anon_sym_PIPE] = ACTIONS(93),
    [anon_sym_LT] = ACTIONS(93),
    [anon_sym_LT_EQ] = ACTIONS(91),
    [anon_sym_GT] = ACTIONS(93),
    [anon_sym_GT_EQ] = ACTIONS(91),
    [anon_sym_EQ_EQ] = ACTIONS(91),
    [anon_sym_BANG_EQ] = ACTIONS(91),
    [anon_sym_AMP_AMP] = ACTIONS(91),
    [anon_sym_PIPE_PIPE] = ACTIONS(91),
    [anon_sym_EQ2] = ACTIONS(93),
    [anon_sym_CARET_EQ] = ACTIONS(91),
    [anon_sym_AMP_EQ] = ACTIONS(91),
    [anon_sym_STAR_EQ] = ACTIONS(91),
    [anon_sym_SLASH_EQ] = ACTIONS(91),
    [anon_sym_PERCENT_EQ] = ACTIONS(91),
    [anon_sym_PLUS_EQ] = ACTIONS(91),
    [anon_sym_DASH_EQ] = ACTIONS(91),
    [anon_sym_PIPE_EQ] = ACTIONS(91),
    [anon_sym_DASH_GT] = ACTIONS(91),
    [anon_sym_LT_DASH] = ACTIONS(91),
    [anon_sym_AT] = ACTIONS(91),
    [anon_sym__] = ACTIONS(91),
    [anon_sym_EQ_GT] = ACTIONS(91),
    [anon_sym_LBRACE] = ACTIONS(91),
    [anon_sym_RBRACE] = ACTIONS(91),
    [anon_sym_LPAREN] = ACTIONS(91),
    [anon_sym_RPAREN] = ACTIONS(91),
    [anon_sym_LBRACK] = ACTIONS(91),
    [anon_sym_RBRACK] = ACTIONS(91),
    [anon_sym_SEMI] = ACTIONS(91),
    [anon_sym_COMMA] = ACTIONS(91),
    [anon_sym_DOT] = ACTIONS(93),
    [anon_sym_COLON] = ACTIONS(91),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(95),
    [sym_comment_line] = ACTIONS(95),
    [anon_sym_SLASH_STAR] = ACTIONS(95),
    [anon_sym_long] = ACTIONS(97),
    [anon_sym_int] = ACTIONS(97),
    [anon_sym_float] = ACTIONS(97),
    [anon_sym_string] = ACTIONS(97),
    [anon_sym_audio] = ACTIONS(97),
    [anon_sym_bool] = ACTIONS(97),
    [anon_sym_true] = ACTIONS(97),
    [anon_sym_false] = ACTIONS(97),
    [anon_sym_load] = ACTIONS(97),
    [anon_sym_save] = ACTIONS(97),
    [anon_sym_play] = ACTIONS(97),
    [anon_sym_if] = ACTIONS(97),
    [anon_sym_or] = ACTIONS(97),
    [anon_sym_otherwise] = ACTIONS(97),
    [anon_sym_loop] = ACTIONS(97),
    [anon_sym_over] = ACTIONS(97),
    [anon_sym_until] = ACTIONS(97),
    [anon_sym_to] = ACTIONS(97),
    [anon_sym_continue] = ACTIONS(97),
    [anon_sym_break] = ACTIONS(97),
    [anon_sym_return] = ACTIONS(97),
    [anon_sym_main] = ACTIONS(97),
    [anon_sym_read] = ACTIONS(97),
    [anon_sym_print] = ACTIONS(97),
    [anon_sym_import] = ACTIONS(97),
    [anon_sym_const] = ACTIONS(97),
    [anon_sym_HIGHPASS] = ACTIONS(97),
    [anon_sym_LOWPASS] = ACTIONS(97),
    [anon_sym_EQ] = ACTIONS(97),
    [anon_sym_SIN] = ACTIONS(97),
    [anon_sym_COS] = ACTIONS(97),
    [anon_sym_EXP_DECAY] = ACTIONS(97),
    [anon_sym_LIN_DECAY] = ACTIONS(97),
    [anon_sym_SQUARE] = ACTIONS(97),
    [anon_sym_SAW] = ACTIONS(97),
    [anon_sym_TRIANGLE] = ACTIONS(97),
    [anon_sym_PAN] = ACTIONS(97),
    [sym_identifier] = ACTIONS(97),
    [sym_constant] = ACTIONS(95),
    [anon_sym_SQUOTE] = ACTIONS(95),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [anon_sym_TILDE] = ACTIONS(95),
    [anon_sym_BANG] = ACTIONS(97),
    [anon_sym_CARET] = ACTIONS(97),
    [anon_sym_AMP] = ACTIONS(97),
    [anon_sym_STAR] = ACTIONS(97),
    [anon_sym_SLASH] = ACTIONS(97),
    [anon_sym_PERCENT] = ACTIONS(97),
    [anon_sym_GT_GT] = ACTIONS(95),
    [anon_sym_LT_LT] = ACTIONS(95),
    [anon_sym_PLUS] = ACTIONS(97),
    [anon_sym_DASH] = ACTIONS(97),
    [anon_sym_PIPE] = ACTIONS(97),
    [anon_sym_LT] = ACTIONS(97),
    [anon_sym_LT_EQ] = ACTIONS(95),
    [anon_sym_GT] = ACTIONS(97),
    [anon_sym_GT_EQ] = ACTIONS(95),
    [anon_sym_EQ_EQ] = ACTIONS(95),
    [anon_sym_BANG_EQ] = ACTIONS(95),
    [anon_sym_AMP_AMP] = ACTIONS(95),
    [anon_sym_PIPE_PIPE] = ACTIONS(95),
    [anon_sym_EQ2] = ACTIONS(97),
    [anon_sym_CARET_EQ] = ACTIONS(95),
    [anon_sym_AMP_EQ] = ACTIONS(95),
    [anon_sym_STAR_EQ] = ACTIONS(95),
    [anon_sym_SLASH_EQ] = ACTIONS(95),
    [anon_sym_PERCENT_EQ] = ACTIONS(95),
    [anon_sym_PLUS_EQ] = ACTIONS(95),
    [anon_sym_DASH_EQ] = ACTIONS(95),
    [anon_sym_PIPE_EQ] = ACTIONS(95),
    [anon_sym_DASH_GT] = ACTIONS(95),
    [anon_sym_LT_DASH] = ACTIONS(95),
    [anon_sym_AT] = ACTIONS(95),
    [anon_sym__] = ACTIONS(95),
    [anon_sym_EQ_GT] = ACTIONS(95),
    [anon_sym_LBRACE] = ACTIONS(95),
    [anon_sym_RBRACE] = ACTIONS(95),
    [anon_sym_LPAREN] = ACTIONS(95),
    [anon_sym_RPAREN] = ACTIONS(95),
    [anon_sym_LBRACK] = ACTIONS(95),
    [anon_sym_RBRACK] = ACTIONS(95),
    [anon_sym_SEMI] = ACTIONS(95),
    [anon_sym_COMMA] = ACTIONS(95),
    [anon_sym_DOT] = ACTIONS(97),
    [anon_sym_COLON] = ACTIONS(95),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(99),
    [sym_comment_line] = ACTIONS(99),
    [anon_sym_SLASH_STAR] = ACTIONS(99),
    [anon_sym_long] = ACTIONS(101),
    [anon_sym_int] = ACTIONS(101),
    [anon_sym_float] = ACTIONS(101),
    [anon_sym_string] = ACTIONS(101),
    [anon_sym_audio] = ACTIONS(101),
    [anon_sym_bool] = ACTIONS(101),
    [anon_sym_true] = ACTIONS(101),
    [anon_sym_false] = ACTIONS(101),
    [anon_sym_load] = ACTIONS(101),
    [anon_sym_save] = ACTIONS(101),
    [anon_sym_play] = ACTIONS(101),
    [anon_sym_if] = ACTIONS(101),
    [anon_sym_or] = ACTIONS(101),
    [anon_sym_otherwise] = ACTIONS(101),
    [anon_sym_loop] = ACTIONS(101),
    [anon_sym_over] = ACTIONS(101),
    [anon_sym_until] = ACTIONS(101),
    [anon_sym_to] = ACTIONS(101),
    [anon_sym_continue] = ACTIONS(101),
    [anon_sym_break] = ACTIONS(101),
    [anon_sym_return] = ACTIONS(101),
    [anon_sym_main] = ACTIONS(101),
    [anon_sym_read] = ACTIONS(101),
    [anon_sym_print] = ACTIONS(101),
    [anon_sym_import] = ACTIONS(101),
    [anon_sym_const] = ACTIONS(101),
    [anon_sym_HIGHPASS] = ACTIONS(101),
    [anon_sym_LOWPASS] = ACTIONS(101),
    [anon_sym_EQ] = ACTIONS(101),
    [anon_sym_SIN] = ACTIONS(101),
    [anon_sym_COS] = ACTIONS(101),
    [anon_sym_EXP_DECAY] = ACTIONS(101),
    [anon_sym_LIN_DECAY] = ACTIONS(101),
    [anon_sym_SQUARE] = ACTIONS(101),
    [anon_sym_SAW] = ACTIONS(101),
    [anon_sym_TRIANGLE] = ACTIONS(101),
    [anon_sym_PAN] = ACTIONS(101),
    [sym_identifier] = ACTIONS(101),
    [sym_constant] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(99),
    [anon_sym_TILDE] = ACTIONS(99),
    [anon_sym_BANG] = ACTIONS(101),
    [anon_sym_CARET] = ACTIONS(101),
    [anon_sym_AMP] = ACTIONS(101),
    [anon_sym_STAR] = ACTIONS(101),
    [anon_sym_SLASH] = ACTIONS(101),
    [anon_sym_PERCENT] = ACTIONS(101),
    [anon_sym_GT_GT] = ACTIONS(99),
    [anon_sym_LT_LT] = ACTIONS(99),
    [anon_sym_PLUS] = ACTIONS(101),
    [anon_sym_DASH] = ACTIONS(101),
    [anon_sym_PIPE] = ACTIONS(101),
    [anon_sym_LT] = ACTIONS(101),
    [anon_sym_LT_EQ] = ACTIONS(99),
    [anon_sym_GT] = ACTIONS(101),
    [anon_sym_GT_EQ] = ACTIONS(99),
    [anon_sym_EQ_EQ] = ACTIONS(99),
    [anon_sym_BANG_EQ] = ACTIONS(99),
    [anon_sym_AMP_AMP] = ACTIONS(99),
    [anon_sym_PIPE_PIPE] = ACTIONS(99),
    [anon_sym_EQ2] = ACTIONS(101),
    [anon_sym_CARET_EQ] = ACTIONS(99),
    [anon_sym_AMP_EQ] = ACTIONS(99),
    [anon_sym_STAR_EQ] = ACTIONS(99),
    [anon_sym_SLASH_EQ] = ACTIONS(99),
    [anon_sym_PERCENT_EQ] = ACTIONS(99),
    [anon_sym_PLUS_EQ] = ACTIONS(99),
    [anon_sym_DASH_EQ] = ACTIONS(99),
    [anon_sym_PIPE_EQ] = ACTIONS(99),
    [anon_sym_DASH_GT] = ACTIONS(99),
    [anon_sym_LT_DASH] = ACTIONS(99),
    [anon_sym_AT] = ACTIONS(99),
    [anon_sym__] = ACTIONS(99),
    [anon_sym_EQ_GT] = ACTIONS(99),
    [anon_sym_LBRACE] = ACTIONS(99),
    [anon_sym_RBRACE] = ACTIONS(99),
    [anon_sym_LPAREN] = ACTIONS(99),
    [anon_sym_RPAREN] = ACTIONS(99),
    [anon_sym_LBRACK] = ACTIONS(99),
    [anon_sym_RBRACK] = ACTIONS(99),
    [anon_sym_SEMI] = ACTIONS(99),
    [anon_sym_COMMA] = ACTIONS(99),
    [anon_sym_DOT] = ACTIONS(101),
    [anon_sym_COLON] = ACTIONS(99),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(103),
    [sym_comment_line] = ACTIONS(103),
    [anon_sym_SLASH_STAR] = ACTIONS(103),
    [anon_sym_long] = ACTIONS(105),
    [anon_sym_int] = ACTIONS(105),
    [anon_sym_float] = ACTIONS(105),
    [anon_sym_string] = ACTIONS(105),
    [anon_sym_audio] = ACTIONS(105),
    [anon_sym_bool] = ACTIONS(105),
    [anon_sym_true] = ACTIONS(105),
    [anon_sym_false] = ACTIONS(105),
    [anon_sym_load] = ACTIONS(105),
    [anon_sym_save] = ACTIONS(105),
    [anon_sym_play] = ACTIONS(105),
    [anon_sym_if] = ACTIONS(105),
    [anon_sym_or] = ACTIONS(105),
    [anon_sym_otherwise] = ACTIONS(105),
    [anon_sym_loop] = ACTIONS(105),
    [anon_sym_over] = ACTIONS(105),
    [anon_sym_until] = ACTIONS(105),
    [anon_sym_to] = ACTIONS(105),
    [anon_sym_continue] = ACTIONS(105),
    [anon_sym_break] = ACTIONS(105),
    [anon_sym_return] = ACTIONS(105),
    [anon_sym_main] = ACTIONS(105),
    [anon_sym_read] = ACTIONS(105),
    [anon_sym_print] = ACTIONS(105),
    [anon_sym_import] = ACTIONS(105),
    [anon_sym_const] = ACTIONS(105),
    [anon_sym_HIGHPASS] = ACTIONS(105),
    [anon_sym_LOWPASS] = ACTIONS(105),
    [anon_sym_EQ] = ACTIONS(105),
    [anon_sym_SIN] = ACTIONS(105),
    [anon_sym_COS] = ACTIONS(105),
    [anon_sym_EXP_DECAY] = ACTIONS(105),
    [anon_sym_LIN_DECAY] = ACTIONS(105),
    [anon_sym_SQUARE] = ACTIONS(105),
    [anon_sym_SAW] = ACTIONS(105),
    [anon_sym_TRIANGLE] = ACTIONS(105),
    [anon_sym_PAN] = ACTIONS(105),
    [sym_identifier] = ACTIONS(105),
    [sym_constant] = ACTIONS(103),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [anon_sym_DQUOTE] = ACTIONS(103),
    [anon_sym_TILDE] = ACTIONS(103),
    [anon_sym_BANG] = ACTIONS(105),
    [anon_sym_CARET] = ACTIONS(105),
    [anon_sym_AMP] = ACTIONS(105),
    [anon_sym_STAR] = ACTIONS(105),
    [anon_sym_SLASH] = ACTIONS(105),
    [anon_sym_PERCENT] = ACTIONS(105),
    [anon_sym_GT_GT] = ACTIONS(103),
    [anon_sym_LT_LT] = ACTIONS(103),
    [anon_sym_PLUS] = ACTIONS(105),
    [anon_sym_DASH] = ACTIONS(105),
    [anon_sym_PIPE] = ACTIONS(105),
    [anon_sym_LT] = ACTIONS(105),
    [anon_sym_LT_EQ] = ACTIONS(103),
    [anon_sym_GT] = ACTIONS(105),
    [anon_sym_GT_EQ] = ACTIONS(103),
    [anon_sym_EQ_EQ] = ACTIONS(103),
    [anon_sym_BANG_EQ] = ACTIONS(103),
    [anon_sym_AMP_AMP] = ACTIONS(103),
    [anon_sym_PIPE_PIPE] = ACTIONS(103),
    [anon_sym_EQ2] = ACTIONS(105),
    [anon_sym_CARET_EQ] = ACTIONS(103),
    [anon_sym_AMP_EQ] = ACTIONS(103),
    [anon_sym_STAR_EQ] = ACTIONS(103),
    [anon_sym_SLASH_EQ] = ACTIONS(103),
    [anon_sym_PERCENT_EQ] = ACTIONS(103),
    [anon_sym_PLUS_EQ] = ACTIONS(103),
    [anon_sym_DASH_EQ] = ACTIONS(103),
    [anon_sym_PIPE_EQ] = ACTIONS(103),
    [anon_sym_DASH_GT] = ACTIONS(103),
    [anon_sym_LT_DASH] = ACTIONS(103),
    [anon_sym_AT] = ACTIONS(103),
    [anon_sym__] = ACTIONS(103),
    [anon_sym_EQ_GT] = ACTIONS(103),
    [anon_sym_LBRACE] = ACTIONS(103),
    [anon_sym_RBRACE] = ACTIONS(103),
    [anon_sym_LPAREN] = ACTIONS(103),
    [anon_sym_RPAREN] = ACTIONS(103),
    [anon_sym_LBRACK] = ACTIONS(103),
    [anon_sym_RBRACK] = ACTIONS(103),
    [anon_sym_SEMI] = ACTIONS(103),
    [anon_sym_COMMA] = ACTIONS(103),
    [anon_sym_DOT] = ACTIONS(105),
    [anon_sym_COLON] = ACTIONS(103),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(107),
    [sym_comment_line] = ACTIONS(107),
    [anon_sym_SLASH_STAR] = ACTIONS(107),
    [anon_sym_long] = ACTIONS(109),
    [anon_sym_int] = ACTIONS(109),
    [anon_sym_float] = ACTIONS(109),
    [anon_sym_string] = ACTIONS(109),
    [anon_sym_audio] = ACTIONS(109),
    [anon_sym_bool] = ACTIONS(109),
    [anon_sym_true] = ACTIONS(109),
    [anon_sym_false] = ACTIONS(109),
    [anon_sym_load] = ACTIONS(109),
    [anon_sym_save] = ACTIONS(109),
    [anon_sym_play] = ACTIONS(109),
    [anon_sym_if] = ACTIONS(109),
    [anon_sym_or] = ACTIONS(109),
    [anon_sym_otherwise] = ACTIONS(109),
    [anon_sym_loop] = ACTIONS(109),
    [anon_sym_over] = ACTIONS(109),
    [anon_sym_until] = ACTIONS(109),
    [anon_sym_to] = ACTIONS(109),
    [anon_sym_continue] = ACTIONS(109),
    [anon_sym_break] = ACTIONS(109),
    [anon_sym_return] = ACTIONS(109),
    [anon_sym_main] = ACTIONS(109),
    [anon_sym_read] = ACTIONS(109),
    [anon_sym_print] = ACTIONS(109),
    [anon_sym_import] = ACTIONS(109),
    [anon_sym_const] = ACTIONS(109),
    [anon_sym_HIGHPASS] = ACTIONS(109),
    [anon_sym_LOWPASS] = ACTIONS(109),
    [anon_sym_EQ] = ACTIONS(109),
    [anon_sym_SIN] = ACTIONS(109),
    [anon_sym_COS] = ACTIONS(109),
    [anon_sym_EXP_DECAY] = ACTIONS(109),
    [anon_sym_LIN_DECAY] = ACTIONS(109),
    [anon_sym_SQUARE] = ACTIONS(109),
    [anon_sym_SAW] = ACTIONS(109),
    [anon_sym_TRIANGLE] = ACTIONS(109),
    [anon_sym_PAN] = ACTIONS(109),
    [sym_identifier] = ACTIONS(109),
    [sym_constant] = ACTIONS(107),
    [anon_sym_SQUOTE] = ACTIONS(107),
    [anon_sym_DQUOTE] = ACTIONS(107),
    [anon_sym_TILDE] = ACTIONS(107),
    [anon_sym_BANG] = ACTIONS(109),
    [anon_sym_CARET] = ACTIONS(109),
    [anon_sym_AMP] = ACTIONS(109),
    [anon_sym_STAR] = ACTIONS(109),
    [anon_sym_SLASH] = ACTIONS(109),
    [anon_sym_PERCENT] = ACTIONS(109),
    [anon_sym_GT_GT] = ACTIONS(107),
    [anon_sym_LT_LT] = ACTIONS(107),
    [anon_sym_PLUS] = ACTIONS(109),
    [anon_sym_DASH] = ACTIONS(109),
    [anon_sym_PIPE] = ACTIONS(109),
    [anon_sym_LT] = ACTIONS(109),
    [anon_sym_LT_EQ] = ACTIONS(107),
    [anon_sym_GT] = ACTIONS(109),
    [anon_sym_GT_EQ] = ACTIONS(107),
    [anon_sym_EQ_EQ] = ACTIONS(107),
    [anon_sym_BANG_EQ] = ACTIONS(107),
    [anon_sym_AMP_AMP] = ACTIONS(107),
    [anon_sym_PIPE_PIPE] = ACTIONS(107),
    [anon_sym_EQ2] = ACTIONS(109),
    [anon_sym_CARET_EQ] = ACTIONS(107),
    [anon_sym_AMP_EQ] = ACTIONS(107),
    [anon_sym_STAR_EQ] = ACTIONS(107),
    [anon_sym_SLASH_EQ] = ACTIONS(107),
    [anon_sym_PERCENT_EQ] = ACTIONS(107),
    [anon_sym_PLUS_EQ] = ACTIONS(107),
    [anon_sym_DASH_EQ] = ACTIONS(107),
    [anon_sym_PIPE_EQ] = ACTIONS(107),
    [anon_sym_DASH_GT] = ACTIONS(107),
    [anon_sym_LT_DASH] = ACTIONS(107),
    [anon_sym_AT] = ACTIONS(107),
    [anon_sym__] = ACTIONS(107),
    [anon_sym_EQ_GT] = ACTIONS(107),
    [anon_sym_LBRACE] = ACTIONS(107),
    [anon_sym_RBRACE] = ACTIONS(107),
    [anon_sym_LPAREN] = ACTIONS(107),
    [anon_sym_RPAREN] = ACTIONS(107),
    [anon_sym_LBRACK] = ACTIONS(107),
    [anon_sym_RBRACK] = ACTIONS(107),
    [anon_sym_SEMI] = ACTIONS(107),
    [anon_sym_COMMA] = ACTIONS(107),
    [anon_sym_DOT] = ACTIONS(109),
    [anon_sym_COLON] = ACTIONS(107),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(111),
    [sym_comment_line] = ACTIONS(111),
    [anon_sym_SLASH_STAR] = ACTIONS(111),
    [anon_sym_long] = ACTIONS(113),
    [anon_sym_int] = ACTIONS(113),
    [anon_sym_float] = ACTIONS(113),
    [anon_sym_string] = ACTIONS(113),
    [anon_sym_audio] = ACTIONS(113),
    [anon_sym_bool] = ACTIONS(113),
    [anon_sym_true] = ACTIONS(113),
    [anon_sym_false] = ACTIONS(113),
    [anon_sym_load] = ACTIONS(113),
    [anon_sym_save] = ACTIONS(113),
    [anon_sym_play] = ACTIONS(113),
    [anon_sym_if] = ACTIONS(113),
    [anon_sym_or] = ACTIONS(113),
    [anon_sym_otherwise] = ACTIONS(113),
    [anon_sym_loop] = ACTIONS(113),
    [anon_sym_over] = ACTIONS(113),
    [anon_sym_until] = ACTIONS(113),
    [anon_sym_to] = ACTIONS(113),
    [anon_sym_continue] = ACTIONS(113),
    [anon_sym_break] = ACTIONS(113),
    [anon_sym_return] = ACTIONS(113),
    [anon_sym_main] = ACTIONS(113),
    [anon_sym_read] = ACTIONS(113),
    [anon_sym_print] = ACTIONS(113),
    [anon_sym_import] = ACTIONS(113),
    [anon_sym_const] = ACTIONS(113),
    [anon_sym_HIGHPASS] = ACTIONS(113),
    [anon_sym_LOWPASS] = ACTIONS(113),
    [anon_sym_EQ] = ACTIONS(113),
    [anon_sym_SIN] = ACTIONS(113),
    [anon_sym_COS] = ACTIONS(113),
    [anon_sym_EXP_DECAY] = ACTIONS(113),
    [anon_sym_LIN_DECAY] = ACTIONS(113),
    [anon_sym_SQUARE] = ACTIONS(113),
    [anon_sym_SAW] = ACTIONS(113),
    [anon_sym_TRIANGLE] = ACTIONS(113),
    [anon_sym_PAN] = ACTIONS(113),
    [sym_identifier] = ACTIONS(113),
    [sym_constant] = ACTIONS(111),
    [anon_sym_SQUOTE] = ACTIONS(111),
    [anon_sym_DQUOTE] = ACTIONS(111),
    [anon_sym_TILDE] = ACTIONS(111),
    [anon_sym_BANG] = ACTIONS(113),
    [anon_sym_CARET] = ACTIONS(113),
    [anon_sym_AMP] = ACTIONS(113),
    [anon_sym_STAR] = ACTIONS(113),
    [anon_sym_SLASH] = ACTIONS(113),
    [anon_sym_PERCENT] = ACTIONS(113),
    [anon_sym_GT_GT] = ACTIONS(111),
    [anon_sym_LT_LT] = ACTIONS(111),
    [anon_sym_PLUS] = ACTIONS(113),
    [anon_sym_DASH] = ACTIONS(113),
    [anon_sym_PIPE] = ACTIONS(113),
    [anon_sym_LT] = ACTIONS(113),
    [anon_sym_LT_EQ] = ACTIONS(111),
    [anon_sym_GT] = ACTIONS(113),
    [anon_sym_GT_EQ] = ACTIONS(111),
    [anon_sym_EQ_EQ] = ACTIONS(111),
    [anon_sym_BANG_EQ] = ACTIONS(111),
    [anon_sym_AMP_AMP] = ACTIONS(111),
    [anon_sym_PIPE_PIPE] = ACTIONS(111),
    [anon_sym_EQ2] = ACTIONS(113),
    [anon_sym_CARET_EQ] = ACTIONS(111),
    [anon_sym_AMP_EQ] = ACTIONS(111),
    [anon_sym_STAR_EQ] = ACTIONS(111),
    [anon_sym_SLASH_EQ] = ACTIONS(111),
    [anon_sym_PERCENT_EQ] = ACTIONS(111),
    [anon_sym_PLUS_EQ] = ACTIONS(111),
    [anon_sym_DASH_EQ] = ACTIONS(111),
    [anon_sym_PIPE_EQ] = ACTIONS(111),
    [anon_sym_DASH_GT] = ACTIONS(111),
    [anon_sym_LT_DASH] = ACTIONS(111),
    [anon_sym_AT] = ACTIONS(111),
    [anon_sym__] = ACTIONS(111),
    [anon_sym_EQ_GT] = ACTIONS(111),
    [anon_sym_LBRACE] = ACTIONS(111),
    [anon_sym_RBRACE] = ACTIONS(111),
    [anon_sym_LPAREN] = ACTIONS(111),
    [anon_sym_RPAREN] = ACTIONS(111),
    [anon_sym_LBRACK] = ACTIONS(111),
    [anon_sym_RBRACK] = ACTIONS(111),
    [anon_sym_SEMI] = ACTIONS(111),
    [anon_sym_COMMA] = ACTIONS(111),
    [anon_sym_DOT] = ACTIONS(113),
    [anon_sym_COLON] = ACTIONS(111),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(115),
    [sym_comment_line] = ACTIONS(115),
    [anon_sym_SLASH_STAR] = ACTIONS(115),
    [anon_sym_long] = ACTIONS(117),
    [anon_sym_int] = ACTIONS(117),
    [anon_sym_float] = ACTIONS(117),
    [anon_sym_string] = ACTIONS(117),
    [anon_sym_audio] = ACTIONS(117),
    [anon_sym_bool] = ACTIONS(117),
    [anon_sym_true] = ACTIONS(117),
    [anon_sym_false] = ACTIONS(117),
    [anon_sym_load] = ACTIONS(117),
    [anon_sym_save] = ACTIONS(117),
    [anon_sym_play] = ACTIONS(117),
    [anon_sym_if] = ACTIONS(117),
    [anon_sym_or] = ACTIONS(117),
    [anon_sym_otherwise] = ACTIONS(117),
    [anon_sym_loop] = ACTIONS(117),
    [anon_sym_over] = ACTIONS(117),
    [anon_sym_until] = ACTIONS(117),
    [anon_sym_to] = ACTIONS(117),
    [anon_sym_continue] = ACTIONS(117),
    [anon_sym_break] = ACTIONS(117),
    [anon_sym_return] = ACTIONS(117),
    [anon_sym_main] = ACTIONS(117),
    [anon_sym_read] = ACTIONS(117),
    [anon_sym_print] = ACTIONS(117),
    [anon_sym_import] = ACTIONS(117),
    [anon_sym_const] = ACTIONS(117),
    [anon_sym_HIGHPASS] = ACTIONS(117),
    [anon_sym_LOWPASS] = ACTIONS(117),
    [anon_sym_EQ] = ACTIONS(117),
    [anon_sym_SIN] = ACTIONS(117),
    [anon_sym_COS] = ACTIONS(117),
    [anon_sym_EXP_DECAY] = ACTIONS(117),
    [anon_sym_LIN_DECAY] = ACTIONS(117),
    [anon_sym_SQUARE] = ACTIONS(117),
    [anon_sym_SAW] = ACTIONS(117),
    [anon_sym_TRIANGLE] = ACTIONS(117),
    [anon_sym_PAN] = ACTIONS(117),
    [sym_identifier] = ACTIONS(117),
    [sym_constant] = ACTIONS(115),
    [anon_sym_SQUOTE] = ACTIONS(115),
    [anon_sym_DQUOTE] = ACTIONS(115),
    [anon_sym_TILDE] = ACTIONS(115),
    [anon_sym_BANG] = ACTIONS(117),
    [anon_sym_CARET] = ACTIONS(117),
    [anon_sym_AMP] = ACTIONS(117),
    [anon_sym_STAR] = ACTIONS(117),
    [anon_sym_SLASH] = ACTIONS(117),
    [anon_sym_PERCENT] = ACTIONS(117),
    [anon_sym_GT_GT] = ACTIONS(115),
    [anon_sym_LT_LT] = ACTIONS(115),
    [anon_sym_PLUS] = ACTIONS(117),
    [anon_sym_DASH] = ACTIONS(117),
    [anon_sym_PIPE] = ACTIONS(117),
    [anon_sym_LT] = ACTIONS(117),
    [anon_sym_LT_EQ] = ACTIONS(115),
    [anon_sym_GT] = ACTIONS(117),
    [anon_sym_GT_EQ] = ACTIONS(115),
    [anon_sym_EQ_EQ] = ACTIONS(115),
    [anon_sym_BANG_EQ] = ACTIONS(115),
    [anon_sym_AMP_AMP] = ACTIONS(115),
    [anon_sym_PIPE_PIPE] = ACTIONS(115),
    [anon_sym_EQ2] = ACTIONS(117),
    [anon_sym_CARET_EQ] = ACTIONS(115),
    [anon_sym_AMP_EQ] = ACTIONS(115),
    [anon_sym_STAR_EQ] = ACTIONS(115),
    [anon_sym_SLASH_EQ] = ACTIONS(115),
    [anon_sym_PERCENT_EQ] = ACTIONS(115),
    [anon_sym_PLUS_EQ] = ACTIONS(115),
    [anon_sym_DASH_EQ] = ACTIONS(115),
    [anon_sym_PIPE_EQ] = ACTIONS(115),
    [anon_sym_DASH_GT] = ACTIONS(115),
    [anon_sym_LT_DASH] = ACTIONS(115),
    [anon_sym_AT] = ACTIONS(115),
    [anon_sym__] = ACTIONS(115),
    [anon_sym_EQ_GT] = ACTIONS(115),
    [anon_sym_LBRACE] = ACTIONS(115),
    [anon_sym_RBRACE] = ACTIONS(115),
    [anon_sym_LPAREN] = ACTIONS(115),
    [anon_sym_RPAREN] = ACTIONS(115),
    [anon_sym_LBRACK] = ACTIONS(115),
    [anon_sym_RBRACK] = ACTIONS(115),
    [anon_sym_SEMI] = ACTIONS(115),
    [anon_sym_COMMA] = ACTIONS(115),
    [anon_sym_DOT] = ACTIONS(117),
    [anon_sym_COLON] = ACTIONS(115),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(119),
    [sym_comment_line] = ACTIONS(119),
    [anon_sym_SLASH_STAR] = ACTIONS(119),
    [anon_sym_long] = ACTIONS(121),
    [anon_sym_int] = ACTIONS(121),
    [anon_sym_float] = ACTIONS(121),
    [anon_sym_string] = ACTIONS(121),
    [anon_sym_audio] = ACTIONS(121),
    [anon_sym_bool] = ACTIONS(121),
    [anon_sym_true] = ACTIONS(121),
    [anon_sym_false] = ACTIONS(121),
    [anon_sym_load] = ACTIONS(121),
    [anon_sym_save] = ACTIONS(121),
    [anon_sym_play] = ACTIONS(121),
    [anon_sym_if] = ACTIONS(121),
    [anon_sym_or] = ACTIONS(121),
    [anon_sym_otherwise] = ACTIONS(121),
    [anon_sym_loop] = ACTIONS(121),
    [anon_sym_over] = ACTIONS(121),
    [anon_sym_until] = ACTIONS(121),
    [anon_sym_to] = ACTIONS(121),
    [anon_sym_continue] = ACTIONS(121),
    [anon_sym_break] = ACTIONS(121),
    [anon_sym_return] = ACTIONS(121),
    [anon_sym_main] = ACTIONS(121),
    [anon_sym_read] = ACTIONS(121),
    [anon_sym_print] = ACTIONS(121),
    [anon_sym_import] = ACTIONS(121),
    [anon_sym_const] = ACTIONS(121),
    [anon_sym_HIGHPASS] = ACTIONS(121),
    [anon_sym_LOWPASS] = ACTIONS(121),
    [anon_sym_EQ] = ACTIONS(121),
    [anon_sym_SIN] = ACTIONS(121),
    [anon_sym_COS] = ACTIONS(121),
    [anon_sym_EXP_DECAY] = ACTIONS(121),
    [anon_sym_LIN_DECAY] = ACTIONS(121),
    [anon_sym_SQUARE] = ACTIONS(121),
    [anon_sym_SAW] = ACTIONS(121),
    [anon_sym_TRIANGLE] = ACTIONS(121),
    [anon_sym_PAN] = ACTIONS(121),
    [sym_identifier] = ACTIONS(121),
    [sym_constant] = ACTIONS(119),
    [anon_sym_SQUOTE] = ACTIONS(119),
    [anon_sym_DQUOTE] = ACTIONS(119),
    [anon_sym_TILDE] = ACTIONS(119),
    [anon_sym_BANG] = ACTIONS(121),
    [anon_sym_CARET] = ACTIONS(121),
    [anon_sym_AMP] = ACTIONS(121),
    [anon_sym_STAR] = ACTIONS(121),
    [anon_sym_SLASH] = ACTIONS(121),
    [anon_sym_PERCENT] = ACTIONS(121),
    [anon_sym_GT_GT] = ACTIONS(119),
    [anon_sym_LT_LT] = ACTIONS(119),
    [anon_sym_PLUS] = ACTIONS(121),
    [anon_sym_DASH] = ACTIONS(121),
    [anon_sym_PIPE] = ACTIONS(121),
    [anon_sym_LT] = ACTIONS(121),
    [anon_sym_LT_EQ] = ACTIONS(119),
    [anon_sym_GT] = ACTIONS(121),
    [anon_sym_GT_EQ] = ACTIONS(119),
    [anon_sym_EQ_EQ] = ACTIONS(119),
    [anon_sym_BANG_EQ] = ACTIONS(119),
    [anon_sym_AMP_AMP] = ACTIONS(119),
    [anon_sym_PIPE_PIPE] = ACTIONS(119),
    [anon_sym_EQ2] = ACTIONS(121),
    [anon_sym_CARET_EQ] = ACTIONS(119),
    [anon_sym_AMP_EQ] = ACTIONS(119),
    [anon_sym_STAR_EQ] = ACTIONS(119),
    [anon_sym_SLASH_EQ] = ACTIONS(119),
    [anon_sym_PERCENT_EQ] = ACTIONS(119),
    [anon_sym_PLUS_EQ] = ACTIONS(119),
    [anon_sym_DASH_EQ] = ACTIONS(119),
    [anon_sym_PIPE_EQ] = ACTIONS(119),
    [anon_sym_DASH_GT] = ACTIONS(119),
    [anon_sym_LT_DASH] = ACTIONS(119),
    [anon_sym_AT] = ACTIONS(119),
    [anon_sym__] = ACTIONS(119),
    [anon_sym_EQ_GT] = ACTIONS(119),
    [anon_sym_LBRACE] = ACTIONS(119),
    [anon_sym_RBRACE] = ACTIONS(119),
    [anon_sym_LPAREN] = ACTIONS(119),
    [anon_sym_RPAREN] = ACTIONS(119),
    [anon_sym_LBRACK] = ACTIONS(119),
    [anon_sym_RBRACK] = ACTIONS(119),
    [anon_sym_SEMI] = ACTIONS(119),
    [anon_sym_COMMA] = ACTIONS(119),
    [anon_sym_DOT] = ACTIONS(121),
    [anon_sym_COLON] = ACTIONS(119),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(123),
    [sym_comment_line] = ACTIONS(123),
    [anon_sym_SLASH_STAR] = ACTIONS(123),
    [anon_sym_long] = ACTIONS(125),
    [anon_sym_int] = ACTIONS(125),
    [anon_sym_float] = ACTIONS(125),
    [anon_sym_string] = ACTIONS(125),
    [anon_sym_audio] = ACTIONS(125),
    [anon_sym_bool] = ACTIONS(125),
    [anon_sym_true] = ACTIONS(125),
    [anon_sym_false] = ACTIONS(125),
    [anon_sym_load] = ACTIONS(125),
    [anon_sym_save] = ACTIONS(125),
    [anon_sym_play] = ACTIONS(125),
    [anon_sym_if] = ACTIONS(125),
    [anon_sym_or] = ACTIONS(125),
    [anon_sym_otherwise] = ACTIONS(125),
    [anon_sym_loop] = ACTIONS(125),
    [anon_sym_over] = ACTIONS(125),
    [anon_sym_until] = ACTIONS(125),
    [anon_sym_to] = ACTIONS(125),
    [anon_sym_continue] = ACTIONS(125),
    [anon_sym_break] = ACTIONS(125),
    [anon_sym_return] = ACTIONS(125),
    [anon_sym_main] = ACTIONS(125),
    [anon_sym_read] = ACTIONS(125),
    [anon_sym_print] = ACTIONS(125),
    [anon_sym_import] = ACTIONS(125),
    [anon_sym_const] = ACTIONS(125),
    [anon_sym_HIGHPASS] = ACTIONS(125),
    [anon_sym_LOWPASS] = ACTIONS(125),
    [anon_sym_EQ] = ACTIONS(125),
    [anon_sym_SIN] = ACTIONS(125),
    [anon_sym_COS] = ACTIONS(125),
    [anon_sym_EXP_DECAY] = ACTIONS(125),
    [anon_sym_LIN_DECAY] = ACTIONS(125),
    [anon_sym_SQUARE] = ACTIONS(125),
    [anon_sym_SAW] = ACTIONS(125),
    [anon_sym_TRIANGLE] = ACTIONS(125),
    [anon_sym_PAN] = ACTIONS(125),
    [sym_identifier] = ACTIONS(125),
    [sym_constant] = ACTIONS(123),
    [anon_sym_SQUOTE] = ACTIONS(123),
    [anon_sym_DQUOTE] = ACTIONS(123),
    [anon_sym_TILDE] = ACTIONS(123),
    [anon_sym_BANG] = ACTIONS(125),
    [anon_sym_CARET] = ACTIONS(125),
    [anon_sym_AMP] = ACTIONS(125),
    [anon_sym_STAR] = ACTIONS(125),
    [anon_sym_SLASH] = ACTIONS(125),
    [anon_sym_PERCENT] = ACTIONS(125),
    [anon_sym_GT_GT] = ACTIONS(123),
    [anon_sym_LT_LT] = ACTIONS(123),
    [anon_sym_PLUS] = ACTIONS(125),
    [anon_sym_DASH] = ACTIONS(125),
    [anon_sym_PIPE] = ACTIONS(125),
    [anon_sym_LT] = ACTIONS(125),
    [anon_sym_LT_EQ] = ACTIONS(123),
    [anon_sym_GT] = ACTIONS(125),
    [anon_sym_GT_EQ] = ACTIONS(123),
    [anon_sym_EQ_EQ] = ACTIONS(123),
    [anon_sym_BANG_EQ] = ACTIONS(123),
    [anon_sym_AMP_AMP] = ACTIONS(123),
    [anon_sym_PIPE_PIPE] = ACTIONS(123),
    [anon_sym_EQ2] = ACTIONS(125),
    [anon_sym_CARET_EQ] = ACTIONS(123),
    [anon_sym_AMP_EQ] = ACTIONS(123),
    [anon_sym_STAR_EQ] = ACTIONS(123),
    [anon_sym_SLASH_EQ] = ACTIONS(123),
    [anon_sym_PERCENT_EQ] = ACTIONS(123),
    [anon_sym_PLUS_EQ] = ACTIONS(123),
    [anon_sym_DASH_EQ] = ACTIONS(123),
    [anon_sym_PIPE_EQ] = ACTIONS(123),
    [anon_sym_DASH_GT] = ACTIONS(123),
    [anon_sym_LT_DASH] = ACTIONS(123),
    [anon_sym_AT] = ACTIONS(123),
    [anon_sym__] = ACTIONS(123),
    [anon_sym_EQ_GT] = ACTIONS(123),
    [anon_sym_LBRACE] = ACTIONS(123),
    [anon_sym_RBRACE] = ACTIONS(123),
    [anon_sym_LPAREN] = ACTIONS(123),
    [anon_sym_RPAREN] = ACTIONS(123),
    [anon_sym_LBRACK] = ACTIONS(123),
    [anon_sym_RBRACK] = ACTIONS(123),
    [anon_sym_SEMI] = ACTIONS(123),
    [anon_sym_COMMA] = ACTIONS(123),
    [anon_sym_DOT] = ACTIONS(125),
    [anon_sym_COLON] = ACTIONS(123),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(127), 1,
      aux_sym_comment_block_token1,
    ACTIONS(129), 1,
      aux_sym_comment_block_token2,
    ACTIONS(131), 1,
      anon_sym_STAR_SLASH,
    STATE(20), 1,
      aux_sym_comment_block_repeat1,
  [13] = 4,
    ACTIONS(133), 1,
      anon_sym_SQUOTE,
    ACTIONS(135), 1,
      aux_sym_string_token1,
    ACTIONS(137), 1,
      aux_sym_string_token2,
    STATE(19), 1,
      aux_sym_string_repeat1,
  [26] = 4,
    ACTIONS(133), 1,
      anon_sym_DQUOTE,
    ACTIONS(139), 1,
      aux_sym_string_token2,
    ACTIONS(141), 1,
      aux_sym_string_token3,
    STATE(22), 1,
      aux_sym_string_repeat2,
  [39] = 4,
    ACTIONS(143), 1,
      aux_sym_string_token2,
    ACTIONS(146), 1,
      anon_sym_DQUOTE,
    ACTIONS(148), 1,
      aux_sym_string_token3,
    STATE(18), 1,
      aux_sym_string_repeat2,
  [52] = 4,
    ACTIONS(151), 1,
      anon_sym_SQUOTE,
    ACTIONS(153), 1,
      aux_sym_string_token1,
    ACTIONS(155), 1,
      aux_sym_string_token2,
    STATE(23), 1,
      aux_sym_string_repeat1,
  [65] = 4,
    ACTIONS(157), 1,
      aux_sym_comment_block_token1,
    ACTIONS(159), 1,
      aux_sym_comment_block_token2,
    ACTIONS(161), 1,
      anon_sym_STAR_SLASH,
    STATE(21), 1,
      aux_sym_comment_block_repeat1,
  [78] = 4,
    ACTIONS(163), 1,
      aux_sym_comment_block_token1,
    ACTIONS(166), 1,
      aux_sym_comment_block_token2,
    ACTIONS(169), 1,
      anon_sym_STAR_SLASH,
    STATE(21), 1,
      aux_sym_comment_block_repeat1,
  [91] = 4,
    ACTIONS(151), 1,
      anon_sym_DQUOTE,
    ACTIONS(171), 1,
      aux_sym_string_token2,
    ACTIONS(173), 1,
      aux_sym_string_token3,
    STATE(18), 1,
      aux_sym_string_repeat2,
  [104] = 4,
    ACTIONS(175), 1,
      anon_sym_SQUOTE,
    ACTIONS(177), 1,
      aux_sym_string_token1,
    ACTIONS(180), 1,
      aux_sym_string_token2,
    STATE(23), 1,
      aux_sym_string_repeat1,
  [117] = 1,
    ACTIONS(183), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(15)] = 0,
  [SMALL_STATE(16)] = 13,
  [SMALL_STATE(17)] = 26,
  [SMALL_STATE(18)] = 39,
  [SMALL_STATE(19)] = 52,
  [SMALL_STATE(20)] = 65,
  [SMALL_STATE(21)] = 78,
  [SMALL_STATE(22)] = 91,
  [SMALL_STATE(23)] = 104,
  [SMALL_STATE(24)] = 117,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [62] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_control_keyword, 1, 0, 0),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_control_keyword, 1, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 1, 0, 0),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool_literal, 1, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool_literal, 1, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword, 1, 0, 0),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword, 1, 0, 0),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inbuilt_function, 1, 0, 0),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inbuilt_function, 1, 0, 0),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator, 1, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operator, 1, 0, 0),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_punctuation, 1, 0, 0),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_punctuation, 1, 0, 0),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment_block, 2, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment_block, 2, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment_block, 3, 0, 0),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment_block, 3, 0, 0),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3, 0, 0),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [143] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat2, 2, 0, 0), SHIFT_REPEAT(18),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat2, 2, 0, 0),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat2, 2, 0, 0), SHIFT_REPEAT(18),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [163] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comment_block_repeat1, 2, 0, 0), SHIFT_REPEAT(21),
  [166] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comment_block_repeat1, 2, 0, 0), SHIFT_REPEAT(21),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_comment_block_repeat1, 2, 0, 0),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0),
  [177] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(23),
  [180] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(23),
  [183] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
