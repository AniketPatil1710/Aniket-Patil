#include <stdio.h>

void main() {

	//MArk is out of 100
	int sub1 , sub2 , sub3 , sub4, sub5 , total ;

	printf("Marks of sub1 :");
        scanf("%d",&sub1);
	printf("Marks of sub2 :");
        scanf("%d",&sub2);
	printf("Marks of sub3 :");
        scanf("%d",&sub3);
	printf("Marks of sub4 :");
        scanf("%d",&sub4);
	printf("Marks of sub5 :");
        scanf("%d",&sub5);

	total = sub1 + sub2 + sub3 + sub4 + sub5 ;

	//supose marks is out of 100 and passing is for 35
	if(sub1<35 || sub2<35 || sub3<35 || sub4<35 || sub5<35)
	{
		printf("You are failed in exam\n");
	}
	else
	{
		if(total>=450)
			total=1;
			switch(total){
				case 1:  
				printf("First Class\n");
			}
		if(total>=400 && total<450)
			total=2;
			switch(total){
				case 2:
				printf("First Class\n");
			}
		if(total>=300 && total<400)
			total=3;
			switch(total){
				case 3:
				printf("First Class\n");
			}
		if(total>=200 && total<=300)
			total = 4;
			switch(total){
				case 4:
				printf("First Class\n");
			}
		}
	

		

		
}
