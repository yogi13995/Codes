#include<stdio.h>

int main()
{
	int i,t,n,l;
	scanf("%d",&t);
	
	for(i=0;i<t;i++)
	{
		scanf("%d",&n);
		l=1+(2*n)+(n*(n-1))+((n*(n-1)/2))+((n*(n-1)*(n-2)/2));
		printf("%d\n",l);
	}
return 0;
}
		
