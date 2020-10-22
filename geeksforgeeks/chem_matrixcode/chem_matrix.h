#ifndef Yogi
#define yogi
#include<stdio.h>
#include<stdlib.h>
#define Max 10
		void rawAndColoumnInput(int *r, int *c);
		void inputForMatrix(int raw,int coloumn,int a[Max][Max]);
		void printMatrix(int raw, int coloumn, int a[Max][Max]);
		void swap( int raw, int coloumn, int a[Max][Max]);
		void make0(int raw, int coloumn, int a[Max][Max]);
		void solution(int raw, int coloumn, int a[Max][Max]);
		void uniqueSolution(int raw, int coloumn, int a[Max][Max]);
		void infiniteSolution(int raw, int coloumn, int a[Max][Max]);
		int lcm(int raw, int higher,  int b[Max]);
		int mcm(int a,int b);

#endif
