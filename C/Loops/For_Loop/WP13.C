#include <stdio.h>
#include <conio.h>

void main()
{
	int i=1,j=5,k=1;
	clrscr();

	while(i<=5)
	{
		j=1;

		while(j<=i)
		{
		printf("%3d",k);
		k++;
		j++;
		}
		i++;
		printf("\n");
		}
		getch();
}