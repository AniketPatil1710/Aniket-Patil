#include <stdio.h>

void main() {

	int a;
	int b;
	int i=1;
	int k=1;


	printf("enter value of a:");
	scanf("%d",&a);

	printf("\nEnter value of b:");
	scanf("%d",&b);

	for(i=1;i<=b;i++) 

	{
		k*=a ;
		

	}

	printf("a^b:%d\n",k);

}


