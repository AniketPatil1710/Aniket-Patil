
#include <stdio.h>

void main(){

	int num;
	printf("Enter Number:");
	scanf("%d",&num);

	if(num<0)
	{
		printf("%d is negative number\n",num);
	}
	else if(num==0)
	{
		printf("number is equal to zero\n");
	}
	else
	{
		printf("%d is positive number\n",num);
	}
}
