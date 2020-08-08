

#include <stdio.h>

void main() {

	int x=5 ;

	while(x-- >0){

		printf("%d" , x);
	}
}

//the loop equivalent to:
//
//while(x>0) {
//
//	x=x-1;
//	printf("%d",x);
//}
//so value of x is first decremented
