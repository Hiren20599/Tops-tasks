#include<stdio.h>
//determine if given number is even or odd
int main()
{
	int a;
	printf("Enter the Number: ");
	scanf("%d", &a);
	
	if(a%2==1)
		{
		printf("\n\nYour number is odd");
		}
	else
		{
		printf("\n\nYour number is even");
		}			
	return 0;
}
