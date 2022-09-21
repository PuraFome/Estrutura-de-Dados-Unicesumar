#include "fila.h"

int main(void) {
    No *fila = NULL, *r;
    int opcao, valor;

    do{
        system("cls");
        printf("1 - Inserir\n");
        printf("2 - inserir com prioridade\n");
        printf("3 - Remover\n");
        printf("4 - Imprimir\n");
        printf("0 - Sair\n");
        printf("Opcao: ");
        scanf("%d", &opcao);

        switch(opcao){
            case 1:
                printf("Valor: ");
                scanf("%d", &valor);
                inserir(&fila, valor);
                break;
            case 2:
                printf("Valor: ");
                scanf("%d", &valor);
                inserir_prioridade(&fila, valor);
                break;
            case 3:
                r = remover(&fila);
                if(r){
                    printf("Valor removido: %d\n", r->valor);
                    free(r);
                }
                system("pause");
                break;
            case 4:
                imprimir(fila);
                system("pause");
                break;
        }


    
    }while(opcao != 0);
    return 0;
}