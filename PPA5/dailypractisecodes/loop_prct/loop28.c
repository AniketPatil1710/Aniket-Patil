#include <stdio.h>
void main()
{
	float i, a=1, sum=0;
	for(i=1;i<=7;i++)
	{
		a=a*i;
		sum=sum + i/a;
	}
	printf("sum of first seven terms is %f\n",sum); 	


}

