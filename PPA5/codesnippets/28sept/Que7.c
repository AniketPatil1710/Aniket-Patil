
#include <stdio.h>

void main() {
    
    int i=0,sum=0,arr[6]={4,2,6,0,5,10};

    while(arr[i]){
        sum=sum+arr[i];
        i++;
    }
    printf("sum=%d\n",sum);

}
/*
a)sum=27
b)sum=12
c)compile time error
d)sum=6
*/
