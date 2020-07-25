
#include <stdio.h>

void main() {

	int a = 8 , b = 9 , ans = 0 ;
	
	ans= (a > b || a++) && (++b && a<b); 
	printf("a = %d b= %d ans= %d \n " , a, b,ans);

}


