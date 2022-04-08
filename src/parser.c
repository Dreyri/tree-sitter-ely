#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 17
#define LARGE_STATE_COUNT 16
#define SYMBOL_COUNT 19
#define ALIAS_COUNT 0
#define TOKEN_COUNT 11
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum {
  sym_identifier = 1,
  sym_identifier_lit = 2,
  anon_sym_LPAREN = 3,
  anon_sym_RPAREN = 4,
  anon_sym_LBRACK = 5,
  anon_sym_RBRACK = 6,
  anon_sym_LBRACE = 7,
  anon_sym_RBRACE = 8,
  sym_number = 9,
  sym_string_lit = 10,
  sym_source = 11,
  sym__sexp = 12,
  sym__list = 13,
  sym_parens_list = 14,
  sym_bracket_list = 15,
  sym_brace_list = 16,
  sym__literal = 17,
  aux_sym_source_repeat1 = 18,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [sym_identifier_lit] = "identifier_lit",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_number] = "number",
  [sym_string_lit] = "string_lit",
  [sym_source] = "source",
  [sym__sexp] = "_sexp",
  [sym__list] = "_list",
  [sym_parens_list] = "parens_list",
  [sym_bracket_list] = "bracket_list",
  [sym_brace_list] = "brace_list",
  [sym__literal] = "_literal",
  [aux_sym_source_repeat1] = "source_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [sym_identifier_lit] = sym_identifier_lit,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_number] = sym_number,
  [sym_string_lit] = sym_string_lit,
  [sym_source] = sym_source,
  [sym__sexp] = sym__sexp,
  [sym__list] = sym__list,
  [sym_parens_list] = sym_parens_list,
  [sym_bracket_list] = sym_bracket_list,
  [sym_brace_list] = sym_brace_list,
  [sym__literal] = sym__literal,
  [aux_sym_source_repeat1] = aux_sym_source_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier_lit] = {
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
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
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
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_string_lit] = {
    .visible = true,
    .named = true,
  },
  [sym_source] = {
    .visible = true,
    .named = true,
  },
  [sym__sexp] = {
    .visible = false,
    .named = true,
  },
  [sym__list] = {
    .visible = false,
    .named = true,
  },
  [sym_parens_list] = {
    .visible = true,
    .named = true,
  },
  [sym_bracket_list] = {
    .visible = true,
    .named = true,
  },
  [sym_brace_list] = {
    .visible = true,
    .named = true,
  },
  [sym__literal] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_repeat1] = {
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

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(5);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '(') ADVANCE(8);
      if (lookahead == ')') ADVANCE(9);
      if (lookahead == '[') ADVANCE(10);
      if (lookahead == ']') ADVANCE(11);
      if (lookahead == '{') ADVANCE(12);
      if (lookahead == '|') ADVANCE(2);
      if (lookahead == '}') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(6);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(15);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == '|') ADVANCE(7);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 4:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(sym_identifier);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(6);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(sym_identifier_lit);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_string_lit);
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
  [16] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_identifier_lit] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_string_lit] = ACTIONS(1),
  },
  [1] = {
    [sym_source] = STATE(16),
    [sym__sexp] = STATE(6),
    [sym__list] = STATE(6),
    [sym_parens_list] = STATE(6),
    [sym_bracket_list] = STATE(6),
    [sym_brace_list] = STATE(6),
    [sym__literal] = STATE(6),
    [aux_sym_source_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_identifier] = ACTIONS(5),
    [sym_identifier_lit] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_LBRACE] = ACTIONS(11),
    [sym_number] = ACTIONS(5),
    [sym_string_lit] = ACTIONS(5),
  },
  [2] = {
    [sym__sexp] = STATE(2),
    [sym__list] = STATE(2),
    [sym_parens_list] = STATE(2),
    [sym_bracket_list] = STATE(2),
    [sym_brace_list] = STATE(2),
    [sym__literal] = STATE(2),
    [aux_sym_source_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(13),
    [sym_identifier] = ACTIONS(15),
    [sym_identifier_lit] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(18),
    [anon_sym_RPAREN] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_RBRACK] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(24),
    [anon_sym_RBRACE] = ACTIONS(13),
    [sym_number] = ACTIONS(15),
    [sym_string_lit] = ACTIONS(15),
  },
  [3] = {
    [sym__sexp] = STATE(7),
    [sym__list] = STATE(7),
    [sym_parens_list] = STATE(7),
    [sym_bracket_list] = STATE(7),
    [sym_brace_list] = STATE(7),
    [sym__literal] = STATE(7),
    [aux_sym_source_repeat1] = STATE(7),
    [sym_identifier] = ACTIONS(27),
    [sym_identifier_lit] = ACTIONS(27),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_LBRACE] = ACTIONS(11),
    [sym_number] = ACTIONS(27),
    [sym_string_lit] = ACTIONS(27),
  },
  [4] = {
    [sym__sexp] = STATE(8),
    [sym__list] = STATE(8),
    [sym_parens_list] = STATE(8),
    [sym_bracket_list] = STATE(8),
    [sym_brace_list] = STATE(8),
    [sym__literal] = STATE(8),
    [aux_sym_source_repeat1] = STATE(8),
    [sym_identifier] = ACTIONS(31),
    [sym_identifier_lit] = ACTIONS(31),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_RBRACK] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(11),
    [sym_number] = ACTIONS(31),
    [sym_string_lit] = ACTIONS(31),
  },
  [5] = {
    [sym__sexp] = STATE(9),
    [sym__list] = STATE(9),
    [sym_parens_list] = STATE(9),
    [sym_bracket_list] = STATE(9),
    [sym_brace_list] = STATE(9),
    [sym__literal] = STATE(9),
    [aux_sym_source_repeat1] = STATE(9),
    [sym_identifier] = ACTIONS(35),
    [sym_identifier_lit] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_LBRACE] = ACTIONS(11),
    [anon_sym_RBRACE] = ACTIONS(37),
    [sym_number] = ACTIONS(35),
    [sym_string_lit] = ACTIONS(35),
  },
  [6] = {
    [sym__sexp] = STATE(2),
    [sym__list] = STATE(2),
    [sym_parens_list] = STATE(2),
    [sym_bracket_list] = STATE(2),
    [sym_brace_list] = STATE(2),
    [sym__literal] = STATE(2),
    [aux_sym_source_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(39),
    [sym_identifier] = ACTIONS(41),
    [sym_identifier_lit] = ACTIONS(41),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_LBRACE] = ACTIONS(11),
    [sym_number] = ACTIONS(41),
    [sym_string_lit] = ACTIONS(41),
  },
  [7] = {
    [sym__sexp] = STATE(2),
    [sym__list] = STATE(2),
    [sym_parens_list] = STATE(2),
    [sym_bracket_list] = STATE(2),
    [sym_brace_list] = STATE(2),
    [sym__literal] = STATE(2),
    [aux_sym_source_repeat1] = STATE(2),
    [sym_identifier] = ACTIONS(41),
    [sym_identifier_lit] = ACTIONS(41),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(43),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_LBRACE] = ACTIONS(11),
    [sym_number] = ACTIONS(41),
    [sym_string_lit] = ACTIONS(41),
  },
  [8] = {
    [sym__sexp] = STATE(2),
    [sym__list] = STATE(2),
    [sym_parens_list] = STATE(2),
    [sym_bracket_list] = STATE(2),
    [sym_brace_list] = STATE(2),
    [sym__literal] = STATE(2),
    [aux_sym_source_repeat1] = STATE(2),
    [sym_identifier] = ACTIONS(41),
    [sym_identifier_lit] = ACTIONS(41),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_RBRACK] = ACTIONS(45),
    [anon_sym_LBRACE] = ACTIONS(11),
    [sym_number] = ACTIONS(41),
    [sym_string_lit] = ACTIONS(41),
  },
  [9] = {
    [sym__sexp] = STATE(2),
    [sym__list] = STATE(2),
    [sym_parens_list] = STATE(2),
    [sym_bracket_list] = STATE(2),
    [sym_brace_list] = STATE(2),
    [sym__literal] = STATE(2),
    [aux_sym_source_repeat1] = STATE(2),
    [sym_identifier] = ACTIONS(41),
    [sym_identifier_lit] = ACTIONS(41),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_LBRACE] = ACTIONS(11),
    [anon_sym_RBRACE] = ACTIONS(47),
    [sym_number] = ACTIONS(41),
    [sym_string_lit] = ACTIONS(41),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(49),
    [sym_identifier] = ACTIONS(49),
    [sym_identifier_lit] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(49),
    [anon_sym_RPAREN] = ACTIONS(49),
    [anon_sym_LBRACK] = ACTIONS(49),
    [anon_sym_RBRACK] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(49),
    [anon_sym_RBRACE] = ACTIONS(49),
    [sym_number] = ACTIONS(49),
    [sym_string_lit] = ACTIONS(49),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(51),
    [sym_identifier] = ACTIONS(51),
    [sym_identifier_lit] = ACTIONS(51),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_RPAREN] = ACTIONS(51),
    [anon_sym_LBRACK] = ACTIONS(51),
    [anon_sym_RBRACK] = ACTIONS(51),
    [anon_sym_LBRACE] = ACTIONS(51),
    [anon_sym_RBRACE] = ACTIONS(51),
    [sym_number] = ACTIONS(51),
    [sym_string_lit] = ACTIONS(51),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(53),
    [sym_identifier] = ACTIONS(53),
    [sym_identifier_lit] = ACTIONS(53),
    [anon_sym_LPAREN] = ACTIONS(53),
    [anon_sym_RPAREN] = ACTIONS(53),
    [anon_sym_LBRACK] = ACTIONS(53),
    [anon_sym_RBRACK] = ACTIONS(53),
    [anon_sym_LBRACE] = ACTIONS(53),
    [anon_sym_RBRACE] = ACTIONS(53),
    [sym_number] = ACTIONS(53),
    [sym_string_lit] = ACTIONS(53),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(55),
    [sym_identifier] = ACTIONS(55),
    [sym_identifier_lit] = ACTIONS(55),
    [anon_sym_LPAREN] = ACTIONS(55),
    [anon_sym_RPAREN] = ACTIONS(55),
    [anon_sym_LBRACK] = ACTIONS(55),
    [anon_sym_RBRACK] = ACTIONS(55),
    [anon_sym_LBRACE] = ACTIONS(55),
    [anon_sym_RBRACE] = ACTIONS(55),
    [sym_number] = ACTIONS(55),
    [sym_string_lit] = ACTIONS(55),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(57),
    [sym_identifier] = ACTIONS(57),
    [sym_identifier_lit] = ACTIONS(57),
    [anon_sym_LPAREN] = ACTIONS(57),
    [anon_sym_RPAREN] = ACTIONS(57),
    [anon_sym_LBRACK] = ACTIONS(57),
    [anon_sym_RBRACK] = ACTIONS(57),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_RBRACE] = ACTIONS(57),
    [sym_number] = ACTIONS(57),
    [sym_string_lit] = ACTIONS(57),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(59),
    [sym_identifier] = ACTIONS(59),
    [sym_identifier_lit] = ACTIONS(59),
    [anon_sym_LPAREN] = ACTIONS(59),
    [anon_sym_RPAREN] = ACTIONS(59),
    [anon_sym_LBRACK] = ACTIONS(59),
    [anon_sym_RBRACK] = ACTIONS(59),
    [anon_sym_LBRACE] = ACTIONS(59),
    [anon_sym_RBRACE] = ACTIONS(59),
    [sym_number] = ACTIONS(59),
    [sym_string_lit] = ACTIONS(59),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 1,
    ACTIONS(61), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(16)] = 0,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2),
  [15] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(2),
  [18] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(3),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(4),
  [24] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(5),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parens_list, 2),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bracket_list, 2),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_brace_list, 2),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parens_list, 3),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bracket_list, 3),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_brace_list, 3),
  [61] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_ely(void) {
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
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
