
#include <stdio.h>

void main() {

	int num ;

	printf("Enter number of elements:");
	scanf("%d",&num);
	
	int Array[num];
	printf("Input elements:\n");
	for(int i=0 ; i<num ; i++)
	{
		scanf("%d",&Array[i]);
	}
	printf("Printing Elements in Array:\n");
	for(int i=0 ; i<num ; i++)
	{
		printf("%d\n",Array[i]);
	}
}
