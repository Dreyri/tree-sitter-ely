const STRING = token(seq('"',
    repeat(/[^"\\]/),
    repeat(seq("\\",
        /./,
        repeat(/[^"\\]/))),
    '"'));

const PECULIAR_IDENTIFIER = token(choice('+', '-', '...'));

const DIGIT_HEX = /[0-9a-fA-F]/

module.exports = grammar({
    name: 'ely',

    rules: {
        source: $ => repeat($._sexp),

        _sexp: $ => choice($._list, $._atom),

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

        _literal: $ => choice($._number_lit, $.string_lit),

        _hex_lit: $ => seq('#', /[xX]/, DIGIT_HEX),

        _number_lit: $ => choice($.float_lit, $.integer_lit),
        integer_lit: $ => choice($._hex_lit, /[0-9]+/),
        float_lit: $ => {
            const exponent = /[eE][+-]?[0-9]+/;

            return token(choice(
                seq(/[0-9]+/, '.', /[0-9]+/, optional(exponent)),
                seq('.', /[0-9]+/, optional(exponent)),
                seq(/[0-9]+/, exponent)
                )
            );            
        },
        string_lit: $ => STRING,

        _atom: $ => choice($._literal, $._identifier)
    }

});