
#include <stdio.h>

void main() {

	int i , j , k=1, a ,space,ans , p ;

	for(i=1 ; i<=5 ; i++)
	{
		for(space=1 ; space<=(p) ; space++)
		{
			printf(" ");
		}
		a=k;

		for(j=5; j>=i; j--)
		{
			ans=k*a;
			printf("%d\t",ans);
			a++;
		}
		printf("\n");
		k++;
		p=p+8;
	}




}
