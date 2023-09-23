#include <stdio.h>

void main()
{
    int a;
    int b;
    
    printf("Enter A value :");
    scanf("%d",&a);

    
    printf("Enter B value :");
    scanf("%d",&b);

    if (a < b)
    {
        printf("A is small");
    }

    else
    {
        printf("B is big");
    }
    
}