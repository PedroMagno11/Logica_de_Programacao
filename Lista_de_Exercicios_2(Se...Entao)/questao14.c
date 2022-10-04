#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void main()
{
    int num1,num2;
    puts("Informe dois números :");
    scanf("%d %d", &num1,&num2);
    if(num1>num2)
        printf("%d",num1);
    else
        printf("%d",num2);
}
