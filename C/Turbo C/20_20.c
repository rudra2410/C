#include <stdio.h>

int main()
{
    float i,n,j = 0.5;
    

    printf("Enter A Value= ");
    scanf("%f ",&n);

    printf("%f ",j);
    for(i=0.5; i<=n; i++)
    {
	j= j + i*1;
	printf("%.2f ",j);
    }
    return 0;


}
