#include<stdio.h>

int main()
{
	int a=40,b=50,c;
	printf("Before Swap\na=%d\nb=%d",a,b);
	
	c=a;
	a=b;
	b=c;
	
	printf("\nAfter Swap\na=%d\nb=%d",a,b);
	
	return 0;
}
