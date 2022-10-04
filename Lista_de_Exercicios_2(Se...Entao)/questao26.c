#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL," ");
    float valorCompra, valorVenda;
    printf("Informe o valor de compra do produto: ");
    scanf("%f",&valorCompra);
    if(valorCompra<50)
    {
        valorVenda = valorCompra*1.75;
        printf("O valor de venda do produto é %f",valorVenda);
    }
    else{
        valorVenda = valorCompra*1.50;
        printf("O valor de venda do produto é %f",valorVenda);
    }

}
