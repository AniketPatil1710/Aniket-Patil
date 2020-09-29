//Increment operator on pointer 
// ++a=> pre increment a++ =>post increment

#include <stdio.h>

void main() {
    
    int arr[] = {10,20,30,40,50} ; //100 104 108 112 116

    int *iptr=&(arr[1]);

    printf("%d\n",*iptr);//20

    int *ansptr= iptr++ ; //post increment
    //ansptr=104
    // ++iptr= iptr+1;
    //   iptr=104+1(4)=108      
    //     
    //  
    printf("%p\n",ansptr);//108address
    printf("%d\n",*ansptr);//20
    printf("%d\n",*iptr);//30
    
}
