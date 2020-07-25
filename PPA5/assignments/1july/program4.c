#include <stdio.h>

void main() {

	int num1 , num2 ,num3 , a  ;

	

	printf("Number One:");
	scanf("%d",&num1);

	printf("Number two:");
	scanf("%d",&num2);

	printf("NUmber three:");
	scanf("%d",&num3);

	if(num1 > num2 && num1>num3){
	{
		printf("the largest number among %d, %d and %d is %d and ",num1 , num2 , num3, num1);
		goto check1;
	}
	
	check1:
		if(num1 %2 == 0)
		{	
			printf("%d is even\n",num1);
 
		} else {
			
			printf(" %d is odd\n ",num1);
			}	
	}
	
        else if(num2 > num1 && num2 > num3){
	{
		printf("the largest number among %d, %d and %d is %d and ",num1 , num2 , num3, num3);
		goto check2;
	}
	
	check2:
		if(num2 %2 == 0)
		{	
			printf("%d is even\n",num2);
 
		} else {
			printf("%d is odd\n ",num2);
		}	
	}
        else if(num3 > num2 && num3 > num1){
	{
		printf("the largest number among %d, %d and %d is %d and",num1 , num2 , num3, num3);
		goto check3;
	}
	
	check3:
		if(num3 %2 == 0)
		{	
			printf("%d is even\n",num3);
 
		} else {
			printf("%d is odd\n",num3);
		}
	}
}
