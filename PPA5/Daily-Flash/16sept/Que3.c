
#include <stdio.h>

void main() {

    int array1[6]={23,11,34,73,56,42};
    int array2[7]={32,67,59,63,54,95,27};
    
    printf("Elements in array1:\n");
    for(int i=0 ; i<6; i++)
    {
        printf("%d\n",array1[i]);
    }
    for(int i=0 ; i<6 ; i++)
    {
        
        int temp;
        for(int j=0 ; j<6 ; j++)
        {   
            if(array1[i]>array1[j])
           { 
                temp=array1[i];
                array1[i]=array1[j];
                array1[j]=temp;
            }
        }
    }
    printf("Elements in array2:\n");
    for(int i=0 ; i<7 ; i++)
    {
        printf("%d\n",array2[i]);
    }
    for(int i=0 ; i<7 ; i++)
    {
        
         int temp;
         for(int j=0 ; j<7 ; j++)
        {
              if(array2[i]>array2[j])
           {
                temp=array2[i];
                array2[i]=array2[j];
                array2[j]=temp;
           }
        }
     }
    int array3[4];  
    array3[0]=array1[0];
    array3[1]=array1[5];
    array3[2]=array2[0];
    array3[3]=array2[6];
    printf("Print elements of Array3(min and max num of above two arrays):\n");
    for(int i=0 ; i<4 ; i++)
    {
        printf("%d\n",array3[i]);
    }
}
