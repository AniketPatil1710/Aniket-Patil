#include <stdio.h>

#define Core2web(a) a 

void main() {

	int a =1 ;

	switch(a){

		case Core2web(1):
			printf("PPA");
			break;

		case Core2web(2) :
			printf("Java ");
			break;
	
	}

}

//macro identefiers are allowed as case label
//here Core2web(a) is macro we have defined which will have a value of a
//at the time preprocessing value of macros get repaced by the actual value
//after compilation of code
//#define Core2web(a) a=> core@web(1)1
//
//hence whenever in the program Core2web(1) is there it will be replaced by the value 1
//and case 1 gets executed
//so ans is PPA
