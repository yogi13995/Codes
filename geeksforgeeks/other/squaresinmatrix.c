#include<stdio.h>

int main()
{
	int i,t,m,n,j,sum,x,min;
	scanf("%d",&t);
	
	for(i=0;i<t;i++)
	{
		scanf("%d %d",m,n);
		min=(m<n)?m:n;
		sum=0;
		for(i=1;i<=min;i++)
		{
			x=(m-i+1)(n-i+1);
			sum=sum+x;
		}
		printf("%d\n",sum);
	}
return 0;
}
		
