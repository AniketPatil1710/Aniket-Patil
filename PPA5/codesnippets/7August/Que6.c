

#include <stdio.h>

void main() {

	int x=5 , y=0 ;
	while(--x > ++y) {

		printf("%d",x);
	}
}
// increment and decrement operators have heigher priority and will have heigher priority
// and will have heigher priority and will be performed first and then the comparison operation
// will be performed . The while loop will executes thhe print statement till condition becomes false.
//
// Iteration:
//      1)x=5 , y=0 x=x-1 : y=y+1 x=4 , y=1 x>y : True  print:4
//      2)x=4 , y=1 x=x-1 : y=y+1 x=3 , y=2 x>y : True print:3
//      1)x=3 , y=2 x=x-1 : y=y+1 x=2, y=3 x>y : False Break loop


