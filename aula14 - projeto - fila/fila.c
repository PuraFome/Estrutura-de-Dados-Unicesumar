#include "fila.h"

void inserir(No **fila, int num){
    No *aux, *novo= malloc(sizeof(No));

    if(novo){//se for alocado corretamente
        novo->valor = num;
        novo->proximo = NULL;
        if(*fila == NULL){//se a fila estiver vazia
            *fila = novo;//o novo elemento é o primeiro
        }else{//se a fila não estiver vazia
            aux = *fila;
            while(aux->proximo != NULL){
                aux = aux->proximo;
            }
            aux->proximo = novo;//o novo elemento é o último
        }
    }else{
        printf("\nErro ao alocar memoria!\n");
    }
}

void inserir_prioridade(No **fila, int num){
    No *aux, *novo = malloc(sizeof(No));

    if(novo){//se for alocado corretamente
        novo->valor = num;
        novo->proximo = NULL;
        if(*fila == NULL){//se a fila estiver vazia
            *fila = novo;//o novo elemento é o primeiro
        }else{//se a fila não estiver vazia
            if (num > 59){//se for prioridade
                aux = *fila;
                while(aux->proximo && aux->proximo->valor > 59){
                    aux = aux->proximo;
                }
                novo->proximo = aux->proximo;//insere depois da última prioridade
            }else{//se não for prioridade
                aux = *fila;
                while(aux->proximo){
                    aux = aux->proximo;
                }
                novo->proximo = aux->proximo;//insere depois da última não prioridade
            }
        }
    }else{
        printf("\nErro ao alocar memoria!\n");
    }
}

No *renover(No **fila){
    No *aux = NULL;

    if(fila){//se a fila não estiver vazia
        aux = *fila;//aux recebe o primeiro elemento
        *fila = aux->proximo;//o primeiro elemento se torna o segundo
    }else{//se a fila estiver vazia
        printf("\nFila vazia!\n");
        system("pause");
    }
    printf("\nValor removido: %d\n", aux->valor);
    system("pause");
    return aux;   
}

void imprimir(No *fila){
    printf("\n----------------------FILA----------------------\n");
    while(fila){
        printf("%d ", fila->valor);
        fila = fila->proximo;
    }
    printf("\n-----------------------------------------------\n");
    system("pause");
}