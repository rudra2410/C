#include <stdio.h>

void main()
{
    char i ;

    printf("Enter the chareater :");
    scanf("%c",&i);

    if (i == 'A' || i == 'E' || i == 'I' || i == 'O' || i == 'U' || i == 'a' || i == 'e' || i == 'i' || i == 'o' || i == 'u' )
    {
        printf("THis Char is wovel char ");
    }

    else
    {
        printf("THis Char is constent char ");
    }
    
    
}