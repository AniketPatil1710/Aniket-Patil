

#include<stdio.h>
void main()
{
    int num1, num2,pow=1 ;

    char ch;
    
    printf("enter the num1:\n");
    
    scanf("%d",&num1);
    
    printf("enter the num2:\n");
    
    scanf("%d",&num2);
    
    int *pnum1=&num1 , *pnum2=&num2;
    
    printf("enter operation:\n");

    scanf(" %c",&ch);

    switch(ch)
    {
        case '+' :
            printf("%d + %d = %d\n",*pnum1,*pnum2,*pnum1+*pnum2);
            break;

        case '-' :
            printf("%d - %d = %d\n",*pnum1,*pnum2,*pnum1-*pnum2);
            break;

        case '*' :
            printf("%d * %d = %d\n",*pnum1,*pnum2,(*pnum1)*(*pnum2));
            break;

        case '/' :
            printf("%d / %d = %d\n",*pnum1,*pnum2,(*pnum1)/(*pnum2));
            break;

        case '^' :
            for(int i=1;i<=*pnum2;i++)
            {
                pow = (*pnum1)*pow;
            }
            printf("%d ^ %d = %d\n",*pnum1,*pnum2,pow);
            break;
    }
    

}
