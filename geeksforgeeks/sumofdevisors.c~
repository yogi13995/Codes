#include<stdio.h>
#include<math.h>


int main()
{
	int i,t,j,d,squart;
	long long int r,n,sum;
	scanf("%d",&t);
	
	for(i=0;i<t;i++)
	{
		scanf("%lld",&n);
		squart = floor(sqrt(n));
		sum = 0;
		
		for(j=1;j<=squart;j++)
		{
			r=n%j;
			d=n/j;
			
			if(r == 0 && j !=d)
			{
				
				sum = sum+j+d;
			}
			else if(r==0 && j==d)
			{
				sum = sum+j;
			}
		}
		printf("%lld\n",(sum-n));
	}
return 0;
}
