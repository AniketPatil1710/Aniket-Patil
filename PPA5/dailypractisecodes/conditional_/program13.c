#include <stdio.h>

void main(){

	char c ;//credits
	int order, Re_ord ;//remaining order

	int stock= 200 ;

	printf("stock in the company:%d\n",stock) ;

	printf("enter credit detail and enter the order:\n");

	scanf("%c%d",&order);

	Re_ord = order - stock ;
	

	if(c=='y' && stock>=order)
		printf("we will supply your reqiurements\n") ;

	else if(c=='n')
		printf(" you will not get your requirements\n") ;

	else if(c=='y' && stock<=order)
		printf("you will get your %d remaining orders after some time\n",Re_ord);
		
}

