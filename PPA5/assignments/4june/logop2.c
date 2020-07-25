
#include <stdio.h>

void main() {

	int x = 5 , y = 6 , ans = 6 ;

	ans = ++x && y++ ;

	printf("%d,%d,%d\n",x,y,ans);

}

