#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

void main()
{
    char nome[50];
    printf("Informe um nome : ");
    scanf("%s",nome);
    if(nome[0]=='A'||nome[0]=='a')
    {
        puts(nome);
    }
    else
    {
        puts("O nome não começa com a letra A/a");
    }
}
