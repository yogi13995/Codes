#include<stdio.h>

int main()
{
	int i,t;
	long long int n,d,r,a,r1;
	scanf("%d",&t);
	
	for(i=0;i<t;i++)
	{
		scanf("%lld",&n);
		d=1;
		r1=23;
		
		a=n;
		while(d!=0)
		{
			r=a%10;
			d=a/10;
			a=d;
			
			if(d==0 && r<r1)
			{
				printf("%d\n",1);
			}
			else if(r>r1 && r!=23)
			{
				printf("%d\n",0);
				break;
			}
			r1=r;
		}
	}
	return 0;
}
