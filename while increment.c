#include<stdio.h>
int main()
{
	int num1,num2,i;
	printf("Starting from: ");
	scanf("%d",&num1);
	printf("End to: ");
	scanf("%d",&num2);
	printf("Numbers from %d to %d in increment order:\n",num1,num2);
	i=num1;
	while(i<=num2)
	{
		printf("%d\n",i);
		i++;
	}
	return 0;
}
