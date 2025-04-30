#ifndef COFFEECPP_HPP
#define COFFEECPP_HPP

// Definindo os namespaces globais, se necessário
namespace CoffeeCpp {
    // Funções e classes globais
    void iniciarJanela();  // Função para iniciar a janela gráfica
    void desenharPonto(int x, int y, int raio, const char* cor);  // Função para desenhar um ponto
    void definirFundo(const char* cor);  // Função para definir a cor de fundo da janela
}

// Incluindo os arquivos de cabeçalho para as diferentes partes do projeto
#include "lexer/lexer.hpp"
#include "parcer/parser.hpp"
#include "codegen/codegen.hpp"
#include "interpreter/interpreter.hpp"
#include "graphics/graphics.hpp"

#endif 
