#include <stdio.h>
#include <math.h>

int main() {

	int a , i;
 	 double b , s ;
	 double c , ans ;
	//s=0 ;

	printf("enter the value of a:\n");
	
	scanf("%d",&a) ;

	int k=8;

	//b = (a - 1)/a;

	
	for(i=2;i<k;i++){
		s=0;

	//	c = pow(b,i) ;
		
		s = s + (1/2)*(pow(((a-1)/a),i)) ;

	}
	ans = b + s;

	printf("Ans=%lf\n",ans);
}
