#include<stdio.h>
int main()
{
	float s1,s2,s3,s4,s5,s6,p;
	printf("Enter your marks:--");
	printf("\nGUJARATI: ");
	scanf("%f",&s1);
	printf("MATHEMATICS: ");
	scanf("%f",&s2);
	printf("SCIENCE: ");
	scanf("%f",&s3);
	printf("SOCIAL SCIENCE: ");
	scanf("%f",&s4);
	printf("ENGLISH: ");
	scanf("%f",&s5);
	printf("SANSKRIT: ");
	scanf("%f",&s6);
	p=(s1+s2+s3+s4+s5+s6)/6;
	printf("YOUR OVERALL PERCENTAGE IS= %f",p);
}
