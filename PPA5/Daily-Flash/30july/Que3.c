

#include <stdio.h>
void main()
{
	int i,j,space,m,t,rows;

	for(i=1;i<=4;i++)
	{
		for(space=1;space<=4-i;space++)
		{
			printf(" ");
		}
		
	
		m=i;
			
		for(j=1;j<=i*2-1;j++)
		{
			t = ((i*2-1)/2)+1;
			
		        if(j<t)
			{
				
				printf("%d",m*m*m);
				m--;

			}
			else if(j>=t)
			{
				printf("%d",m*m);
				m++;
			}
		}
		
	
		printf("\n");
	}

}
