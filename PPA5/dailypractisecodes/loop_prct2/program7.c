

#include <stdio.h>

void main() {

	int i , j , space=1 , k , rows  ;
	printf("enter no. of rows:\n");
	scanf("%d",&rows);

	for(i=1 ; i<=rows ; i++)
	{
		for(space=1 ; space<=(rows-i) ; space++)
		{
			printf(" ");
		}

		k=65;
		for(j=1;j<=i;j++)
		{
			printf("%c",k);
			k++;
		}
		
		printf("\n");
		

	}





}


//     a
//    aba
//   abcba
//  abcdcba
// abcdedcba  

