#include <stdio.h>

void main() {

	int  R , S , A ;


	printf("Enter the ages:") ;
	scanf("%d%d%d", &R , &S , &A);
	if (R >= S && A >= S)

		printf("Sham is younger\n");
	
	else if ( A >= R && S >= R )

		printf("Ram is younger\n");

	else 
		printf("ajay is younger\n");

}
