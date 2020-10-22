#include<stdio.h>

int main()
{
int i,t,b,d,n,r,sum;
scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%d",&n);
		d=n;
		sum=0;
		b=1;
	
			while(b!=0)
			{
				r=d%10;
				d=d/10;
				
				sum=sum+r;
				
				if(d==0)
				{
					b=sum/10;
					
					if(b==0)
					{
					printf("%d\n",sum);
						
					}
					else
					{
						d=sum;
						sum=0;
					}
				}
				
				
				
			}
		}
return 0;
}
				
