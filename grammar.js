const STRING = token(seq('"',
    repeat(/[^"\\]/),
    repeat(seq("\\",
        /./,
        repeat(/[^"\\]/))),
    '"'));

module.exports = grammar({
    name: 'ely',

    rules: {
        source: $ => repeat($._sexp),

        _sexp: $ => choice($._list, $.identifier, $.identifier_lit, $._literal),

        identifier: $ => /[a-zA-Z]+/,
        identifier_lit: $ => token(seq('|',
            repeat(/[^|\\]/),
            repeat(seq("\\",
                /./,
                repeat(/[^|\\]/))), '|')),

        _list: $ => choice($.parens_list, $.bracket_list, $.brace_list),

        parens_list: $ => seq('(', repeat($._sexp), ')'),
        bracket_list: $ => seq('[', repeat($._sexp), ']'),
        brace_list: $ => seq('{', repeat($._sexp), '}'),

        _literal: $ => choice($.number, $.string_lit),

        number: $ => /\d+/,
        string_lit: $ => STRING,
    }

});