#include <stdio.h>

void main(){

	int a,i,cnt=0;
	printf("enter the value of a:\n");
	scanf("%d",&a);

	for(i=2;i<a;i++)
	{
		

		if(a%i==0)
		{
			printf("%d is not a prime\n",a);
			break;

		}
	}
		
		
		
			printf("%d\n",a);
		
		
	
		
	
	
}
