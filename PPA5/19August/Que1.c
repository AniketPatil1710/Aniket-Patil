

#include <stdio.h>

void main() {

	char ch;
	printf("Enter character:");
	scanf("%c",&ch);

	if(ch>=65 && ch<=90)
	{
		printf("%c is a Uppercase\n",ch);
	}
	else if(ch>=97 && ch<=122)
	{
		printf("%c is lowercase\n",ch);
	}
}
