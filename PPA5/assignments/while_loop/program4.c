#include <stdio.h>

void main() {

	int num , sum , rem , i , j=1 ;

	printf("Input number:");
	scanf("%d",&num);


		while(j<=num)

		{
			sum=0;
			if(num%j==0)
			{
				sum=sum+j;
			}
			j++;
		}
	
	if(num==sum)
		printf("%d is a perfect number\n",num);


	
}
