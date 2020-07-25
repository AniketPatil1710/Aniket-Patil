
#include <stdio.h>

void main() {

	int a = 6 , b = 4 , ans = 0 ;

	ans = --a + --a + --a ;

	printf("%d %d\n", a , ans);

	ans = ++b + ++b + ++b + ++b ;

	printf("%d %d\n", b , ans);         //8 27

}


