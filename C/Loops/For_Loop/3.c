
#include <stdio.h>
#include <conio.h>

void main()
{
	int i,n;
	clrscr();

	printf("Enter The Value = ");
	scanf("%d",&n);

	for(i=1; i<=n; i++)
	{
	printf("%d  ",i,n);
	}
	getch();
}