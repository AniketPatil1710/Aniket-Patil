//total number of occurence of 3 from 0 to inpute number
#include<stdio.h>
void main()
{
	int n,i,j=0,sum,k,t;
	printf("enter the value of n:\n");
	scanf("%d",&n);
		
		for(i=1;i<=n;i++)
		{
			t=i;
			while(t>0)
			{
				k=t%10;
		
				if(k==3)
				{
					j++;
					break;
				}
			
				t=t/10;
				}	
			
			
		}

		

	printf("Number of 3 digit occurence from 0 to %d is %d\n",n,j);
}
