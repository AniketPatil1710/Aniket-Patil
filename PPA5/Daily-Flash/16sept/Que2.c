
#include <stdio.h>

void main() {

    int size;

    printf("Enter size of array:");
    scanf("%d",&size);

    int Array1[size];

    printf("Enter numbers in array:\n");
    for(int i=0 ; i<size ; i++)
    {
        scanf("%d",&Array1[i]);
    }

    int *Array2[size];
    printf("Elements in Array1:\n");
    for(int i=0 ; i<size ; i++)
    {
        Array2[i]=&Array1[i];
        printf("%d\n",Array1[i]);
    }
    
    printf("Elements in Array2(Address of elements in Array1):\n");
    for(int i=0 ; i<size ; i++)
    {
        printf("%p\n",Array2[i]);

    }
}
