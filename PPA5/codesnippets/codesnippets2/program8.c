#include <stdio.h>

void main() {

	char *str ="ONE" 

	str++ ;

	switch(str) {

		case "ONE" : printf("Brazil");
			     break;

		case "NE" : printf("Toy Story");
			    break;

		case "N" : printf("His Girl Friday");
			   break;

		case "E" : printf("Casio Royal");
	}



}
// compiation error because semicolon is missing in the
// char *str="ONE" and char * cannot be case label
