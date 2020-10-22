#include<stdio.h>

int main()
{
int i,t,n,x,a,b,c,d,e;
scanf("%d",&t);

	for(i=0;i<t;i++)
	{
		scanf("%d %d",&n,&x);
		
		a=(n-1)*x;
		b=a/10;
		e=(a%10);
		
		if((n==1) || (x>10))
		{
		printf("%d\n",0);
		}
		
		/*else if(e==0)
		{
		c=n-b;
		d=(c*10)-e;
		printf("%d\n",d);
		}*/
		else // if(e!=0)
		{
		c=n-b-1;
		d=(c*10)-e;
		printf("%d\n",d);
		}
	}
return 0;
}
