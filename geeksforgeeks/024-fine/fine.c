#include<stdio.h>

int main()
{
int i,j,b,e,f,sum,t,a,d,c,l;
int k;
int n[100000],p[100000];
scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%d %d",&a,&d);
	
		
		for(j=0;j<a;j++)
		{   
		   
			scanf("%d",&n[j]);
	
		}
		
		for(l=0;l<a;l++)
		{   
		   
			scanf("%d",&p[l]);
			
			
		}		
		    c=d%2;
		    sum=0;
		  
		    
			for(k=0;k<a;k++)
				{
				e=n[k]%2; 
				if((c==0) && (e!=0))
				{
					sum=sum+p[k];
					
				}
				else if((c!=0) && (e==0))
				{
					sum=sum+p[k];
				
			    }
		     }
	 
		printf("%d\n",sum);
     }
return 0;
}
		
