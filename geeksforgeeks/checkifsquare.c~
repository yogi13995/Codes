#include<stdio.h>

int main()
{
int i,a[8],x,y,z,t,j;
scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		for(j=0;j<8;j++)
		{
			scanf("%d",&a[j]);
			
		}
	
	x=(((a[0]-a[2])*(a[0]-a[2])) +((a[1]-a[3])*(a[1]-a[3])));
	
	y=(((a[0]-a[4])*(a[0]-a[4])) +((a[1]-a[5])*(a[1]-a[5])));
	
	z=(((a[0]-a[6])*(a[0]-a[6])) +((a[1]-a[7])*(a[1]-a[7])));
	
	if((x==0) || (y==0) || (z==0))
	{
		printf("%d\n",0);
		continue;
     }
	if((x==y+z) || (y==x+z) || (z==x+y))
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
