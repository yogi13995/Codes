#include<stdio.h>

int main()
{
	int i,t,d,n,j,a[100000],k,count;
	scanf("%d",&t);
	
	for(i=0;i<t;i++)
	{
		scanf("%d",&n);
		count=0;
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[j]);
			
			if(j>0)
			{
			for(k=0;k<j;k++)
			{
				if((a[k]^a[j])==0)
				{
					count++;
				}
			}
			}
		}
		printf("%d\n",count);
	}
return 0;
}
		
		
