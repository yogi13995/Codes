#include<stdio.h>
#include<math.h>

int main()
{
int i,j,t,x,y,n,a[1000],k;
long long int z,sum;
scanf("%d",&t);

for(i=0;i<t;i++)
{
	scanf("%d %d %d",&e,&f,&n);
	
	x=(e>f)?x
	sum=0;
	for(j=0;j<n;j++)
	{
		scanf("%d",&a[j]);
	}
	
	for(k=0;k<n;k++)
	{
	  
	    	
		if(a[k]<=x)
		{
			sum=sum+1;
		}
		
		else
		{
			z=ceil((1.0*(a[k]-y)/(x-y)));
			sum=sum+z;
		}
	}
	printf("%lld\n",sum);
}
return 0;
}
		
