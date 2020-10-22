#include<stdio.h>

int main()
{
	int i,t,n,d,sum,j;
	scanf("%d",&t);
	
	for(i=0;i<t;i++)
	{
		scanf("%d",&n);
		d=1;
		sum=0;
		j=1;
		while(d!=0)
		{
			d=n/j;
			sum = sum+(j*d);
			j++;
		}
	printf("%d\n",sum);
    }
   return 0;
  }
