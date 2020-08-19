

#include <stdio.h>

void main() {

	int a, b , c,sum;

	printf("Enter angle1:");
	scanf("%d",&a);

	printf("Enter angle2:");
	scanf("%d",&b);

	printf("Enter angle3:");
	scanf("%d",&c);

	sum=a+b+c;

	if(sum==180)
	{
		printf("Triangle with angles %d,%d & %d is valid\n",a,b,c);
	}
	else
	{
		 printf("Triangle with angles %d,%d & %d is Invalid\n",a,b,c);
	}
}
