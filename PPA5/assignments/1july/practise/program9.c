#include <stdio.h>

void main() { 
	 
	float s1 , s2 , s3 ,a , b, c;
	
	printf("enter the sides:");

	scanf("%f%f%f",&s1,&s2,&s3) ;

	a = s2 + s3 ;
	b = s3 + s1 ;
	c = s1 + s2 ;
	
	if((( s1 > s2 > s3) && (s1 < (a))) || ((s2 > s3 > s1) && (s2 <( b))) || ((s3 > s2 > s1) && (s3 <( c)))||(( s1 > s3 > s2) && (s1 <( a))) || ((s2 > s1 > s3) && (s2 <( b))) || ((s3 > s1 > s2) && (s3 < (c)))) 
		printf("triangle is valid\n") ;
	
	else
		printf("triangle is not valid\n") ;
		
}
