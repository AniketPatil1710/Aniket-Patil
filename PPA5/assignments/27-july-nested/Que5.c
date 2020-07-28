

#include <stdio.h>
void main()
{
	int i , j , space , k, p ;
	k=69;
	p=97;

	for(i=0 ; i<=3 ; i++)
	{
		for(space=0 ; space<=i ; space++)
		{
			printf(" ");
		}
		for(j=3 ; j>=i ; j--)
		{
			if(i%2==0)
			{
				if(j==3 || j==1)
				{
					printf("%c",k);
					k--;
				}
				else
				{
					printf("%c",p);
					p++;
				}

			}
			else if(i%2==1)
			{
				if(j==3 || j==1)
				{
					printf("%c",p);
					p++;
				}
				else
				{
					printf("%c",k);
					k--;
				}
			}
		}
		printf("\n");
	}



}

