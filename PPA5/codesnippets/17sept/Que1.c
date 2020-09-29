

#include <stdio.h>

void main() {

    int a[5]={5,1,15,20,25};
    int i,j,m;
    i=++a[1];
    j=a[1]++;
    m=a[i++];

    printf("%d %d %d\n",i,j,m);
}
/*
A.2,1,15
B)1,2,5
c)3,2,15
D)2,3,20
*/

/*

