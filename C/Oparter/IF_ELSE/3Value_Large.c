#include <stdio.h>

void main()
{
    int a,b,c;
    

    printf("Enter value of a :");
    scanf("%d",&a);

    
    printf("Enter value of b :");
    scanf("%d",&b);

    
    printf("Enter value of c :");
    scanf("%d",&c);

   

    if (a >= b && a >= c)
    {
        printf("A ia largest");
    }

    if(b >= c && c >= a)
    {
        printf("B is largest");
    }

    if (c >= a && c >= b)
    {
        printf("C is largest");
    }

    
}