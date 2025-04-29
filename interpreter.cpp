// interpreter.cpp

#include "interpreter.h"
#include <iostream>
#include <unordered_map>

std::unordered_map<std::string, int> variaveis;
int ultimoResultado = 0;

void interpreter(const std::vector<Token>& tokens) {
    if (tokens.size() == 0) return;

    if (tokens.size() >= 5 && 
        tokens[0].type == TokenType::INICIO &&
        tokens[1].type == TokenType::DECLARA_VARIAVEL &&
        tokens[3].type == TokenType::NUMERO_LITERAL) {
        
        std::string nome = tokens[2].value;
        int valor = std::stoi(tokens[4].value);
        variaveis[nome] = valor;
    }

    else if (tokens.size() >= 4 &&
             tokens[0].type == TokenType::INICIO &&
             tokens[1].type == TokenType::SOMA) {
        
        int a = variaveis[tokens[2].value];
        int b = variaveis[tokens[3].value];
        ultimoResultado = a + b;
    }

    else if (tokens.size() >= 2 &&
             tokens[0].type == TokenType::INICIO &&
             tokens[1].type == TokenType::IMPRIMIR) {
        
        std::cout << ultimoResultado << std::endl;
    }
}
