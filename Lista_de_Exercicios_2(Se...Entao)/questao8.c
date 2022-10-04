#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL," ");

    int numero;

    printf("Informe um número: ");
    scanf("%d", &numero);

    if(numero>20){
        printf("%d é maior que 20.",numero);
    }else if(numero==20){
        printf("%d é igual a 20.",numero);
    }else{
        printf("%d é menor que 20.",numero);
    }
}
