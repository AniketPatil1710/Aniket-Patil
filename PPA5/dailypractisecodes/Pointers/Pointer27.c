//Relation between pointer and array

#include <stdio.h>

void main() {

    int arr[] = {10,20,30,40,50} ;

    int *iptr = arr;
    //     0    1    2    3    4
    // arr [10] [20] [30] [40] [50] //arr==&(arr[0])

    printf("%d\n",arr[2]); // arr[2] => *(arr+2)

    for(int i=0 ; i<5 ; i++)
    {
        printf("%d\n",arr[i]);
    }

    // arr[0] => *(arr+0)

    for(int i=0 ; i<5 ; i++)
    {
            printf("%d\n",*(iptr+i));
    }

    for(int i=0 ; i<5 ; i++)
    {
        printf("%d\n",i[arr]);
    }
//arr[i]=*(arr+i)
//i[arr]=*(i+arr)
}
