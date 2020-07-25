#include<stdio.h>

void main() {

	int a=10;
	if(a==10)
	{
		printf("Hello..");
		break;
		printf("ok");
	}
	else
	{
		printf("Hii..");
	}
	
}
//Usually break statement is used to come out from a looping block of execution for instance for-loop,while-loop,do-whileloop etc.
//
//but in above snippet we are using it inside a if-else block which is not a looping tatement since it will only get executed once,
//
//and hence the compiler wil throw error as "Break statement not within a loop or switch"
