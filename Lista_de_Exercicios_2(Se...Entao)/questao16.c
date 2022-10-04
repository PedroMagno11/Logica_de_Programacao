#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void main()
{
    int n1,n2,n3;
    printf("Informe 3 núneros: ");
    scanf("%d %d %d",&n1,&n2,&n3);
    if(n1>n2 && n1>n3)
    {
        printf("%d",n1);
    }
    else if(n3>n1 && n3>n2)
    {
        printf("%d",n3);
    }
    else
    {
        printf("%d",n2);
    }
}
