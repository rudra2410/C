#include <stdio.h>


int main()
{
	int i,j;
	char currentchar = 'A';
	

	for(i=1; i<=5; i++)
	{
		for(j=1; j<=5; j++)
		{
			
		printf("%c  ",currentchar++);
		}
		printf("\n");
		}
		return 0;

}