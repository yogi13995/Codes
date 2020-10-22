#include<stdio.h>
#include<math.h>

int main()
{
	int i,t;
	long long int h,n;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%lld",&n);
		
		h=floor(sqrt(4*n));
		printf("%lld\n",h);
	}
	return 0;
}
