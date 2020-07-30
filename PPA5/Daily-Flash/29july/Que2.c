

#include <stdio.h>
void main()
{
	int i , j ,a,k=1 , space,p=0;
	for(i=1;i<=5;i++)
	{
		for(space=1;space<=p;space++)
		{
			printf(" ");
		}
		a=k;
		for(j=5;j>=i;j--)
		{
			printf("%d\t",a);
			a++;
		}
		printf("\n");
		k=k+2;
		p=p+8;
	}
			
}

