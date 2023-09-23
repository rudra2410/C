#include <stdio.h>
#include <conio.h>

void main()
{
	int i,j;
	char currentchar = 'A';
	clrscr();

	for(i=1; i<=5; i++)
	{
		for(j=1; j<=5; j++)
		{
		printf("%c  ",currentchar++);
		}
		printf("\n");
		}
		getch();

}