#include <stdio.h>
#include <stdlib.h>

void main()
{
    int l1,l2,l3;

    printf("Escreva os 3 lados : ");
    scanf("%d %d %d",&l1,&l2,&l3);

    if(l1 + l2 >l3 && abs(l2-l1)<l3)
    {
        printf("As medidas podem ser lado de um triângulo");
    }
    else if(l1+l3>l2 && abs(l3-l1)<l2)
    {
        printf("As medidas podem ser lado de um triângulo");
    }
    else if(l2+l3>l1 && abs(l3-l2)<l1)
    {
        printf("As medidas podem ser lado de um triângulo");
    }
    else{
        printf("As medidas não podem ser lado de um trângulo");
    }

}
