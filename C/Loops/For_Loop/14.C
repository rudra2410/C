#include <stdio.h>
#include <conio.h>

void main()
{
	int i,n,sum=0;
	clrscr();

	printf("Enter the Value =");
	scanf("%d",&n);

	for(i=1; i<=n; i++)
	{
	sum = i*i;
	printf("%d ",sum);
	}
	getch();
}