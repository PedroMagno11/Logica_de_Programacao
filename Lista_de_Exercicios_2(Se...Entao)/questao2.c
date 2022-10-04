#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL," ");

    int num1,num2;

    printf("Informe dois números: ");
    scanf("%d%d", &num1,&num2);

    if(num1+num2 >=10){
        printf("%d",num1+num2+5);
    }else{
        printf("%d",num1+num2-7);
    }
}
