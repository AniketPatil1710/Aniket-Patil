
#include <stdio.h>

void main() {

	char ch ;
	printf("Enter here:");
	scanf("%c",&ch);

	if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z'))
	{
		printf("%c is a character\n",ch);
	}
	else
	{
		printf("%c is not an character\n",ch);
	}
}
