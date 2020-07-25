#include <stdio.h>

void main() {

	int num ;

	printf("Enter a no from 0 to 5 :");
	scanf("%d",&num);

	switch(num) {

		case 1:
			printf("One\n");
			break;

		case 2:
			printf("Two\n");
			break;

		case 3:
			printf("Three\n");
			break;

		case 4:
			printf("four\n");
			break;

		case 5:
			printf("Number is greater than 5\n");
			break;
	}
}
