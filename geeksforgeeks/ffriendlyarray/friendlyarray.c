#include<stdio.h>
#include<stdlib.h>

int main()
{
short int a,b,i,j,m,l;
int c[10000],s,s1,sum;
scanf("%hi",&a);
for(i=0;i<a;i++)
	{
	scanf("%hi",&b);
	for(j=0;j<b;j++)
		{
		scanf("%d",&c[j]);
		}
	     sum=0;

		for(l=0;l<b;l++)
			{
			s1=100000;
		
			for(m=0;m<b;m++)
				{
				
				if (l!=m)
				{
				s=0;
				s=abs(c[l]-c[m]);
			
				
				 if(s1>s)
				{
				s1=s;
				}
				}
				}
		
				sum=sum+s1;
				
			     }
			    
				printf("%d\n",sum);
	     }
	    
	    return 0;
	    }
	
	
			
			

