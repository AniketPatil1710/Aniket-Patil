

#include <stdio.h>
void main()
{
	int i, j, space , rows , k , m=1 , a;
	printf("enter the no. of rows:");
	scanf("%d",&rows);
	printf("enter the value of k:");
	scanf("%d",&k);
	for(i=1;i<=rows;i++)
	{
	      for(space=1;space<=rows-i;space++)
			printf(" ");
	      a=k;
	      for(j=1;j<=m;j++)
	      {
		      printf("%d",a);
		      a++;
	      }
	      m=m+2;
	      printf("\n");
	}

}
