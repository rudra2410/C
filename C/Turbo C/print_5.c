#include <stdio.h>

int main()
{
	int i,n,sum=0;
	

	printf("Enter The Value =");
	scanf("%d ",&n);

	for(i=1; i<=n; i++)
	{
	if(i%2==0)
	{
	printf("%d ",i*i);
	}
	else
	{
	printf("%d ",i);
	}
	}
	printf("%d ",i);
	return 0;
}