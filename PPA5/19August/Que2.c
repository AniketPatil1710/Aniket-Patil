

#include <stdio.h>

void main() {

	int a;

	printf("Enter number:");
	scanf("%d",&a);

	switch(a){

		case 0:
			printf("Monday\n");
			break;

		case 1:
			printf("Tuesday\n");
			break;

		case 2:
			printf("Wedsday\n");
			break;

		case 3 :
			printf("Thirsday\n");
			break;

		case 4:
			printf("Friday\n");
			break;

		case 5:
			printf("Saturday\n");
			break;

		case 6:
			printf("Sunday\n");
			break;
	}

}
