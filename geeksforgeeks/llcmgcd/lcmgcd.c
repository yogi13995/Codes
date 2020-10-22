#include<stdio.h>

int main()
{
int a,i,j;
long long unsigned int b,c,lcm,mcm,e,f,d,g;
scanf("%d",&a);
	for(i=0;i<a;i++)
	{
	scanf("%llu",&b);
	scanf("%llu",&c);
	
	if(b<c)
	{
	e=c;
	f=b;
	}
	else
	{e=b;
	f=c;
	}
	d=1;
	
		while(d!=0)
		{
		d=e%f;
		e=f;
		if(d!=0)
		{
		f=d;
		}
		}
	mcm = f;
	lcm=(b*c)/mcm;
	printf("%llu %llu\n",lcm,mcm);
    }
 return 0;
}
		
		
	
	
	
	
	
	
