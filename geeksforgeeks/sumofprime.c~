#include<stdio.h>
#include<math.h>


int main()
{
long long int i,j,k,a,root,sum,n,prime,mod;
scanf("%lld",&a);
	for(i=0;i<a;i++)
	{
	scanf("%lld",&n);
		sum=0;
		for(j=1;j<=n;j++)
		{
		
		root = sqrt(j);
		 if(j==1 || j==2 || j==3)
		      {
		      prime=j;
		      sum=prime+sum;
		      }
			for(k=2;k<=root;k++)
			{
			if(j!=k)
			{
		      mod=j%k;
		     if(mod==0)
		     {
		     break;
		     }
		     if(k==root)
		     {
		     prime = j;
		     sum=prime+sum;
		     }
		     else
		     {
		     prime=0;
		     
		     }
		     }
		     }
		
		
		}
		printf("%lld\n",sum);
	}
return 0;
}
		      
		
	
	
