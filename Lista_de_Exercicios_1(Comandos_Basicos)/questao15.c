#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
float ConverteParaMetros(float milhas, float *metros){
    *metros = 1609.34*milhas;
    return *metros;
}
void main(){
    setlocale(LC_ALL," ");
    float milhas, metros;
    printf("Insira o número de milhas :\n");
    scanf("%f",&milhas);
    ConverteParaMetros(milhas, &metros);
    printf("%.0f milhas são %.2f metros", milhas, metros);
}
