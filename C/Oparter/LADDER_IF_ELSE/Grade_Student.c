#include <stdio.h>

void main()
{
    int eng,hin,guj,total,per;

    printf("ENter the mark :");
    scanf("%d %d %d",&eng,&hin,&guj);

    total = eng + guj + hin ;
    printf("Total mark :%d \n",total);

    per = total * 100/300;
    printf("persentage :%d \n",per);

    if (per >= 90)
    {
        printf("grade A");
    }

    else if (per >= 80 && per < 90)
    {
        printf("grade b");
    }

    else if (per >=70 && per < 80)
    {
        printf("grade c");
    }

    else if (per >=60 && per < 70)
    {
        printf("grade d");
    }

    else if (per >=40 && per < 60)
    {
        printf("grade E");
    }
    
    else
    {
        printf("student fail");
    }
    
    

    
}