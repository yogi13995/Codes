#include<stdio.h>
#include<string.h>

int main()
{
	int i,t,n,j,flag,count,sum1,sum2,a,b,r,k;
	char str[50];
	scanf("%d",&t);
	
	for(i=0;i<t;i++)
	{
		scanf("%s",str);
		
		n= strlen(str);
		flag=0;
		sum1=0;
		sum2=0;
		count=0;
		k=1;
		//printf("%d\n",n);
		for(j=(n-1);j>=0;j--)
		{
			printf("%d\n",str[j]);
			if((str[j]<=57)&&(str[j]>=48))
			{
			
				if(((str[j+1]>57)||(str[j+1]<48)) || str[j+1]=='\0')
				{
					count++;
				}
			
				if(count==1)
				{
					
					sum1=sum1+(k*(str[j]-48));
					k=k*10;
					//printf("%d  %d\n",sum1,sum2);
				}
				if(count==2)
				{
					sum2=sum2+(k*(str[j]-48));
					k=k*10;
				}
						
			}
			
			else
			{
				flag=0;
				k=1;
			}
		}
		
		r=sum1-sum2;
		//printf("%d  %d\n",sum1,sum2);
		
		printf("%d\n",r);
	}
	return 0;
}
