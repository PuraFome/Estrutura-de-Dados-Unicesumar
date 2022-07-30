#include <stdio.h>

/*Faça um programa onde a variável A é do tipo int. A variável B é um
ponteiro para um inteiro e a variável C é um ponteiro para ponteiro de
inteiro. A variável B recebe o endereço da variável A, mas não pode
receber o endereço da variável C. A variável C pode receber o endereço
da variável B, mas não pode receber o endereço da variável A*/ 

int main(void){
    int a;
    int *b;
    int **c;

    a = 6;
    b = &a;
    c = &b;

    printf(" Address of a: %p value: %d\n", &a, a);
    printf(" Address of b: %p value: %p\n", &b, b);
    printf(" Address of c: %p value: %p\n", &c, c);

}