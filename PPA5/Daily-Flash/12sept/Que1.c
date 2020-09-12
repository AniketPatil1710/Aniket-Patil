
#include <stdio.h>

void main() {

	int num;
	int sum=0,sum1=0;
	printf("Enter number of elements:");
	scanf("%d",&num);
	
	char Char[num];
	
	printf("Enter character:\n");
	for(int i=0 ; i<num ; i++)
	{
		scanf(" %s",&Char[i]);
	}

	for(int i=0 ; i<num ; i++)
	{
		if(Char[i]=='A'||Char[i]=='a'||Char[i]=='E'||Char[i]=='e'||Char[i]=='O'||Char[i]=='o'||Char[i]=='U'||Char[i]=='u')
			sum=sum+1;
		else
			sum1=sum1+1;
	}
	printf("Vowel:%d\n",sum);
	printf("Consonants:%d\n",sum1);
}
