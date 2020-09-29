
#include <stdio.h>

void main() {

    int num;
    printf("Enter number:");
    scanf("%d",&num);
    int a=num,rem,count=0;
    while(a!=0)
    {
        rem=a%10;
        count++;
        a=a/10;
    }
    int Array[count];
    a=num;
    for(int i=count-1 ; i>=0 ; i--)
    {        
            rem=a%10;
            Array[i]=rem;
            a=a/10;
        
    }
    printf("Elements in Array:\n");
   int count1=0;
    for(int i=0 ; i<count ; i++)
    {
        printf("|%d| ",Array[i]);
        if(Array[i]!=0)
        {
            count1++;
        }
    }
    printf("\n");
    printf("Numbers Trailing from zero:%d\n",count1);
}
