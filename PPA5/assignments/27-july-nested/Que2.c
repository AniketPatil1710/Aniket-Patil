



# include <stdio.h>
void main()
{
	int i , j ,  k ,space, rows , fact;
	printf("No. of rows:");
	scanf("%d",&rows);
	for(i=1;i<=rows;i++)
	{
		for(space=1;space<=(5-i);space++)
		{
			printf(" ");

		}
		
		fact=1;
		for(j=1;j<=i;j++)
		{
			fact=fact*j;
			printf("%d",fact);
		
	
		}
		printf("\n");
	}
			
			
			
		
}
