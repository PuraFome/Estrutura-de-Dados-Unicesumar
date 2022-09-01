// O arquivo main.c precisa incluir o arquivo de cabeçalho.
// A função fatorial não está definida no arquivo pilha.h e nem no arquivo pilha.c
// a função fatorial não é uma operação que age sobre o conjunto de dados
// empilhar
// desempilhar
// imprimir

#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

int fatorial(int num){
    No *remover, *pilha = NULL;

    while(num > 0){
        pilha = empilhar(pilha, num);
        num--;
    }

    imprimir(pilha);

    while(pilha){
        remover = desempilhar(&pilha);
        num = num * remover->valor;
        free(remover);
    }
}

void imprimir(No *pilha){
    printf("\n----------------PILHA----------------\n");
    while(pilha){
        printf("\%2d\n", pilha->valor);
        pilha = pilha->proximo;
    }
    printf("\n");
}