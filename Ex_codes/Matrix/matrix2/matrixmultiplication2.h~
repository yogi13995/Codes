#ifndef YOGI
#define YOGI
#include<stdio.h>
#define  maxMatrixSize 5
     int flag;	
	typedef struct matrixdata
	{
		unsigned char matrixColoumn, matrixRaw;
		unsigned char Matrix[maxMatrixSize][maxMatrixSize];
		
	} A_leftInput,B_rightInput;
	
	typedef struct matrixdata2
	{
		unsigned char matrixColoumn, matrixRaw;
		short int matrix[maxMatrixSize][maxMatrixSize];
	} C_output;
	
	void inputOfMatrix(unsigned char matrixColoumn, unsigned char matrixRaw,unsigned char matrix[maxMatrixSize][maxMatrixSize]);
	void inputOfMatrix2(unsigned char matrixColoumn, unsigned char matrixRaw, short int matrix[maxMatrixSize][maxMatrixSize]);
	
	void showMatrix(unsigned char matrixColoumn, unsigned char matrixRaw, unsigned char matrix[maxMatrixSize][maxMatrixSize]);
	void showMatrix2(unsigned char matrixColoumn, unsigned char matrixRaw, short int  matrix[maxMatrixSize][maxMatrixSize]);
	
	void multiplyMatrix(unsigned char leftmatrixColoumn, unsigned char leftmatrixRaw,unsigned char rightmatrixColoumn, unsigned char rightmatrixRaw,unsigned char outputmatrixColoumn, unsigned char outputmatrixRaw,unsigned char leftmatrix[maxMatrixSize][maxMatrixSize],unsigned char  rightmatrix[maxMatrixSize][maxMatrixSize],short int outputmatrix[maxMatrixSize][maxMatrixSize]);
	

#endif
