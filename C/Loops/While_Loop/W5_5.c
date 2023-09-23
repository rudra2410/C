#include <stdio.h>


int main()
{
	int i,n;
	

	printf("ENter the value =");
	scanf("%d",&n);
	
	i=-n;
	while(i >= n)
	{
	printf("%d ",n);
	n++;
	}
	return 0;
}