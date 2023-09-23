#include <stdio.h>

void main()
{
    int unit;
    float amt,total,surcharge;

    printf("Enter the unit :");
    scanf("%d",&unit);

    if (unit <= 100)
    {
        amt = unit * 0.60;
    }

    else if (unit <= 200)
    {
        amt = 50 + ((unit-100) * 0.80);
    }

    else if (unit <= 300)
    {
        amt = 50 +((unit-200) * 0.90);
    }

    if (amt > 300)
    {
        surcharge = amt * 0.15;
    }
    
    total = amt + surcharge;

    printf("Bill =RS.%.2f",total);
    
 
    
}