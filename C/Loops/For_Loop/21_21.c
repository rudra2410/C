#include <stdio.h>

int main()
{
	char i;
	

	for(i=65; i<=90; i+=2)
	{
	if(i%4==1)
	{
	printf("%c ",i);
	}
	else
	{
	printf("%c ",i+32);
	}
       }
       return 0;
}