#include <stdio.h>


int  main()
{
      int i,a=1,n=1;
      

      printf("Enter Value =");
      scanf("%d",&n);

      for(i=1; i<=n; i++)
      {
      a=a*2;
	printf("%d  ",i*a);
	
      }
      return 0;
}