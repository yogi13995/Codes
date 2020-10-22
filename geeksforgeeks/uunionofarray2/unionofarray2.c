#include<stdio.h>
#include<string.h>

int main()
{
int i,j,k,l,m,n,o,count,t;

scanf("%d",&t);
int c[100000];

	for(i=0;i<t;i++)
	{
		memset(c,0,4*100000);
		count=0;
		scanf("%d %d",&m,&n);
		int a[m],b[n];
		
		for(j=0;j<m;j++)
		{
			scanf("%d",&a[j]);
		}
		for(k=0;k<n;k++)
		{	
			scanf("%d",&b[k]);
		}
		
		for(l=0;l<m;l++)
		{
			if(c[a[l]]!=1)
			{
				count++; 
				c[a[l]]=1;
			}
		}
		
		for(o=0;o<n;o++)
		{
			if(c[b[o]]!=1)
			{
				count++;
				c[b[o]] = 1;
			}
		}
		printf("%d\n",count);
	}
return 0;
}
		
