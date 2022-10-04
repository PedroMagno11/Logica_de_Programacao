
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <locale.h>


void main()
{
    int num1,num2;
    printf("Informe dois números:");
    scanf("%d %d",&num1,&num2);

    if(num1==num2)
    {
        puts("O números são iguais");
    }
    else{
        puts("Os números são diferentes");
    }
}
