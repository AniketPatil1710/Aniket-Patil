

#include <stdio.h>

void main() {

    int size;
    
    printf("Enter size of array you want:");
    scanf("%d",&size);

    int Array[size];
    printf("Enter number in array:\n");

    for(int i=0 ; i<size ; i++)
    {
        scanf("%d",&Array[i]);
    }
    for(int i=0 ; i<size ;i++)
    {
        for(int j=i+1 ; j<size ; j++)
        {
            int temp;
            if(Array[i]<Array[j])
            {
                temp=Array[i];
                Array[i]=Array[j];
                Array[j]=temp;
            }
        }
    }
    printf("First Largest: %d\n",Array[0]);
    printf("Second Largest: %d\n",Array[1]);
}
