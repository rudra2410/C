#include <stdio.h>

int main()
{
	int i,n,a=0,b=1,c;
	

	printf("Enter the Value =");
	scanf("%d",&n);

	c = a+b;
	printf("%d ",c);

	for(i=1; i<=n; i++)
	{
	c = a+b;
	printf("%d ",c);
	a=b;
	b=c;
	}
	return 0;

}