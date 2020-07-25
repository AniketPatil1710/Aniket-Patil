#include <stdio.h>

void main() {

	int a=3 , b=2 ;

	a=a==b==0 ;

	switch(1) {

		a=a+10;
	}
	sizeof(a++);
	printf("%d",a);
}

//The answer is option D i.e 1 because after evalution the statement 
//a= a==b==0 i.e a=3==2==0 i.e a=0==0==0 therefore a stores 1 and in
//sizeof(a++) only size of variable is calculated neither pre nor post
//increent is evalutedand thus the of a is 1
