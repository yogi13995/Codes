#include<stdio.h>

int main()
{
int i,j,k,a,b;
long unsigned int c,d,e;
scanf("%d",&a);

for(i=0;i<a;i++)
	{
	scanf("%d",&b);
	c=0;
	d=1;
	
	for(j=0;j<b;j++)
		{
		e= c+d;
		c=d;
		d=e;
		printf("%lu\n",c);
		}
	}
	return 0;
}
		

