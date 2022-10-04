#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

    setlocale(LC_ALL," ");
    int numero;

    printf("Informe um número: ");
    scanf("%d",&numero);
    if(numero>50){
        printf("O número digitado foi : %d",numero);
    }
}

