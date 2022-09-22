#ifndef PILHA_H
#define PILHA_H extern

#include <stdio.h>
#include <stdlib.h>

// Constantes
#define tamanho 6

// Estrutura da pilha
typedef struct pilha {
  int dados[tamanho];
  int inicio;
  int fim;
} Pilha;

// Variaveis globais
extern Pilha pilha;
extern int op;

// Função para adicionar um elemento na pilha
void pilha_entrar();

// Função para remover um elemento da pilha
void pilha_sair();

// Função para mostrar os elementos da pilha
void pilha_mostrar();

// Função para mostrar o menu
void menu();

#endif