

#include <stdio.h>

void main() {

	int x = 5 ;

	while(--x > 0) {

		printf("%d",x);
	}
}
// The loop firs decrements the value of x,
// then compaires it then if true, executes the statement
// inside loop
//
// Iteration:
// 	
// 	1) x=5 x=x-1 x=4 x>0 : Trueprint: 4
// 	2) x=4 x=x-1 x=3 x>0 : Trueprint: 3
// 	3) x=3 x=x-1 x=2 x>0 : Trueprint: 2
// 	4) x=4 x=x-1 x=1 x>0 : Trueprint: 1
// 	5) x=1 x=x-1 x=0 x>0 : False - Break loop
