#include <stdio.h>

void main() {
    
    // declare an array of any size and a variable for counting the char in array
    int arr[100],count=0;
    
    printf("Enter the Characters : ");
    
    for(int i=0;;) {
        
        char a;                         // extra variable for accepting char
        scanf("%c",&a);
        
        if(a=='\n') {                   // condition for accepting input till '\n'
            break;
        }
        
        if((a>=65&&a<=90) || (a>=97&&a<=122)) {       // condition for accepting only characters
            arr[i] = a;                             			// put that char into our array
            count++;                                			// increment the counter for the size of an array
            i++;                                    			// increment the loop counter
        }   
    }

    // print the entered array
    for(int i=0;i<count;i++) {
        
        printf("%c ",arr[i]);
    }
}

