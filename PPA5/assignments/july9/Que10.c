#include <stdio.h>

void main() {

	int num1 , num2 , mult , rem ;//mult mins multiplication and rem mins remainder

	printf("Num1=");
	scanf("%d",&num1);

	printf("Num2=");
	scanf("%d",&num2);

	mult = num1*num2 ;
	

	rem = mult % 2;

	if(num1>0 && num2>0)
	{
		printf("Multipplication of num1 and num2 is %d\n",mult);
		switch(rem){

			case 0 :
				printf("Number is even\n");
				break;

			case 1 :
				printf("Number is odd\n");
				break;
		}
	}
	else
		printf("Negative numbers are not allowed\n");
}
