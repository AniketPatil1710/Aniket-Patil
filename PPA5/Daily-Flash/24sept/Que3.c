

#include<stdio.h>
void main()
{
    int const i=10;
    int j=20;
    int const *ptr=&i;
    printf("ptr:%d\n",*ptr);
    *ptr=100;
    ptr=&j;
    printf("ptr:%d\n",*ptr);

}
