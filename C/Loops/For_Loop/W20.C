#include <stdio.h>
#include <conio.h>

void main()
{
    float i=0.5,n,j = 0.5;
    clrscr();

    printf("Enter A Value= ");
    scanf("%f ",&n);

    printf("%f ",j);
    while(i<=n)
    {
	j+=i*1;
	printf("%.2f ",j);

    }
    getch();


}