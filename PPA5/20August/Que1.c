

#include <stdio.h>

void main(){

	int side1,side2,hypo,sum;

	printf("Enter side1:");
	scanf("%d",&side1);

	printf("Enter side2:");
	scanf("%d",&side2);

	printf("Enter Hypotenus:");
	scanf("%d",&hypo);


	sum=(side1*side1)+(side2*side2);

	if((hypo*hypo)==(sum))
	{
		printf("Triangle satisfies the Pythagoras Theorem\n");
	}
	else
	{
		printf("Triangle not satisfies the Pythagoras Theorem\n");
	}
}
