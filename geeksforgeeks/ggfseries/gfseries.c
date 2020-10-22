#include<stdio.h>

int main()
{
int i,j,t,n;
long long  int a,b,c;
scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%d",&n);
		c=0;
		b=1;
		
		
			for(j=1;j<=n;j++)
			{
				
				if(j==1)
				{
				 printf("%d",0);
				 printf(" ");
				 }
				 else if(j==2)
				 {
				 	printf("%d",1);
				 	printf(" ");
				 }
				 else
				 {
				 	a=(c*c)-b;
					c=b;
					b=a;
				 	printf("%d",a);
				 	printf(" ");
				 }
			}
	printf("\n");
	}
return 0;
}
				
