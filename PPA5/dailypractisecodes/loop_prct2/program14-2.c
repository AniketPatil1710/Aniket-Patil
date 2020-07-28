#include <stdio.h>
void main()
{
	int dec,i,a[32],rem;
	printf("enter the decimal number:\n");
	scanf("%d",&dec);
	for(i=0 ;dec>0 ;i++ )
	{
		rem=dec%2;
		a[i]=rem;
		
		dec=dec/2;
	}
	for(i=i-1;i>=0;i--)
		printf("%d",a[i]);
		printf("\n");

}

