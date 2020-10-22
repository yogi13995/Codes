#include<stdio.h>
#include<string.h>

int main()
{
	int i,t,d,count,sum,sum2;
	char str[4000];
	scanf("%d",&t);
	
	for(i=0;i<t;i++)
	{
		scanf("%s",str);
		count= 0;
		sum = 0;
		sum2 = 0;
		
		while(str[count]!='\0')
		{
			if(count%2==0)
			{
				sum =sum + str[count]-48;
			}
			else
			{
				sum2 = sum2 + str[count]-48;
			}
			count++;
		}
		if((sum-sum2)%11==0)
		{
			//printf("%d  %d\n",sum,sum2);
			printf("%d\n",1);
		}
		else
		{
			//printf("%d  %d\n",sum,sum2);
			printf("%d\n",0);
		}
	}
	return 0;
}
