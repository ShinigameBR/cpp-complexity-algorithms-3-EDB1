#include "p1/headers/p1.h"

int main()
{
    string expressao;

    cout << "Digite uma expressão: ";
    getline(cin, expressao); // Lê a expressão completa

    // Verifica o balanceamento da expressão e exibe o resultado
    if (checkBalancing(expressao))
    {
        cout << "A expressão está balanceada." << endl;
    }
    else
    {
        cout << "A expressão não está balanceada." << endl;
    }

    return 0;
}