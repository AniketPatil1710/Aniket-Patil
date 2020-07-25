 
#include <stdio.h>

const int a=1 , b=2;
void main() {

	int a=2;

	switch(a){

		case 1:
			printf("PPA \n");

		case 2:
			printf("JAVA \n");
			break;

	}


}
//Scope of both variable are differwnt
//const int a=1 is a glaobal variable and int a=2 is local variable, when we compile the program compiler binds of
//switch(a) with local a if it is not a local variable then compiler binds that a with global a
//
//here a=2
//
//so switch(a)=>switch(2) so case 2 got executed
//hence java get printed
