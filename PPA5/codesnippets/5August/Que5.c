

#include <stdio.h>

void main() {

	int x=5 , y=0 ;
	while(x-- >y++)
	{
		printf("%d",x);
	}
}
//1) x=5 , y=0 x>y :true x=x-1 , y=y-1 x=4 y=1 print:4
//2) x=4 , y=1 x>y :true..............,x=3 y=2 prin:3
//3)  x=3 , y=2 x>y :true x=x-1 , y=y-1 x=2 y=3 print:2
//then condition false loop breaks

