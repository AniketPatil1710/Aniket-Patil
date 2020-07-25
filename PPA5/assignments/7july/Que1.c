#include <stdio.h>

void main() {

	int i = 10 , j = 10 , k ;

	k = ++i + j++ ;// i pre incremented return i=i+1 ,and j post incremented so temporary value of j is 10 so k = 11 +10

	printf("%d , %d , %d \n" , i , j , k) ;

}
