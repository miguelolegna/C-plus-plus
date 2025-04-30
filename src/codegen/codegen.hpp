#ifndef CODEGEN_HPP
#define CODEGEN_HPP

#include "parser.hpp"

class CodeGenerator {
public:
    CodeGenerator();
    void generateCode(const std::vector<Token>& ast);

private:
    void generateFunctionCode();
    void generateVariableCode();
    // Outras funções para gerar diferentes partes do código
};

#endif
