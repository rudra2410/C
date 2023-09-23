#include <stdio.h>
#include <conio.h>

void main()
{
	int i=5,j=1;
	clrscr();

	while(i>=1)
	{
		j=5;

		while(j>=i)
		{
		printf(" %d",i);
		j--;
		}
		i--;
		printf("\n");
		}
		getch();
}