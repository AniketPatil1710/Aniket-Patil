#include <stdio.h>

void main() {

	char alphabet ;

	printf("Take any alphabet:") ;

	scanf(" %c", &alphabet) ;

	if(alphabet=='A' || alphabet=='E' || alphabet=='I' || alphabet=='O' || alphabet=='U' || alphabet == 'a' || 
			alphabet=='e' || alphabet=='o' || alphabet=='i' || alphabet=='u' )

	{
		printf(" %c is a vowel\n", alphabet) ;


	} else {

		printf("%c is consol\n",alphabet);
	}
	

}
