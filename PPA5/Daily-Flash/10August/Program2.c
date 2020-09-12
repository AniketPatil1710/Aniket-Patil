

#include <stdio.h>

void main() {

	int a ;

	char ch ;

	do
	{
		printf("Press 1 for Veg \n");
		printf("press 2 for non-veg \n");

		scanf("%d",&a);
		printf("Press character forward of which dish you want..!!\n");
		printf("\n");

		switch(a){

			case 1 :
			
				printf("a.Vegetable fried rice\n");
				printf("b.Chole Bhature\n");
				printf("c.Dal Makhani\n");
				printf("d.Aloo Paratha\n");
				printf("e.Puran Poli\n");

				scanf(" %c",&ch);

				switch(ch)
				{
					case 'a':
						printf("Vegetable fried rice\n");
						break;

					case 'b':
						printf("chole Bhature\n");
						break;

					case 'c' :
						printf("Dal Mhakhani\n");
						break;

					case 'd' :
						printf("Aloo Paratha\n");
						break;

					case 'e' :
						printf("Puran Poli\n");
						break;
				}

				break;

			case 2:
				printf("a.Biryani\n");
				printf("b.Butter Chicken\n");
				printf("c.Rogan josh\n");
				printf("d.Tandoori Chicken\n");
				printf("e.Chicken Buraji\n");

				scanf(" %c",&ch);
				printf("\n");

				switch(ch)
				{
					case 'a' :
						printf("Biryani\n");
						break;

					case 'b':
						printf("Butter chicken\n");
						break;

					case 'c':
						printf("Rogn josh\n");
						break;

					case 'd' :
						printf("Tandoori Chicken\n");
						break;

					case 'e':
						printf("Chicken Buraji\n");
						break;
				}
				break;
		}

				printf("Do you want to Order more?\n");
				printf("Then press 'y' or 'Y'");
				scanf(" %c",&ch);


		

	}while(ch=='y' || ch=='Y');


		printf("Your Order is Claimed..!!");
		printf("Enjoy your meal...!!");
}
