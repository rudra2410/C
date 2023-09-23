#include <stdio.h>

int main()
{
	int i,n,sum=1;
	

	printf("Enter The Value =");
	scanf("%d",&n);

	for(i=1; i<=n; i++)
	{
	printf("%d ",sum);
	sum = sum * 2;
	}
	return 0;
}