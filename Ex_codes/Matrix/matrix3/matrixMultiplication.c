#include"matrixMultiplication.h"

void input(md input)
{
	char i,j;
	scanf("%c",&input.matrixColoumn);
	scanf("%c",&input.matrixRaw);
	printf("%d",input.matrixColoumn);
	printf(" ");
	printf("%d",input.matrixRaw);
	
	for(i=(0-48);i<(input.matrixRaw-48);i++)
	{
		for(j=(0-48);j<(input.matrixColoumn-48);j++)
		{
		   scanf("%c",&input.matrix[i][j]);
		}
	}
}
	
void input2(md2 input)
{
	scanf("%c",&input.matrixColoumn);
	scanf("%c",&input.matrixRaw);
	
	
}
