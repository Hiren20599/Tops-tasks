#include<stdio.h>

//w.a.p to determine minimum of three numbers//

int main()
{
	int a, b, c;
	
	printf("Enter three numbers:-\n");
	scanf("%d%d%d", &a, &b, &c);
	
	if(a<b)
	{
		if(a<c)
		{
			printf("Number 1 is minimum!!!");
		}
		else
		{
			printf("Number 3 is minimum!!!");
		}
	}
    
    else
    {
	
	if(b<c)
	{
		printf("Number 2 is Minimum!!!");
	}
	else
	{
		printf("Number 3 is minimum!!!");
	}
	}	
	return 0;
}
