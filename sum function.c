#include<stdio.h>
int add(int a,int b);
int main()
{
	int x,y,z;
	printf("enter 1st number: ");
	scanf("%d",&x);
	printf("enter 2nd number: ");
	scanf("%d",&y);
	z=add(x,y);
	printf("sum of %d and %d is = %d",x,y,z);
	return 0;
}
int add(int a,int b)
{
	return a+b;
}
