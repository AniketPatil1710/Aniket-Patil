
#include <stdio.h>

void main() {
    
    int Array[6] ;
    int max=0 ;
    printf("Enter numbers:\n");

    for(int i=0 ; i<6 ; i++)
    {
        scanf("%d",&Array[i]);
    }
    printf("Printing numbers in array:\n");
    for(int i=0 ; i<6 ; i++)
    {
        if(Array[i]%2==0)
            Array[i]=(Array[i]*Array[i]);

        printf("%d\n",Array[i]);
        if(Array[i]>max)
            max=Array[i];
    }
    if(max%2==0)
    {
        for(int i=1 ; i<=max ; i++)
        {
                if(i*i==max)
                    max=i;
        }
    }
    printf("Biggest number in array:%d\n",max);
}
