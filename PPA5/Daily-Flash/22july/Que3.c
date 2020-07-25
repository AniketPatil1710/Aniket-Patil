#include<stdio.h>

void main() {

	int i=1 ,ans, space, j , a=1,b=5,c;
	
	
	while(i<=5)
	{
		space=1;
		while(space<=i)
		{
			printf(" ");
			space++;
		}
	
		j=1;
		c=b;
	
		while(j<=i)
		{
			while(c>0)
			{
				ans=a*c;
				printf("%d",ans);
				c--;
			}
			
			
			j++;
		}
		i++;
		a++;
		b--;
		printf("\n");

	}
	
}

