//decimal to octal conversion
#include <stdio.h>
#include <math.h>

void main() {

	int dec , i , sum=0 ,  j[32], k , rem1 , rem2 ;

	printf("Enter  decimal number:");
	scanf("%d",&dec);
	printf("Octal conversion is:");

	for(k=0;dec>0;k++)
	{
		rem1=dec%8;
		j[k]=rem1;
		dec=dec/8;
	}
	for(k=k-1;k>=0;k--)
		printf("%d",j[k]);
		printf("\n");
}
