
#include <stdio.h>

void main() {

	int i , j , k=1, rows , space ;
	printf("No. of rows:");
	scanf("%d",&rows);
	for(i=0 ; i<=rows ; i++)
	{
		for(space=1;space<=i;space++)
		{
			printf(" ");
		}
		for(j=4;j>=i;j--)
		{
			printf("%d",k);
			k=k+2;
		}
		printf("\n");
	}


}
