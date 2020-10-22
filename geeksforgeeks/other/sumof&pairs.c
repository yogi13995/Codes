#include<stdio.h>

int main()
{
	int i,j,t,n,k,l,sum,a[31],sum;
	scanf("%d",&t);
	
	for(i=0;i<t;i++)
	{
		scanf("%d",&n);
		
		for(j=0;j<n;j++)
		{
			scnf("%d",&a[j]);
		}
		sum=0;
		for(k=0;k<n;k++)
		{
			for(l=(k+1);l<n;l++)
			{
				sum = sum+(a[k] & a[l]);
			}
		}
		printf("%d\n",sum);
	}
	return 0;
}
				
				
