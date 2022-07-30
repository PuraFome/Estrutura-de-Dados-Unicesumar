#include <stdio.h>

typedef struct{
    int dia, mes, ano;
}Data;

void imprimir(Data *x){
    printf("%d/%d/%d", x->dia, x->mes, x->ano);
}

int main(void){
    Data data;
    Data *p;

    p = &data;

    printf("Endereço de data: %p\tConteudo de p: %p\n", &data, p);

    data.dia = 26; //ao usar um struct para atribuir 
    data.mes = 12;
    data.ano = 20220;

    imprimir(p);
}