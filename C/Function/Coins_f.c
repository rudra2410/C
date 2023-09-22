#include <stdio.h>

void coin()
{
    int n;

    printf("Enter The Value of Coin :");
    scanf("%d", &n);

    int arry[5] = {20, 10, 5, 2, 1};
    printf("The Coins Are \n:");

    int i = 1;
    while (n >= arry[0])
    {
        printf("%d ", arry[0]);
        n = n - 20;
        i++;
    }

    int j = 1;
    while (n >= arry[1])
    {
        printf("%d ", arry[1]);
        n = n - 10;
        j++;
    }

    int k = 1;
    while (n >= arry[2])
    {
        printf("%d ", arry[2]);
        n = n - 5;
        k++;
    }

    int x = 1;
    while (n >= arry[3])
    {
        printf("%d ", arry[3]);
        n = n - 2;
        x++;
    }

    int y = 1;
    while (n >= arry[4])
    {
        printf("%d ", arry[4]);
        n = n - 1;
        y++;
    }
}

int main()
{
    coin();
}