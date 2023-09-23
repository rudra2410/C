#include <stdio.h>

int main()
{
	int mark[10];
	
	mark[0]=50;
	mark[1]=35;
	mark[5]=25;

	for(int i=0; i<5; i++)
	{
	printf("enter mark[%d] value :" ,i);
	scanf("%d",&mark[i]);
	}

	for(int i=0; i<5; i++)
	{
	printf("%d",mark[i]);
	}
	return 0;
}