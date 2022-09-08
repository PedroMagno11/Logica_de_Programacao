#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    int a,b;
    //Permite usar acentos
    setlocale(LC_ALL," ");
    printf("Entre com um valor:");
    scanf("%d",&a);
    printf("Entre com mais valor:");
    scanf("%d",&b);
    printf("%d", a*3 + b*2 +5);
}

