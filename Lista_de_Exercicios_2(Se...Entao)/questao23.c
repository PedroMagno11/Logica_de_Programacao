#include <stdio.h>
#include <stdlib.h>

void main()
{
    int l1,l2,l3;

    printf("Escreva os 3 lados : ");
    scanf("%d %d %d",&l1,&l2,&l3);

    if(l1==l2&&l2==l3)
    {
        printf("O triângulo é equilátero");
    }
    else if(l1==l2 && l2!=l3)
    {
        printf("O triângulo é isósceles");
    }
    else if(l1==l3 && l2!=l3)
    {
        printf("O triângulo é isósceles");
    }
    else if(l3==l2 && l2!=l1)
    {
        printf("O triângulo é isósceles");
    }
    else {
        printf("O triangulo é escaleno");
    }
}
