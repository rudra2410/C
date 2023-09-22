#include <stdio.h>

void myloop1()
{
    int value;

    printf("ENter the value :");
    scanf("%d", &value);

    if (value >= 0)
    {
        printf("Print Positive");
    }

    else
    {
        printf("Print Nagative");
    }
}

int main()
{
    myloop1();
    return 0;
}