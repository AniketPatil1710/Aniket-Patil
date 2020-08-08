

#include<stdio.h>

void main(){

	int num,i, count;
	printf("enter the number:\n");
	do{
		i=1;
		count=0;
		scanf("%d",&num);
		while(i<=num)
		{
			if(num%i==0)
			{
				count++;
			}
			i++;
		}



	}while(count!=2);

	printf("Your are out of Do-While\n");
}
