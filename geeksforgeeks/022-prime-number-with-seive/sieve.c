#include<stdio.h>

int main()
{
int i,j,n,l,t,k,m;
scanf("%d",&t);
	for(i=0;i<t;i++)
	{
	scanf("%d",&n);
	int a[n+1];
		for(j=2;j<=n;j++)
		{
		a[j]=j;
		}
		k=2;
			while((k*k)<=n)
			{	
			if(a[k] !=0)
			{
				for(l=2;l<=n;l++)
				{
				if((k*l)>n)
				{
				break;
				}
				else
				{
				a[k*l] =0;
				}
				}
				}
			k++;
			}
			for(m=2;m<=n;m++)
			{
			if(a[m]!=0)
			{
			printf("%d\n",a[m]);
			}
			}
	}
return 0;
}			
			
				
		
