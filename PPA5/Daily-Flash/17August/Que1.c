
#include <stdio.h>

void main(){

	int num ;
	printf("Enter the number:");
	scanf("%d",&num);

	if(num%5==0 && num%11==0)
	{
		printf("%d is divisible by 5 & 11\n",num);
	}
	else
	{
		printf("%d is not divisible by 5 & 11\n",num);
	}
}
