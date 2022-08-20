#include <stdio.h>
#include <stdlib.h>


//struc para data
typedef struct{
    int dia, mes, ano;
}Data;

//struc para pessoa
typedef struct{
    char nome[50];
    Data data;
}Pessoa;

//função para alocar memória pra pilha
Pessoa ler_pessoa(){
    Pessoa p;
    fflush(stdin);
    printf("Digite o nome: \n");
    gets(p.nome);
	fflush(stdin);
	printf("Digite a data de nascimento dd mm aaaa: \n");
    scanf("%d %d %d", &p.data.dia, &p.data.mes, &p.data.ano);
    return p;
}

//função para imprimir pessoa
void imprimir_pessoa(Pessoa p){
    printf("Nome: %s\n", p.nome);
    printf("Data de nascimento: %d/%d/%d\n", p.data.dia, p.data.mes, p.data.ano);
}


//no da pilha
typedef struct no{
    Pessoa p;
    struct no *proximo;
}No;

//função para criar novo no
No *empilhar(No *topo){
    //aloca memória para novo no
    No *novo = malloc (sizeof(No));

    //se tiver alocado
    if(novo){
        //chama a função para ler a pessoa
        //e armazena na variável novo->pessoa
        novo->p = ler_pessoa();

        //o poto é armazenado no próximo, do novo nó
        novo->proximo = topo;
        return novo;
    }else
        printf("\nErro ao alocar memória...\n");
    return NULL;
}

//função imprimir uma pilha
void imprimir_pilha(No *topo){
    printf("\n------------------PILHA------------------\n");

    //enquanto o topo não for nulo
    //imprime a pessoa do topo e
    //desempilha o topo
    while(topo){
        imprimir_pessoa(topo->p);
        topo = topo->proximo;
		printf("\n-----------------------------------------\n");
    }
    printf("\n-----------------------------------------\n");
    system("pause");
}

//função para desempilhar
void liberar_pilha(No *topo){
    //enquanto o topo não for nulo
    //libera a memória do topo
    while(topo){
        No *aux = topo;
        topo = topo->proximo;
        free(aux);
    }
}

//função para liberar o topo da PILHA
No *desempilhar(No **topo){
    //se o topo não for nulo
    if(*topo != NULL){
        No *remover = *topo;
        *topo = remover->proximo;
        return remover; 
    }else 
        printf("\nPilha vazia...\n");
    return NULL;
}

//função menu
void menu(){

}

int main(void){
    No *remover, *topo = NULL;
    int opcao;

    do{
        system("cls");
        printf("\n------------------MENU------------------\n");

        printf("1 - Empilhar\n");
        printf("2 - Desempilhar\n");
        printf("3 - Imprimir\n");
        printf("4 - Limpar pilha\n");
        printf("5 - Sair\n");
        printf("\nDigite a opção: \n");
        scanf("%d", &opcao);

        switch(opcao){
            case 1:
                topo = empilhar(topo);
                break;
            case 2:
                remover = desempilhar(&topo);
                if(remover){
                    printf("\nPessoa removida com sucesso!\n");
                    imprimir_pessoa(remover->p);
                    free(remover);
                }else 
                    printf("\nPilha vazia...\n");
                system("pause");
                break;
            case 3:
                imprimir_pilha(topo);
                break;
            case 4:
                while(topo){
                    remover = desempilhar(&topo);
                    if(remover){
                        printf("\nPessoa removida com sucesso!\n");
                        imprimir_pessoa(remover->p);
                        free(remover);
                    }else 
                        printf("\nPilha vazia...\n");
                    
                }
                system("pause");
                break;
        }
    }while(opcao != 5);

    return 0;
}