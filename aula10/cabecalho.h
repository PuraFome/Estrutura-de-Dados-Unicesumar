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

    while(num>1){
        pilha = empilhar(pilha, num);
        num--;
    }

    imprimir(pilha);

    while(pilha){
        remover = desempilhar(&pilha);
        num = num * remover->valor;
        free(remover);
    }

    return num;
}

int main(void){
    int valor;
    
    printf("Digite um valor maior que zero o fatorial: ");
    scanf("%d", &valor);printf("");
}