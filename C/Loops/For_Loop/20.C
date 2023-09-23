#include <stdio.h>
#include <conio.h>

void main()
{
    float i,n,j = 0.5;
    clrscr();

    printf("Enter A Value= ");
    scanf("%f ",&n);

    printf("%f ",j);
    for(i=0.5; i<=n; i++)
    {
	j+=i*1;
	printf("%.2f ",j);
    }
    getch();


}
