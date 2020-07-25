

#include <stdio.h>

void main() {

	int i , j , k=5 , a , space ;

	for(i=0 ; i<=4 ; i++ )

	{
		for(space=1 ; space<=(8-i) ; space++)

		{
			printf(" " ) ;

		}
		
		a=k;
		for( j=0 ; j<=i ; j++)
		{
			
			printf("%d",a*a);
			a++;
			
		}
		k--;
		printf("\n");
	}


}
