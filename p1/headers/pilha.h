#ifndef PILHA_H
#define PILHA_H

#include <iostream>
#include <list>
using namespace std;

class Pilha
{
private:
    list<int> elementos; // Lista para armazenar os elementos da pilha

public:
    // Função para verificar se a pilha está vazia
    bool isEmpty();

    // Função para empilhar um elemento
    void push(int valor);

    // Função para desempilhar um elemento
    int pop();

    // Função para obter o elemento do topo da pilha
    int top();
};

#endif
