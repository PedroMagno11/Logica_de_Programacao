#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int somar(int a, int b){
    return a+b;
}
void main(){
    //Permite usar acentos
    setlocale(LC_ALL," ");

    int num1,num2;

    printf("Informe um número :");
    scanf("%d",&num1);
    printf("Informe mais um número :");
    scanf("%d",&num2);

    printf("SOMA: %d",somar(num1,num2));



}


