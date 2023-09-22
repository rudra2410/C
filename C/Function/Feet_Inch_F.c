#include <stdio.h>

void loop()
{
    int feet;

    printf("Enter the feet :");
    scanf("%d",&feet);

    printf("Inch :%d",feet * 12);
}

int main()
{
    loop();
}