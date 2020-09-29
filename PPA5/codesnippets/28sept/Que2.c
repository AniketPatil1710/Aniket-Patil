
#include <stdio.h>

void main() {

        int i=2,j=5;

        int arr[10]={1,2,3,4,5,6,7,8,9,10};

        printf("%d ",arr[4]);
        printf("%d ",arr[i]);
        printf("%d ",arr[j]);
        printf("%d ",arr[i*i*i]);
        printf("%d ",arr[2*j-1]);
        printf("%d ",arr[j*2/2]);
        printf("%d ",arr[4%i]);
}
/*
a)4 2 5 8 9 5 0
b)5 3 6 9 10 6 1
c)Compilation time error
d)none of the above
*/
