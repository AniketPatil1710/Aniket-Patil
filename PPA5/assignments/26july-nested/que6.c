

#include <stdio.h>

void main() {

	int i , j , k ;

	for(i=1 ;i<=5; i++)
	{
		k=65 ;

		for(j=1 ; j<=i ; j++,k++)
		{
			printf("%c ",k);
		}
		printf("\n");
	}
}
