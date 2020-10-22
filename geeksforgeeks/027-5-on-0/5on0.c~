#include<stdio.h>
#include<math.h>

int convertfive(int n);

int main()
{
int i,t,n;
scanf("%d",&t);
for(i=0;i<t;i++)
{
	scanf("%d",&n);
	printf("%d",convertfive(n));
	
}
return 0;
}

int convertfive(int n)
{
int j,d,r,count,e;

d=n;
count=0;
j=10;
	while(d!=0)
	{
	printf("%d	%d	%d	%d\n",d,n,j,r);
	r=d%10;
	d=n/j;
	
	count++;
	j=(j*10);
	
		if(r==0)
		{
		e=(count-1);
		n=(n+5*(pow(10,e)));
	
		}
		
	}
return n;
}
		
