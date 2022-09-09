#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL," ");
    int num1,num2,resultado;
    printf("Infome dois inteiros: \n");
    scanf("%d %d",&num1,&num2);
    resultado = (num1-num2)*(num1-num2);
    printf("%d\n",resultado);
    resultado = (num1*num1)-(num2*num2);
    printf("%d\n",resultado);
}
