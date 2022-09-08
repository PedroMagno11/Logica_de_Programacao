#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
float MediaAritmetica(float a, float b){
    return (a+b)/2;
}
void main(){
    //Permite usar acentos
    setlocale(LC_ALL," ");

    float num1,num2;

    printf("Informe um número :");
    scanf("%f",&num1);
    printf("Informe mais um número :");
    scanf("%f",&num2);

    printf("Média: %.1f",MediaAritmetica(num1,num2));



}


