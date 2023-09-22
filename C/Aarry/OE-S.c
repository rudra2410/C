#include <stdio.h>

int main()
{
	int n,i,a[10];
	int Even_sum = 0,Odd_sum = 0;

	printf("\n Enter Arry of size =");
	scanf("%d",&n);

	printf("\n Enter arry of ELements\n");

for(i=0; i < n; i++)
	{

	scanf("%d",&a[i]);

	}

for(i=0; i < n; i++)
	{

	if(a[i] % 2 == 0)
	{

		Even_sum = Even_sum + a[i];
	}
	else
	{
		Odd_sum = Odd_sum + a[i];
	
		}
	}

	printf("\n The sum of even number in arry =%d",Even_sum);
	printf("\n The sum of odds number in arry =%d" ,Odd_sum);

	return 0;
}