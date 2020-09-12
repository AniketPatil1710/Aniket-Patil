

#include <stdio.h>

void main() {
	
	int num ;
	printf("Enter number of elements in array:");
	scanf("%d",&num);

	int Num[num];

	printf("Enter number:\n");
	for(int i=0 ; i<num ; i++)
	{
		scanf("%d",&Num[i]);
	}
	printf("Numbers divisible by 5:\n");	
	for(int i=0 ; i<num ; i++)
	{
		if(Num[i]%5==0)
			printf("%d\n",Num[i]);
	}
}
