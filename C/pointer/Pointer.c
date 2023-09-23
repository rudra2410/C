// pointer is use to only vairable address to create pointer.
#include <stdio.h>

void main()
{
    int a = 10,*p;

    p = &a;

    printf("Value of a is :%d \n",a);
    // 10

    printf("Address of a is:%d \n",&a);
    // 6422300
    printf("Address a is p&:%d \n",p);
    // 6422300
    printf("Address of p is %d \n",&p);
    // 6422296
    printf("Value of a using p:%d \n",*p);
    // 10
}