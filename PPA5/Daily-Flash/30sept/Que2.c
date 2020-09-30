
//Write a program to take integer,character,float array of of 5 elements from user and store their address into respective data type of pointer and perform pointer arithmatic (Addition, Substraction) with 1 and explin output

#include <stdio.h>

void main()
{
    int array[5];
    float array1[5];
    char array2[5];

    
        printf("Enter element in int arra:\n");
        for(int j=0 ; j<5 ; j++)
        {
        scanf("%d",&array[j]);
        }
        printf("\n");
        printf("Enter element in float array:\n");
        for(int j=0 ; j<5 ; j++)
        {
        scanf("%f",&array1[j]);
        }
        printf("\n");
        printf("enter element in char array:\n");
        for(int j=0 ; j<5 ; j++)
        {
        scanf(" %c",&array2[j]);
        }
        printf("\n");
    

    int *iptr = array;//100
    float *fptr = array1;//200
    char *cptr = array2;//300

    iptr = iptr+1;//iptr = 100+1*4 =104=> *iptr = element at 1st index

    fptr = fptr+1;//fptr = 200+1*4 =204=>*fptr = element of 1st index in float array
    cptr = cptr+1;// cptr = 300+1*1=301=>cptr = element of 1st index in char array

    printf("%d\n",*iptr);
    printf("%f\n",*fptr);
    printf("%c\n",*cptr);

    iptr=&array[4];//116
    fptr=&array1[4];//216
    cptr=&array2[4];//304

    iptr=iptr-1;//iptr=116-1*4=112 => *iptr=3rd index
    fptr=fptr-1;//fptr=216-1*4=212 => *fptr=3rd index
    cptr=cptr-1;//cptr=304-1*1=303 => *cptr=3rd index

    
    printf("%d\n",*iptr);
    printf("%f\n",*fptr);
    printf("%c\n",*cptr);


    
}
