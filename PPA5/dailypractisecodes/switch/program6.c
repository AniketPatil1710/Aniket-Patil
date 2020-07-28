#include <stdio.h>

void main()
{
	int num,choice,fact,n;
	printf("enter the number:\n");
	scanf("%d",&num);
	printf("enter your choice:\n");
	scanf("%d",&choice);

	switch(choice)
	{
		case 1:
			
			fact=1;
			for(num;num>=1;num--)
			{
				fact=num*fact;
			}
			printf("%d\n",fact);
			break;

		case 2:
			if(num%2==0)
				printf("%d is even number\n",num);
			else
				printf("%d is odd number\n",num);

			break;

		case 3:
			if(num==1)
				printf("1 is not prime number\n");
			else if(num==2)
				printf("2 is a prime number\n");
			else if(num>2)
				for(n=2;n<=num-1;n++)
				{
				
					if(num%n==0)
					{
			
					   printf("%d is not prime number\n",num);
					   break;
					}

					else{
						printf("%d is a  prime number\n",num);
						break;
					}
			}

			break;




		case 4:
			printf("exit\n");
	}


		



}
