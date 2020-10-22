#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,n,sum,sum2,flag1,flag2,t;
	char str[1006];
	scanf("%d",&t);
	
	for(i=0;i<t;i++)
	{
		scanf("%s",str);
		
		n=strlen(str);
		sum = ((str[n-2]-48)*10) + (str[n-1]-48);
		//printf("%d\n",sum);
		flag1=0;
		flag2=0;
		sum2=0;
		if(sum%4==0)
		{
			flag1=1;
		}
		for(j=0;j<n;j++)
		{
			sum2 = sum2 + (str[j]-48);
			//printf("%d\n",sum2);
		}
		if(sum2%9==0)
		{
			flag2=1;
		}
		//printf("%d %d",flag1,flag2);
		if(flag1==1 && flag2==1)
		{
			printf("%d\n",1);
		}
		if(flag1==0 || flag2==0)
		{
			printf("%d\n",0);
			
		}
	}
	return 0;
}
	
	
	
	
	
