#include<stdio.h>

int check(char arr[], int n, int *max);
int check2(char arr[], int n);

int main()
{
int i,t,k;
char arr[1000];
scanf("%d",&t);
for(k=0;k<t;k++)
{
	printf("   ");
	fgets(arr, sizeof(arr), stdin);
	//gets(arr);
	int n = sizeof(arr)/sizeof(arr[0]);
	printf("%d", check2(arr, n));
}
return 0;
}



int check(char arr[], int n,int *max)
{
if(n == 1)
	{return 1;
	}
int res, lmax = 1;
for(int i = 1; i<n; i++)
{
	res = check(arr, i, max);
	if(arr[i-1] < arr[n-1] && res +1 > lmax)
	{
		lmax = res + 1;
	}
	if(*max < lmax)
	{
		*max = lmax;
	}
	return lmax;	
}
}


int check2(char arr[], int n)
{
	int max = 1;
	check(arr, n, &max);
	return max;
}

	
