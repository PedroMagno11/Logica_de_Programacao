#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void main()
{
    int n1,n2,n3,numeroMaior;
    printf("Informe três valores: ");
    scanf("%d %d %d",&n1,&n2,&n3);
    if(n1>n2 && n1>n3)
    {
        numeroMaior=n1;
        printf("%d",numeroMaior);
    }
    else if(n2>n1 && n2>n3)
    {
        numeroMaior=n2;
        printf("%d",numeroMaior);
    }
    else{
        numeroMaior=n3;
        printf("%d",numeroMaior);
    }
}
