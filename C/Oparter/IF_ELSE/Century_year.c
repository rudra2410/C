#include <stdio.h>

void main()
{
    int year;
 

    printf("Enter A year :");
    scanf("%d",&year);

   

    if (year % 100 == 0)
    {
        printf("THis year is century year");
    }

    else
    {
        printf("NOt century year");
    }
    
}