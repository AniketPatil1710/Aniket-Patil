

#include <stdio.h>

void main() {

    int i=0;
    char s[4] = {'\0','\0','\0','\0'};

    for(i=0 ; i<4 ; i++)
    {
        printf("%c",s[i]);
    }
}

/*
1)\0 \0 \0
B)\0 \0 \0 \0
C)No Output
D)None of the above
*/
