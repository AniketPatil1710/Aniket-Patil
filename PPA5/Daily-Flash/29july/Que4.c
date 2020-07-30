

#include <stdio.h>
void main()
{
	int i , j , space ,ans,k=1,p;
	for(i=1;i<=5;i++)
	{
		for(space=1;space<=p;space++)
		{
			printf(" ");
		}
		for(j=5;j>=i;j--)
		{
			if(i==2 || i==4)
			{
				ans=k*k*k;
				printf("%d\t",ans);
			}
			else
			{
				ans=k*k;
				printf("%d\t",ans);
			}
			k++;
		}
		printf("\n");
		p=p+8;
	}
}

