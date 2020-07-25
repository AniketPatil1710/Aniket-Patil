#include <stdio.h>

void main() {

	int min , hours ;

	printf("Enter the Time in minutes:");
	scanf("%d",&min);

	hours = min / 60 ;

	min = min % 60 ;

	printf("%d Hours , %d Minutes\n",hours,min);


}
