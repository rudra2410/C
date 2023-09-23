#include <stdio.h>
#include <conio.h>

void main()
{
	int i,n;
	clrscr();

	printf("Entar The Value = ");
	scanf("%d",&n);

	for(i=-n; i<=n; i++)
	{
	printf("%d  ",i,n);
	}
	getch();
}