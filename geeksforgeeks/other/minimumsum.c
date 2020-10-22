#include<stdio.h>

int main()
{
unsigned  int c,b[10000],d[10000],sum,m, a,count,i,j,k,l,n;

scanf("%u",&a);
for(i=0;i<a;i++)
	{
	scanf("%u",&c);
	
	for(j=0;j<c;j++)
		{
		scanf("%u",&b[j]);
		}
	m=0;
	
	for(k=0;k<c;k++)
		{
		d[k]=b[k];
		for(l=m;l<c;l++)
			{
			
			if(b[l]<d[k])
				{
				d[k]=b[l];
				b[l]=b[k];
				b[k]=d[k];
				}
		     }
			m++;
			printf("%u\n",b[k]);
		}
    sum=0;
   for(n=0;n<(c/2);n++)
   		{
   		sum=sum+(b[n]*b[c-1-n]);
   		}
   	printf("%u\n",sum);
	}
	return 0;
	}
		
			
		
   /* for(k=0;k<c;k++)
    	{
    	count=1;
    	for(l=0;l<c;l++)
    		{
    		
    		if(b[k]>b[l])
    			{
    			count++;
    			}
    		}
    	d[count]=b[k];
    	}
    	return 0;
    	}}
   
    /*
    sum=0;
   for(m=0;m<(c/2);m++)
   		{
   		sum=sum+(d[m]*d[c-m]);
   		}
   	printf("%lld",sum);
   	}
 return 0;
 }*/
   		
    			
		
		
		
	
	
	
	
	
