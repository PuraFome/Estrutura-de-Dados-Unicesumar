#ifndef FILA_H
#define FILA_H

#include <stdio.h>
#include <stdlib.h>

//estrutura do nó
typedef struct no {
    int valor;
    struct no *proximo;
} No;

//função usada para inserir um elemento na fila
void inserir(No **fila, int num);

//função usada para inserir um elemento na fila com prioridade
void inserir_prioridade(No **fila, int num);

//função usada para remover um elemento da fila
No *remover(No **fila);

//função usada para imprimir a fila
void imprimir(No *fila);

#endif
