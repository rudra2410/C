#include <stdio.h>

void main()
{
for (int i = 0; i < 50; i++)
{
    printf("%d",i);

    if (i == 30)
    {
        break;
    }
    printf("\n");
}
}