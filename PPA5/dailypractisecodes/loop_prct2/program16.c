//octal to binary conversion
#include <stdio.h>
#include <math.h>

void main() {

	int oct , i , sum=0 ,  j[32], k , rem1 , rem2 ;

	printf("enter the octal number:\n");
	scanf("%d",&oct);
	printf("Binary number is:");
	for(i=0;oct>0;i++)
	{
		rem1=oct%10;
		sum=sum + (rem1*pow(8,i));
		oct=oct/10;
	}
	for(k=0;sum>0;k++)
	{
		rem2=sum%2;
		j[k]=rem2;
		sum=sum/2;
	}
	for(k=k-1;k>=0;k--)
		printf("%d",j[k]);
		printf("\n");
}
