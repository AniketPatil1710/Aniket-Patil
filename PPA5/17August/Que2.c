
#include <stdio.h>

void main() {

	int num;
	printf("Enter Number:");
	scanf("%d",&num);

	if(num%2==0)
	{
		printf("%d is even number\n",num);
	}
	else
	{
		printf("%d is odd number\n",num);
	}
}
