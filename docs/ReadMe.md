O que faz cada pasta?
Lexer (lexer.hpp e lexer.cpp): Responsável por dividir o código de entrada em tokens. Aqui, cada palavra-chave e símbolo será mapeado para tokens que a máquina de interpretação (ou compilação) pode entender.

Parser (parser.hpp e parser.cpp): Recebe os tokens do lexer e os organiza em uma estrutura hierárquica (uma árvore de sintaxe abstrata, ou AST), que representa a estrutura do programa.

Code Generation (codegen.hpp e codegen.cpp): Esse componente gera o código que pode ser executado ou compilado a partir da AST gerada pelo parser. Dependendo da sua abordagem, pode gerar código para C++, ou pode gerar algo mais específico (por exemplo, código intermediário).

Interpreter (interpreter.hpp e interpreter.cpp): Aqui você vai processar a AST para fazer a execução do código diretamente, interpretando os comandos conforme necessário.

Graphics (graphics.hpp e graphics.cpp): Esse módulo lida com a parte gráfica do seu projeto, que pode incluir a renderização de objetos no console, interface gráfica, animações, ou até mesmo integrações com bibliotecas como SFML ou Qt para a parte gráfica real.


## Comandos Lógicos

| Comando   | Função                                       |
|-----------|----------------------------------------------|
| cofe      | Declaração de variável (como `let` ou `var`) |
| Cofe      | Constante (como `const`)                     | 
| COFE      | Atribuição de valor a uma variável           | 
| coffee    | Início de função (como `function`)           | 
| Coffee    | Chamada de função                            | 
| COFFEE    | Bloco principal / ponto de entrada (`main`)  | 
| COfE      | Estrutura condicional                        | 

## Comandos de Interface Gráfica / graficos

| Comando       | Função                           | Exemplo de Uso                                |
|---------------|----------------------------------|-----------------------------------------------|
| `espresso`    | Criar janela                     | `espresso "minha janela" 800 600`             |
| `americano`   | Mudar cor de fundo               | `americano "azul"`                            |
| `latte`       | Desenhar ponto                   | `latte "centro" 400 300 "vermelho"`           |
| `macchiato`   | Desenhar quadrado                | `macchiato "box" 100 100 200 200 "verde"`     |
| `ristretto`   | Desenhar linha                   | `ristretto 0 0 800 600 "cinza"`               |
| `cappuccino`  | Mostrar texto                    | `cappuccino "Bem-vindo!" 200 300 "preto"`     |
| `mocha`       | Mudar estilo da fonte            | `mocha "Comic Sans" 24`                       |
| `affogato`    | Desenhar imagem                  | `affogato "logo.png" 100 100`                 |
| `doppio`      | Fechar ou limpar tela            | `doppio`                                      |
| `brew`        | Iniciar renderização da tela     | `brew`                                        |

