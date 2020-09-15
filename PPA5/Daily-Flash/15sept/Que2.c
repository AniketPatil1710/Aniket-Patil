
#include <stdio.h>

void main(){
    
    int num ;

    printf("Enter number of elements in array:");
    scanf("%d",&num);

    char carray[num];
    printf("Enter the Uppercase characters in array:\n");
    for(int i=0 ; i<num ; i++)
    {
        scanf(" %c",&carray[i]);
    }
    
    int count;
    printf("Printing Smallcase characters:\n");

    for(int i=0 ; i<num ; i++)
    {
           count= carray[i]+32 ;
           carray[i]=count;
           printf("%c\n",carray[i]);
    }
}
