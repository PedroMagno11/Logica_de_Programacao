#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>


void main()
{
    char nomeDaCapital[]="Manaus";
    char nomeDaCapitalMaiusculo[7];
    char nomeDaCapitalMinusculo[7];
    char capitalDigitada[100];
    strcpy(nomeDaCapitalMaiusculo,nomeDaCapital);
    strupr(&nomeDaCapitalMaiusculo);
    strcpy(nomeDaCapitalMinusculo,nomeDaCapital);
    strlwr(&nomeDaCapitalMinusculo);

    puts("Qual a capital do Amazonas ?");
    gets(capitalDigitada);

    if(strcmp(capitalDigitada,nomeDaCapital)==0||strcmp(capitalDigitada,nomeDaCapitalMaiusculo)==0||strcmp(capitalDigitada,nomeDaCapitalMinusculo)==0)
    {
        puts("PARABÉNS!");
    }
    else{
        puts("ERROU!");
    }
}
