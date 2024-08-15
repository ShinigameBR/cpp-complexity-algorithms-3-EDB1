#include "headers/p1.h"

// Função auxiliar que verifica se os delimitadores são correspondentes
bool isEqual(char abertura, char fechamento)
{
    return (abertura == '(' && fechamento == ')') ||
           (abertura == '[' && fechamento == ']') ||
           (abertura == '{' && fechamento == '}');
}

// Função para verificar se uma expressão contém delimitadores balanceados
bool checkBalancing(const string &expressao)
{
    Pilha pilha;

    for (char ch : expressao)
    {
        // Verifica se o caractere é um delimitador de abertura
        if (ch == '(' || ch == '[' || ch == '{')
        {
            pilha.push(ch);
        }
        // Verifica se o caractere é um delimitador de fechamento
        else if (ch == ')' || ch == ']' || ch == '}')
        {
            // Se a pilha estiver vazia ou o topo não corresponder ao delimitador de fechamento
            if (pilha.isEmpty() || !isEqual(pilha.pop(), ch))
            {
                return false; // Delimitadores não estão balanceados
            }
        }
    }

    // Se a pilha estiver vazia ao final, a expressão está balanceada
    return pilha.isEmpty();
}