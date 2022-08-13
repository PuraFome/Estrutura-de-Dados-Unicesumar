// 1. Seja o trecho de código a seguir, quais serão os valores de x, y e *p no comando printf?
// int x, y, *p;
// y = 0;
// p = &y;
// x = *p;
// x = 4;
// (*p)++;
// --x;
// (*p) += x;
// printf("x=%d  y=%d *p=%d", x, y, *p);

#include <stdio.h>

int main(){
    int x, y, *p;
    
    y = 0; // 'y' recebe 0                                y=0
    p = &y;// 'p' recebe o endereço de 'y'                p aponta y=0
    x = *p;// 'x' recebe o valor apontado por 'p'         x=0
    x = 4;// 'x' rebe 4                                   x=4
    (*p)++;// valor apontado por 'p' incrementa em um     Y=1 p aponta y=1
    --x;//'x' decrementa em um                             x=3
    (*p) += x;//o valor apontado por 'p' recebe o valor apontado por 'p' mais 'x' 1=1+3
              //y =4 e p aponta y =4
  
    //x vale 3
    printf("x=%d  y=%d *p=%d", x, y, *p);

}