#include<stdio.h>


int main()
{
int i,n,t,j,k,count;
scanf("%d",&t);
	for(i=0;i<t;i++)
	{
	scanf("%d",&n);
	count=0;
		for(j=0;(j*j*j)<n;j++)
		{
			
			for(k=j;(k*k*k)<=n;k++)
			{
				if(n==1)
				{
				count=1;
				break;
				}
				if((j*j*j)+(k*k*k)==n)
				{
					
					if(j==0 || k==0)
					{
						count=1;
						break;
				     }
				 else if(j==k)
					{
						count++;
						break;
					}
					else
					{
					count++;
					count=count*2;
					break;
					}
				}
				
			}
		
		}
		printf("%d\n",count);
	}
return 0;
}
	
	
