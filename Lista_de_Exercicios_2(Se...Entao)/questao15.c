#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void main()
{
    int num1,num2;
    printf("Informe dois números: ");
    scanf("%d %d",&num1,&num2);
    if(num1>num2)
    {
        printf("%d, %d", num2,num1);
    }
    else
    {
        printf("%d, %d",num1,num2);
    }
}
