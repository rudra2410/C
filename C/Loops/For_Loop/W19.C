#include <stdio.h>
#include <conio.h>

void main()
{
	int i=1,n,a=0,b=1,c;
	clrscr();

	printf("Enter the Value =");
	scanf("%d",&n);

	c = a+b;
	printf("%d ",c);

	for(i<=n)
	{
	c = a+b;
	printf("%d ",c);
	a=b;
	b=c;
	i++;
	}
	getch();

}