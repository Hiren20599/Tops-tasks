#include<stdio.h>
int main()
{
	printf("FIND FACTORS\n");
	int num,i;
	printf("ENTER THE NUMBER: ");
	scanf("%d",&num);
	printf("\nFACTORS OF %d  ARE:\n",num);
	for(i=1;i<=num;i++)
	{
	if(num%i==0)
	printf("%d\n",i);
	}
	return 0;
}
