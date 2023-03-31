#include<stdio.h>
int main()
{
	int num,i,a;
	printf("enter the number: ");
	scanf("%d",&num);
	printf("\n\neven numbers: ");
	for(i=1;i<=num;i++)
	{
		if(i%2==0)
		printf("%d ",i);
	}
	printf("\n\nodd numbers: ");
		for(i=1;i<=num;i++)
	{
		if(i%2!=0)
		printf("%d ",i);
	}
	return 0;
}
