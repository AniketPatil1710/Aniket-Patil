

#include <stdio.h>

void main() {

	int x=5 , y=0 ;

	while(--x > ++y) {

		printf("%d",x);
	}

}
//iterration:
//      1) x=5 , y=0 x=x-1 : y=1  y=y+1 : x=4 X>Y TRUE print:4
//      1) x=4 , y=1 x=x-1 : y=2  y=y+1 : x=3 x >y true print:3
//      1) x=3 , y=2 x=x-1 y=y+1 : x=2 y=3 x>y :false break loop


