#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <locale.h>

char palavraNaString(char *destino, char *origem)
{
    for(int i = 0;origem[i]!=' ';i++)
    {
        destino[i]=origem[i];
    }
    return destino;
}

int VerificaSePalavraEstaNaStr(char *palavra, char *str)
{
    for(int i =0; str[i]!=' ';i++)
    {
        if(palavra[i]!=str[i])
        {
            return -1;
        }
        else{
            return 1;
        }
    }
}
void main()
{
    setlocale(LC_ALL," ");
    char Nome[150];
    char PreNome[]="Maria";
    char PreNomeMaiusculo[strlen(PreNome)];
    char PreNomeMinusculo[strlen(PreNome)];
    strcpy(PreNomeMaiusculo,PreNome);
    strcpy(PreNomeMinusculo,PreNome);
    strupr(&PreNomeMaiusculo);
    strlwr(&PreNomeMinusculo);

    printf("Insira um nome:");
    gets(Nome);

    if(VerificaSePalavraEstaNaStr(PreNome,Nome)==1||VerificaSePalavraEstaNaStr(PreNomeMaiusculo,Nome)==1||VerificaSePalavraEstaNaStr(PreNomeMinusculo,Nome)==1)
    {
        puts(Nome);
    }
    else{
        puts("Seu nome não é Maria");
    }
/*
    int result;
    char qqm[10]="RatoMa";
    char rato[10]="Rato Mano";
    result = VerificaSePalavraEstaNaStr(&qqm,&rato);
    printf("%d",result);
*/
}
