#include <stdio.h>
void main()
{
    char c ;

    printf("Enter char :");
    scanf("%c",&c);

    if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'|| c == 'a'|| c == 'e'|| c == 'i'|| c == 'o'|| c == 'u' )
    {
        printf("THis is vowel char");
    }

    else
    {
       printf(" this is consent char");
    }
    
    
}