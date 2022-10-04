#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL," ");

    int numero;

    printf("Informe um número: ");
    scanf("%d", &numero);

    if(numero>30 && numero<100){
        printf("%d está entre 30 e 100",numero);
    }else{
        printf("%d não está entre 30 e 100",numero);
    }
}
