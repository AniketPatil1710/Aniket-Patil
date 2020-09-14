
#include<stdio.h>

void main() {
    
    int Array[5];

    printf("Enter numbers in array:\n");

    for(int i=0 ; i<5 ; i++)
    {
        scanf("%d",&Array[i]);
    }
    
    int Fact[5];
    printf("Printing element in first array:\n");
    for(int i=0 ; i<5 ;i++)
    {
        int fact=1;
        for(int j=1 ; j<=Array[i] ; j++)
        {
            fact=fact*j;
        }
        Fact[i]=fact;
        printf("%d\n",Array[i]);
    }
    
    printf("Printing elements in second array:\n");
    for(int i=0 ; i<5 ; i++)
    {
        printf("%d\n",Fact[i]);
    }

}
