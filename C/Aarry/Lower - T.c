#include <stdio.h>

int main() // Function
{
	int a[3][3],i,j,sum = 0;

	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("\n Enter the Arry =a[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}

	
	
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			printf(" %d ",a[i][j]);
		}
		printf("\n");

	}

	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			if(i > j)
			{
				sum = sum + a[i][j];
			}

		}
	}

	printf("\n Diagonal element total :%d",sum);
	
	return 0;

}