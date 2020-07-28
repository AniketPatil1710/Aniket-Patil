

#include <stdio.h>

void main() {

	int n , sum=0 ;

	printf("total no of people:");
	scanf("%d",&n);
	n=n-1;


	while(n>=1)
	{
		sum=sum+n;
		n--;
	}
	printf("Total number of Handshake %d\n",sum);
}
