
#include <stdio.h>

void main() {

	int x=5 , y=0 ;

	while(x-- > ++y) {

		printf("%d",x);
	}
}
//Iteration:
//	1)x=5 , y=0 y=y+1 : y=1 x>y : True x=x-1 : x=4 print:4
//      2)x=4 , y=1 y=y+1 : y=2 x>y : True x=x-1 : x=3 print:3
//      1)x=3 , y=2 y=y+1 : y=3 x>y : False Break loop


