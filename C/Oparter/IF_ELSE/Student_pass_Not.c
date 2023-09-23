#include <stdio.h>

void main()
{
    int eng,guj,ba,total;
    float per;

    printf("Enter marks of eng :");
    scanf("%d",&eng);

    
    printf("Enter marks of ba :");
    scanf("%d",&ba);

    
    printf("Enter marks of guj :");
    scanf("%d",&guj);

    total = eng + guj + ba;
    printf("\n total marks =%d",total);

    if (eng >=60 && ba >=70 && guj >=90)
    {
        printf("\n student is pass");
        per= total /3;
        printf("\n percentage of student =%.2f",per);
    }

    else
    {
        printf("student is fail");
    }
    
    
}