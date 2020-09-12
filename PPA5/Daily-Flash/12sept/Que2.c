
#include <stdio.h>

void main() {

	int num ;
	printf("Enter number of elements:");
	scanf("%d",&num);
	
	int Num[num];
	printf("Enter numbers:\n");
	for(int i=0 ; i<num ; i++)
	{
		scanf("%d",&Num[i]);
	}

	for(int i=0 ; i<num ; i++)
	{
		int count=0;
		for(int j=1 ; j<=Num[i] ; j++)
		{
			if(Num[i]%j==0)
				count++;
		}
		if(count==2)
			printf("%d is prime number\n",Num[i]);
	}
}
