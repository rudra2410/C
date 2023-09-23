#include <stdio.h>


int main()
{
	int i=1,n=1,a=1;
	
	printf("enter the value =");
	scanf("%d",&n);

	while(i<=n)
	{
	printf("%d ",i*a);
	a = a*2;
	i++;
	}
	return 0;
}