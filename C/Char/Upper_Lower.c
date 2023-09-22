#include <stdio.h>

void main()
{
    char upper , lower;
    int ascii;

    printf("ENter the uppercase char :");
    scanf("%c",&upper);
    ascii = upper + 32;
    printf("\n %c upper in lower is = %c ",upper,ascii);

    printf("ENter the lowercase char :");
    scanf("%c",&lower);
    ascii = lower - 32;
    printf("\n %c lower in upper is = %c ",lower,ascii);

}
