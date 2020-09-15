
#include <stdio.h>

void main() {
    
    int num ;

    printf("Enter number of element:");
    scanf("%d",&num);

    int iArray[num];

    for(int i=0 ; i<num ; i++)
    {
        scanf("%d",&iArray[i]);
    }
    int rem;
    int num1=0,num2 ;
    printf("printdigits in array:\n");
    for(int i=0 ; i<num ; i++)
    {
        num2=iArray[i];
        printf("%d\n",iArray[i]);
        while(num2!=0)
        {
            rem=num2%10 ;
            if(rem==1)
            {
              num1++;  
            }
            num2=num2/10;
        }
    }
    printf("Occurance of digit 1 as array:%d\n",num1);
}
