
#include <stdio.h>

void main() {

	int x=5 ;
	while(--x > 0) {
		printf("%d",x);
	}
}
//The while loop first decrements the value of x then compares it and if true , executes
//the statement inside the loop
//
//Iterations:
//
//1)x=5 x=x-1 x=4 x>0 : True  print:4
//2)x=4 x=x-1x=3 x>0 : True  print:3
//3)x=3 x=x-1 x=2 x>0 : True  print:2
//4)x=2 x=x-1 x=1 x>0 : True  print:1
//5)x=1 x=x-1 x=0 x>0 : false  Break the loop



