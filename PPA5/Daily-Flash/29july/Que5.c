

#include <stdio.h>
void main()
{
	int i , j , space ,k, sum=0 , sum1=1,a=0;
	for(i=1;i<=5;i++)
	{
		for(space=1;space<=(a);space++)
		{
			printf(" ");
		}
		a=a+8;
		
		for(j=5;j>=i;j--)
		{
			printf("%d\t",sum);
			k=sum + sum1;
			sum = sum1;
			sum1 = k;

		}
		printf("\n");
		

	}
}

