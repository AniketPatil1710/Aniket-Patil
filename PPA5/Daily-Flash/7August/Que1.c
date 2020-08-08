

#include <stdio.h>

void main() {

	int num1,sum=0 , num2 , i=1 ;
	printf("Enter value of num1:");
	scanf("%d",&num1);
	printf("Enter value of num2:");
	scanf("%d",&num2);

	do
	{
		sum=sum+num2;
		i++;

	}while(i<=num1);

	printf("%d X %d = %d\n",num1,num2,sum);
}
