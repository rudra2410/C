#include <stdio.h>

struct student
{
    int No;
    char Name[20];
    int rate;
    int qty;
    int Amt;
    int Billamt;
    int dis;
    float gst, bill;
};

int main()
{
    struct student bill[5];
    {
        int i;

        for (i = 0; i < 4; i++)
        {
            printf("Enter Product Name :");
            scanf("%s", &bill[i].Name);

            printf("Enter Product No :");
            scanf("%d", &bill[i].No);

            printf("Enter Product Rate :");
            scanf("%d", &bill[i].rate);

            printf("Enter Product Qualaty :");
            scanf("%d", &bill[i].qty);

            printf("\n --------------------------------------------- \n");
        }

        printf("Name\tNo\t      rate\tqty\tamt\tdis\tbillamt\tgst\tbill");

        for (i = 0; i < 4; i++)
        {
            bill[i].Amt = bill[i].rate * bill[i].qty;
            bill[i].dis = bill[i].Amt * 5 / 100;
            bill[i].Billamt = bill[i].Amt - bill[i].dis;
            bill[i].gst = bill[i].Billamt * 18 / 100;
            bill[i].bill = bill[i].Billamt + bill[i].gst;

            printf("\n %s\t%d\t\t%d\t%d\t%d\t%d\t%d\t%.2f\t%.2f", bill[i].Name, bill[i].No, bill[i].rate, bill[i].qty, bill[i].Amt, bill[i].Billamt, bill[i].dis, bill[i].gst, bill[i].bill);
        }
    }
}