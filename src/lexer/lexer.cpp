#include "lexer.hpp"
#include <cctype>
#include <iostream>

Lexer::Lexer(const std::string& input) : input(input), position(0) {
    initializeKeywords();
}

void Lexer::initializeKeywords() {
    keywords["cofe"] = Token::cofe;
    keywords["Cofe"] = Token::Cofe;
    keywords["COFE"] = Token::COFE;
    keywords["coffee"] = Token::coffee;
    keywords["Coffee"] = Token::Coffee;
    keywords["COFFEE"] = Token::COFFEE;
    keywords["latte"] = Token::latte;
    keywords["ristrietto"] = Token::ristrietto;
    keywords["cappuccino"] = Token::cappuccino;
    keywords["espresso"] = Token::espresso;
    keywords["moka"] = Token::moka;
    keywords["macchiato"] = Token::macchiato;
    keywords["cortado"] = Token::cortado;
}

Lexer::Token Lexer::nextToken() {
    while (position < input.length() && std::isspace(input[position])) {
        ++position;
    }

    if (position >= input.length()) return Token::END;

    // Para cada palavra-chave ou identificador
    size_t start = position;
    while (position < input.length() && std::isalpha(input[position])) {
        ++position;
    }

    std::string tokenText = input.substr(start, position - start);
    if (keywords.find(tokenText) != keywords.end()) {
        return keywords[tokenText];
    }

    // Outras verificações, como números ou identificadores
    if (std::isdigit(input[start])) {
        return Token::NUMBER;
    }

    return Token::IDENTIFIER;  // Se não for uma palavra-chave nem número
}

std::string Lexer::currentTokenText() const {
    size_t start = position;
    while (position < input.length() && std::isalpha(input[position])) {
        +position;
    }
    return input.substr(start, position - start);
}
