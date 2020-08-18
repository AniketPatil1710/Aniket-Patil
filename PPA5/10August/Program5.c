

#include <stdio.h>

void main() {

	int rows,num1=0,num2=1,num3;

	printf("Enter thre number of rows:\n");
	scanf("%d",&rows);

	for( int i=1 ; i<=(rows) ; i++)
	{
		for(int j=1 ; j<=i ; j++)
		{
			printf("%d ",num1);
			num3 = num1+num2;
			num1=num2;
			num2=num3;
		}
		printf("\n");
	}


}
