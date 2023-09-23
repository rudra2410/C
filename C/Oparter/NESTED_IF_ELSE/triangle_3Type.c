#include <stdio.h>

void main()
{
    int x,y,z;

    printf("Enter the value x:");
    scanf("%d",&x);
    
    printf("Enter the value y:");
    scanf("%d",&y);

    printf("Enter the value z:");
    scanf("%d",&z);


    if (x == y || x == z)
    {
        printf("this triangle is equal \n");
    }

    else if (x == y || y == z || z == x)
    {
        printf("this triangle is isoleted \n");
    }

    else
    {
        printf("the triangle is scalece \n");
    }


    
}