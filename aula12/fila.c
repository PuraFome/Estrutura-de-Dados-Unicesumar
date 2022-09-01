//implementação base de uma fila

#include <stdio.h>
#include <stdlib.h>

typedef struct no{
    int valor;
    struct no *proximo;
}No;

void inserir(No **fila, int num){
    No *aux, *novo = malloc(sizeof(No));

    if(novo){
        novo->valor = num;
        novo->proximo = NULL;
        if(*fila == NULL){
            *fila = novo;
        }else {
            aux = *fila;
            while(aux->proximo){
                aux = aux->proximo;
            }
            aux->proximo = novo;
        }
    }else{
        printf("\nErro na alocacao de memoria\n");
    }
}

No* remover(No **fila){
    No *remover = NULL;

    if(*fila){
        remover = *fila;
        *fila = remover->proximo;
    }else{
        printf("\nFila vazia.\n");
        system("pause");
		return NULL;
    }
    printf("\n valor removido: %d\n", remover->valor);
    system("pause");
    return remover;
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

int main(){
    No *fila = NULL, *r;
    int opcao, valor;

    do{
        system("cls");
        printf("\n1 - Inserir na fila");
        printf("\n2 - Remover da fila");
        printf("\n3 - Imprimir fila");
        printf("\n4 - Sair");
        printf("\nOpcao: ");
        scanf("%d", &opcao);

        switch(opcao){
            case 1:
                printf("\nDigite o valor a ser inserido: ");
                scanf("%d", &valor);
                inserir(&fila, valor);
                break;
            case 2:
                r = remover(&fila);
                if(r){
                    printf("\nValor removido: %d\n", r->valor);
                    free(r);
                }
                break;
            case 3:
                imprimir(fila);
                break;
            case 4:
                printf("\nSaindo...\n");
                break;
            default:
                printf("\nOpçcao invalida.\n");
        }
    }while(opcao != 4);

}