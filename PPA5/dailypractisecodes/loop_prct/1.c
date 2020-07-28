#include <stdio.h>

void main() {

	int a , n , b , num;

	for(n=1;n<=1000;n++)
	
	{
		num = n ;
		b=0;	
		

		while(num!=0)
		{
	
			a = num % 10;

			b = b + (a*a*a);

			
			num = num/10;
		}
		if(b==n)
			printf("%d\n",n);

		}
}
	


