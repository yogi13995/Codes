#include"chem_matrix.h"

int main()
{
	int i,a[Max][Max],raw,coloumn;

	
	
	rawAndColoumnInput(&raw, &coloumn);//Taking value of raw and coloumn.
	
	inputForMatrix(raw,coloumn,a);  //Taking all elements of the matrix. 
	swap(raw, coloumn, a);        //swapping the raws which has 0 at pivot position.

	printf("\n \n");
	make0(raw, coloumn, a);    //making all element of a coloumn under the pivot position.
	printMatrix(raw, coloumn, a);
	printf("\n \n");
	solution(raw,coloumn,a); //checking the matrix wether matrix has solution or not and printing the solution.
	
	return 0;
}
