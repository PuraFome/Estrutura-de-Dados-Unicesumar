#include "pilha.h"

// Variaveis globais
Pilha pilha;
int op;

// Adicionar um elemento no final da pilha
void pilha_entrar() {
  int valor;
  if (pilha.fim == tamanho) {
    printf("Pilha cheia!\n");
  } else {
    printf("Digite o valor: ");
    scanf("%d", &valor);
    pilha.dados[pilha.fim] = valor;
    pilha.fim++;
  }
}

// Retirar o ultimo elemento da pilha
void pilha_sair() {
  if (pilha.fim == pilha.inicio) {
    printf("Pilha vazia!\n");
  } else {
    printf("Valor removido: %d\n", pilha.dados[pilha.fim - 1]);
    pilha.dados[pilha.fim - 1] = 0;
    pilha.fim--;
  }
}

// Mostrar a pilha
void pilha_mostrar() {
  int i;
  printf("Pilha: ");
  for (i = 0; i < tamanho; i++) {
    printf("%d - ", pilha.dados[i]);
  }
  printf("\n");
}

// Menu
void menu() {
  printf("\nEscolha uma opção:\n");
  printf("1 - aidicionar a pilha\n");
  printf("2 - remover da pilha\n");
  printf("0 - Sair do programa\n");
  printf("Opção: ");
  scanf("%d", &op);
}