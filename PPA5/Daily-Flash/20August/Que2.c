

#include <stdio.h>

void main() {

	int p,t;

	float intrest,r;

	printf("Enter Interest:");
	scanf("%d",&p);

	printf("Enter Rate:");
	scanf("%f",&r);

	printf("Enter Time:");
	scanf("%d",&t);

	intrest=(p*r*t)/100.0;
	printf("Simple intrest on given amount is %f\n",intrest);

}

