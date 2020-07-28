#include <stdio.h> 

void main() {

	int days;
	
	printf("no.of days :") ;
	
	scanf("%d",&days) ;

	if( days <= 5) 
		printf("fine is 50 paise\n") ;


	else if( 6 >= days >=10)
		printf(" fine is 1 rs") ;

	else if( days > 10)
	       printf("fine is 5 rs\n");


	else if( days > 30 )
		printf("membership will be cancelled\n") ;


}

