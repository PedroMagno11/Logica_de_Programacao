#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void main()
{
    int num1,num2,num3;
    printf("Informe três números: ");
    scanf("%d %d %d",&num1,&num2,&num3);
    if(num1>num2 && num2>num3)
    {
        printf("%d, %d, %d", num3,num2,num1);
    }
    else if(num2>num1 && num3>num2)
    {
        printf("%d, %d, %d",num1,num2,num3);
    }
    else if(num3>num2 && num2<num1){
        printf("%d, %d, %d",num2,num1,num3);
    }

}
