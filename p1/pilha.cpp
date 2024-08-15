#include "headers/pilha.h"

// Função para verificar se a pilha está vazia
bool Pilha::isEmpty()
{
    return elementos.empty();
}

// Função para empilhar um elemento
void Pilha::push(int valor)
{
    elementos.push_back(valor); // Adiciona o elemento no final da lista
}

// Função para desempilhar um elemento
int Pilha::pop()
{
    if (isEmpty())
    {
        cout << "Erro: Pilha vazia." << endl;
        return -1;
    }
    else
    {
        int valorTopo = elementos.back(); // Obtém o elemento do topo
        elementos.pop_back();             // Remove o elemento do topo
        return valorTopo;
    }
}

// Função para obter o elemento do topo da pilha
int Pilha::top()
{
    if (isEmpty())
    {
        cout << "Erro: Pilha vazia." << endl;
        return -1;
    }
    else
    {
        return elementos.back(); // Retorna o elemento no topo sem removê-lo
    }
}
