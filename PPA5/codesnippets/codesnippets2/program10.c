#include <stdio.h> 

void main() {

	switch(5||2|1) {

		case 3&2 : printf("Anotomy of a Murder");
			   break;

		case -~11 : printf("Planet of Apes");
			    break;

		case 6-3<<2: printf("The conversation");
			     break;
			     
		case 5>=5 : printf("Shaun of the Dead");
	}
}
// The answer is compilation error because of duplicate case in 
//
// case -~11 when evaluated gives 12 and case 6-3<<2on
// evvaluation produces 3<<2=3*2^2=12 so the cases are same 
// and switch do not accepts duplicate cases thus compilaion error
