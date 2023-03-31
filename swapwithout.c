#include<stdio.h>

int main()
{
	int a=10,b=5;
	printf("Initial value of \na=%d\nb=%d",a,b);
	a=a*b;
	b=a/b;
	a=a/b;
	printf("\nAfter Swap\na=%d\nb=%d",a,b);
	return 0;
}
