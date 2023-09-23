#include <stdio.h>
#include <conio.h>

void main()
{
	int i=2,sum=0;
	clrscr();

	while(i<=10)
	{
		sum = sum+i;
		printf("%d ",i,sum);
		i++;
	}
	printf("Sum =%d",sum);
	getch();


}