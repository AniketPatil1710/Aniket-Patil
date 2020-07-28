#include <stdio.h>

void main() {

	int a ;

	printf("Enter the number:\n");

	scanf("%d",&a);

	int i=1 ;
	int f =1 ;

	while(i<=a || a<0){

		if(a>0) {

		f= i*f ;
		i++;
		
		} else if(a=0 || a<0) {

			printf("factorial is not possible\n");
	
		}
	}
	printf("factorial of given no:%d\n",f) ;
}
