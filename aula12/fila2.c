//segunda forma de implementar uma fila se

#include <stdio.h>
#include <stdlib.h>

typedef struct no{
    int valor;
    struct no *proximo;
}No;

typedef struct{
    No *inicio;
    No *fim;
    int tam;
}Fila;

void criar_fila(Fila *fila){
    fila->inicio = NULL;
    fila->fim = NULL;
    fila->tam = 0;
}

void inserir(Fila *fila, int num){
    No *novo = malloc(sizeof(No));

    if (novo){
        novo->valor = num;
        novo->proximo = NULL;
        if (fila->inicio == NULL){
            fila->inicio = novo;
            fila->fim = novo;
        }else{
            fila->fim->proximo = novo;
            fila->fim = novo;
        }
        fila->tam++;
    }else{
        printf("\nErro na alocacao de memoria\n");
    }
}

No* remover(Fila *fila){
    No *remover = NULL;

    if(fila->inicio){
        remover = fila->inicio;
        fila->inicio = remover->proximo;
        fila->tam--;
    }else{
        printf("\nFila vazia.\n");
    }
    pritnf("\n valor removido: %d\n", remover->valor);
    system("pause");
    return remover;
}

void imprimir(Fila *fila){
    No *aux = fila->inicio;
    printf("\n----------------------FILA----------------------\n");

    while(aux){
        printf("%d ", aux->valor);
        aux = aux->proximo;
    }
    printf("\n-----------------------------------------------\n");
    system("pause");
}

int main(){
    Fila fila;
    No *r;
    int opcao, valor;

    criar_fila(&fila);

    do{
        system("cls");
        printf("\n----------------------FILA----------------------\n");
        printf("1 - Inserir\n");
        printf("2 - Remover\n");
        printf("3 - Imprimir\n");
        printf("0 - Sair\n");
        printf("\n-----------------------------------------------\n");
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
                    free(r);
                }
                break;
            case 3:
                imprimir(&fila);
                break;
            case 0:
                printf("\nSaindo...\n");
                break;
            default:
                printf("\nOpcao invalida\n");
                system("pause");
        }
    }while(opcao != 0);

    return 0;
}