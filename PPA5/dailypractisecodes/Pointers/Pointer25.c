// Decrement

#include <stdio.h>

void main() {
    
    int arr[] = {10,20,30,40,50} ;

    int *iptr1= &(arr[3]);

    int *result = iptr1--;
    //          =iptr1-1 //result=112
    //          =112-1*4
    //          =108

    printf("%d\n",*result);//30
    printf("%d\n",*iptr1);//30

}   
