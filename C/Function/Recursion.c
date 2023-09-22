#include <stdio.h>

int print(int a)
{

    printf("%d, ", a);

    if (a == 10)
    {
        return a;
    }

    return print(++a);
    
}


int main()
{
    int a = 0;

    print(a);
    return 0;
}