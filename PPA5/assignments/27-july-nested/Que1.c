

# include<stdio.h>
void main()
{

	int i , j, k=1 , a, rows , space ;
	printf("No of rows:");
	scanf("%d",&rows);
	for(i=0;i<=rows ; i++)
	{
		for(space=1;space<=(5-i);space++)
		{
			printf(" ");
		}
		a=k;
		for(j=0;j<=i;j++)
		{
			printf("%d",a);
			a--;

		}
		k++;
		printf("\n");
	}

}
