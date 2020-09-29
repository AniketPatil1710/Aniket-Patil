

#include <stdio.h>

void main() {

        static int arr[2] = {0,1};

        printf("%d %d\n",arr[-1],arr[3]);
}
/*
a)1 1
b)0 0
c)garbage value
d)0 1
*/
