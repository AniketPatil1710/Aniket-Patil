#include <stdio.h>
void main()
{
	char class;
	int num,condition,marks;
	printf("enter the class obtained by th student:\n");
	scanf(" %c",&class);
	printf("enter the numberof subjects he failed in :\n");
	scanf("%d",&num);
	
	if(class=="f" && num>3)
	{
		condition==1;
	}
	else if(class=="f" && num<=3)
	{
		condition==2;
	}
	else if(class=="s" && num>2)
	{
		condition==3;
	}
	else if(class=="s" && num<=2)
	{
		condition==4;
	}
	else if(class=="t" && num>1)
	{
		condition==5;
	}
	else if(class=="t" && num==1)
	{
		condition==6;
	}

	switch(condition)
	{
		case 1:
			printf("no grace marks\n");
			break;

		case 2:
			marks=5*num;
			printf("%d grace marks\n",marks);
			break;

		case 3:
			printf("no grace marks\n");
			break;
		case 4:
			marks=4*num;
			printf("%d grace marks\n",marks);
			break;

		case 5:
			printf("no grace marks\n");
			break;

		case 6:
			marks=5*num;
			printf("%d grace marks\n",marks);
	}


}
