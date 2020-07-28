#include <stdio.h>
#include <math.h>

void main(){
	int i,p,q,c,n,a ;
	float b, r;
	for(i=1 ; i<=10 ; i++)
	{
	printf("%d)enter principal amount:\n",i);
	scanf("%d",&p);
	printf("enter no.of years:\n");
	scanf("%d",&n);
	printf("enter no. of time per year:\n");
	scanf("%d",&q);
	printf("enter rate of interest:\n");
	scanf("%f",&r);
	
	b = 1 + (r/q);
	c = n*q ;
	a = p*(pow(b,c));
				
	printf("%d)final amount:%d\n",i,a);

	}
}

