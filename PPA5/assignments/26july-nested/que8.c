

#include <stdio.h>

void main() {

	int i , j , k ;

	for(i=1 ; i<=4 ; i++)
	{
		for(j=1 ; j<=4 ; j++)
		{
			if(i==j)
			{
				printf("# ");
			}
			else
			{
				printf("= ");
			}
		}
		printf("\n");
	}


}
