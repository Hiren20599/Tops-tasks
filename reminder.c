#include<stdio.h>
int main()
{
	int a,b,x,y;
	printf("Enter dividend: ");
	scanf("%d", &a);
	printf("Enter Divisor: ");
	scanf("%d", &b);
	x=a/b;
	printf("Quotient: %d",x);
	y=a-(b*x);
	printf("\nReminder: %d",y);
	return 0;
}
