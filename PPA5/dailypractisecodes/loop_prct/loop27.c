#include <stdio.h>

void main() {

	float i,y,x;
	for(y=1 ; y<=6 ;y++)
	{
			x=5.5;

			i=2+(y+(0.5*x));
			printf("table of i is for %f and %f:%f\n",i,y,x);
			x=x+0.5;
			
		
	}
}
