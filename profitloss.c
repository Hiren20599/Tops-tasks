#include <stdio.h>
//take cost price and selling price from the user and determine profit or loss 
int main()
{
	int cp,sp,pl;
	printf("Enter cost price: ");
	scanf("%d",&cp);
	printf("Enter selling price: ");
	scanf("%d",&sp);
	if(sp>cp)
	{
		pl=sp-cp;
		printf("The seller has made profit of %d",pl);
	}
	else if(sp==cp)
	{
		printf("NO profit NO loss");
	}
	else
	{
		pl=cp-sp;
		printf("The seller has incurred loss of %d",pl);
	}
	
	return 0;
		
}
