

#include<stdio.h>
void main()
{
    int num;
    printf("enter the number:\n");
    scanf("%d",&num);

    int *iptr=&num;

    for(int i=1 ; i<=10 ; i++)
    {
        int ans;
        ans = (*iptr) * i ;
        printf("%d * %d = %d\n",num,i,ans);
    }

}
