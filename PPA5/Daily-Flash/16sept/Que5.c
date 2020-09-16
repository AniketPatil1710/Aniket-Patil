
#include <stdio.h>

void main() {

    int size ;
    printf("Enter Size of Array:");
    scanf("%d",&size);

    int Array1[size];
    
    printf("Enter numbers in Array:\n");
    for(int i=0 ; i<size ; i++)
    {
        scanf("%d",&Array1[i]);
    }
    printf("Numbers in least:\n");
    for(int i=0 ; i<size ; i++)
    {
        printf("%d ",Array1[i]);
    }
    printf("\n");
    int j=0;

    int rem,num;
    for(int i=0 ; i<size ; i++)
    {
          num=Array1[i];
          int sum=0;
          while(num!=0)
          {
             rem=num%10;
             sum=sum+(rem*rem*rem);
              num=num/10;
         }
          if(Array1[i]==sum)
         {
              
              j++;
         }
        }

    int Array2[j];
    int k=0;
    
    for(int i=0 ; i<size ; i++)
      {   
          num=Array1[i];   
          int sum=0;
          while(num!=0)
          {
              rem=num%10;
              sum=sum+(rem*rem*rem);
              num=num/10;
          }
          if(Array1[i]==sum)
          {
              Array2[k]=Array1[i];
              k++;
          }
        }

    for(int i=0 ; i<j ;i++)
    {
        int temp;
        for(int j=i+1 ; i<j ; i++)
        {
            if(Array2[i]>Array2[j])
            {
               temp=Array2[i];
               Array2[i]=Array2[j];
               Array2[j]=temp;
            }
        }
        
    }
    printf("Sorted Armstrong numbers in Array:\n");
    for(int i=0 ; i<j ; i++)
    {
        printf("%d ",Array2[i]);
    }
    printf("\n");

}
