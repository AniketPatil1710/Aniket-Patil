//WAP a program to take salary of employee from year 2015 to 2017 in an array from user to enter year which year's salary he wants to display it accordingly using arithmatic pointer. Hint. Store the first value of the array into a pointter then transeverse into the array using that using that pointer:

//Input1: 
//10000.00 20000.00 30000.00
//40000.00 50000.00 60000.00
//Assume first salary is of year 2015, second of 2016 and so on.
//Input:2017
//Output:30000.00

#include<stdio.h>

void main()
{
    int array[3];
    printf("enter the salary of three year:\n");
    int *iptr=array;
    for(int i=0;i<3;i++)
    {
        scanf("%d",&array[i]);
    }
    int k;
    printf("Which year slary you want:");
    scanf("%d",&k);
    
    switch(k)
    {
        case 2015:
            printf("salary is:%d\n",*iptr);
            break;

        case 2016:
            printf("Salary is:%d\n",*(iptr+1));
            break;

        case 2017:
            printf("Salary is:%d\n",*(iptr+2));
            break;
    }
}
