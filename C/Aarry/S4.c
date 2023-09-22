#include <stdio.h>

int main()
{
	int i,n,a[10];
	int even = 0, odd = 0;

	
	printf("\nEnter arry of value :");
	scanf("%d",&n);

	printf("\nEnter  arry of element :");

	for(i=0; i<n; i++)
	{
		scanf("%d",&a[i]);
	}

	for(i=0; i<n; i++)

	{
		if(a[i]%2==0)
		{
			even=even +a[i];
		}

		else
		{
			odd = odd + a[i];
		}
	
	}
	
	printf("\n the sum of arry is even :%d",even);
	printf("\n the sum of arry is odd :%d",odd);
	
	return 0;
}