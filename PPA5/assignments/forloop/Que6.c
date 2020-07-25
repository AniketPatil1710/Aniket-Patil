#include <stdio.h>

void main() {

	int ch , a;
	a=97;

	for(ch=65 ; ch<=90 ;ch++)

	{
		if(a>=97 && a<=122)
		printf("%c=%c\n",ch,a);
		a++;

	}
	printf("\n");
}
