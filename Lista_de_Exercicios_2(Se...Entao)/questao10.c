#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL," ");
    char nomeDoAluno[100];
    char situacaoEscolar[100];
    float notaDaPR1,notaDaPR2,media;
    printf("Informe o nome do aluno: ");
    gets(nomeDoAluno);
    printf("Nota da PR1: ");
    scanf("%f",&notaDaPR1);
    printf("Nota da PR2: ");
    scanf("%f",&notaDaPR2);
    media = (notaDaPR1+notaDaPR2)/2;

    printf("Nome: %s\nNota da PR1: %.1f\nNota da PR2: %.1f\nMédia: %.2f\nSituação: ",nomeDoAluno,notaDaPR1,notaDaPR2,media);

    if(media>=7)
    {
        puts("Aprovado(a)");
    }
    else if(media<3)
    {
        puts("Reprovado(a)");
    }
    else{
        puts("Prova Final");
    }

}
