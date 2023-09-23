#include <stdio.h>


int main()
{
    float i=0.5,n,j = 0.5;
   

    printf("Enter A Value= ");
    scanf("%f ",&n);

    printf("%f ",j);
    while(i<=n)
    {
	j+=i*1;
	printf("%.2f ",j);

    }
   return 0;


}