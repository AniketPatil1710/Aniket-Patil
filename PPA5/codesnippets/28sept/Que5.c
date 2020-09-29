
#include <stdio.h>

void main() {
    
    int local_arr[5]={10,11};

    for(int i=0 ; i<5 ; i++)
    {
        printf("%d ",loacal_arr[i]);
    }
}
/*
(gv=garbage value)
a)10 11 garbagevalue gv gv gv 
b)0 0 0 10 11
c)compile time error
d)10 11 0 0 0
*/
