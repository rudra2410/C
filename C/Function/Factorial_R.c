#include <stdio.h>


int factorial(int number)
{
    if (number == 0)
    {
        return 1;
    }

    else if (number == 1)
    {
        return 1;
    }

    else
    {
        return number * factorial(number -1);
    }
    
}

int main()
{
    int num;

    printf("ENter A number :");
    scanf("%d",&num);

    printf("\n the factorial %d is %d",num,factorial(num));

    return 0;
}