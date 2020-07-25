#include <stdio.h>

void main() {

	char ch , LB , UB ;

	printf("Lower Bond of Range :");
	scanf(" %c",&LB);

	printf("Upper Bond of Range :");
	scanf(" %c",&UB);


	while(LB<=UB)
	{
		if(LB=='A' || LB=='E' || LB=='I' || LB=='O' || LB=='U')
		{
			printf("%c is vowel\n",LB);
		}
		else
		{
			printf("%c is consonent\n",LB);
		}

		LB++;
	}
}
