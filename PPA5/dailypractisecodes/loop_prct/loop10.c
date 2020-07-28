//Armstrong number from 1 to 500
#include <stdio.h>


void main() {

	int i , rem, s ,sum ;

	

	for(i=1; i<=500;i++)
	{
		s=i;	
		sum =0;
		
		while(s!=0){
			rem= s%10;
			sum= sum + (rem*rem*rem);
			s=s/10;
		}
			
	
	
		
		if(sum==i)
		  	printf("%d\n",i);	
	}
		
}

