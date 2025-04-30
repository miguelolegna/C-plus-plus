#include "../include/coffeecpp.hpp"
#include <fstream>
#include <iostream>

int main(int argc, char* argv[]) {
    if (argc < 2) {
        std::cerr << "Uso: coffeecpp <ficheiro.coffeecpp>\n";
        return 1;
    }

    std::ifstream file(argv[1]);
    if (!file.is_open()) {
        std::cerr << "Erro ao abrir ficheiro: " << argv[1] << "\n";
        return 1;
    }

    std::string source((std::istreambuf_iterator<char>(file)),
                        std::istreambuf_iterator<char>());

    auto tokens = tokenize(source);
    auto ast = parse(tokens);
    interpret(ast);

    return 0;
}
