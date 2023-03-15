#include<stdio.h>

//take an input from the user and don't allow them to drive if they are under 18//
int main()
{
	int age;
	
	printf("enter your age=");
	scanf("%d", &age);
	
	if(age>18)
	{
		printf("you are eligible:)");
	}
	else
	{
		printf("you are not eligible:(");
	}
	
	return 0;
}
