#include <stdio.h>
#include <conio.h>

void main()
{
	int num,count,sum = 0;
	clrscr();

	printf("Enter The Num = ");
	scanf("%d",&num);

	for(count=1; count<=num; ++count)
	{
		sum += count;
	}
	printf("Sum =%d ",sum);
	getch();
}