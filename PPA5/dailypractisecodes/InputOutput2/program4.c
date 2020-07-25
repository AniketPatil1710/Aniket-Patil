#include <stdio.h>

void main(){

	int num , i ;
	printf("Enter the number:");
	scanf("%d",&num);
	if(num==1){
		printf("1 is not prime\n");
	}
        else if(num==2){
		printf("2 is prime number\n");
	}
	
	else if(num>2){

		for(i=2 ; i<=num-1 ; i++)
		{
			if(num%i==0)
			{
				printf("%d is not a prime number\n",num);
				break;
			}else{
				printf("%d is not prime number\n",num);
				break;
			}
		}
	}

}
