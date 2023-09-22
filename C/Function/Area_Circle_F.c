#include <stdio.h>

void type()
{
    float area;

    printf("Enter the area :");
    scanf("%f",&area);

    printf("Area :%.2f",area * 3.14);
}

int main()
{
    type();
    return 0;
}