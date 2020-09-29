

#include <stdio.h>

void main() {
    
    int arr[5]={5, 10,15,20,25};

    int i=5 , sum =0 ;

    while(i>=2){
        sum=sum+arr[--i];
    }
    printf("sum=%d\n",sum);
}
/*
a)sum=60
b)sum=70
c)sum=5
d)none of the above
*/
