#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL," ");
    float tempEmC, tempEmF;
    printf("Informe a temperatura em graus Centígrados : ");
    scanf("%f", &tempEmC);
    tempEmF = (9*tempEmC + 160)/5;
    printf("%.1f°C são %.1f°F",tempEmC,tempEmF);
}

