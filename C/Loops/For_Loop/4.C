#include <stdio.h>
#include <conio.h>

void main()
{
	int i,n;
	clrscr();

	printf("Enter The Value = ");
	scanf("%d",&n);

	for(i=n;  i>=1; i--)
	{
	printf("%d  ",i);
	}
	getch();
}