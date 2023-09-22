#include <stdio.h>

struct student
{
    int roll_no;
    char name;
    int math,guj,hin;
    int total;
    float per;
};

int main()
{
    struct student s[5];
    {
        int i ; 
        
    
        for ( i = 0; i < 2; i++)
        {
            printf("ENter Student Roll NO : ");
            scanf("%d",&s[i].roll_no);

            
            printf("ENter Student Name : ");
            scanf("%s",&s[i].name);

            
            printf("ENter Student Math Marks: ");
            scanf("%d",&s[i].math);

            
            printf("ENter Student Guj Marks : ");
            scanf("%d",&s[i].guj);

            printf("ENter Student Hin Marks : ");
            scanf("%d",&s[i].hin);

            printf("\n --------------------------------------------------- \n");

        }

        printf("Roll_No\tName\tMath\tGuj\tHin\tTotal\tPer");


        for ( i = 0; i < 2; i++)
        {
            s[i].total = s[i].math + s[i].guj + s[i].hin; // total  of marks student;

            s[i].per = (s[i].total * 100) / 300; //student perstage;
    
        
            printf("\n%d\t%s\t%d\t%d\t%d\t%d\t%.2f",s[i].roll_no,s[i].name,s[i].math,s[i].guj,s[i].hin,s[i].total,s[i].per);
        }
        
    }
    
}