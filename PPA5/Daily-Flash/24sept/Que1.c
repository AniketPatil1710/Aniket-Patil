

#include<stdio.h>
void main()
{
    int a=10;

    int *iptr=&a;

    printf("previous value :%d\n",*iptr);

    *iptr=20;

    printf("modified value: %d\n",*iptr);
    printf("size of variable : %ld\n",sizeof(a));
    printf("size of pointer :%ld\n",sizeof(iptr));

}
