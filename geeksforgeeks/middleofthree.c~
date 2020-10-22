#include<stdio.h>
 int main()
{
	int i,j,t,a[3],b,c,sum;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		sum=0;
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[j]);
			sum=sum+a[j];
			
			if(j==0)
			{
				b=a[j];
				c=a[j];
				
			}
			else 
			{
				if(a[j]>b)
				{
					b=a[j];
				}
				if(a[j]<c)
				{
					c=a[j];
				}
			}
		}
		sum=sum-(b+c);
		printf("%d\n",sum);
	}
return 0;
}
	
