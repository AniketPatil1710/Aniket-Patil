#include <stdio.h>

void main(){

	int i=0 , j , k=1;
	while(i<=4)	
	{
		j=0;
		while(j<=i)
		{

			printf("%d ",k);
			
			k++;
			j++;

			
		}
		k=k-1;
		i++;
		
		printf("\n");
	}
}
