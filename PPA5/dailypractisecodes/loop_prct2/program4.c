#include <stdio.h>

void main() {

	int num, i , j ,sum=0,k=1 ;

	printf("Enter a number :");
	scanf("%d",&num);
	
	
	while(num!=0)
	{
		
		j=num%10;
		if(j==0)
		{
			j=1;
		}
		sum=sum+(k*j);
		k=k*10;
		num=num/10;
	}

		printf("%d",sum);
}
