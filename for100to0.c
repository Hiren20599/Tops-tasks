#include<stdio.h>
int main()
{
	int i,a=100;
//100 97 94.......0
//	for(i=100;i>=0;i=i-3)
//	{
//		printf("%d ",i);	
//	}
	for(i=1;a>0;i++)
	{
		printf("%d ",a);
		a=a-3;	
	}
	return 0;
}
