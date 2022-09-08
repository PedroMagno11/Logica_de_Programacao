#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL," ");
    int n1,p1,n2,p2,n3,p3,n4,p4;
    float result;
    printf("Informe respectivamente um número e um peso 4 vezes :\n");
    scanf("%d %d %d %d %d %d %d %d", &n1,&p1,&n2,&p2,&n3,&p3,&n4,&p4);
    printf("Num 1 : %d, Peso 1 : %d, Num 2 : %d, Peso 2 : %d, Nota 3 : %d, Peso 3 : %d , Nota 4 : %d , Peso 4 : %d",n1,p1,n2,p2,n3,p3,n4,p4);

    result = (n1*p1+n2*p2+n3*p3+n4*p4)/p1+p2+p3+p4;

    printf("\nA média aritmética ponderada é : %f", result);

}
