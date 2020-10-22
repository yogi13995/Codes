#include<stdio.h>

int main()
{
	int i,t,count,r1,r2,carry;
	long long int n1,n2,d1,d2,a1,a2;
	scanf("%d",&t);
	
	for(i=0;i<t;i++)
	{
		scanf("%lld %lld",&n1,&n2);
		count =0;
		a1=n1;
		a2=n2;
		d1=1;
		d2=1;
		carry=0;
		
		while(d1!=0 || d2!=0)
		{
			r1=a1%10;
			d1=a1/10;
			r2=a2%10;
			d2=a2/10;
			
			a1=d1;
			a2=d2;
			
			if(r1+r2+carry>=10)
			{
				count++;
				carry=1;
			}
			else
			{
				carry = 0;
			}
		}
		printf("%d\n",count);
	}
	return 0;
}
