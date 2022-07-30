#include <stdio.h>

void multTwo(int num[]){
 
    for (int i=0 ; i<10; i++)
    {
        num[i] = num[i] * 2;
    }
    
}

void printerVector(int vet[], int tam){
    printf("   | value |  address \n");
    
    for(int i=0; i< 10; i++){
          printf("   |   %d   |  %p\n",*(vet+i) , (vet+i));
        }

}


int main(void){
    int vet[10]={0,1,2,3,4,5,6,7,8,9};
    int tam = (int) (sizeof (vet) /sizeof (vet[0]));
  
    printerVector(vet, tam);
    multTwo(vet);
    printf("----------------------------\n");
    printerVector(vet, tam);

}

