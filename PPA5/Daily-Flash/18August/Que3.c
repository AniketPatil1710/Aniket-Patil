

#include <stdio.h>

void main() {

	char ch ;
	printf("Enter charcter:");
	scanf("%c",&ch);

	if((ch>=65 && ch<=90) || (ch>=97 && ch<=122))
	{
		printf("%c is a alphabet\n",ch);
	}
	else if(ch>=48 && ch<=57)
	{
		printf("%c is integer\n",ch);
	}
	else
	{
		printf("%c is a special character\n",ch);
	}
}
