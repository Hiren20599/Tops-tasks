#include<stdio.h>

//w.a.p to make grade wise result//

int main()
{
	int sub1, sub2, sub3, sub4, sub5, a;
	
	printf("Enter below your marks of different subjects-:\n");
	printf("Gujarati:\n");
	scanf("%d", &sub1);
	
	printf("English:\n");
	scanf("%d", &sub2);
	
	printf("Mathematics:\n");
	scanf("%d", &sub3);
	
	printf("Science:\n");
	scanf("%d", &sub4);
	
	printf("Social Science:\n");
	scanf("%d", &sub5);
	
	
	a=(sub1+sub2+sub3+sub4+sub5)*100/500;
	
	printf("Your Percentage is %d\n", a);
	
	if(a>=95)
	{
		printf("CONGRATULATIONS!!!You have got A++ Grade!");
	}
	
	else if(a>=90)
	{
		printf("You have got A+ Grade");
	}
	
	else if(a>=80)
	{
		printf("You have got A Grade");
	}
	
	else if(a>=70)
	{
		printf("You have got B+ Grade");
	}
	
	else if(a>=60)
	{
		printf("You have got B Grade");
	}
	
	else if(a>=50)
	{
		printf("You have got C Grade");
	}
	
	else if(a>=35)
	{
		printf("You have got E Grade");
	}
	
	else
	{
		printf("Sorry!!!\nBetter Luck Next Time!!");
	}
	return 0;
}
