// Faça uma função que receba um valor 𝑛 e 
// crie dinamicamente um vetor de 𝑛 elementos e retorne um
// ponteiro. Crie uma função que receba um 
// ponteiro para um vetor e um valor 𝑛 e imprima os 𝑛 elementos 
// desse vetor. Construa também uma função 
// que receba um ponteiro para um vetor e libere esta área 
// de memória. Ao final, crie uma função 
// principal que leia um valor 𝑛 e chame a função criada acima. 
// Depois, a função principal deve ler os 𝑛 
// elementos desse vetor. Então, a função principal deve 
// chamar a função de impressão dos 𝑛 elementos do 
// vetor criado e, finalmente, liberar a memória alocada 
// através da função criada para liberação.

#include <stdio.h>
#include <stdlib.h>

//cria um vetor do tamanho inserido
int* criar_vetor(int n){
    int *vetor;
    int i;

    //sintaxe para alocar memoria, criando um vetor
    vetor = (int*) malloc(n * sizeof(int));
    
    if (vetor == NULL){
        printf("Erro ao alocar memoria");
        exit(1);
    }

    return vetor;
}

//função para ler os elementos e preencher o vetor
void preencher_vetor(int *vetor, int n){

    for (int i = 0; i < n; i++){
        printf("Digite o %d elemento: \n", i+1);
        scanf("%d", &vetor[i]);
    }
}

//função para imprimir os elementos do vetor
void imprimir_vetor(int *vetor, int n){
    for (int i = 0; i < n; i++){
        printf("%d ", vetor[i]);
    }
}

//função para liberar a memoria alocada
void liberar_memoria(int *vetor){
    free(vetor);
}

int main(){
    int n; // número de elementos do vetor
    int *vetor; //ponteiro que ira virar um vetor
    int i;

    printf("Digite o tamanho do vetor\n");
    scanf("%d", &n);

    //chama a função criar_vetor para criar o vetor
    vetor = criar_vetor(n);

    //chama o procedimento preencher_vertor para preencher o vetor
    preencher_vetor(vetor, n);

    //chama a função imprimir_vetor para imprimir o vetor
    imprimir_vetor(vetor, n);

    //chama a função liberar_memoria para liberar a memoria alocada
    liberar_memoria(vetor);
}