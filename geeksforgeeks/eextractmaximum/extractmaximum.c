#include<stdio.h>
#include<string.h>

int main()
{
int i,j,s,count,t,p[201],y,sum,m;
char a[201];
scanf("%d",&t);
	for(i=0;i<t;i++)
	{
	     memset(a,0,201);
	     memset(p,0,201);
		scanf("%s",a);
	
	
		
	    sum=0;
		j=0;
		m=0;
		while(a[j]!='\0')
		{
			
		
		
			if((a[j]>='0') && (a[j]<='9'))
			{
				if(j==0)
				{
				
					p[j]=1;
					y=(a[j]-48);
			
					sum=sum+y;
					if(sum>m)
						{
							m=sum;
						}
					
				//	j++;
				//	continue;
					
				}
				if(j!=0)
				{
					p[j]=1;
					if(p[j-1]==1)
					{	
					
						y=(a[j]-48);
						sum=(sum*10)+y;
						if(sum>m)
						{
							m=sum;
						}
					      
						//j++;
					}
					else
					{
						y=(a[j]-48);
						sum=sum+y;
						if(sum>m)
						{
							m=sum;
						}
				        
				//		j++;
						
					}
				}
				j++;
			}
				
				
				else
				{
					sum = 0;
					j++;
				}
				
				
				
	}
	printf("%d\n",m);
	}
	
return 0;

}
	
		
