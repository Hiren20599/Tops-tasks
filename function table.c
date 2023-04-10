#include<stdio.h>
void tab(int x);
int main()
{
	int n;
	printf("Enter the number : ");
	scanf("%d",&n);
	tab(n);
	return 0;
}
void tab(int x)
{
	int i;
	for( i=1;i<=10;i++)
	{
		printf("%d x %d = %d\n",x,i,x*i);
	}
}
