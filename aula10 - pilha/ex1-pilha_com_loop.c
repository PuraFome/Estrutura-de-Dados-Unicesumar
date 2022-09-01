#include <stdio.h>
#include <stdlib.h>

// Desempilhar um nó na estrutura de dados pilha
// remover um elemento da pilha significa alterar o topo da pilha
// alterar o conteúdo de uma variável ponteiro declarada na função main
// retorna o ponteiro para o nó que será removido
// a função recebe como parâmetro um ponteiro para ponteiro
// o endereço da variável declarada na função main que contém o endereço do topo da pilha

void desempilhar(No **topo){
    if(*topo != NULL){
        No *remover = *topo;
        *topo = remover->proximo;
        return remover;
    }
}