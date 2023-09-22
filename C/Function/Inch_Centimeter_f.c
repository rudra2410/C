#include <stdio.h>

void loop()
{
    float inch ;

    printf("Enter the inch :");
    scanf("%d",&inch);

    printf("inch :%2.2f",inch * 2.54);   
}

int main()
{
    loop();
    return 0;
}