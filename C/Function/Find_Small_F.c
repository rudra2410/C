#include <stdio.h>

void myloop()
{
    int a = 10;
    int b = 20;

    if (a < b)
    {
        printf("A is small");
    }

    else
    {
        printf("B is big");
    }
    
    
}

int main()
{
    myloop();
    return 0;
}