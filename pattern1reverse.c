#include<stdio.h>
int main()
{
	int i,j,num;
	printf("Enter the number of rows: ");
	scanf("%d",&num);
	for(i=num;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
