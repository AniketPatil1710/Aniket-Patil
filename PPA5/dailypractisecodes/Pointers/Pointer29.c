

#include <stdio.h>

void main() {
    int a=10;
    int b=20;
    int c=30;
    int arr1[]={10,20,30,40,50};//100   104   108  112 116

    int arr2[]={60,70,80};//120  124  128

    int arr3[]={20,40,60};

    int *iptr1= arr1;
    int *iptr2=&arr1;
    int *iptr3=arr2;
    int *iptr4=arr3;
    
    printf("%p\n",&a);//92
    printf("%p\n",&b);//96
    printf("%p\n",&c);
    printf("%p\n",iptr1);//100
    printf("%p\n",iptr2);//100
    printf("%p\n",iptr3);//120
    printf("%p\n",iptr4);
}
//100  104  108  112  116
//94  98  102 105
