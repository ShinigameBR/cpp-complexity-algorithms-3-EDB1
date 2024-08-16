#include "p1/headers/p1.h"
#include "p2/headers/p2.h"

int main()
{
    string opcao;
    while (true)
    {
        cout << "Digite uma opção (p1, p2, SAIR): " << endl;
        getline(cin, opcao);
        if (opcao == "p1")
        {
            clear();
            p1();
        }
        else if (opcao == "p2")
        {
            clear();
            p2();
            clear();
        }
        else if (opcao == "SAIR")
        {
            clear();
            break;
        }
        else
        {
            cout << "Opção inválida!" << endl;
        }
    }
    return 0;
}