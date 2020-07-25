//Checking Strong Number
#include <stdio.h>

void main(){

	int val, num,fact, i,sum ,rem;
	printf("enter the number:");
	scanf("%d",&val);
	sum=0;
	num=val;
	while(num>0)
	{
		
		rem=num%10;
		 fact=1;
		while(rem>=1)
		{
			fact=fact*rem;
			 rem--;
		}
		sum=sum+fact;
		num=num/10;
	}
	if(sum==val)
		printf("%d is a strong number\n",val);
	else
		printf("%d is not a strong number\n",val);

}

