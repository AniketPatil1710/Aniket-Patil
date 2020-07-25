#include <stdio.h>
#define TRUE 1
void main() {

	if(TRUE)
		printf("1");
		printf("2");

	else
		printf("3");
		printf("4");

}
//whenever we dont enclose thhe if block within curly-brace, only one statement is consideredas a part of if-block,
//so printf("1") is part of if bock,
//second printf("2") is cosidered as independent statement
//but when compiler read the else statement it will look up corresponding if-block to that else but right above if compiler will get a individual'
//print statement it will look up for correspondence with the above that printf and hence it will give the error.
//simy,we can't use any statement between if and else blockotherwise
//compiler gives error
