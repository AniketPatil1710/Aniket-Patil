

#include <stdio.h>

void main() {

	int i , j , a=65 , space , k ;

	for(i=0 ; i<=4 ; i++)

	{
		for(space=0;space<=(4-i);space++)
		{
			printf(" ");
		}

		k=a;

		for(j=0 ; j<=i ; j++)
		{
			printf("%c",k);
			k++;
			
		}
		a++;
		

		printf("\n");
	}
}
