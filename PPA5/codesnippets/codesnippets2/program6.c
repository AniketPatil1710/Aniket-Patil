#include <stdio.h>

void main() {

	int const x=0 ;

	switch(5/4/3) {

		case x : printf("Clinton");
			 break;

		case x+1:printf("Gandhi");
			 break;

		case x+2 : printf("Gates");
			   break;

		default: printf("Brown");
	}
}
//The ans is D i.e compilation error because only integer can be in case 
//label not other datatype or any variable name.And as char is stored initially name 
//And as ascii so its by default int
