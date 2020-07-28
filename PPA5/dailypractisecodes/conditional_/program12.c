#include <stdio.h>

void main()
{
	
	int A , B;
       
       	printf("enter the marks in subject A and B:\n");

	scanf("%d%d",&A,&B);

	if(A>=55 && B>=45)
		printf("pass\n");

        else if(A<=55 && B>=55 && A>=45)
		printf("then he will allowed to pass the exam\n");
		
	else if(B<=45 && A>=65)
		printf("he will allow to reappear for subject B\n");

	else
		printf("fail\n");	
}

