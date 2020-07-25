#include <stdio.h>

void main() {

	int num , i ,j ;

	printf("Enter a number:");
	scanf("%d",&num);
	
	


	if(num%2==0)
	{
		while(num>0)
		{
			printf("%d\t",num);

			num--;
		}
	}

	else if(num%2==1)
	{
		j=num;
		while(j>0)
		{
			if(j%2==1)
			{
				printf("%d\t",j);
			}

			j--;
		}
	}
	printf("\n");
}
