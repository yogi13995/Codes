#include<stdio.h>
#include<string.h>

int main()
{
	int i,j,k,n,t,count;
	char str[10005];
	scanf("%d",&t);
	
	for(i=0;i<t;i++)
	{
		scanf("%d",&n);
		memset(str,0, n+1);
		scanf("%s",str);
		count=0;
		
		for(j=0;j<n;j++)
		{
			for(k=(j+1);k<n;k++)
			{
				if(str[j] == str[k])
				{
					count++;
				}
			}
		}
		printf("%d\n",n+count);
	}
return 0;
}
				
