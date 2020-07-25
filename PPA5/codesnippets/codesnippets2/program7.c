#include <stdio.h>

void main() {

	switch(*(1+"AB" "CD"+1)) {

		case 'A' : printf("Pulp fiction");
			   break;

		case 'B' : printf("12 Angry Man");
			   break;

		case 'C' : printf("Casabance");
			   break;

		case 'D' : printf("Blood Diamond");


	}
}
//The answer ios option C i.e Casabance because the evalution of expression is
// *(1+"AB" "CD"+1) = 1+"AB" "CD" = "BCD"+1  "CD" and *(CD)
// is first character of char * so case label is executed
