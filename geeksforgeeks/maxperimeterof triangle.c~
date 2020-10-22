#include<stdio.h>

int main()
{
int i,t,n,j,a[100],sum,k,b,c,l,m,d;
scanf("%d,"&t);

for(i=0;i<t;i++)
{
	scanf("%d",&n)
	
	for(j=0;j<n;j++)
	{
		scanf("%d",&a[j]);
	}
	b=c=d=0;
	sum = 0;
	for(k=0;k<n;k++)
	{
		b=a[k];
		for(l=(k+1);l<n;l++)
		{
			c=a[l];
			
			for(m=(l+1);m<n;m++)
			{
				if(b+c>a[l] && b+a[l]>c && c+a[l]>b)
				{
					if(a[l]>c)
					{
						c=a[l];
						if((b+c+d)>sum))
						{
							sum = b+c+d;
						}
					}
				}
			}
		}
	}
	printf("%d",sum);
}
return 0;
}
				
					
					
