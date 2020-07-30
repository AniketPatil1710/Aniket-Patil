

#include <stdio.h>

void main() {

	char tempstr[] = "THE WATER HAS NO COLOR";
	printf("\nThe value returned by printf() for tempstr is : %d",printf("%s",tempstr));
}

// In above code :
// 	tempstr[] is a character array.
// 	character array is used to store the string.
//
// 	printf("\n The value returnned by printf() or tempstr i: %d",printf("%s",tempstr));
// 	Here nested printf(function has returned total no of characters printed on the screen.
//	
//	In this Insider printf() function will execute firstand print tempstr value
//	eg. THE WATER HAS NO COLOR
//
//	outer printf() function print the lenght of string
//	(number of character printed on the screen by insider printf()
//
