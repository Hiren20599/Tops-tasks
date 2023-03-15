#include <stdio.h>

//comparision of two numbers which is maximum//

int main()
{
	
	int a, b;
	
	printf("enter the value of a=");
	scanf("%d", &a);
	printf("enter the value of b=");
	scanf("%d", &b);
	
	if(a>b)
	{
		printf("a is maximum");
	}
	else
	{
		printf("b is maximum");
	}
	
	return 0;
}
