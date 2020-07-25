#include <stdio.h>

void main() {

	char ch ;

	printf("Enter any Character:");
	scanf(" %c",&ch);

	if(ch >= 97 && ch <= 122)

		printf(" %c is lower case\n",ch);

	else if(ch >=65 && ch<=90)
	
		printf(" %c is of uper case\n",ch);

	else if ((ch >= 32 && ch <= 47) || (ch >=58 && ch <= 64) || (ch >= 91 && ch <= 96) || (ch >=123 && ch<=126))
		printf("%c is special character\n",ch);
 	


}
