#include <stdio.h>

int main()
{
	int i,j;
	char n='A';
	

	for(i=1; i<=5; i++)
	{
		for(j=1; j<=i; j++)
		{
		printf("%c ",n);
		n++;
		}
		printf("\n");
		}
		return 0;
}