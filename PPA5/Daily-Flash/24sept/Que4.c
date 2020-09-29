
#include <stdio.h>

void main() {
    
    int yr,noback,rollno;
    char ch;
    float cgpa;

    printf("Enter Year:");
    scanf("%d",&yr);

    printf("Enter roll number:");
    scanf("%d",&rollno);

    printf("Is you have back log?");
    scanf(" %c",&ch);

    if(ch=='y' || ch=='Y')
    {
        printf("Number of Backlogs:\n");
        scanf("%d",&noback);
    }

    printf("Enter CGPA:");
    scanf("%f",&cgpa);

    int *pyr=&yr , *pnoback=&noback , *prollno=&rollno ;

    float *pcgpa=&cgpa;
    
    printf("########################################################\n");

    printf("Year :%d\n",*pyr);
    printf("Roll no. : %d\n" ,*prollno);
    
    if(ch=='y' || ch=='Y')
    {
        printf("No of back logs:%d\n",*pnoback);
    }

    printf("CGPA: %f\n",*pcgpa);


}
