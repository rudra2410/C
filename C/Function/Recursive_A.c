#include <stdio.h>

int findsum(int a[], int n)
{
    if (n <= 0)
    {
        return 0;
    }

    return (findsum(a , n - 1)+ a[n - 1]);
    
}

int main()
{
    int a[] = {1,2,3,4,5,6};
    int n = sizeof(a) / sizeof(a[0]);
    printf("%d", findsum(a,n));
    return 0;
}