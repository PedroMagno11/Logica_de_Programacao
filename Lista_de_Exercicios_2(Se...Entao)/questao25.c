#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL," ");
    float salario = 0;
    printf("Informe o salário: ");
    scanf("%f",&salario);

    if(salario<=900){
        printf("Isento");
    }
    else if(salario>900 && salario<=1200){
        printf("Desconto de 10%%");
    }
    else if(salario>1200 && salario<=2000){
        printf("Desconto de 15%%");
    }
    else{
        printf("Desconto de 27,5%%");
    }
}
