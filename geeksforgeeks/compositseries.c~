#include<stdio.h>
#include<math.h>

int main()
{
	int i,j,k,t,n,squart,r;
	scanf("%d",&t);
	
	for(i=0;i<t;i++)
	{
		scanf("%d",&n);
		
		for(j=4;j<=n;j++)
		{
			squart = ceil(sqrt(j));
			for(k=2;k<=squart;k++)
			{
				r=j%k;
				//printf("%d %d %d\n",r,j,k);
				
				if(r==0)
				{
					printf("%d",j);
					printf(" ");
					break;
				}
			}
		}
		printf("\n");
	}
return 0;
}
				
				
