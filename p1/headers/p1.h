#ifndef P1_H
#define P1_H

#include <string>
#include "pilha.h"

// Função auxiliar que verifica se os delimitadores são correspondentes
bool isEqual(char abertura, char fechamento);

// Função para verificar se uma expressão contém delimitadores balanceados
bool checkBalancing(const std::string &expressao);

// Função principal
void p1();

#endif