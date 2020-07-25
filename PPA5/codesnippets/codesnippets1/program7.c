#include <stdio.h>

int main() {

	int a= 500 , b=100, c;
	if(!a >= 400 )
		b=300;
	c=200;
	printf("b = %d c=%d\n", b , c);
}
//Here  a=500 the precedance of relational operators if higher than hat of logical operators,
//So first a>=400 will get checked and then logical not operator will work
//here, the vale of a(500) id greater than 400 so the statement becomes true
//i.e.!(True)
//Negation of rue is false and so if statement will return false and b will not get assigned new value .
//So answer is d correct
