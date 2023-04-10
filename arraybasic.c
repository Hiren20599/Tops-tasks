#include<stdio.h>
int main()
{
	int a[10];
	
	int i;
	for(i=0;i<11;i++)
	{
		printf("Enter tne array elements:-");
		scanf("%d\n",&a[i]);
	}
	for(i=0;i<11;i++)
	{
		printf("%d\n",a[i]);
	}
	return 0;
}
