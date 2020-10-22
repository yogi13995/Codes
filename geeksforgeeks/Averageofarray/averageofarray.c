#include<stdio.h>

int main()
{
	int i,t,j,k,l,n,x,a[1000],b[1000],av,count;
	scanf("%d",&t);
	
	for(i=0;i<t;i++)
	{
		scanf("%d %d",&n,&x);
		
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[j]);
		}
		
		for(k=0;k<n;k++)
		{
			av=(a[k]+x)/2;
			count=0;
			for(l=0;l<n;l++)
			{
				if(av==a[l])
				{
					count++;
				}
			}
			b[k]=count;
			printf("%d",b[k]);
			printf(" ");
			
		}
		printf("\n");
	}
return 0;
}
