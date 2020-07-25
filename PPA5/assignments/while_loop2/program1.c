#include <stdio.h>

void main() {

	int num , i=0 , sum=0 ;

	printf("Enter a number:");
	scanf("%d",&num);

	while(i<=num)
	{
		sum=sum+i;

		i++ ;
	}
	printf("sum of natural number from 1 to %d is %d\n",num, sum);

}
