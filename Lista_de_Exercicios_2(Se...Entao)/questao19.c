#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void main()
{
    char nome1[100];
    char nome2[100];
    char nome3[100];
    puts("Informe  nome:");
    scanf("%s %s %s",nome1,nome2,nome3);

    if(nome1[0]>nome2[0] && nome2[0]>nome3[0])
    {
        printf("%s, %s, %s",nome3, nome2, nome1);
    }
    else if(nome2[0]>nome1[0] && nome1[0]>nome3[0])
    {
        printf("%s, %s, %s", nome3,nome1,nome2);
    }
    else if(nome3[0]>nome1[0] && nome1[0]>nome2[0])
    {
        printf("%s, %s, %s", nome2,nome1,nome3);
    }
}
