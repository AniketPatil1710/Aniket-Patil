#include <stdio.h>

void main(){
	int i ,j ,k , space , rows;
	printf("enter the no. of rows:\n");
	scanf("%d",&rows);

	for(i=1 ; i<=rows ; i++)
	{
		for(space=1 ; space<=(rows-i) ; space++)
		{
			printf(" ");
		}
		for(j=1 ; j<=i ; j++)
		{
			printf("%d ",k);
			k++;
		}
		printf("\n");
	}
}
