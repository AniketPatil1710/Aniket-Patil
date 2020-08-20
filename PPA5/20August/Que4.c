

#include <stdio.h>

void main() {

	int i, j,rows,k;
	printf("Enter number of rows:");
	scanf("%d",&rows);

	k=1;

	for(i=1;i<=rows;i++)
	{
		for(j=1;j<=4;j++)
		{
			printf("%d ",k);
			k++;
		}
		printf("\n");
	}


}
