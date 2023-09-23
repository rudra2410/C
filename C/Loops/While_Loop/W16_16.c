#include <stdio.h>


int main()
{
	int i=1,n,sum=1;
	

	printf("enter the value =");
	scanf("%d",&n);

	while(i<=n)
	{
	sum = sum * 2 ;
	printf("%d ",sum);
	i++;
	}
	return 0 ;
}