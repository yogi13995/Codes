#include<stdio.h>

int main()
{ 
int i,t,n,j,d,r,a,count,x;
scanf("%d",&t);

	for(i=0;i<t;i++)
	{
		scanf("%d %d",&n,&x);
		count=0;
		for(j=0;j<=n;j++)
		{
		 a=j;
		 d=1;
			while(d!=0)
			{
				r=a%10;
				d=a/10;
				a=d;
				if(r==x)
				{
					count++;
					printf("%d",j);
					printf(" ");
					break;
				
				}
				
			}
			
		}
		if(count==0)
		{
		printf("y");
		printf("%i",-1);
		}
		printf("\n");
	
	}
return 0;
}
