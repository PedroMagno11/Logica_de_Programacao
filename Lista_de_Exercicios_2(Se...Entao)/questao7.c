#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

void main(){
    setlocale(LC_ALL," ");

    int numero;
    float raizDoNumero;
    float quadradoDoNumero;

    printf("Informe um número: ");
    scanf("%d", &numero);

    raizDoNumero = sqrt(numero);
    quadradoDoNumero = numero*numero;
    if(numero>=0){
        printf(" A raiz de %d é : %.2f ",numero, raizDoNumero);
    }else{
        printf("O quadrado de %d é : %.0f ",numero, quadradoDoNumero);
    }
}
