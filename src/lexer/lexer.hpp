#pragma once
#include <string>
#include <unordered_map>

class Lexer {
public:
    enum class Token {
        cofe,
        Coffee,
        COFE,
        COFFEE,
        COfE,
        Cofe,
        coffee,
        latte,
        ristrietto,
        cappuccino,
        espresso,
        moka,
        macchiato,
        cortado,
        IDENTIFIER,
        NUMBER,
        STRING,
        END
    };

    Lexer(const std::string& input);
    Token nextToken();
    std::string currentTokenText() const;

private:
    std::string input;
    size_t position;
    std::unordered_map<std::string, Token> keywords;

    void initializeKeywords();
};
