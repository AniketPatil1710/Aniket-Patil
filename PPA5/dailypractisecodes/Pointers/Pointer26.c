//comparison of two pointer


#include <stdio.h>

void main() {

    float farr[] = {10.5 , 20.5, 30.5 , 40.5 , 50.5};
                  //100    104   108    112     116
    float *fptr1=&(farr[2]);

    float *fptr2=&(farr[4]); 
//comparison operators return boolian

    int a= (fptr1==fptr2);  //0

    int b= (fptr1!=fptr2);  //1
 
    int c= (fptr1<=fptr2);  //1

    int d= (fptr1>=fptr2);  //0

    printf("%d\n",a);
    printf("%d\n",b);
    printf("%d\n",c);
    printf("%d\n",d);

}
