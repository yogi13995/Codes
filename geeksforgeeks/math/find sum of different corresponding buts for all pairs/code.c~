#include<stdio.h>

int fun(int a, int b);


int main()
{
	int a[10000],t,n,count1;
	scanf("%d",&t);
	for(int i = 0;i<t;i++)
	{
		count1 = 0;
		scanf("%d",&n);
		for(int j= 0;j<n;j++)
		{
			scanf("%d",&a[j]);
		}
		for(int k = 0;k<n;k++)
		{
			for(int l =k+1;l<n;l++)
			{
				count1 = (count1 + 2*fun(a[k],a[l]))/((10^9)+7);
			}
		}
		printf("%d\n",count1);
	}
	
	return 0;
}



int fun(int a, int b)
{
int rem1,rem2,div1,dev2,count,x,y;
dev1 = 1;
dwv2 = 2;
count =0;
while((div1 != 0 && dev2 != 0))
{
	rem1 = x%2;
	dev1 = x/2;
	x = dev1;
	rem2 = y%2;
	dev2 = y/2;
	y = dev2;
	if(rem1 == rem2)
	{
		count++;
	}

return count;	
	
}



