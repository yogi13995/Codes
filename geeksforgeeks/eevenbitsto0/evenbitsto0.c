#include<stdio.h>

int main()
{
	int i,t,n,out;
	scanf("%d",&t);
	
	for(i=0;i<t;i++)
	{
		scanf("%d",&n);
		
		out = n & 2863311530;
		printf("%d\n",out);
	}
return 0;
}
