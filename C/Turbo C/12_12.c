 #include <stdio.h>
int main()
{
	int i,n,sum=0;
	

	printf("Enter The Value = ");
	scanf("%d",&n);

	for(i=1; i<n; i+=2)
	{
	sum += i;
	}
	printf("Sum of odds number = %d",sum);
	return 0;

}
