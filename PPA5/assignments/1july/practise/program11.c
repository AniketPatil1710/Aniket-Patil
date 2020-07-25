#include <stdio.h>
void main(){
	
	float Hrs ;

	printf("Time taken by the worker to complete the particular job:") ;

	scanf("%f",&Hrs) ;

	if( Hrs >= 2 && Hrs<=3)
		printf("highly efficient\n") ;

	else if( Hrs >=3 && Hrs <= 4)
		printf("need to improve speed\n");

	else if( Hrs >=4 && Hrs <= 5)
		printf("training will be given to improve speed\n") ;

	else
		printf("you will leave the job right now\n") ;

}

