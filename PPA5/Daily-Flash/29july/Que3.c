

#include <stdio.h>
void main()
{
	int i, j, space , k , fact , rows , p=0;
	printf("enter no. of rows:");
	scanf("%d",&rows);
	for(i=1;i<=rows;i++)
	{
		for(space=1;space<=p;space++)
		{
			printf(" ");
		}
		k=1;
		fact=1;
		for(j=rows;j>=i;j--)
		{
			fact=fact*k;
			k++;
			printf("%d\t",fact);
		}
		printf("\n");
		p=p+8;
	}
}
