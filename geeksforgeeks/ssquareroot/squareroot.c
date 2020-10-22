#include<stdio.h>
#include<stdlib.h>
#include<math.h>
long long int floorSqrt(long long int x);
 
int main()
{
int i,t,root;
float error,sp,sn;
long long int x;
scanf("%d",&t);
	for(i=0;i<t;i++)
	{    
	    error=2.0;
	    sp=2.0;
		scanf("%lld",&x);
		while(error>0.0003)
		{
			sn=(sp+(x/sp))/2;
			error=fabs( sn-sp );
			sp=sn;
		}
	root=floor(sn);
	printf("%d",root);
    }
return 0;
}

long long int floorSqrt(long long int x)
{
long long int root,x;
float error,sp,sn;
	   
	    error=2.0;
	    sp=2.0;
		scanf("%lld",&x);
		while(error>0.0003)
		{
			sn=(sp+(x/sp))/2;
			error=fabs( sn-sp );
			sp=sn;
		}
	root=floor(sn);
	return root;
}
		
			
