#ifndef INTERPRETER_HPP
#define INTERPRETER_HPP

#include "parser.hpp"

class Interpreter {
public:
    Interpreter();
    void execute(const std::vector<Token>& ast);

private:
    void executeStatement();
    void executeExpression();
    // Funções auxiliares para execução de instruções
};

#endif
    