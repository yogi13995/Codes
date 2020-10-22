#include<stdio.h>
int fact(int m);

int main()
{
	int i,m,t,n,r,d,sum,f,a;
	
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%d",&n);
		d=1;
		sum = 0;
		a=n;
		while(d!=0)
		{
			r=a%10;
			d=a/10;
			
			a=d;
			m=r;
			f=fact(m);
			sum=sum+f;
		
		}
		if(sum==n)
		{
			printf("Strong\n");
		}
		else
		{
			printf("Not strong\n");
		}
	}
return 0;
}
int fact(int m)
{
	if(m==0)
	{
		return 1;
	}
	else
	{
	return (m*(fact(m-1)));
}}
			
