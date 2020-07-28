#include <stdio.h>

void main() {

	 int m = 21 , ci , ui , i ; /*m for matchsticks and 
	 		 	ci is computer input and
				 user input means ui*/

	 printf("\t\t ANSHI PARTNERS GAME\n\n\n");
	 for(i=1;m>i;i++)
	 {
		 printf("choose your matchstick from 1,2,3 or 4 :\n");
		 scanf("%d",&ui);

		 if(ui>=5){
			 printf("\t\tyou took wrong input sorry!!!\n Game over!! \n\n");
		  	 break;
		 }

		 m = m - ui ;

		 ci= 5- ui ;

		 m = m - ci ;

		printf("computer input:%d\n",ci);

	 }
		printf("\t\tyohoooo computer wins!!!\n\n");
		printf("\t\tsorry! you lost the game!!%c\n",1);
	 	
}
