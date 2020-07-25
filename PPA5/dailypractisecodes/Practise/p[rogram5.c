#include <stdio.h>
#define Core2web 1
void main() {

	switch(printf("Core2web")){

		case 1:
			printf("PPA");
			break;

		case 2:
			printf("Java ");
			break;

		default :
			printf("python");
			break;
	}



	

}
//for switch statement it requires a constant value here printf is written inside switch because return type of printf is integer it returns 
//count of characters wrtten in printf()
//
//so first core2web will get printed the printf will return the value 8 because core2web is a string of 8 characters
//
//then compilerwilll look for case 8 but it is not given in the code so default will get executed 
//
//hence ans is Python
