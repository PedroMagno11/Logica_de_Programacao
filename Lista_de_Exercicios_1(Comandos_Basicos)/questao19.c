#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void TrocaDeValor(int *a , int *b){
    int aux;
    aux = *a;
    *a = *b;
    *b = aux;
}
void main(){
    setlocale(LC_ALL," ");
    int a,b;
    printf("Informe dois valores , um para A e outro para B...\n");
    printf("A: ");
    scanf("%d",&a);
    printf("B: ");
    scanf("%d",&b);
    printf("Agora vamos trocar os valores das letras ...\n\nA terá o valor de B e B terá o valor de A.\n");
    TrocaDeValor(&a,&b);
    printf("tchanrannnnn... A: %d e B: %d",a,b);
}

