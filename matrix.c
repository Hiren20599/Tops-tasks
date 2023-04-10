#include<stdio.h>
int main()
{
	int a[3][3];
	
	int i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		printf("Enter the array elements of a:-");
		scanf("%d",&a[i][j]);
		}
	}
	int b[3][3];
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		printf("Enter the array elements of b:-");
		scanf("%d",&b[i][j]);
		}
	}
	int c[3][3];
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		c[i][j]=a[i][j]+b[i][j];
		}
		printf("\n");
	}
	int d[3][3];
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		d[i][j]=a[i][j]-b[i][j];
		}
		printf("\n");
	}
	int e[3][3];
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		e[i][j]=a[i][j]*b[i][j];
		}
		printf("\n");
	}
	printf("\n\nMatrix:-A\n\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	printf("\n\nMatrix:-B\n\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		printf("%d ",b[i][j]);
		}
		printf("\n");
	}
	printf("\n\nThe addition of matrix A and B\n\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		printf("%d ",c[i][j]);
		}
		printf("\n");
	}
	printf("\n\nThe subtraction of matrix A and B\n\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		printf("%d ",d[i][j]);
		}
		printf("\n");
	}
	printf("\n\nThe multiplication of matrix A and B\n\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		printf("%d ",e[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
