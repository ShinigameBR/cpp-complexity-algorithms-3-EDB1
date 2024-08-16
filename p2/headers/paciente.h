#ifndef PACIENTE_H
#define PACIENTE_H

#include <string>
using namespace std;

class Paciente
{
public:
    string nome;
    int idade;

    // Construtor
    Paciente(string n, int i) : nome(n), idade(i) {}
};

#endif
