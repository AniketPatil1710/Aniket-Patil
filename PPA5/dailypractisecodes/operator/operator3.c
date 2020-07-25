
#include <stdio.h>

void main() {

	int a , b , c , ans  ;

	printf("Value of a : ",a);
	scanf("%ls",&a);

	printf("Value of b : ",b);
	scanf("%ls",&b);

	printf("Value of c: ",c);
	scanf("%ls",&c);

	ans = ++a + b++ + --a + a++ ;

	printf("%d,%d,%d",a,b,ans);


}

