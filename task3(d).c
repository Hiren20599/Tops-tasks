#include <stdio.h>

//basic calculator for addition, substrction, multiplication and division//

int main()
{
	char a;
	
	printf("Enter the operator:");
	scanf("%c", &a);
	
	switch(a)
	{
		case '+':
			{
			int b,c,d;
			scanf("%d%d", &b, &c);
			d=b+c;
			printf("%d", d);
			}
			break;
			
		case '-':
		   {
			int b,c,d;
			scanf("%d%d", &b, &c);
			d=b-c;
			printf("%d", d);
			}
			break;
			
		case '*':
		   {
			int b,c,d;
			scanf("%d%d", &b, &c);
			d=b*c;
			printf("%d", d);
			}
			break;
			
		case '/':
		   {
			float b,c,d;
			scanf("%f%f", &b, &c);
			d=b/c;
			printf("%f", d);
			}
			break;
			
	
		default:
			printf("Enter valid operator");
			
	}
	
	return 0;
}
