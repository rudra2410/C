#include <stdio.h>
#include <conio.h>

void main()
{
	int i=1,sum=0;
	clrscr();

	while(i<=10)
	{
		sum = sum+i;
		printf("%d ",i,sum);
		i+=2;
	}
	printf("Sum =%d",sum);
	getch();


}