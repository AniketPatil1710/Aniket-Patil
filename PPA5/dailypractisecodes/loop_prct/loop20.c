#include <stdio.h>

void main() {

	int a,i,ans ;
	printf("enter the value of a :\n");
	scanf("%d",&a);
	for( i=1 ; i<=10 ; i++)
	{
		ans = a*i;
		printf("%d * %d = %d\n",a,i,ans);
	}

}
