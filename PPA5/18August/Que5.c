

#include <stdio.h>

void main() {

	int num1 , num2, num3 ;

	printf("Enter num1:");
	scanf("%d",&num1);

	printf("Enter num2:");
        scanf("%d",&num2);

	printf("Enter num3:");
        scanf("%d",&num3);

	if(num1>num2 && num1>num3)
	{
		printf("%d is max number among %d and %d\n",num1,num2,num3);
	}
	else if(num2>num3 && num2>num1)
        {
                printf("%d is max number among %d and %d\n",num2,num1,num3);
        }
	 else  if(num3>num1 && num3>num2)
        {
                printf("%d is max number among %d and %d\n",num3,num2,num1);
        }



}
