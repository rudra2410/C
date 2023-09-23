#include <stdio.h>

int main()
{
	int i=65,j=69;
	char n='A';
	

	while(i<=69)
	{
		j=65;

		while(j<=i)
		{
		printf(" %c",n);
		n++;
		j++;
		}
		i++;
		printf("\n");
		}
		return 0;
}
