
#include <stdio.h>

void main() {
    
    int i, arr[8]={1,2,3,4,5,6,7,8};

    for(i=7 ; i>=0 ; i--)
    {
        printf("%d\t",--arr[--i]);
    }
}
/*
a)6 4 2 0
b)5 3 3 1
c)6 5 4 3 2 1 0
d)compile time error
*/
