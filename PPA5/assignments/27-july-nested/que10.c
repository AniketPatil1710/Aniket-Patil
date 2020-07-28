#include <stdio.h>
void main()
{
	int i, j ,rows , k=1;
	printf("enter the no. of rows:\n");
	scanf("%d",&rows);

	for(i=1;i<=rows;i++)
	{
		
		for(j=1;j<=k;j++)
		{
			printf("$ ");
		}
		printf("\n");
		k=k+2;
	}

}
