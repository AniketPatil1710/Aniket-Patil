//binary to octal conversion
#include <stdio.h>
#include <math.h>
void main()
{
	int bin,rem,i,j[32],sum=0,rem2,k;
	printf("enter the binary number:\n");
	scanf("%d",&bin);
	for(i=0;bin>0;i++)
	{
		rem=bin%10;
		sum=sum+(rem*pow(2,i));
		bin=bin/10;
	}

	for(k=0;sum>0;k++)
	{
		rem2=sum%8;
		j[k]=rem2;
		sum=sum/8;
	}
	for(k=k-1;k>=0;k--)
		printf("%d",j[k]);
	printf("\n");
}

