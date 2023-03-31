#include<stdio.h>

int main()
{ 
	int a;
	printf("Enter the year: ");
	scanf("%d", &a);
	
	if(a%400==0)
	{
		printf("Given year is a leap year!!");
	}
	else if(a%100==0)
	{
		printf("Given year is not a leap year!!!!");
	}
	else if(a%4==0)
	{
		printf("Given year is a leap year!!!!");
	}
	else
	{
		printf("Given year is not a leap year!!!!");
	}
	
	
	return 0;
}
