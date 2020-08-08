

#include <stdio.h>

void main() {

	int x = 5 ;
	while(x-- > 0) {

		printf("%d",x);
	}
}
//So value of x first decremented then it is printed.
//
//Iterations:
//
//1)x=5 x>0 : True x=x-1 print:4
//2)x=4 x>0 : True x=x-1 print:3
//3)x=3 x>0 : True x=x-1 print:2
//4)x=2 x>0 : True x=x-1 print:1
//5)x=1 x>0 : True x=x-1 print:0
//6)x=0 x>0 : False Break loop

