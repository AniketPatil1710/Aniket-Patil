#include <stdio.h>

void main() {

	int i , j ;
	


	for(i=1 ; i<=300 ; i++)
	{
		for (j=2; j<=i ; j++)
		{
			if(i==j)
			{
				printf("%d\n",i);
			}
			if(i%j==0)
			{
				break;
			}
			else
			{
				printf("%d\n",i);
				break;
			}
		}
	}
}
		
