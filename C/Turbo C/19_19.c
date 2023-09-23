#include  <stdio.h>

void main()
{
    int i,n,a=0,b=1,c;

    printf("Enter the value :");
    scanf("%d",&n);

    c = a + b;
    printf("%d \n",c);

    for ( i = 0; i <n; i++)
    {
        c = a + b;
        printf("%d",c);
        a = b;
        b = c;
    }
    printf("\n");
}