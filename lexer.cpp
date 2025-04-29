// lexer.cpp

#include "lexer.h"
#include <sstream>
#include <iostream>

TokenType identify(const std::string& word) {
    if (word == "coffee") return TokenType::INICIO;
    if (word == "coffeee") return TokenType::DECLARA_VARIAVEL;
    if (word == "COFFEe") return TokenType::NUMERO_LITERAL;
    if (word == "Coffee") return TokenType::SOMA;
    if (word == "COFFEE") return TokenType::IMPRIMIR;
    if (isdigit(word[0])) return TokenType::NUMERO_LITERAL;
    return TokenType::IDENTIFICADOR;
}
 

std::vector<Token> tokenize(const std::string& line) {
    std::vector<Token> tokens;
    std::stringstream ss(line);
    std::string word;
    while (ss >> word) {
        tokens.push_back({identify(word), word});
    }
    return tokens;
}
