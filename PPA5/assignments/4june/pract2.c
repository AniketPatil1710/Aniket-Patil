// Relational operator

#include <stdio.h>

void main() {

	int x = 12 , y =13 , ans = 0 , ans1 =0 , ans2 = 0 ;

	printf("x = %d\n y = %d\n ",x , y);

	ans1 = x > y ;
	printf("ans1 = %d\n ", ans1 );

	ans2 = x < y ;
	printf("ans2 = %d\n", ans2);

	ans= ans1 == ans2 ;
	printf("ans = %d\n",ans);

}
