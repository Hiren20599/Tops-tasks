#include <stdio.h>

//take an input from the user and declare pass if marks are above 35 otherwise fail//

int main()
{
	int marks;
	
	printf("enter your marks=");
	scanf("%d", &marks);
	
	if(marks>35)
	{
		printf("Congratulations!!You have passed the examination");
		
	}	
	else
	{
		printf("Sorry!!Better luck next time");
	}
	
	return 0;
} 
