#include <stdio.h>

void main() {

	int check=2 ;

	switch(check) {

		case 1: printf("D.W.Steyn");

		case 2:printf(" M.G.Johnson");

		case 3:printf(" Mohammad Asif");

		default:printf(" M.Mural idaran");
	}
}
//The answer is option C i.e M.GJohnson Mohamad Asif M.Murlidaran because check=2 and case 2
//gets executed but we have not given break statement after case so below case also get executed
//without checking the condtion is true or false
