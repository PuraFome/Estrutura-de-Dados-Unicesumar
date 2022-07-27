#include <stdio.h>

void multTwo(int num[]){
    int tam = (int)sizeof(*num)/sizeof(int);

    for (int i=0 ; i<tam; i++)
    {
        num[i] = num[i] * 2;
    }
    
}

void printerVector(int vet[]){
    int tam =  (int)sizeof(vet[10])/sizeof(int);

    printf("value of tam: %d\n", tam);

    for(int i=0; i< tam; i++){
          printf("teste\n");
          printf("%d - ",*(vet+i));
        }

}


int main(void){
    int vet[10]={0,1,2,3,4,5,6,7,8,9};
    
    printerVector(vet);
    multTwo(vet);
    printerVector(vet);

}

