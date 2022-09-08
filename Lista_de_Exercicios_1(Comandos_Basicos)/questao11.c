#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL," ");
    float saldoAtualNaCardenetaDePoupanca, saldoAtualizado;

    printf("Insira o seu saldo na caderneta de poupança: R$");
    scanf("%f",&saldoAtualNaCardenetaDePoupanca);
    printf("\nO seu saldo atual é : R$%.2f",saldoAtualNaCardenetaDePoupanca);
    saldoAtualizado = saldoAtualNaCardenetaDePoupanca + saldoAtualNaCardenetaDePoupanca/100;
    printf("\nO seu novo saldo é de: R$%.2f\n", saldoAtualizado);

    system("pause");
}
