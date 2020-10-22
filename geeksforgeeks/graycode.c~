#include<stdio.h>
#include<math.h>

int main()
{
	int t,i,n,j,flag,x,y,z,sum;
	scanf("%d",&t);
	
	for(i=0;i<t;i++)
	{
		scanf("%d",&n);
		flag=0;
		sum=0;
		
		for(j=31;j>=0;j--)
		{
			if(flag ==1)
			{
				x=(n>>(j+1)) & 1;
				y=(n>>j) & 1;
				z=x^y;
				sum = sum+(z*(pow(2,j)));
			}
			else if((n>>j)==1)
			{
				flag =1;
				//printf("%d\n",j);
				j++;
			}
		}
		printf("%d\n",sum);
	}
return 0;
}

				
