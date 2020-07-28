#include <stdio.h>

void main()

{

    int c ,a=1 ,b  ,num , j; 

    printf("enter the value of c:");

    scanf("%d",&c);

    while(a<c)

    {

        if(a==1);

        else if(a==2)

        {

            b=c-a;

            if(b==1);

            else if(b==2)

            {

                printf("%d can be expressed as %d + %d\n",c,a,b);

                break;

            }

            else if(b>2){

            for(j=2;j<b;j++)

            {

                if(b%j==0)

                    break;

                else

                    {

                        printf("%d can be epressed as %d + %d\n",c,a,b);

                        break;

                    }

            }

            

            }

        }else if(a>2)

        {



        for(num=2;num<a;num++)

        {

            if(a%num==0)

                break;

            else

            {

                b= c-a ;

                if(b==1);

                else if(b==2)

                {

                    printf("%d can be expressed as %d + %d\n",c,a,b);

                    break;

                }

                else if(b>2){

                for(j=2;j<b;j++)

                {

                    if(b%j==0)

                        break;

                    else

                    {

                        printf("%d can be epressed as %d + %d\n",c,a,b);

                        break;

                    }

                    

                }

                }

            }

        }

        

        }

        a++;

        

    }

}
