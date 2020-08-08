

#include <stdio.h>

void main(){

	int num, num1 , rem , sum;

	
	

	do{
		sum=0;
		

		printf("Enter number:\n");
		scanf("%d",&num);
		num1=num;

		while(num1!=0)
		{
			rem=num1%10;
			sum=(sum*10)+rem;
			num1=num1/10;
		}
		


	}while(sum != num);

	printf("You entered Palindrome number\n");
}
