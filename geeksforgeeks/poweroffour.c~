#include<stdio.h>
int isPowerOfFour(unsigned int);

int main()
{
int i,t;
unsigned int n;
scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%d",&n);
		
		if(isPowerOfFour(n))
		{
			printf("%d",1);
		}
		else
		{
		printf("%d",0);
		}
	}
return 0;
}

int isPowerOfFour(unsigned int n)
{
unsigned int d,a,r;
	d=2;
	a=n;
	
	while(d!=1)
	{
		int d;
		d=a/4;
		r=a%4;
		a=d;
		
		
		 if((d==1 && r==0) || n==1)
		{
			return 1;
			break;
		}
		else if(r!=0)
		{
			
			return 0;
			break;
		}
	}
}
		 
	  
