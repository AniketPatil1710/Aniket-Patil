
#include <stdio.h>

void main() {

	int point1 , point2, point3, point4, point5;

	int val ;
	printf("Points for point1, point2, point3,point4,point5\n");
	scanf("%d,%d,%d,%d,%d",&point1,&point2,&point3,&point4,&point5);
	val=point1 + point2 + point3 + point4 + point5 ;
	printf("%f\n",val);

}
//giving data from keyboard 5 6 7 8 9
//in scanf() function we prefered that don't write anything else excepting format specifier because 
//of comma code gives undefined behavour
//and print garbage value eg.0.000000
//we use %f format secifier to print val, it gives flaot value.
