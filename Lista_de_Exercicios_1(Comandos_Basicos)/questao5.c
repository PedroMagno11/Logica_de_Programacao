#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int CalcularPerimetro(int largura,int comprimento, int *perimetro){
    *perimetro = 2*(largura+comprimento);
    return *perimetro;
}
int CalcularGastos(int perimetro, int preco, int *gasto){
    *gasto = preco*perimetro;
    return *gasto;
}

void main(){
    //Permite usar acentos
    setlocale(LC_ALL," ");

    int largura ;
    int comprimento;
    int preco;
    int perimetro;
    int gasto;

    printf("Informe a largura do seu terreno: ");
    scanf("%d",&largura);
    printf("Informe o comprimento do seu terreno: ");
    scanf("%d",&comprimento);
    printf("Informe o preço do metro do arame: ");
    scanf("%d",&preco);

    CalcularPerimetro(largura, comprimento, &perimetro);
    printf("O perímetro do terreno é : %d metros.\n", perimetro);

    CalcularGastos(perimetro,preco,&gasto);
    printf("Será gasto R$ %d,00 para cercar todo o terreno.", gasto);


}


