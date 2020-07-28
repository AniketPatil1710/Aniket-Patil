

#include<stdio.h>
void main()
{
	int i , j , rows , space , a ;
	printf("enter the no. of rows:");
	scanf("%d",&rows);
	a=rows;
	for(i=1;i<=rows;i++)
	{
		for(space=1;space<i;space++)
		{
			printf(" ");
		}
		
		for(j=rows;j>=i;j--)
		{
			printf("%d",a);
		}
		a--;
		printf("\n");
	}
}

