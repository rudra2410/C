#include <stdio.h>


int main()
{
	int i,j,k=1;
	

	for(i=1; i<=5; i++)
	{
		for(j=1; j<=5; j++,k++)
		{
		printf("%-3d ",k);
		}
		printf(" \n ");
		}
		return 0;
}