#include<stdio.h>

int main()
{
	int i,j,t,evenSum,oddSum;
	long long unsigned int n,r,d,a;
	scanf("%d",&t);
	
	for(i=0;i<t;i++)
	{
		scanf("%llu",&n);
		j=0;
		d=1;
		a=n;
		evenSum = 0;
		oddSum = 0;
		while(d!=0)
		{
			r=a%10;
			d=a/10;
			a=d;
			
			if((j%2)==0)
			{
				evenSum = evenSum + r;
			}
			else
			{
				oddSum = oddSum + r;
			}
			j++;
		}
	if((evenSum - oddSum) == 0)
	{
		printf("Yes\n");
	}
	else
	{
		printf("No\n");
	}
    }
return 0;
}
			
