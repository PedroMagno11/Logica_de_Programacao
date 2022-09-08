#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL," ");

    float cateto1,cateto2,hipotenusa;

    printf("Informe os valores dos catetos e a hipotenusa de um triângulo :\n");
    scanf("%f %f %f", &cateto1, &cateto2, &hipotenusa);
    printf("Cateto adjacente: %f\nCateto oposto: %f\nHipotenusa: %f\n", cateto2, cateto1, hipotenusa);
    printf("Seno: %f\n Cos: %f\n Tg: %f", cateto1/hipotenusa, cateto2/hipotenusa, cateto1/cateto2);
}
