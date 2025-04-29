#include "parser.hpp"

int main() {
    generateCppFromCoffee("samples/main.coffe", "samples/styles.coffe", "build/output.cpp");

    // Compilar o código gerado
    system("g++ build/output.cpp -o build/app");
    system("./build/app");  // Em Windows: "build\\app.exe"
    return 0;
}
