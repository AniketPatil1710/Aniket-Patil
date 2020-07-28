


#include <stdio.h>
void main()
{
	int i , j ,space ,k=2;
	for(i=1 ; i<=4 ; i++)
	{
		for(space=1 ; space<=i ; space++)
		{
			printf(" ");
		}
		for(j=4 ; j>=i ; j--)
		{
			printf("%d",k);
			k=k+2;
		}
		printf("\n");
	}	
	
}

