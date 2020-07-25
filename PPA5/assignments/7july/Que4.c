#include <stdio.h>

void main () {

	int i = -3 , j = 2 , k= 0 , m ;

	m = ++i && ++j && ++k ;// (++i && ++j)=1 and ++k = 1 so ( 1&&1=1)

	printf("%d , %d , %d , %d \n", i , j , k ,m) ;
}
