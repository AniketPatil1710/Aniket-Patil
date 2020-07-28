#include <stdio.h>
void main()
{
	int n ,r,p,ans1=1 , ans=1 , ans2=1 , final_ans, i;
	printf("enter the number of people:\n");
	scanf("%d",&n);
	printf("enter the number of seats:\n");
	scanf("%d",&r);

	if(n==r)

	{
		

		for(i=n;i>=1;i--)
		{
			ans1=ans1*i;
		}
		printf("permutation is %d\n",ans1);

	}
	else if(n>r)
	{
		for(i=n ; i>=1;i--)
		{
			ans=ans*i;
		}
		p=n-r;
		for(i=p;i>=1;i--)
		{
			ans2=ans2*i;
		
		}
		final_ans = ans/ans2;

		printf(" permutation is %d\n",final_ans);
	}



		



}
