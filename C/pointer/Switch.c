#include <stdio.h>


int a = 0;
void main()
{
printf("ENter number");
scanf("%d",&a);

switch (a)
{
case 1:
    printf("User ENter ONe Value");
    break;
case 2:
    printf("User ENter two Value");
    break;
case 3:
    printf("User ENter three Value");
    break;
case 4:
    printf("User ENter four Value");
    break;
case 5:
    printf("User ENter five Value");
    break;

default:
    printf("User enter worng value");
    break;
}
}