#include <stdio.h>

void main() {

	int num, i=1 , j ;


	while(i<=50)
	{
		if(i%2==0 && i%5==0)
		{
			printf("%d\t,",i);
		}

		i++;
	}
	printf("\n");

}
