#include <stdio.h>

void main(){

	int num , cnt=0 ,i , rem ;

	printf("Enter the number:");
	scanf("%d",&num);

	while(num!=0)
	{
		rem = num % 10;
		{
			cnt++;
		}
		num = num / 10 ;
	}

	printf("You Entered %d digit number\n",cnt);

}
