#include <stdio.h>

void main()
{
    int i;

    printf("Enter the value :");
    scanf("%d",&i);

    if (i < 100)
    {
        printf("Number is less then 100");
    }

    else if (i == 100)
    {
        printf("Number is equal 100");
    }

    else
    {
        printf("Number is gather then 100");
    }
    

    
}