#include <stdio.h>
#include <stdlib.h>

void printer(int *num){
    printf("%d", *num);
    *num = 80;
}

int main(void){
    int yearsOld = 22;

    printf("Years Old started: ");
    printer(&yearsOld);
    printf("\nYears Old: %d", yearsOld);



}

