#include<stdio.h>
#include<string.h>
int main()
{
	int i,t,j,k,sum,sum2;
	char str[22];
	scanf("%d",&t);
	
	for(i=0;i<t;i++)
	{
		memset(str,0, 22);
		scanf("%s",str);
		
		j=0;
		
		while(str[j]!='\0')
		{
			
			j++;
		}
		
		sum = 0;
		sum2=0;
		k=0;
		
		while(str[k]!='\0')
		{
			if(k<(j/2))
			{
				sum = sum + str[k]-48;
				//printf("%d\n",sum);
			}
			else if(k>(j/2))
			{
				sum2 = sum2 + str[k]-48;
				//printf("%d\n",sum2);
			}
			k++;
		}
		
		/*for(k=0;k<(j/2);k++)
		{
			sum = sum + str[k];
			sum2 = sum2 + str[(j/2)+1+k];
		}*/
		
		if(sum == sum2)
		{
			printf("%d\n",1);
			
		}
		else
		{
			printf("%d\n",0);
		
        }
        
    }
   return 0;
 }
