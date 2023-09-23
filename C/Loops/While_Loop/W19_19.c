#include <stdio.h>


int main()
{
	int i=1,n,a=0,b=1,c;
	

	printf("Enter the Value =");
	scanf("%d",&n);

	c = a+b;
	printf("%d ",c);

	while(i<=n)
	{
	c = a+b;
	printf("%d ",c);
	a=b;
	b=c;
	i++;
	}
	return 0;

}