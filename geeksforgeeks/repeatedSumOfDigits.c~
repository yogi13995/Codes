#include<stdio.h>
int digisum(int n);

int main()
{
	int i,t,n;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%d",&n);
		
		printf("%d\n",digisum(n));
	}
return 0;
}
		
int digisum(int x)
{
	int sum,r,a,d;
	
	if(x<10)
	{
		return x;
	}
	else
	{
		sum = 0;
		a=x;
		d=1;
		
		while(d!=0)
		{
			r=a%10;
			d=a/10;
			a=d;
			sum = sum + r;
		}
		digisum(sum);
	}
}
			
			
	
