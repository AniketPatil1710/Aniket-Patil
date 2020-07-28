//roots of a quadratic equation
#include <stdio.h>
#include <math.h>
void main() {

	int a , b, c ;
	
	double ans,d ,root1,root2;
	printf("enter the coefficient of x^2:\n");
	scanf("%d",&a);
	printf("enter the coefficient of x :\n");
	scanf("%d",&b);
	printf("enter the constant value:\n");
	scanf("%d",&c);

	ans=pow(b,2)-(4*a*c);
	d = sqrt(ans);
	
	if(ans<0.0)
	{
	 printf("no roots exist in given quadratic equation\n");
	}

	else if(ans==0)
	{
		root1=-(b)/(2*a);
		printf("given equation has %.2lf and %.2lf roots " ,root1,root1);
	}
	else if(ans>0)
	{
		root1=((-(b)+d)/(2*a));
		root2=((-(b)-d)/(2*a));
		printf("given equation has two roots which are %.2lf and %.2lf\n",root1,root2);

	}



}
