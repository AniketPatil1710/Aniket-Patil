
#include <stdio.h>
//Let the array begens with memory 1200
void main() {

        int arr[]={2,3,4,1,6};
        printf("%u,%u,%u\n",arr,&arr[0],&arr);
}

/*
A)1200,1202,1204
B)1200,1200,1200
C)1200,12034,1208
D)1200,1202,1200
*/
