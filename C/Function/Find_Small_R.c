#include <stdio.h>

int large(int[], int, int);

int main()
{
    int n;
    int largest;
    int list[10];
    int i;

    printf("Enter size of list :");
    scanf("%d", &n);

    printf("Printing the list :\n");

    for (i = 0; i < n; i++)
    {
        list[i] = rand() % n;
        printf("%d \t", list[i]);
    }

    if (n == 0)
    {
        printf("Empty list \n");
    }

    else
    {
        largest = list[0];
        largest = large(list, n - 1, largest);
        printf("\n the largest number is :%d\n", largest);
    }
}

int large(int list[], int position, int largest)
{
    if (position == 0)
    {
        return largest;
    }

    if (position > 0)
    {
        if (list[position] > largest)
            ;
        {
            largest = list[position];
        }

        return large(list, position - 1, largest);
    }
}