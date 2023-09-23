#include <stdio.h>


int main()
{
	int i=1,j=10;
	
	while(i<=10)
	{
		j=1;

		while(j<=10)
		{
		printf(" %d",i);
		j+=2;
		}
		i+=2;
		printf("\n");
		}
		return 0;
}