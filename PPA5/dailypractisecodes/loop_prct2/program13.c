//decimal to binary
#include <stdio.h>
#include <math.h>

void main()  {

	int bin ,i, a , b ,sum=0;
	printf("enter the binary number:\n");
	scanf("%d",&bin);
	printf("Binary number is:");


	

	

	for(i=0;bin!=0;i++)
		
		{
			a=bin%10;
			sum = sum + ((a)*pow(2,i));
			bin=bin/10;
			
		}
		printf("%d\n",sum);

	

}

