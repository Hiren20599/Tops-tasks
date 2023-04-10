#include<stdio.h>
void swap(int* a,int* b);
int main()
{
	int a,b;
	printf("before swapping:-\n");
	printf("a = ");
	scanf("%d",&a);
	printf("b = ");
	scanf("%d",&b);
	swap(&a,&b);
	printf("after swapping:-\n");
	printf("a = %d\nb = %d",a,b);
	return 0;
}
void swap(int* a,int* b)
{
	int c;
	c = *a;
	*a = *b;
	*b = c;
	return;
}
