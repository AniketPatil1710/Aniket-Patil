#include <stdio.h>

void main() {

	int a=1 ;

	switch(a,a+1){

		case 1:
			printf("PPA");
			break;

		case 2:
			printf("Java ");
			break;

		default :
			printf("Core2web ");
			break;
	}
}
//here switch(a,a+1):
//acts as operator nd after and after computation of a+1 final value is 2
//
//switch(a,a+1) => switch(1,1+1) => switch(2)
//
//hence compile will look for case 2 ans within that case will gate executed
//
//so ans is java
// 
