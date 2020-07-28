

#include<stdio.h>
void main()
{
	int i , j , n,ans ;
	printf("enter the value of n:\n");
	scanf("%d",&n);
	for(i=n ; i>=1 ;i--)
	{
		
		for(j=1;j<=10;j++)
		{
			ans=j*i;
			printf("%d\t",ans);
		}
		printf("\n");
	}



}
