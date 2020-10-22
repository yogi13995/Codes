#include"multiplicationofmatrix.h"

void inputArray(int n, int a[n][n])
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
			
		}
	}
}

void multiplication(int n ,int a[n][n], int b[n][n], int c[n][n])
{
	int i,j,sum,k;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			sum = 0;
			for(k=0;k<n;k++)
			{
				sum = sum + (b[i][k]*c[k][j]);
			}
			a[i][j] = sum;
		}
	}
}

void display(int n, int a[n][n])
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d",a[i][j]);
			printf(" ");
			
		}
		printf("\n");
		
	}
}

int inputsizeofarray(void)
{
	int n;
	scanf("%d",&n);
	return n;
	}
