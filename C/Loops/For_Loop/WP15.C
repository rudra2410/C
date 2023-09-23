#include <stdio.h>
#include <conio.h>

void main()
{
	int i=65,j=69;
	char n='A';
	clrscr();

	while(i<=69)
	{
		j=65;

		while(j<=i)
		{
		printf(" %c",n);
		n++;
		j++;
		}
		i++;
		printf("\n");
		}
		getch();
}