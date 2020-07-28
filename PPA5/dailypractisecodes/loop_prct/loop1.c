#include <stdio.h>

void main() {

	int a , b , c ;

	printf(" Input no : ");

	scanf("%d",&a);

	for(b=1 ; b<=10 ; b++)

	{
		c = a*b ;

		printf("%d x %d=%d\n",a,b,c);
	}

	
}
