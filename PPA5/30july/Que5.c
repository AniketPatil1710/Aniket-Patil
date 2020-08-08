
#include <stdio.h>

void main() {

	int i , space , rows , j ,m;
	char ch,a;

	printf("Enter number of  rows:");
	scanf("%d",&rows);

	printf("Enter character:");
	scanf(" %c",&ch);

	for(i=1 ; i<=rows ; i++)
	{
		for(space=1 ; space<=(rows-i); space++)
		{
			printf(" ");
		}
		a=ch;
		for(j=1;j<=(i*2-1);j++)
		{
			m = ((i*2-1)/2)+1;

			if(j<m)
			{
				printf("%c",a);
				a++;
			}
			else if(j>=m)
			{
				printf("%c",a);
				a--;
			}

	
		}
		ch--;
		printf("\n");
	}




}
