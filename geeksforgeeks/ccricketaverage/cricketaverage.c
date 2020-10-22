#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
	int i,t,n,count,sum,r,j;
	char str[20];
	scanf("%d",&t);
	
	for(i=0;i<t;i++)
	{
		scanf("%d",&n);
		count=0;
		sum=0
		for(j=0;j<n;j++)
		{
		scanf("%d",&r);
		scanf("%s",str);
		sum=sum+r;
		//printf("%d\n",sum);
		
		if(strlen(str)==3)
		{
			count++;
		
		}
		
		
	}
	//printf("%d",count);
	if(count!=0)
	{
	printf("%d\n",((int)ceil((1.0*sum)/(count*1.0))));
	}
	else if (count==0)
	{
	printf("%d\n",-1);
	}
	}
return 0;
}
