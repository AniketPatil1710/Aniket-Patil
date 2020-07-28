#include <stdio.h>

void main() {

	int x , y ;

	printf("Cortinate on x axis:");
	scanf("%d",&x);

	printf("cordinate on y axis:");
	scanf("%d",&y);

	if(x>0 && y>0)
		printf("Cordinate is in 1st quadrant\n");
	else if(x<0 && y>0)
		printf("Cordinate is in 2nd quadrant\n");
	else if(x<0 && y<0)
		printf("Cordinate is in third qudrant\n");
	else if(x>0 && y<0)
		printf("Cordinate is in fourt quadrant\n");
	else if(x==0 && y==0)
		printf("Cordinate is on origin\n");
	else if(x==0 && y!=0)
		printf("cordinate is on y axis\n");
	else if(y==0 && x!=0)
		printf("cordinate is on x axis\n");	
}
