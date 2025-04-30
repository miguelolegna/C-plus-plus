#ifndef PARSER_HPP
#define PARSER_HPP

#include <vector>
#include "lexer.hpp" // Dependência de lexer para os tokens

class Parser {
public:
    Parser();
    std::vector<Token> parse(const std::vector<Token>& tokens);

private:
    void parseExpression();
    void parseStatement();
    // Outras funções para interpretar a estrutura do código
};

#endif
