#include <stdio.h>

int main()
{
	int a[10],i,n,sum=0;

	printf("Enter size of arry =");
	scanf("%d",&n);

	printf("Enter elements of arry =");
	for(i=0; i<=n; i++)
	{
		
	scanf("%d",&a[i]);

	}

	for(i=0; i<=n; i++)
	{
	
		sum+=a[i];
	
	}
	
	printf("sum of arry =%d",sum);
	
	return 0;


}

