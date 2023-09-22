#include <stdio.h>

int data(int n)
{
    int i=0,a;

    while (n > 0)
    {
        a = n % 10;
        i = i * 10 + a;
        n = n / 10;
    }
    
    return i;
}

int main()
{
    int i,n;

    printf("Enter The Value :");
    scanf("%d",&n);

    i = data(n);
    
    printf("Reverse Number:%d \n",i);


}
