#include <stdio.h>

void main() {

	int x = 10 ;
	int y = 20 ;

	switch('x') {

		case 'x' :
			printf("case 10\n");
			printf("x = %d\n",y);
			break;

		case 'y' :
			printf("Case 20\n");
			printf("y= %d\n",y);
			break;

		default:
			printf("Default\n");
			break;
	}

}
