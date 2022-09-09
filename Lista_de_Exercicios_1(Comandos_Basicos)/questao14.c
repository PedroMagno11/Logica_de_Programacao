#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL," ");
    float base, altura, area;
    printf("Quanto mede a base do triângulo ?\n");
    scanf("%f",&base);
    printf("Quanto mede a altura do triângulo ?\n");
    scanf("%f",&altura);
    area = (base*altura)/2;
    printf("A área do triângulo é : %.0f", area);
}
