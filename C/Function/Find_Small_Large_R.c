#include <stdio.h>

int getMaxElement(int[]);
int n;

int main()
{
    int arr[100], max, i;

    printf("\n\nEnter the n of the array: ");
    scanf("%d", &n);

    printf("\n\nEnter %d elements\n\n", n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    max = getMaxElement(arr);

    printf("\n\nLargest element of the array is %d\n\n", max);

    return 0;
}

int getMaxElement(int a[])
{
    static int i = 0, max = -9999;
    if (i < n)
    {
        if (max < a[i])
            max = a[i];

        i++;
        getMaxElement(a);
    }
    return max;
}