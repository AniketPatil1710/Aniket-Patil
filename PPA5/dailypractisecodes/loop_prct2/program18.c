//octal to decimal conversion

#include <stdio.h>
#include <math.h>

void main() {

	int oct,i,sum=0,rem;
	printf("enter the octal number:\n");
	scanf("%d",&oct);

	for(i=0;oct>0;i++)
	{
		rem=oct%10;
		sum=sum+(rem*pow(8,i));
		oct=oct/10;
	}
	printf("decimal number is:%d",sum);
	printf("\n");

}
