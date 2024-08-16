#ifndef FILA_H
#define FILA_H

#include <list>
#include <iostream>
#include "paciente.h"
using namespace std;

class Fila
{
private:
    // Lista de pacientes na fila
    list<Paciente> pacientes;

    // Tipo da fila
    string tipoFila;

    // Tipo de paciente
    string tipoPaciente;

public:
    // Adicionar paciente à fila
    void enqueue(const string &nome, int idade);

    // Remover o paciente da frente da fila
    void dequeue();

    // Verificar se a fila está vazia
    bool empty() const;

    // Exibir pacientes da fila
    void show() const;

    // Construtor
    Fila(string tipoFila, string tipoPaciente) : tipoFila(tipoFila), tipoPaciente(tipoPaciente) {}
};

#endif
