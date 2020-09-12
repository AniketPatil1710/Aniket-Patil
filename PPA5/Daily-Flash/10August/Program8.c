

#include <stdio.h>

void main() {

	int rows ,a, ch , k , i , j,space ;

	printf("Enter rows:");
	scanf("%d",&rows);
	ch=65;

	a=rows*2-2;


	for(i=0 ; i<rows-1 ; i++)
	{
		for(space=0 ; space<=i ;space++)
		{
			printf(" ");
		}
		k=ch;
		for(j=0;j<=a;a++)
		{
			if(i%2==1)
			{
				printf("=");
			}
			else if(i%2==0)
			{
				printf("%c",k);
				k++;
			}
		}
		ch=ch+4;
		printf("\n");
		a=a-2;
	}


			





}
