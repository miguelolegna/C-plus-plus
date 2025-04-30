cmake_minimum_required(VERSION 3.10)

project(CoffeeCpp)

# Incluir diretórios de cabeçalho
include_directories(${PROJECT_SOURCE_DIR}/include)

# Definir todos os arquivos fonte
set(SOURCE_FILES
    src/main.cpp
    src/lexer/lexer.cpp
    src/parser/parser.cpp
    src/codegen/codegen.cpp
    src/interpreter/interpreter.cpp
    src/graphics/graphics.cpp
)

# Criar o executável final
add_executable(CoffeeCpp ${SOURCE_FILES})
