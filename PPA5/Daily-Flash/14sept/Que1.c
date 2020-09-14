
#include<stdio.h>

void main() {
    
    int num;

    printf("Enter elements in array:");
    scanf("%d",&num);
    int Array[num];

    printf("Enter elements:\n");
    for(int i=0 ; i<num ; i++)
    {
        scanf("%d",&Array[i]);
    }
    int count;
    count=sizeof(Array)/sizeof(int);
    printf("Size of Array:%ld\n",sizeof(Array));
    printf("Element in array:%d\n",count);


}
