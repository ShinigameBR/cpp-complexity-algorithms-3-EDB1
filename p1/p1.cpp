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
            if (pilha.empty() || !isEqual(pilha.pop(), ch))
            {
                return false; // Delimitadores não estão balanceados
            }
        }
    }

    // Se a pilha estiver vazia ao final, a expressão está balanceada
    return pilha.empty();
}

// Função principal
void p1()
{
    string expressao;
    cout << "Digite uma expressão: " << endl;
    getline(cin, expressao);

    // Verifica o balanceamento da expressão e exibe o resultado
    if (checkBalancing(expressao))
    {
        cout << "A expressão está balanceada." << endl;
    }
    else
    {
        cout << "A expressão não está balanceada." << endl;
    }
}