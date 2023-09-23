#include <stdio.h>

void main()
{
    int x,y;

    printf("Enter the value :");
    scanf("%d",&x);

    
    printf("Enter the value :");
    scanf("%d",&y);

    if (x > 0 && y > 0)
    {
        printf("xy is first quadrant \n"); // ++
    }

    if (x > 0 && y < 0)
    {
        printf("xy is second quadrant \n"); // +-
    }

    if (x < 0 && y < 0)
    {
        printf("xy is third quadrant \n"); // --
    }

    if (x < 0 && y > 0)
    {
        printf("xy is four quadrant \n"); // -+
    }

    
}