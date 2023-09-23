#include <stdio.h>

void main()
{
    int year;
 

    printf("Enter A year :");
    scanf("%d",&year);

   

    if (year % 4 == 0)
    {
        printf("THis year is leap year");
    }

    else
    {
        printf("NOt leap year");
    }
    
}