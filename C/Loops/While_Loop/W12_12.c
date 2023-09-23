#include <stdio.h>


int main()
{
	int i=2,sum=0;
	

	while(i<=10)
	{
		sum = sum+i;
		printf("%d ",sum);
		i+=2;
	}
	printf("Sum =%d",sum);
	return 0;


}