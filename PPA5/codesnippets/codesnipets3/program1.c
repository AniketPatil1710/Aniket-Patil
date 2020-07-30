
#include<stdio.h>

void main() {

	printf("Hello Someone");
}

//printf() function is used to write (display/print) the output on the screen.
//
//Prototype: extern int printf(const char *__restrict __ format,__);
//
//The printf function has return type int . printf() function returns total no. of characters
//printed on the screen
//
//printf() function has two parameters 
//1. const char* __restrict__format: It contains string.
//  -const char* contains two different types
//  a.ordinary character which display on the screen.
//   eg.printf("Hello");
//  b.Format specifiers or conversion specification which convert
//  the given data in specified data type
//  and print the corresponding argument.
//  eg.printf("%d",varName);
//
//  In above code:
//  printf("Hello Someone"); is a ordinary character
//  it prints:Hello Someone 
