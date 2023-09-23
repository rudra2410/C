#include <stdio.h>
#include <string.h>

int main()
{
    int i,length;
    char arry[20];
    

    printf("string value :");
    scanf("%[^\n]s",&arry);


    for (i = 0; arry[i] != '\0'; i++)
	{
	    length = i;
         printf("arry[%d] value is : %c \n", i,arry[i]);
	 
	}   

   	printf("string length =%d",i);

    return 0;

    
}