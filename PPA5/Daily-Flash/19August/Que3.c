

#include <stdio.h>

void main() {

	int a;

	printf("Enter number of month:");
	scanf("%d",&a);

	switch(a){

		case 1:
			printf("January is a 31 days Month\n");
			break;

	        case 2:

                        printf("February is a 30/29 days Month\n");
                        break;

	        case 3:
                        printf("March is a 31 days Month\n");
                        break;

	        case 4:
                        printf("April is a 30 days Month\n");
                        break;

		case 5:
                        printf("May is a 31 days Month\n");
                        break;

	        case 6:
                        printf("June is a 30 days Month\n");
                        break;

	        case 7:
                        printf("July is a 31 days Month\n");
                        break;

	        case 8:
                        printf("August is a 31 days Month\n");
                        break;

	        case 9:
                        printf("September is a 30 days Month\n");
                        break;

	        case 10:
                        printf("Octomber is a 31 days Month\n");
                        break;

	        case 11:
                        printf("November is a 31 days Month\n");
                        break;

	        case 12:
                        printf("December is a 31 days Month\n");
                        break;
	}
}
