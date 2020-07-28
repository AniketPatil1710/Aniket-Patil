//number which has exactly 9 divisor  between user's given range
#include <stdio.h>

void main() {

	int start , end , cnt1 , cnt2=0, i,j;

	printf("Enter starting integer:");
	scanf("%d",&start);

	printf("Ending enteger:");
	scanf("%d",&end);

	for(i=start;i<=end;i++)

	{
		cnt1=0;
		printf("%d:",i);
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
			{
				cnt1++;
				printf("%d\n",j);
			}
			
		}
		if(cnt1==9)
		{
			cnt2++;
		 printf("%d\n",i);
		}
	}
	printf("total no which has 9 divisors:%d\n",cnt2);
	
}
