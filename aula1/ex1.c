#include <stdio.h>

int main(void) {
  int *p, num = 10;
  p = &num;

  printf("Valor apontador por p: %d\n", *p);

  printf("Valor do endereco de p: %p\n", &p);

  printf("Valor do conteudo de p: %p\n", p);
  
}