
#include <stdio.h>

//Assume base address of array 100 the output will be
void main() {
        
    int core2web[3];

    printf("%d %d\n",core2web+1,&core2web+1);

}
/*
a)104 104
b)104 108
c)Error
d)104 116
*/
