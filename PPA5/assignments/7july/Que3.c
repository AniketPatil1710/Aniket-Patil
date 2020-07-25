#include <stdio.h>

void main () {

	int i = -30 , j =20 , k =1 , m ;

	m = ++i && ++j && --k ;// (++i && ++j)=1 and --k will be 0 then (1 && 0)=0

	printf("%d,%d,%d,%d\n",i, j , k , m) ;

}
