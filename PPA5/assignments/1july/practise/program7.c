#include <stdio.h>

void main() {

	
	int hardness , tensile_strength ;

	float carbon_content ;
	
	printf("Hardness and tensile  strenght:\n");
	scanf("%d%d",&hardness,&tensile_strength) ;

	printf("Carbon content:");
	scanf("%f",&carbon_content) ;

	if( hardness > 50 && carbon_content < 0.7 && tensile_strength > 5600)
	       printf("grade is 10\n") ;

	else if( hardness > 50 && carbon_content < 0.7 && tensile_strength < 5600) 
		printf("grade is 9\n") ;

	else if( hardness < 50 && carbon_content < 0.7 && tensile_strength>5600)
		printf("grade is 8\n") ;	

	else if( hardness > 50 && carbon_content > 0.7 && tensile_strength > 5600)
		printf("grade is 7\n") ;	

	else if( hardness < 50 && carbon_content < 0.7 && tensile_strength>5600)
		printf("grade is 6\n") ;

	else
	{
		if(hardness>50)
			printf("grade is 6\n") ;
		else if(carbon_content<0.7)
			printf("grade is 6\n");
		else if(tensile_strength > 5600)
			printf("grade is 6\n");
		else
			printf("grade is 5\n");
	}	
}

