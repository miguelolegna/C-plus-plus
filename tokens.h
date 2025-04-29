// tokens.h

#include <string>
#ifndef TOKENS_H 
#define TOKENS_H 
    
enum class TokenType {
    INICIO, // "coffee"
    DECLARA_VARIAVEL, // "coffeee"
    NUMERO_LITERAL, // "COFFEe"
    IDENTIFICADOR, // "Coffee"
    SOMA, // "COFFEE"
    IMPRIMIR, // "COFFEE"
    DESCONHECIDO 
};

struct Token {
    TokenType type;
    std::string value;
};

#endif