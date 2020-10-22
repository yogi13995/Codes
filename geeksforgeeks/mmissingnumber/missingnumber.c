#include<stdio.h>

int main()
{
int i,j,k,s,sum,n,t,r,a[10000];
scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%d",&n);
		for(j=0;j<(n-1);j++)
		{
			scanf("%d",&a[j]);
		}
		sum=0;
		
		for(k=0;k<(n-1);k++)
		{
			sum=sum+a[k];
        }
        s=((n)*(n+1))/2;
        r=s-sum;
        printf("%d\n",r);
    }
return 0;
}
