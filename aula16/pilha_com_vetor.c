//bibliotecas
#include <stdio.h>
#include <stdlib.h>

//Constantes
#define tamanho 3

//Estrutura da Pilha
typedef struct{
    int dados[tamanho];
    int inicio;
    int fim;
}Pilha;

//Variaveis globais
Pilha pilha;
int op;

//Protipação
void pilha_entrar();
void pilha_sair();
void pilha_mostrar();
void menu();

//Função principal
int main(){
    op = 1;
    pilha.inicio = 0;
    pilha.fim = 0;
    while(op != 0){
        system("clear");
        pilha_mostrar();
        menu();
        switch(op){
            case 1:
                pilha_entrar();
                break;
            case 2:
                pilha_sair();
                break;
            case 0:
                printf("Saindo do programa...\n");
                break;
            default:
                printf("Opção inválida!\n");
                break;
        }
    }
    return 0;
}

//Adicionar um elemento no final da pilha
void pilha_entrar(){
    int valor;
    if(pilha.fim == tamanho){
        printf("Pilha cheia!\n");
    }else{
        printf("Digite o valor: ");
        scanf("%d", &valor);
        pilha.dados[pilha.fim] = valor;
        pilha.fim++;
    }
}

//Retirar o ultimo elemento da pilha
void pilha_sair(){
    if(pilha.fim == pilha.inicio){
        printf("Pilha vazia!\n");
    }else{
        printf("Valor removido: %d\n", pilha.dados[pilha.fim - 1]);
        pilha.dados[pilha.fim-1] = 0;
        pilha.fim--;
    }
}

//Mostrar a pilha
void pilha_mostrar(){
    int i;
    printf("Pilha: ");
    for(i = 0; i < tamanho; i++){
        printf("%d -", pilha.dados[i]);
    }
    printf("\n");
}

//Menu
void menu(){
    printf("\nEscolha uma opção:\n");
    printf("1 - Entrar\n");
    printf("2 - Sair\n");
    printf("0 - Sair do programa\n");
    printf("Opção: ");
    scanf("%d", &op);
}