

#include <stdio.h>

void main(){
	
	int num , i ;
	printf("enter the number:\n");
	scanf("%d",&num);
	printf("Starting count-down:\n");

	do{
		printf("%d\t",num);
		num--;
		
	}while(num>=0);
	printf("\n");
}
