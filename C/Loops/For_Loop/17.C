#include <stdio.h>
#include <conio.h>

void main()
{
      int i,a=1,n=1;
      clrscr();

      printf("Enter Value =");
      scanf("%d",&n);

      for(i=1; i<=n; i++)
      {
	printf("%d  ",i*a);
	a=a*2;
      }
      getch();
}