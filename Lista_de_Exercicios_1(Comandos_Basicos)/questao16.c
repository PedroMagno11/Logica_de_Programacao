#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h> // para utilizar funções matemáticas . Utilizei a função sqrt-> Calcula a raiz quadrada de um número.
int Pitagoras(int cateto1, int cateto2, int *hipotenusa){
    *hipotenusa = cateto1*cateto1 + cateto2*cateto2;
    *hipotenusa = sqrt(*hipotenusa);
    return *hipotenusa;
}
void main(){
    setlocale(LC_ALL," ");
    int cateto1, cateto2, hipotenusa;
    printf("Infome a medida dos dois catetos do triângulo retângulo:\n");
    scanf("%d%d",&cateto1,&cateto2);
    Pitagoras(cateto1,cateto2,&hipotenusa);
    printf("Cateto 1 : %d\nCateto 2 : %d\nHipotenusa : %d\n", cateto1, cateto2, hipotenusa);

}

