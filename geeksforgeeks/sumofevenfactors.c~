#include<stdio.h>
#include<math.h>

int main()
{
	int i,t,a,n,sum,r,d,j,squart;
	scanf("%d",&t);
	
	for(i=0;i<t;i++)
	{
		scanf("%d",&n);
		squart = floor(sqrt(n));
		a=n;
		sum = 0;
		
		for(j=1;j<=squart;j++)
		{
			r=a%j;
			d=a/j;
			
			if((r==0) && (j!=d))
			{
				if(j%2 ==0)
				{
					sum = sum + j;
					//printf("%d",sum);
		            //printf(" ");
				}
				if(d%2 == 0)
				{
					sum = sum + d;
					//printf("%d",sum);
		            //printf(" ");
				}
			}
			else if((r==0) && (j==d))
			{
				if(j%2 == 0)
				{
					sum = sum + j;
					//printf("%d",sum);
		            //printf(" ");
				}
			}
		}
		printf("%d\n",sum);
		//printf(" ");
	}
	return 0;
}
