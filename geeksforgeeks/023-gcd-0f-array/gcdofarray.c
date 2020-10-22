#include<stdio.h>

int main()
{
	long long int i,j,k,t,n,f,e,m,d;
	scanf("%lld",&t);
	for(i=0;i<t;i++)
	{
		scanf("%lld",&n);
		long long int a[n];
		for(j=0;j<n;j++)
		{
			scanf("%lld",&a[j]);
		}
		if(n==1)
			{
				printf("%lld\n",a[0]);
			}
		else
		{
		for(k=0;k<(n-1);k++)
		{	
			
				
			if(a[k]>a[k+1])
			{
				e=a[k];
				f=a[k+1];
			}
			else
			{
				f=a[k];
				e=a[k+1];
			}
			m=1;
			while((m!=0) &&(f!=0) )
			{
				 m=e%f;
				 e=f;
				 f=m;
			 }
			 a[k+1]=e;
			
			
			 

		}
	 printf("%lld\n",e);
	
	}
	}
return 0;
}
			 
			
			 
