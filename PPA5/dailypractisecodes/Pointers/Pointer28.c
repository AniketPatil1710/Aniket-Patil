
#include <stdio.h>

void main() {
    
    int arr1[5] = {10,20,30,40,50};//100 104 108 112 116

    int arr2[3] = {60,70,80};//120 124 128

    int *iptr1  = arr1 ; //we are about first index address 
//pehle ghar
  //  iptr1=arr1+1;  // *(iptr1)=20
// iptr1[104] //20
 //   printf("%d\n",*(iptr1));
  //  iptr1=iptr1+1; // *(iptr1)=30
 //   printf("%d\n",*(iptr1));i

    int *iptr2 = &arr1;// this is representing that address whole array
//get adress
    printf("%p\n",iptr1);//100
    printf("%p\n",iptr2);//100

    iptr2 = iptr2+1 ; 
    //iptr2=iptr2+sizeof(whole arrray)
    //iptr2=100 + 4*5 =100+20=120
    printf("%p\n",iptr2);//120
    printf("%d\n",*(iptr2));//60
}
