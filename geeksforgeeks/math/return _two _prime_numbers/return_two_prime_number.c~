#include<stdio.h>
int prime(int a);
int main()
{
int i,k,t,j,n;
scanf("%d",&t);

for(int i = 0;i<t;i++)
{
	scanf("%d",&n);
	for(int j = 3;j<n;j++)
	{
		if(prime(j) == 1)
		{
			if(prime(n-j) == 1)
			{
				printf("%d %d\n",j,(n-j));
				break;
			}
		}
		
	}
}
return 0;
}



int prime(int a)
{
	for(int i = 2;i<a;i++)
	{
		if(a%i == 0)
		{
			break;
		}
		if(i == (a-1))
		{
			return 1;
		}
	}
}
		

