
#include<stdio.h>

const int a=1,b=2;

void main(){

	int x=1 ;

	switch(x){

		case a:
			printf("PPA \n");

		case b:
			printf("Java\n");
			break;
	}


}
//this code produce an compile time error because for case label it requires a constant value that can be integer r character
//and here we are passing a variable as label which is not accepteble because value of variable  can be changed in program 
//
//case 1:
//	printf("PPA");
//	value 1 is fixed through out the program  we can not change that so it is accepted
//	so it is giving an compile time error
