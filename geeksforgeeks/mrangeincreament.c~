#include<stdio.h>
#include<string.h>

int main()
{
	int i,t,n,m,j,a,b,k,l,c[100000],max;
	scanf("%d",&t);
	
	for(i=0;i<t;i++)
	{
		scanf("%d %d",&n,&m);
		memset(c, 0, 4000);
		max = 0;  
		
		for(j=0;j<m;j++)
		{
			scanf("%d %d %d",&a,&b,&k);
			
			for(l=a;l<=b;l++)
			{
				c[l] = c[l] + k;
				
				if(c[l]>max)
				{
					max = c[l];
				}
			}
			
		}
		printf("%d\n",max);
	}
	return 0;
}
