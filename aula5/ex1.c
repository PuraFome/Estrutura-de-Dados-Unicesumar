// Faça um programa que leia um valor 𝑛 e crie dinamicamente um vetor de n elementos e
// passe esse vetor para uma função que vai ler os elementos desse vetor. Depois, no 
// programa principal, o vetor preenchido deve ser impresso. Além disso, antes de finalizar
// o programa, deve-se liberar a área de memória alocada.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void ler_vetor(int vetor[], int n){

    for (int i = 0; i < n; i++){
        printf("Digite o valor do elemento %d: ", i);
        scanf("%d", &vetor[i]);
    }
}

void imprir_vetor(int vetor[], int n){
    for (int i = 0; i < n; i++){
        printf("%d \t", vetor[i]);
    }
    printf("\n");
}

int main(){
    int n; // número de elementos do vetor
    int *vetor; //ponteiro que ira virar um vetor
    int i;

    srand(time(NULL));

    printf("Digite o tamanho do vetor: \n");
    scanf("%d", &n);

    vetor = (int *) malloc(n * sizeof(int)); //alocação de memória para o vetor

    if (vetor == NULL){
        printf("Erro ao ler o arquivo\n");
        exit(1);
    }

    ler_vetor(vetor, n);

    return 0;
    


}