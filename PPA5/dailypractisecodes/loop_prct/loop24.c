#include <stdio.h>

void main() {

	int i,j,space,k;
	for(i=0 ; i<=4 ; i++)
	{
		for(space=0 ; space<=(4-i) ; space++)
		{
			printf(" ");
		}
		for(j=0 ; j<=i ; j++)
		{
			if(i==0 || j==0)
			{
				k=1;
				printf("%d ",k);
			}
			else
			{
				k=k*(i-j+1)/j;
				printf("%d ",k);
			}
		}printf("\n");
	}
}
