#include <stdio.h>
#include <conio.h>

void main()
{
	char i;
	clrscr();

	for(i=65; i<=90; i+=2)
	{
	if(i%4==1)
	{
	printf("%c ",i);
	}
	else
	{
	printf("%c ",i+32);
	}
       }
       getch();
}