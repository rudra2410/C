#include <stdio.h>

int main()
{
	int M[5],i,total=0;

	 printf("ENter your Subject = ");		
	
	 for(i=0; i<5; i++)
	 scanf("%d",&M[i]);
	
	 for(i=0; i<5; i++)
	 {
		printf("total marks =[%d]",total);
		total+=M[i];
	 } 
	
	 printf("%d",total);
	
	return 0;

	
}