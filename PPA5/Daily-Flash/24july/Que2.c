

#include<stdio.h>

void main() {

	int i , j , space , k ;

	for(i=0 ; i<=4; i++)

	{
		for(space=1;space<=(4-i);space++)
		{
			printf(" ");
		}
		
		k=0;
		for(j=0 ; j<=i; j++) 
		
		{
			if(j%2==0)
			{
			
				printf("0");
			}
			else
			{
				printf("1");
			}

		}
		printf("\n");
	}

}
