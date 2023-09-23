#include <stdio.h>


int main()
{
	int i=5,j=1;
	

	while(i>=1)
	{
		j=5;

		while(j>=i)
		{
		printf(" %d",i);
		j--;
		}
		i--;
		printf("\n");
		}
		return 0;
}
