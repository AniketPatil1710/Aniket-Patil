#include <stdio.h>

void main() {

	int num , sum=0 , mult=1 ,i=1 , j ;

	printf("Input number upto:");
	scanf("%d",&num);

	while(i!=num+1)
	{
		if(i%2==0)
		{
			sum=sum+i;
		}
		else if(i%2==1)
		{
			mult=mult*i;
		}
		i++;
	}
	printf("sum of even numbers between 1 to %d:%d\n",num,sum);
	printf("Multiplication of odd numbers between 1 to %d :%d\n",num,mult);

}
