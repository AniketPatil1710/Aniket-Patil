
#include <stdio.h>

void main() {
    
    int arr[4]={2,4,8,16},i=4,j;

    while(i){
        j= arr[i] +i ;
        i--;
    }
    printf("j=%d\n",j);
}
/*
a)j=19
b)j=20
c)copile time error
d)j=5
*/
