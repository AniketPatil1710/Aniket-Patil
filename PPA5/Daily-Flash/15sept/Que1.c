
#include <stdio.h>

void main() {
    
    int num;
//integer array
    printf("Enter number of elements(integer array):");
    scanf("%d",&num);

    int iArray[num];
    printf("Enter num in Array:\n");

    for(int i=0 ; i<num ; i++)
    {
        scanf("%d",&iArray[i]);
    }
    printf("Print numbers in array:\n");
    for(int i=0 ; i<num ; i++)
    {
        printf("%d\n",iArray[i]);
    }
     printf("size of integer array:%ld\n\n",sizeof(iArray));
//character array
     printf("Enter number of characters(character array):");
     scanf("%d",&num);
 
      char cArray[num];
      printf("Enter characters in Array:\n");
 
      for(int i=0 ; i<num ; i++)
      {
          scanf("%c",&cArray[i]);
      }
      printf("Print numbers in array:\n");
      for(int i=0 ; i<num ; i++)
      {
          printf("%c\n",cArray[i]);
      }
       printf("size of integer array:%ld\n\n",sizeof(cArray));
//float array
     printf("Enter number of elements(float array):");
     scanf("%d",&num);
 
     float fArray[num];
     printf("Enter characters in Array:\n");
 
      for(int i=0 ; i<num ; i++)
      {
          scanf("%f",&fArray[i]);
      }
      printf("Print numbers in array:\n");
      for(int i=0 ; i<num ; i++)
      {
          printf("%f\n",fArray[i]);
      }
       printf("size of integer array:%ld\n",sizeof(fArray));

}
