
#include<stdio.h>

void main() {

    int num ;

    printf("Enter elements:");
    scanf("%d",&num);

    int Array[num];
    printf("Enter elements:\n");
    for(int i=0 ; i<num ; i++)
    {
        scanf("%d",&Array[i]);
    }
    
    printf("Palindrome numbers :\n");    
    for(int i=0 ; i<num ; i++)
    {
        int rem,k=1;
        int sum=0;
        int num1=Array[i];
        while(num1!=0)
        {
            rem=num1%10;
            sum=rem+(k*sum);
            k=k*10;
            num1=num1/10;
        }
        if(sum==Array[i])
        {
          printf("%d\n",Array[i]);
        }
    }
}
