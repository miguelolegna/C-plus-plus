// lexer.h

#ifndef LEXER_H
#define LEXER_H

#include <string>
#include <vector>
#include "tokens.h"

std::vector<Token> tokenize(const std::string& line); // Tokeniza uma linha de código

#endif
