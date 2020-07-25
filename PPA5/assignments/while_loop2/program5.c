#include <stdio.h>

void main() {

	int UB , LB , sqr , cub ;

	printf("Enter Lower bound of range:");
	scanf("%d",&LB);

	printf("Enter Upperbound of range:");
	scanf("%d",&UB);

	while(LB<=UB)
	{
		if(LB%2==0)
		{
			sqr = (LB)*(LB) ;
		
			printf("%d\t",sqr);
		}
		else if(LB%2==1)
		{
			cub = (LB)*(LB)*(LB);

			printf("%d \t",cub);
		}
		LB++;
	}

	printf("\n");
					
}
