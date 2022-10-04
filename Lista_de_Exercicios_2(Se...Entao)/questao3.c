#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL," ");

    int numero;

    printf("Informe um número: ");
    scanf("%d", &numero);

    if(numero%2==0){
        printf("%d é par",numero);
    }else{
        printf("%d é ímpar",numero);
    }
}
