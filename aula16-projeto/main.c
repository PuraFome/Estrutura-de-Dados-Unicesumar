#include "pilha.h"

// Função principal
int main() {
  op = 1;
  pilha.inicio = 0;
  pilha.fim = 0;
  while (op != 0) {
    system("clear");
    pilha_mostrar();
    menu();
    switch (op) {
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
