
#include"multiplicationofmatrix.h"

int main()
{
	int n;

	n=inputsizeofarray();
	int a[n][n],multi[n][n],first[n][n],second[n][n];
	inputArray(n,first);
	inputArray(n,second);
	multiplication(n,multi, first, second);
	display(n,multi);
    return 0;
}
	
	
		

