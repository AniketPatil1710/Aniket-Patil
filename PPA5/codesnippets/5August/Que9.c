

#include <stdio.h>

void main() {

	int x=0 ;

	while(+(+x--)==0) {

		printf("%d ",x);
	}
}

// The unary operator + has the heighest priority, The bracket is solved first 
// sop +0 remains 0 now it become :(+(0)==0), that is(0==0) which returns true
// then body of while executes.inside while loop the value of x is decrerment
// to x= -1 this of x gets printed output
