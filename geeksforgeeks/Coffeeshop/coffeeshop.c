#include<stdio.h>

int main()
{
int i,j,t,n,m,d;
scanf("%d",&t);

	for(i=0;i<t;i++)
	{
		scanf("%d %d",&n,&m);
		d=n;
		for(j=0;j<m;j++)
		{
		
			if(j==0)
			{	
				d=n;
			}
			else
			{
				d=d/2;
			
			}
		}
		printf("%d\n",d);
		
	}
return 0;
}
		
