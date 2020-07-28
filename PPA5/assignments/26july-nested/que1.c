

#include <stdio.h>

void main() {

	int i , j , ch ;

	for(i=1;i<=5;i++)
	{
		ch=65;
		for(j=1;j<=5;j++,ch++)
		{
			printf("%c ",ch);
		}
		printf("\n");
	}
	
}
