#include <stdio.h>
#include <conio.h>

void main()
{
	int i=1,n;
	clrscr();

	printf("Enter the value =");
	scanf("%d",&n);

	while(i<=n)
	{
		if(i%2==0)
		{
		printf("%d ",i*i);
		}
		else
		{
		printf("%d ",i);
		}
		i++;
		}
		getch();








	getch();
}