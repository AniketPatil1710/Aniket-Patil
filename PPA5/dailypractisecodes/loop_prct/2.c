#include <stdio.h>
void main()
{
	int i,rows,j,space;
	printf("enter the no. of rows:\n");
	scanf("%d",&rows);
	for(i=0 ; i<=rows ; i++)
	{
		for(space=1 ; space<=(rows-i) ; space++)
		{
			printf(" ");
		}
		for(j=0 ; j<=i ; j++)
			printf("* ");
	
	printf("\n");
	}

}

