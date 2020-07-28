

#include <stdio.h>

void main() {

	int i , j , k ;
	
	for(i=1; i<=4 ; i++)
	{
		j=1 ;

		for(k=i ; j<=4 ; j++,k++)
		{
			printf("%d ",k);
		}
		printf("\n");
	}


}
