#include <stdio.h>

int main()
{
	int i,n;
	

	printf("Enter The Num =");
	scanf("%d",&n);

	for(i=1; i<=n; i+=2)
	{
	printf("%d  ",i,n);
	}
	return 0;
}