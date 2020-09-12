

#include <stdio.h>

void main() {

	int start , end, rem ,i;

	printf("Enter star:");
	scanf("%d",&start);

	printf("Enter End:");
	scanf("%d",&end);

	for(i=start ; i<=end ; i++)
	{
		rem=i%10;

		if(rem==1)
		{
			printf("%d\t",i);
		}
	}
	printf("\n");

}
