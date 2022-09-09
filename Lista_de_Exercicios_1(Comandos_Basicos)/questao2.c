//Resolução da questão 2
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL," ");
    int numeroInteiro1, numeroInteiro2;
    printf("Insira um número inteiro: ");
    scanf("%d",&numeroInteiro1);
    printf("Insira mais um número inteiro: ");
    scanf("%d", &numeroInteiro2);
    printf("A soma entre %d e %d é : %d", numeroInteiro1, numeroInteiro2, numeroInteiro1+numeroInteiro2);
}
