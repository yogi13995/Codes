#include<stdio.h>

int main()
{
	int i,t,n,sum,r,d,a;
	scanf("%d",&t);
	
	for(i=0;i<t;i++)
	{
		scanf("%d",&n);
		a=n;
		sum=0;
		d=1;
		while(d!=0)
		{ 	
			r=a%10;
			d=a/10;
			a=d;
			sum=sum+r;
		
			
			if(d==0 && (n%sum)==0)
			{
				printf("%d\n",1);
			}
			else if(d==0 && (n%sum)!=0) 
			{
				printf("%d\n",0);
			}
		}
	}
return 0;
}
