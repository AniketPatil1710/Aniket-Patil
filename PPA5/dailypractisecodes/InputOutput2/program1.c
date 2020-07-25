#include <stdio.h>

void main() {

	double val1 , val2 , add , mult , sub , div ;

	printf("Enter val1:");
	scanf("%lf",&val1);

	printf("Enter val2:");
	scanf("%lf",&val2);

	add = val1 + val2 ;

	mult = val1*val2 ;

	sub = val1 - val2 ;

	div = val1 / val2 ;

	printf("The entered Number up to second precision are: %.2lf & %.2lf\n ", val1 , val2);
	printf("Their Addition:%.2lf\n",add);
	printf("Their Multiplication:%.2lf\n",mult);
	printf("Their Substraction:%.2lf\n",sub);
	printf("Their division:%.2lf\n",div);


	
}
