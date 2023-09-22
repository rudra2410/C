#include <stdio.h>
#include <string.h>

int main()
{
    int i,length,j=0;
    char str[20];
    char str2[40];
    

    printf("string value :");
    scanf("%[^\n]s",&str);


    for (i = 0; str[i] != '\0'; i++)
	{
	length = i;	 
	}   

    for (i =length; i >= 0; i--)
	{
		str2[i] = str[j];
		j++;
	}   
   	
	printf("reverse string =%s",str2);
 
    return 0;
}