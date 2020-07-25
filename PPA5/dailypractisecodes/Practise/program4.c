
#include<stdio.h>
#define Core2web 1
void main() {

	int a=2 ;

	switch(a){

		case Core2web :
			printf("PPA");
			break;

		case 2:
			printf("Java ");
			break;
	}



}
// at preprocessing value of macri Core2web get repllaced by the value 1
// so case Core2Web => case 1
//
// hence ans is PPA
