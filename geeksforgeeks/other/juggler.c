#include<stdio.h>
#include<math.h>

int main()
{
	int i,t,n,r,a;
	scanf("%d",&t);
	
	for(i=0;i<t;i++)
	{
		scanf("%d",&n);
		r=2;
		a=n;
		
		while(r!=1)
		{
			if(a%2 == 0)
			{
				r=a*sqrt(a);
				printf("%d",r);
				printf(" ");
				a=r;
				
			}
			else
			{
				r=sqrt(a);
				printf("%d",r);
				printf(" ");
				a=r;
			}
		}
		printf("\n");
	}
	return 0;
}

