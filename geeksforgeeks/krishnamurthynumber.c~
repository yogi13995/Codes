#include<stdio.h>
int fact(int x);

int main()
{
	int i,t,n,r,a,d,f,sum;
	scanf("%d",&t);
	
	for(i=0;i<t;i++)
	{
		scanf("%d",&n);
		a=n;
		d=1;
		sum = 0;
		while(d!=0)
		{
		r=a%10;
		d=a/10;
		a=d;
		f=fact(r);
		sum= sum + f;
		//printf("%d",sum);
		
		}
		if(sum == n)
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
	}
return 0;
}

int fact(int x)
{
	if(x==0)
	{
		return 1;
		
	}
	else
	{
		return (x*(fact(x-1)));
	}
}
