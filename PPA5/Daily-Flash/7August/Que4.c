

#include <stdio.h>

void main() {

	int choice1 ;
	char ch1, ch2, ch3;
	printf("WELCOME TO BURGER KING\n");

	do{
		printf("Enter the choice\n");
		printf("choose 1 for VEG\n choose 2 for NON-VEG\n");
		scanf("%d",&choice1);

		switch(choice1){

			case 1:
			       printf("enter the choice:\n");
			       printf("choose a for veg Tikki Burger\n");
			       printf("choose b for Allo Tikki Burger\n");
			       printf("choose c for MushroomVeggei burger \n");
			       printf("choose d for Peanut Butter Sweet Potato Burger\n");
			       scanf(" %c",&ch1);
				switch(ch1)
				{
					case 'a':
						printf("veg tikki burger\n");
						break;

					case 'b':
						printf("allo tikki burger\n");
						break;

					case 'c':
						printf("mushroom veggie burger\n");
						break;
					case 'd':
						printf("peanut butter sweet potato burger\n");
						break;	
				}
				break;

			case 2:
				printf("enter the choice:\n");
				printf("choose a for chicken burger\n");
				printf("choose b for chicken tandoor green\n");
				printf("choose c for chicken chilli cheese\n");
				printf("choose d for crispy chicken burger\n");
				scanf(" %c",&ch2);
				switch(ch2)
				{
					case 'a':
						printf("chicken burger\n");
						break;

					case 'b':
						printf("chicken tandoor green\n");
						break;

					case 'c':
						printf("chicken chilli cheese\n");
						break;

					case 'd':
						printf("crispy chicken burger\n");
						break;
				}
				break;
		}
		printf("Do you want to order again?\n");
		printf("if want to order press 'Y' \n");
		scanf(" %c",&ch3);

				
	}while(ch3=='Y' || ch3=='y');

	printf("YOUR ORDER IS PLACED...!!\n");
	printf( " ENJOY YOUR MEAL...!!\n");
}
