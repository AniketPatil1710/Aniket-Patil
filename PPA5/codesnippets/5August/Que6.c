

#include <stdio.h>

void main() {

	int x=5 , y=0 ;

	while(x-- > ++y) {

		printf("%d",x);
	}
}
//iterration:
//	1) x=5 , y=0 y=y+1 : y=1 x>y :true x=x-1 : x=4 print:4
//      1) x=4 , y=1 y=y+1 : y=2 x>y :true x=x-1 : x=3 print:3
//      1) x=3 , y=0 y=y+1 : y=3 x>y :false break loop
  
