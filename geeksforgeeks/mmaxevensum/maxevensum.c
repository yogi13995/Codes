#include<stdio.h>

int main()
{
int i,t,n;
long long int a[1005],sum,d,j;
scanf("%d",&t);
for(i=0;i<t;i++)
{	
	scanf("%d",&n);
	sum=0;
	for(j=0;j<n;j++)
	{
		scanf("%lld",&a[j]);
		sum=sum+a[j];
	}
	d=sum%2;
	if(d==0)
	{
		printf("%d\n",2);
	}
	else
	{
		printf("%d\n",1);
	}
}
return 0;
}
