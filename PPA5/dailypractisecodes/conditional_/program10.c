#include <stdio.h>

void main()
{
	int a , b , c ;
	
	scanf("%d%d%d",&a,&b,&c) ;


	if(a==b || b==c || c==a) 
		printf("trianle is isosceles") ;
	else if(a==b==c) 
		printf("triangle is equilateral") ;
	else if(((a**2)=((b**2)+(c**2))) || ((b**2)=((a**2)+(c**2))) || ((c**2)=((a**2)+(b**2))))
		printf("trianle is right angled triangle") ;
	else
		printf("triangle is scalene");


}


