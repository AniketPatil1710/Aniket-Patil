
#include <stdio.h>

void main() {

	int i , j, rows,k;

	printf("Enter Rows:");
	scanf("%d",&rows);
	k=((rows*2)-2);

	for(i=0;i<=(rows-1);i++)
	{
		for(j=0;j<=k;j++)
		{
			if(j%2==0)
			{
				printf("%d",i*2);
			}
			else if(j<k)
			{
				printf(" ");
			}
			else if(j%2==1)
			{
				printf("%d",i*j);
			}
		}
		printf("\n");
	}



}
