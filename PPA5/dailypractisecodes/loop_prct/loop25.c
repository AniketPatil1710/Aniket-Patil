#include <stdio.h>
void main()
{
	int i , j , space, t , k=65 , a=1;

	for(i=0 ;i<=6;i++)
	{
		{

		for(j=65 ;j<=(71-i)  ; j++)
			printf("%c",j);	
		for(space=1;space<=(i*2)-1;space++)
			printf(" ");

		for(t=71-i ; t>=65 ; t--)
		{
			if(t!=71)
		
				printf("%c",t);
		}		
	}
	printf("\n");
	}
	
}
