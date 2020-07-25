#include<stdio.h>

void main(){

	int i=1 , j , k=1 ,space ;

	while(i<=4)
	{
		space=1;

		while(space<=4-i)
		{
			printf(" ");
			space++;
		}
		j=1;
		

		while(j<=i)
		{
			printf("%d ",k);
			k++;
			j++;
		}
		i++;
		printf("\n");
	}


}
