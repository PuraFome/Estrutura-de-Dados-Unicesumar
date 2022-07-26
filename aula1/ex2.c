#include <stdio.h>

int main(void) {
    char *p, caracter = 'S';

    p = &caracter;

    printf("value of caracter: %c\n", caracter);

    printf("Address of caracter: %p\n", &caracter);

    printf("Value of p: %p\n", p);

    printf("Address of caracter %p\n", &p);

    printf("Velue pointed to by p: %p", *p);


}