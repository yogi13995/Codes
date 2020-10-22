#include<stdio.h>

int main()
{
int i,t,n,j,a[100],sum,k,b,c,l,m,d;
scanf("%d",&t);

for(i=0;i<t;i++)
{
	scanf("%d",&n);
	
	for(j=0;j<n;j++)
	{
		scanf("%d",&a[j]);
	}
	b=c=d=0;
	sum = 0;
	for(k=0;k<n;k++)
	{
		b=a[k];
		printf("%d\n",b);
		for(l=(k+1);l<n;l++)
		{
			c=a[l];
			
			for(m=(l+1);m<n;m++)
			{
				if(b+c>a[m] && b+a[m]>c && c+a[m]>b)
				{
					if(a[m]>d)
					{
						d=a[m];
					printf("%d  %d  %d\n",b,c,d);
					printf("%d\n",b+c+d);
						if((b+c+d)>sum)
						{
							sum = b+c+d;
							
						}
					}
				}
			}
		}
	}
	if(sum==0)
	{
		printf("%i\n",-1);
	}
	else
	{
		
		printf("%d\n",sum);
	}
}
return 0;
}
				
					
					
