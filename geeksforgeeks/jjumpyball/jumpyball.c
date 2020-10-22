#include<stdio.h>

int main()
{
	int i,t,j;
	long long unsigned int sum,h,a;
	scanf("%d",&t);
	
	for(i=0;i<t;i++)
	{
		scanf("%llu",&h);
		
		sum = h;
		j=0;
		while(h > 1)
		{
			h = h>>1;
			sum += h;
			j++;
		}
		printf("%llu\n",2*sum);
	}
return 0;
}
