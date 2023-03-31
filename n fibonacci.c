#include<stdio.h>
int main()
{
	int a=0,b=1,c,num,i;
	printf("Enter the number of terms in fibonacci series: ");
	scanf("%d",&num);
	printf("\n\n%d %d ",a,b);
	for(i=1;i<num-1;i++)
	{
		c=a+b;
		printf("%d ",c);
		a=b;
		b=c;
	}
	return 0;
}
