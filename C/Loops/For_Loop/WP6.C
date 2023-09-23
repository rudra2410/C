#include <stdio.h>
#include <conio.h>

void main()
{
	char i=1,j=10;
	clrscr();

	while(i<=10)
	{
		j=1;

		while(j<=10)
		{
		printf(" %d",i);
		j+=2;
		}
		i+=2;
		printf("\n");
		}
		getch();
}