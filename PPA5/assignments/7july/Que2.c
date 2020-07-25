#include <stdio.h>

void main() {

	int i = 3 , j ;

	j = i++ ; // i is post incremented so temporary vlue of i=10 is get stored in j and the j value incremented
	printf("%d,%d\n", i, j );
}
