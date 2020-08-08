

#include <stdio.h>

void main() {

	int x =0 ;
	while(+(+x--)!=0) {

		printf("%d",x);
	}
}

// The unary operator + has hieghest priority.
// The bracket is solved first, so +0 remains 0.
// Now becomes:(+(0)!=0), that is (0!=0), which returns False., Hence
// while loop will not executed and nothing will be printed
