#ifndef YOGI
#define YOGI
#include<stdio.h>
	typedef unsigned char U;
	typedef short int S;
	#define maxMatrixSize 5
	typedef struct matrixData
	{
		U matrixColoumn,matrixRaw;
		U matrix[maxMatrixSize][maxMatrixSize];
	} md;
	md AleftInput,BrightInput;
	
	typedef struct matrixData2
	{
		U matrixColoumn,matrixRaw;
		S matrix[maxMatrixSize][maxMatrixSize];
	}md2;
	md2 Coutput;
	
	int flag;
	void input(md input);
	
	void input2(md2 output);
#endif
