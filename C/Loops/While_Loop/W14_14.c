#include <stdio.h>


int main()
{
	int i=1,n,sum=0;


	printf("Enter the value =");
	scanf("%d",&n);

	while(i<=n)
	{
		sum=i*i;
		printf("%d ",sum);
		i++;
	}
	return 0;
}