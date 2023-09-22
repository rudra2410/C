#include <stdio.h>

int main()
{
	int i,j,a[5][5],sum=0;
	
	for(i=0; i<5; i++)
	{
		for(j=0; j<5; j++)
		{
			printf("\n Enter The Arry =a[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
	printf("\n");
	}
	
	for(i=0; i<5; i++)
	{
		for(j=0; j<5; j++)
		{
			printf("%d ",a[i][j]);
		}
	printf("\n");
	}

	for(i=0; i<5; i++)
	{
		for(j=0; j<5; j++)
		{
			if(i > j)
			{
				sum = sum + a[i][j];
			}
		}
	printf("\n");
	}
	printf("\n Upper triangle sum =%d",sum);
	return 0;

}