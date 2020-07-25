#include<stdio.h>

void main() {

	char val=1;

	if(val--==0)
		printf("TRUE");
	else
		printf("FALSE");
}
//In the above code, we have performed the post decrement operation on t he variable
//val which is initializes to 1,and hence internally a function which peforms the post decrement,
//eg.int post(val){.//post(1)
//int temp;
//temp=val//temp=1;
//val=val-1;//val=0;
//return temp;//return 1;
//}
//
//and from above snippet the value gets returned as 1 and so the condition for if
//block gets false nd so else block gets
//executed
//
//and hence thhe current answer is True.
