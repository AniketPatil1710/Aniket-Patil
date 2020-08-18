
#include <stdio.h>

void main() {

	int i , j , rows,k ;
	printf("Enter Rows:");
	scanf("%d",&rows);

	for(i=0 ; i<=rows-1 ; i++)
	{
		for(j=0;j<=rows;j++)
		{
			if(i==0)
			{
				printf("%d",j*j);
			}
			else if(j<i){
				printf(" ");
			}
			else
			{
				printf("%d",(i+j)*j);
			}
			
			
					
					
		}
		printf("\n");
	}
}
