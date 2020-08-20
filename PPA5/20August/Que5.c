
#include <stdio.h>

void main() {

	int phy,chem,math,comp;

	float per;
	//Marks are outof 100
	printf("Enter Marks of Physics:");
	scanf("%d",&phy);

	printf("Enter Marks of Physics:");
        scanf("%d",&chem);

	printf("Enter Marks of Physics:");
        scanf("%d",&math);

	printf("Enter Marks of Physics:");
        scanf("%d",&comp);

	per=(phy+chem+math+comp)/5 ;
	printf("percentage:%f\n",per);

	if(per>=90)
	{
		printf("Grade A\n");
	}
	else if(per>=80 && per<=90)
	{
		printf("Grade B\n");
	}
	else if(per>=70 && per<=80)
	{
		printf("Grade C\n");
	}
	else if(per>=60 && per<=70)
	{
		printf("Grade D\n");
	}
	else if(per>=50 && per<60)
	{
		printf("Grade E\n");
	}
	else if(per>=40 && per<=50)
	{
		printf("Grade F\n");
	}
	else
	{
		printf("Grade F\n");
	}

}
