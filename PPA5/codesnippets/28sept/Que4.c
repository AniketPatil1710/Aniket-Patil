

#include <stdio.h>

int global_arr[5]; 

void main() {
    
    int local_arr[5];
    printf("local array:");
    for(int i=0 ; i<5 ; i++)
    {
        printf("%d",&local_arr[i]);
    }
    printf("Global array:");
    for(int i=0 ; i<5 ; i++)
    {
        printf("%d",global_arr[i]);
    }
    printf("\n");

}
/*
a)local array:689534 7844 7684 2233 74890 107999
  global array:0 0 0 0 0

b)local array:0 0 0 0 0
  global array:0 0 0 0 0

c)Error

d)None of the above

*/

