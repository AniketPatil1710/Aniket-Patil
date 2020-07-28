#include <stdio.h>

void main() {

	int cp , sp ;

	printf("take cost_price and selling_price:");
	scanf("%d %d", &cp , &sp ) ;

	if ( cp > sp)
		printf("loss is occured %d\n", cp-sp);

	else if (sp > cp )
		printf("profit is occured %d\n", sp-cp);
	else 
		printf("both are equal\n");


}
