#include <stdio.h>
#include <stdlib.h>

void main()
{
    int a1,a2,a3;

    printf("Escreva os 3 lados : ");
    scanf("%d %d %d",&a1,&a2,&a3);


    if(a1 + a2 + a3 != 180)
    {
        printf("A figura não é um triângulo");
    }
    else if(a1<90 && a2<90 && a3<90)
    {
        printf("O triângulo é acutângulo");
    }
    else if(a1 >90 ||a2>90|| a3>90)
    {
        printf("O triângulo é obtusângulo");
    }
    else if(a1==90 || a2==90 || a3==90){
        printf("O triângulo é retângulo");
    }
}

