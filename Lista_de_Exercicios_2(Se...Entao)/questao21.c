#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void main()
{
    int n1,n2,n3;
    int maiorNumero,numeroIntermediario,menorNumero;

    printf("Escreva 3 numeros: ");
    scanf("%d %d %d",&n1,&n2,&n3);
    if(n1>n2 && n2>n3)
    {
        maiorNumero = n1;
        numeroIntermediario = n2;
        menorNumero = n3;
        printf("Maior número : %d\nNúmero intermediário: %d\nMenor número : %d\n", n1,n2,n3);
    }
    if(n1>n3 && n3>n2)
    {
        maiorNumero = n1;
        numeroIntermediario = n3;
        menorNumero = n2;
        printf("Maior número : %d\nNúmero intermediário: %d\nMenor número : %d\n", n1,n3,n2);
    }
    else if(n2>n1 && n1>n3)
    {
        maiorNumero = n2;
        numeroIntermediario = n1;
        menorNumero = n3;
        printf("Maior número : %d\nNúmero intermediário: %d\nMenor número : %d\n", n2,n1,n3);
    }
    else if(n2>n3 && n3>n1)
    {
        maiorNumero = n2;
        numeroIntermediario = n3;
        menorNumero = n1;
        printf("Maior número : %d\nNúmero intermediário: %d\nMenor número : %d\n", n2,n3,n1);
    }
    else if(n3>n1 && n1>n2)
    {
        maiorNumero = n3;
        numeroIntermediario = n1;
        menorNumero = n2;
        printf("Maior número : %d\nNúmero intermediário: %d\nMenor número : %d\n", n3,n1,n2);
    }
    else if(n3>n2 && n2>n1)
    {
        maiorNumero = n3;
        numeroIntermediario = n2;
        menorNumero = n1;
        printf("Maior número : %d\nNúmero intermediário: %d\nMenor número : %d\n", n3,n2,n1);
    }
}
