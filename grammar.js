const STRING = token(seq('"',
    repeat(/[^"\\]/),
    repeat(seq("\\",
        /./,
        repeat(/[^"\\]/))),
    '"'));

const PECULIAR_IDENTIFIER = token(choice('+', '-', '...'));

module.exports = grammar({
    name: 'ely',

    rules: {
        source: $ => repeat($._sexp),

        _sexp: $ => choice($._list, $._identifier, $._atom),

        _identifier: $ => choice($.identifier, $.identifier_lit),

        identifier: $ => token(choice(PECULIAR_IDENTIFIER, /[\/_\-\*\p{XID_Start}][_\-\*\p{XID_Continue}]*/)),
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

        _atom: $ => $._literal,
    }

});