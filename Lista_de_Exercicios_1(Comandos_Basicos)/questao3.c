#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int operacao(int n, int *result){
    *result = (3*n+1)+(2*n-1);
    return *result;
}
void main(){
    int num;
    int resultado;
    //Permite usar acentos
    setlocale(LC_ALL," ");
    printf("Informe um número inteiro:");
    scanf("%d",&num);
    operacao(num, &resultado);
    printf("%d", resultado);
}
