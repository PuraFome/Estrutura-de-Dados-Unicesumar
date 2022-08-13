// 2. Seja o trecho de código a seguir, que valor de c será impresso no comando printf?
// int a=5, b=12, c;
// int *p;
// int *q;
// p = &a;
// q = &b;
// c = *p + *q;
// printf("c = %d", c);


#include <stdio.h>

int main(void) {
    int a=5,  b=12, c;
    int *p;
    int *q;

    p = &a;             // 'p' recebe o endereço de a
    q = &b;             // 'q' recebe o endereço de b
    c = *p + *q;        // 'c' recebe o valor apontado por 'p' mais o valor apontado por 'q'

    printf("c = %d", c);
}