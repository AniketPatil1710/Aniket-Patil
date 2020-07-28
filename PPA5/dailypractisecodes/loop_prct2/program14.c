//decimal to binary
#include <stdio.h>
#include<math.h>
void main()
{
	int dec,i,a,k=1,sum=0,b=0;
	printf("enter the decimal:\n");
	scanf("%d",&dec);
	printf("Decimal binary is:");
	
	
	while(dec!=0)
	{
		a=dec%2;
		b=b+(k*a);
		k=k*10;
		dec=dec/2;

	}
	printf("%d",b);
	printf("\n");
}


