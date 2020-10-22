#include<stdio.h>

int main()
{
	int i,t,n,j,d,r,a,count;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%d",&n);
		count=0;
		
		for(j=1;j<=n;j++)
		{
			d=1;
			a=j;
			while(d!=0)
			{
				d=a/2;
				r=a%2;
				a=d;
				
				if(r==1)
				{
					count++;
				}
			}
		}
	
	printf("%d\n",count);
	}
	return 0;
}

