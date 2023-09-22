#include <stdio.h>
#include <string.h>

struct Employee
{
  int Empolyee_ID;
  int age;
  char Name[50];
  char Department[20];
  float Salary;
};

int main()
{
  struct Employee emp1;
  struct Employee emp2;

  int i;
  for (i = 0; i < 1; i++)
  {

    printf(" Details of the Employee 1 : ");
    printf(" Employee Id =  ");
    scanf("%d", &emp1.Empolyee_ID);
    printf(" Employee Age =  ");
    scanf("%d", &emp1.age);
    printf(" Employee Name =  ");
    scanf("%s", &emp1.Name);
    printf(" Employee Department =  ");
    scanf("%s", &emp1.Department);
    printf(" Employee Salary =   ");
    scanf("%f", &emp1.Salary);

    printf(" \n-------------------------------------------------\n ");
  }
  printf("Employee ID\tEmployee age  \tEmployee name  \tEmployee department\tEmployee salary");

  for (i = 0; i < 1; i++)
  {
    printf("\n  %d\t%d\t%s\t%s\t%.2f", emp1.Empolyee_ID, emp1.age, emp1.Name, emp1.Department, emp1.Salary);
  }
}