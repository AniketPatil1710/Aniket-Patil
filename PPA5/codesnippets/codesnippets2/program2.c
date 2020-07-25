#include <stdio.h>

void main() {

	int a=1;

	switch(a) {

		case 1:
			printf("PPA ");

		case 2:
			printf("Java ");

		default :
			printf("Core2web ");

}
//PPA Java Core2web because a=1 and case 1 gets executed 
//but we have not given break statement after case so below case also 
//get executed without checking the condition is true or false
