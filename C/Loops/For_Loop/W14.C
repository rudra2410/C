#include <stdio.h>
#include <conio.h>

void main()
{
	int i=1,n,sum=0;
	clrscr();

	printf("Enter the value =");
	scanf("%d",&n);

	while(i<=n)
	{
		sum=i*i;
		printf("%d ",sum);
		i++;
	}
	getch();
}