#include <stdio.h>

int getsub()
{
    int math,eng, guj, total,grade;

    printf("Enter maths marks: ");
    scanf("%d", &math);

    printf("Enter english marks: ");
    scanf("%d", &eng);

    printf("Enter gujarati marks: ");
    scanf("%d", &guj);

    total = math + eng + guj;

    return total;
}

int calcul(int totalmarks)
{
    float per = (totalmarks * 100) / 300;

    printf("\nTOTAL MARKS:%d \n", totalmarks);
    printf("\nPERCENTAGE IS:%.2f \n", per);

    return per;
}

    
int main()
{
    int gettotal = getsub();
    int getper = calcul(gettotal);


    return 0;
}                           