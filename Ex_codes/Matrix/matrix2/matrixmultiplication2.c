#include"matrixMultiplication2.h"

void inputOfMatrix(unsigned char matrixColoumn, unsigned char matrixRaw,unsigned char matrix[maxMatrixSize][maxMatrixSize)
{
	scanf("%c %c", &matrixRaw ,matrixColoumn);
	for(i=0;i<matrixRaw;i++)
	{
		for(j=0;j<matrixColoumn;j++)
		{
			scanf("%c",&matrix[i][j]);
		}
	}
}
void inputOfMatrix2(unsigned char matrixColoumn, unsigned char matrixRaw,short int matrix[maxMatrixSize][maxMatrixSize)
{
	scanf("%c %c", &matrixRaw ,matrixColoumn);
	
}

void showMatrix(unsigned char matrixColoumn, unsigned char matrixRaw, unsigned char matrix[maxMatrixSize][maxMatrixSize])
{
	for(i=0;i<matrixRaw;i++)
	{
		for(j=0;j<matrixColoumn;j++)
		{
			printf("%d",&matrix[i][j]);
			printf(" ");
			
		}
		printf("\n");
	}
}

void showMatrix2(unsigned char matrixColoumn, unsigned char matrixRaw, short int matrix[maxMatrixSize][maxMatrixSize])
{
	for(i=0;i<matrixRaw;i++)
	{
		for(j=0;j<matrixColoumn;j++)
		{
			printf("%d",&matrix[i][j]);
			printf(" ");
			
		}
		printf("\n");
	}
}
	
void multiplyMatrix(unsigned char leftmatrixColoumn, unsigned char leftmatrixRaw,unsigned char rightmatrixColoumn, unsigned char rightmatrixRaw,unsigned char outputmatrixColoumn, unsigned char outputmatrixRaw,unsigned char leftmatrix[maxMatrixSize][maxMatrixSize],unsigned char  rightmatrix[maxMatrixSize][maxMatrixSize],short int outputmatrix[maxMatrixSize][maxMatrixSize )
{
	for(i=0;i<leftmatrixRaw;i++)
	{
		for(j=0;j<rightmatrixColumn;j++)
		{
			for(k=0;k<leftmatrixRaw;k++)
			{
				sum = sum+(leftmatrix[i][k]*rightmatrix[k][j]);
			}
			outputmatrix[i][j] = sum;
		}
	}
}
