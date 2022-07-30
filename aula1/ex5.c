#include <stdio.h>

void multTwo(int num[]){
 
    for (int i=0 ; i<10; i++)
    {
        num[i] = num[i] * 2;
    }
    
}

void printerVector(int vet[], int tam){
    

    printf("value of tam: %d \n",tam);

    for(int i=0; i< 10; i++){
          printf("teste\n");
          printf("%d - ",*(vet+i));
        }

}


int main(void){
    int vet[10]={0,1,2,3,4,5,6,7,8,9};
    int tam = (int) (sizeof (vet) /sizeof (vet[0]));
  
    printerVector(vet, tam);
    multTwo(vet);
    printerVector(vet, tam);

}


//it is a test
