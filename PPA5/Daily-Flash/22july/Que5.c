#include <stdio.h>
void main()
{
	int i=0,j,space,k;
	while(i<=3)
	{ 
		space=1;
		while(space<=(3-i))
		{
			printf(" ");
			space++;
		}
		j=0;
		k=97;
		while(j<=i)
		{
			printf("%c",k+j);
			
			j++;
		}
		i++;
		printf("\n");
	}

}
