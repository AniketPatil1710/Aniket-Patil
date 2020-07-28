

#include <stdio.h>

void main() {

	int i , j , k, fact , num ;

	printf("Enter a number :");
	scanf("%d",&num);

	for(i=1 ; i<=num ; i++)
	{
		fact=1;

		for(j=i ; j>=1 ; j--)
		{
			fact=fact*j ;
		}
		printf("%d\t",fact);
	}
	printf("\n");

}
