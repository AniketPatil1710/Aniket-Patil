
#include <stdio.h>
void main()
{
	int i, j , rows ,space, k,m=1;
	printf("enter the no. of rows:");
	scanf("%d",&rows);
	printf("enter the value of k:");
	scanf("%d",&k);
	for(i=1;i<=rows;i++)
	{
		for(space=1;space<=(rows-i);space++)
			printf(" ");
		for(j=1;j<=m;j++)
		{
			printf("%c",k);
		}
		m=m+2;
		k++;
		printf("\n");
	}
}
