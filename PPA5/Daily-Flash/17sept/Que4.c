
#include <stdio.h>

void main() {
    
    char Array[255];

    int count=0;

    printf("Enter character in Array:\n");

    for(int i=0 ; ;)
    {   
        char ch;
        scanf("%c",&ch);
        if(ch=='\n')
        {
            break;
        }
        if((ch>=65 && ch<=65) || (ch>=90 && ch<=122))
        {
            Array[i]=ch;
            count++;
            i++;
        }
        
    }
    printf("Output:\n");

    for(int i=0 ; i<count ; i++)
    {
        printf("|%c| ",Array[i]);
    }
    printf("\n");
}
