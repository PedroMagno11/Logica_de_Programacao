#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL," ");

    float precoProd, precoComDesc;
    printf("Informe o valor do produto: R$ ");
    scanf("%f", &precoProd);
    printf("Você teve um desconto... :)\n");
    precoComDesc = precoProd-((precoProd*12)/100);
    printf("O valor com desconto é : R$ %.2f",precoComDesc);
}

