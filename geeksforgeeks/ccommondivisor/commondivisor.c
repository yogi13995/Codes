#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
	int i,j,k,t,e,f,x,y,squart,r,d,a[10000],b[10000],r2,d2,count,count2,squart2;
	scanf("%d",&t);
	
	for(i=0;i<t;i++)
	{
		scanf("%d %d",&e,&f);
		memset(a, 0, 10000);
		memset(b, 0, 10000);
		x=(e<f)?e:f;
		y=(e>f)?e:f;
		squart = floor(sqrt(x));
		squart2 = floor(sqrt(y));
		count=0;
		for(j=1;j<=squart;j++)
		{
			r=x%j;
			d=x/j;
			
			if(r==0 && j!=d)
			{
				a[count]=j;
				a[count+1]=d;
				count=count+2;
				//printf("%d  %d\n",j,d);
			}
			else if(r==0 && j==d)
			{
				a[count]=j;
				count++;
				//printf("%d\n",j);
			}
		}
		
		for(j=1;j<=squart2;j++)
		{
			r2=y%j;
			d2=y/j;
		
			if(r2==0 && j!=d2)
			{
				b[j]=1;
				b[d2]=1;
				//printf("%d  %d\n",j,d2);
			}
			else if(r2==0 && j==d2)
			{
				b[j]=1;
				//printf("%d\n",j);
			}
		}
		count2=0;
		for(k=0;k<count;k++)
		{
			if(b[a[k]]==1)
			{
				count2++;
			}
		
		}
		printf("%d\n",count2);
	}
return 0;
}
		
		
			

