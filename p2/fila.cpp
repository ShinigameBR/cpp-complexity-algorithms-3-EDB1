#include "headers/fila.h"

void Fila::enqueue(const string &nome, int idade)
{
    pacientes.push_back(Paciente(nome, idade));
    cout << "Paciente " << nome << " (" << tipoPaciente << ") adicionado à fila." << endl;
}

void Fila::dequeue()
{
    if (!empty())
    {
        Paciente p = pacientes.front();
        pacientes.pop_front();
        cout << "Paciente " << p.nome << " (" << tipoPaciente << ") foi atendido." << endl;
    }
    else
    {
        cout << "Não há pacientes na fila para serem atendidos." << endl;
    }
}

bool Fila::empty() const
{
    return pacientes.empty();
}

void Fila::show() const
{
    cout << "Fila " << tipoFila << ": ";
    if (pacientes.empty())
    {
        cout << "Vazia" << endl;
    }
    else
    {
        for (const auto &paciente : pacientes)
        {
            cout << paciente.nome << " ";
        }
        cout << endl;
    }
}
