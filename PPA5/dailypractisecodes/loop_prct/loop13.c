#include <stdio.h>

void main() {

	int i , p , positive=0 , negative=0 , zero=0 ;// i is number taken by user
	char ch ;// whenever user wants to stop the loop he/she should press 'n' button

	for(p=1;;p++)
	{

		printf("Enter number:\n") ;
		scanf("%d",&i);
		

		if(i<0)
			negative = negative +1 ;
	

		 if(i>0)
			positive = positive +1 ;

		 if(i==0)
			zero = zero +1 ;
		
		printf("Are you want to continue?\n choose y/n\n");//y for continue and n for stop
		scanf(" %c",&ch);
		
		if(ch=='n'){
			break;
		}

	}
		printf("negative numbers is%d\n",negative);
		printf("positive numbers is %d\n",positive);
		printf("no. of zeros is%d\n",zero);

}
