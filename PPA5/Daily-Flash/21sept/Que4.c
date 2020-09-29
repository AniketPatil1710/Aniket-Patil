

#include<stdio.h>

void main()
{
    int size;
    printf("enter the size of arrays:\n");
    scanf("%d",&size);

    int array1[size],array2[size],array3[size];
    printf("enter elements of an array1:\n");
    for(int i=0 ;i<size;i++)
    {
        scanf("%d",&array1[i]);
    }

    printf("enter the elements of array2[i]:\n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&array2[i]);
    }

    for(int i=0 ; i<size; i++)
    {
        if(array2[i]%array1[i]==0)
        {
            if(array1[i]>array2[i])
            {
                int fact=1;
                for(int j=1 ; j<=array1[i] ; j++)
                {
                     fact=fact*j;
                }
                array3[i]=fact;

            }
            else
            {
                int fact=1;
                  for(int j=1 ; j<=array2[i] ; j++)
                  {
                       fact=fact*j;
                  }
                  array3[i]=fact;
              
            }
        }
        else
        {
            if(array1[i]>array2[i])
            {
                array3[i]=array2[i];
            }
            else
            {
                array3[i]=array1[i];
            }
        }
            

    }
    printf("printing array3:\n");
    for(int i=0;i<size;i++)
    {
        printf("%d\n",array3[i]);
    }

}
