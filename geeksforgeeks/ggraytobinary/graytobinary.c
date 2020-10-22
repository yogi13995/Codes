#include<stdio.h>
#include<math.h>

int main()
{
	int i,t,n,j,flag,b,b1,sum;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%d",&n);
		flag=0;
		b1=0;
		sum =0;
		for(j=31;j>=0;j--)
		{
			if(flag==1)
			{
				b=((n>>j)&1)^b1;
				b1=b;
				sum=sum+b*pow(2,j);
			}
			else if((n>>j)==1)
			{
				flag=1;
				j++;
			}
		}
		printf("%d\n",sum);
	}
return 0;
}
