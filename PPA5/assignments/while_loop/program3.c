#include <stdio.h>

void main() {

	
	float cels , farht=0 ;

	while(farht!=101)
	{
		cels = (5.0/9)*(farht-32); 

		printf("%.3f degree farenheit = %.3f degree celsius\n",farht,cels);

		farht++;
	}




}
