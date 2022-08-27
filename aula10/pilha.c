#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

No* empilhar(No *pilha, int num){
    No *novo = malloc(sizeof(No));

    if(novo){
        novo->valor = num;
        novo->proximo = pilha;
        return novo;
    }else
        printf("\nErro ao alocar memória...\n");
    return NULL;
}

void imprimir(No *pilha){
    printf("\n----------------PILHA----------------\n");
    while(pilha){
        printf("%d\n", pilha->valor);
        pilha = pilha->proximo;
    }
    printf("\n");
}

