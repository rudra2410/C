#include <stdio.h>


void main()
{
int salary;
float tex;

printf("Enter your slary :");
scanf("%d",&salary);

if (salary <= 2500)
{
    printf("no tex ");
}

else if (salary > 2500 && salary <= 5000)
{
    tex = salary * 0.10;

}

else if (salary > 5000 && salary <= 10000)
{
    tex = salary * 0.20;
  
}

else
{
    tex = salary * 0.30;
}

printf("tex :%.2f",tex);

}