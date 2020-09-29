
#include <stdio.h>

void main() {

    int num;
    printf("Enter number of elements:");
    scanf("%d",&num);

    int Array1[num];

    printf("Enter elements in array:\n");

    for(int i=0 ; i<num ; i++)
    {
        scanf("%d",&Array1[i]);
    }
//counting elements for Array2    
    int count=0;
    for(int i=0 ; i<num ; i++)
    {
      int count1=0;
        for(int j=1 ; j<=Array1[i] ; j++)
        {
            if(Array1[i]%j==0)
            {
                count1++;
            }
        }
        if(count1==2)
        {
            count++;
            
        }
    }
//filling Array2
    int Array2[count];
    int k=0;
    for(int i=0 ; i<num ; i++)
    {
      int  count1=0;
        for(int j=1 ; j<=Array1[i] ; j++)
        {
            if(Array1[i]%j==0)
            {
                count1++;
            }
        }
        if(count1==2)
        {
            Array2[k]=Array1[i];
            k++;
        }
    }
    //Removing elements from Array1
    for(int i=0 ; i<num ; i++)
    {
      int count1=0;
        for(int j=1 ; j<=Array1[i] ; j++)
        {
            if(Array1[i]%j==0)
            {
                count1++;
            }
        }
        if(count1==2)
        {
            for(int j=i ; j<num ; j++)
            {
                Array1[j]=Array1[j+1];
            }
            i--;
        }
    }
    num=num-count;
    printf("Printing Elements in Array1:\n");
    for(int i=0 ; i<num ; i++)
    {
        printf("%d\n",Array1[i]);
    }
    printf("Elements in second Array2:\n");
    for(int i=0; i<count ; i++)
    {
        printf("%d\n",Array2[i]);
    }

}
