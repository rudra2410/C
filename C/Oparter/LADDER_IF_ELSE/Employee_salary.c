#include <stdio.h>

int main()
{
    float salary,hra,da,gross;

    printf("Enter the salary  :");
    scanf("%f",&salary);

    if (salary < 5000)
    {
        hra = salary * 0.8;
        da = salary * 0.2;

    }

    else if (salary >= 5000 && salary < 10000)
    {
        hra = salary * 0.12;
        da = salary * 0.3;
    }
    
    else if (salary >= 10000 && salary < 15000)
    {
        hra = salary * 0.15;
        da = salary * 0.4;
    }

    else
    {
        hra = salary * 0.2;
        da = salary * 0.5;
    }

    gross = salary + hra + da ;

    printf("Gross salary = %.2f",gross);

    return 0;
    
    
    
}