#include <stdio.h>

void main() {

	int i , j , space , k=1;
	for(i=0 ; i<=3 ; i++)
		
	{
		for(space=0 ; space<=(8-(i+1)) ; space++)
		{
			printf(" ");
		}
		for(j=0 ; j<=i ; j++)
		{
			printf("%d  ",k);
			k++;
		}
		printf("\n");
	}
}
