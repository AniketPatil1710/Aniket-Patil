#include <stdio.h>

void main() {

	int num , a =1 , b ;

	printf("Input number for table:");

	scanf("%d",&num);

	for(a=1 ; a<=10 ; a++)

	{
		b = a*num ;

		printf("%d ",b);

	}
	printf("\n");
}
