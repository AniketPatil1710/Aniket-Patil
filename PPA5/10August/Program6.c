

#include <stdio.h>

void main() {

	int rows , i , j , k=0 , a , space ;
	printf("Enter Rows:");
	scanf("%d",&rows);

	for(i=0;i<=rows;i++)
	{
		a=k;
		for(j=0;j<=i;j++)
		{
			if(j==0 || i==0)
			{
				printf("%d",a*a);
			}
			else
			{
				printf("\n");
				for(space=1;space<=i;space++)
				{
					printf(" ");
				}
				printf("%d",a+i);
			}
		}
		k=k+1;
		
	}


}
