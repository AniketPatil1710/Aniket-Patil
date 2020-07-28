#include <stdio.h>
#include <math.h>

void main() {

	int i=1, a , b , c , sum;

	while(i<=500 && i>=100)
	{
		a= i%10;
		b=a%10;
		c=b%10;
		sum= (pow(a,3))+(pow(b,3))+(pow(c,3));
		if(sum==i)
			printf("%d",i);
		else
			continue;
	
	
	}
}
