

#include <stdio.h>

void main() {


	int num,rem,count=0;

	printf("Enter any number :");
	scanf("%d",&num);

	while(num!=0)
	{
		rem=num%10;
		count++;
		if(count==1)
		{
			printf("last no:%d\n",rem);
		}
		num=num/10;

	}

	printf("First no: %d\n",rem);

}
