# include <stdio.h>
void main()
{
	int i , j, space , k;
	for(i=1;i<=5;i++)
	{
		for(space=1;space<=(5-i);space++)
		{
			printf(" ");
		}
		k=97;
		for(j=1;j<=i;j++)
		{
			printf("%c",k);
			k++;
		}
		printf("\n");
	}
}
