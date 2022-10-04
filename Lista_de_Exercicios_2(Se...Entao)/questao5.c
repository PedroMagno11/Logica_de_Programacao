#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL," ");

    int numero;

    printf("Informe um número: ");
    scanf("%d", &numero);

    if(numero%10==0){
        printf("%d é divisível por 10, por 5 e por 2",numero);
    }else if(numero%5==0){
        printf("%d é divisível por 5",numero);
    }else if( numero%2==0){
        printf("%d é divisível por 2",numero);
    }else{
        printf("%d não é divisível por 10, por 5 ou por 2",numero);
    }
}
