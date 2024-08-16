#include "headers/p2.h"

// Função auxiliar para limpar o terminal
void clear()
{
#if defined(_WIN32) || defined(_WIN64)
    system("cls");
#else
    system("clear");
#endif
}

// Função principal
void p2()
{
    Fila filaNormal("Normal", "Normal");
    Fila filaPrioritaria("Prioritária", "Prioritário");
    string comando;

    while (true)
    {
        cout << "Digite um comando (ADICIONAR, ATENDER, VERIFICAR, SAIR): " << endl;
        getline(cin, comando);
        stringstream ss(comando);
        ss >> comando;

        if (comando == "ADICIONAR")
        {
            string nome;
            int idade;
            ss >> nome >> idade;
            if (idade >= 60)
            {
                filaPrioritaria.enqueue(nome, idade);
            }
            else if (idade >= 0 && idade <= 60)
            {
                filaNormal.enqueue(nome, idade);
            }
            else
            {
                cout << "Paciente não cadastrado, por favor tente novamente." << endl;
            }
        }
        else if (comando == "ATENDER")
        {
            if (!filaPrioritaria.empty())
            {
                filaPrioritaria.dequeue();
            }
            else if (!filaNormal.empty())
            {
                filaNormal.dequeue();
            }
            else
            {
                cout << "Não há pacientes aguardando atendimento." << endl;
            }
        }
        else if (comando == "VERIFICAR")
        {
            filaPrioritaria.show();
            filaNormal.show();
        }
        else if (comando == "SAIR")
        {
            break;
        }
        else
        {
            cout << "Comando inválido!" << endl;
        }
    }
}