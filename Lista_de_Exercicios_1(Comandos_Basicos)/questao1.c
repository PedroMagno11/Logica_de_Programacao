#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    //Permite usar acentos
    setlocale(LC_ALL," ");
    printf("Olá Mundo!");
}
