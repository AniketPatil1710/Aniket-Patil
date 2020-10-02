//write a program that tells user to take char in an array and print the element such that the vowel should be printed in a Upper case and consonents in a lower case .
//Note:Access the array elements usinf pointers, Hint:*(arr+0)

#include <stdio.h>

void main()
{
    int size;
    printf("enter the length oof an array:\n");
    scanf("%d",&size);

    char array[size];
    char *cptr=array;
    printf("enter the elements in an array:\n");

    for(int i=0;i<size;i++)
    {
        scanf(" %c",(array+i));
    }
    for(int i=0;i<size;i++)
    {
        if(*(array+i)=='A'||*(array+i)=='E'||*(array+i)=='I'||*(array+i)=='O'||*(array+i)=='U'||
             *(array+i)=='a'||*(array+i)=='e'||*(array+i)=='i'||*(array+i)=='o'||*(array+i)=='u')
        {
                if(*(array+i)>=97 && *(array+i)<=122)
                {
                    *(array+i)=*(array+i)-32;
                }
        }
        else
        {
            if(*(array+i)>=65 && *(array+i)<=90)
            {
            *(array+i)=*(array+i)+32;
            }
        }
    }
    printf("printing new array:\n");
    for(int i=0;i<size;i++)
    {
        printf("|%c| ",*(array+i));
    }
    printf("\n");

}
