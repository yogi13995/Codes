#include<stdio.h>

int main()
{ 
int i,t,n,j,d,r,a,count;
scanf("%d",&t);

	for(i=0;i<t;i++)
	{
		scanf("%d",&n);
		count=0;
		for(j=1;j<=n;j++)
		{
		 a=j;
		 d=1;
			while(d!=0)
			{
				r=a%10;
				d=a/10;
				a=d;
				if(r==4)
				{
					count++;
					break;
				
				}
			}
		}
	printf("%d\n",count);
	}
return 0;
}
