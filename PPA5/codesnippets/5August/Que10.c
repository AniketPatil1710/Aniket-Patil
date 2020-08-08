

#include <stdio.h>

void main() {

	int x=0 ;

	while(++x--==0) {

		printf("%d",x);
	}
}

// The operation performed as (++(x--))==0 here , it can be simplified
// as ++(x-1) the increment operation only takes variable for performing an operation but here we are providing it with
// an expression.
// that is why it gives an error.(lvalue required as ncrement operand)
