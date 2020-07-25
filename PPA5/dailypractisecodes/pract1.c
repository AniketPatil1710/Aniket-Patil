#include <stdio.h>

void main() {
	
	int x = 12 , y = 13 , ans =0 , ans1=0 , ans2 = 0 ;

	printf("x = %d , y = %d\n " , x , y ); // x=12 , y= 13

	ans1 = x++ && ++y ;
	printf("x = %d , y = %d , ans1 = %d\n", x , y , ans1);  //x=13 , y=14 , ans1=1

	x = 12 , y= 13 ;
	ans2 = x++ || ++y ;
     	printf("x = %d , y= %d , ans2 = %d\n", x, y , ans2); //x=13 , y=13 ,ans=1
	
	ans = ans1 != ans2 ;

	printf("ans = %d\n", ans); // ans=0
		
}
