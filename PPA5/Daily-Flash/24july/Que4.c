

#include <stdio.h>

void main() {

	int i , j , k=69 ,a, space ;
	
	for(i=0; i<=4; i++)
	{
		for(space=0 ; space<=(4-i) ; space++)

		{
			printf(" ");
		}
		a=k;

		for(j=0 ; j<=i ; j++)
		
		{
			printf("%c",a);
			a++;
		}
		k--;

		printf("\n");
	}

}
