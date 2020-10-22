#include<stdio.h>

int main()
{
	int i,j,k,l,t,n,a[1001],xor,count;
	scanf("%d",&t);
	
	for(i=0;i<t;i++)
	{
		scanf("%d",&n);
		
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[j]);
		}
		count=0;
		for(k=0;k<n;k++)
		{
			for(l=(k+1);l<n;l++)
			{	
				xor = a[k] ^ a[l];
				if(xor%2!=0)
				{
					count++;
				}
			}
		}
		printf("%d\n",count);
	}
	return 0;
}
