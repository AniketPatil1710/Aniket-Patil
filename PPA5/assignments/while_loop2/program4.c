#include <stdio.h>

void main() {

	int day , i ;

	printf("Enter No of days to complete assignment:");
	scanf("%d",&day);

	while(day>0)
	{
		printf("%d days remaining\n",day);
		day--;
	}
	printf("%d assignment is overdue\n",day);

}
