

#include <stdio.h>

void main() {
	
	int Num[7];
	int sum=0;
	double avg;
		
	printf("Enter numbers:\n");
	for(int i=0 ; i<7 ; i++)
	{
		scanf("%d",&Num[i]);
	}

	for(int i=0 ; i<7 ; i++)
	{
		sum=sum+Num[i];
	}
	avg=sum/7.0;
	printf("Average is:%lf\n",avg);
}
