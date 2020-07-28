

#include <stdio.h>

void main() {

	int num , j=1 , sum=0 , a ,k;
	printf("enter the number:");
	scanf("%d",&num);

	for(;num!=0;)
	{
		k = num % 10;
		sum = (sum*10) +k;
		num=num/10;
	}

	while(sum!=0)
	{
		a = sum%10;

		switch(a)
		{
			case 1:
				printf("one\t");
				break;
			case 2:
				printf("two\t");
				break;
			case 3:
				printf("three\t");
				break;
			case 4:
				printf("four\t");
				break;
			case 5:
				printf("five\t");
				break;
			case 6:
				printf("six\t");
				break;
			case 7:
				printf("seven\t");
				break;
			case 8:
				printf("eight\t");
				break;
			case 9:
				printf("nine\t");
				break;
			case 0:
				printf("zero\t");
				break;
	
		}
		sum=sum/10;
	}
	printf("\n");
}
