
#include <stdio.h>

void main() {

    int num ;
    printf("Enter element number:");
    scanf("%d",&num);

    int Array[num];
    printf("Enter elements:\n");

    for(int i=0 ; i<num ; i++)
    {
        scanf("%d",&Array[i]);
    }
    int j=num-1;
    int rem1,rem2,num1,num2;
    printf("Print modified array:\n");
    for(int i=0 ; i<=((num-1)/2) ; i++)
    {
        
        int sum1=0,sum2=0; 
        num1= Array[i];
        while(num1!=0)
        {   
        int fact1=1;
            rem1=num1%10;
            for(int r=1; r<=rem1 ; r++)
            {
                fact1=fact1*r;
            }
            sum1=sum1+fact1;
            num1=num1/10;
        }
        num2= Array[j];
    
        while(num2!=0)
        {
            int fact2=1;
            rem2=num2%10;
            for(int r=1; r<=rem2 ; r++)
            {
                fact2=fact2*r;
            }
            sum2=sum2+fact2;
            num2=num2/10;
        }
        int k,t;
        if(Array[i]==sum1 && Array[j]==sum2)
        {
            k=Array[j];
            t=Array[i];
            Array[i]=k;
            Array[j]=t;
        }

        j--;
    }
    for(int i=0; i<num ; i++)
    {
        printf("%d\n",Array[i]);
    }
}
