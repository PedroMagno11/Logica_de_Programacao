#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL," ");

    int numero;

    printf("Informe um número: ");
    scanf("%d", &numero);

    if(numero%6==0){
        printf("%d é divisível por 6",numero);
    }else{
        printf("%d não é divisível por 6",numero);
    }
}
